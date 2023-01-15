/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

import java.sql.Date;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;
import java.sql.SQLException;
import java.sql.Statement;
import java.text.ParseException;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;
import java.text.SimpleDateFormat;


/**
 *
 * @author David
 */
public class PersonaDAO {
    Persona objP;

    public PersonaDAO(Persona objP) {
        this.objP = objP;
    }
    
    public PersonaDAO() {
        this.objP = null;
    }

    public void setObjI(Persona objI) {
        this.objP = objI;
    }
        
    public DefaultTableModel consultar(){
         DefaultTableModel plantilla= new DefaultTableModel();
         Conexion con= new Conexion();
        try {
           con.conectar();
           Statement consulta= con.getConexion().createStatement();
            ResultSet datos= consulta.executeQuery("select a.UserID, a.pNombre, a.pApellido, c.Nombre, d.Nombre, b.Identificador from persona a INNER JOIN colector b ON a.Colector = b.ColectorID INNER JOIN genero c ON a.GeneroID = c.GeneroID INNER JOIN tipousuario d ON d.UserTypeID = a.UserType");
            ResultSetMetaData campos=datos.getMetaData();
           
            for (int i = 1; i <= campos.getColumnCount(); i++) {
                plantilla.addColumn(campos.getColumnName(i));
            }
            while(datos.next()){
             Object fila[]=new Object[campos.getColumnCount()];
                for (int i = 0; i < campos.getColumnCount(); i++) {
                   fila[i]=datos.getObject(i+1);
                }
                plantilla.addRow(fila);
            }
            datos.close();
            con.getConexion().close();
        } catch (SQLException ex) {
            JOptionPane.showMessageDialog(null, ex.toString());
        }
        return plantilla;
    }
    
    public String updatefecha(java.util.Date fecha, int id){
        String mensaje ="";
        try{
            Conexion conect = null;
            PreparedStatement  update =null;
            conect.conectar();
            
            String sql = "update persona SET fNac= ? WHERE UserID = ?;";
                update = conect.getConexion().prepareStatement(sql);
                java.sql.Date fnac = new java.sql.Date(fecha.getTime());
                update.setDate(1, fnac);
                update.setInt(2, id);
                update.execute();
                update.close();
        } catch (SQLException ex) {
           mensaje="Error al intentar insertar...\n"+ex;
        }
      return mensaje;  
    }
    
    public String delete(int id){
        String mensaje ="";
        try{
            Conexion conect = new Conexion();
            PreparedStatement  delete =null;
            conect.conectar();
            
            String sql = "DELETE FROM persona WHERE UserID = ?;";
                delete = conect.getConexion().prepareStatement(sql);
                delete.setInt(1, id);
                delete.execute();
                delete.close();
                mensaje = "Registro eliminado con éxito...\n";
        } catch (SQLException ex) {
           mensaje="Error al intentar eliminar...\n"+ex;
        }
      return mensaje;  
    }
    
   public String update(int modificar, String dato, int id, int idaux) throws SQLException, ParseException{
       String mensaje = "";
       try{
       Conexion conect = new Conexion();
       PreparedStatement  update =null;
       conect.conectar();
       
       switch (modificar) {
           case 1 ->{
                String sql = "update persona SET pNombre= ? WHERE UserID = ?;";
                update = conect.getConexion().prepareStatement(sql);
                update.setString(1, dato);
                update.setInt(2, id);
                update.execute();
                update.close();
                mensaje = "Registro actualizado con éxito...\n";
           }
           case 2 ->{
                String sql = "update persona SET pApellido= ? WHERE UserID = ?;";
                update = conect.getConexion().prepareStatement(sql);
                update.setString(1, dato);
                update.setInt(2, id);
                update.execute();
                update.close();
                mensaje = "Registro actualizado con éxito...\n";
           }
           case 3 ->{
                String sql = "update persona SET sApellido= ? WHERE UserID = ?;";
                update = conect.getConexion().prepareStatement(sql);
                update.setString(1, dato);
                update.setInt(2, id);
                update.execute();
                update.close();
                mensaje = "Registro actualizado con éxito...\n";
           }
           case 4 ->{
                String sql = "update persona SET GeneroID= ? WHERE UserID = ?;";
                update = conect.getConexion().prepareStatement(sql);
                update.setInt(1, idaux);
                update.setInt(2, id);
                update.execute();
                update.close();
                mensaje = "Registro actualizado con éxito...\n";
           }
           case 5 ->{
                String sql = "update persona SET UserType= ? WHERE UserID = ?;";
                update = conect.getConexion().prepareStatement(sql);
                update.setInt(1, idaux);
                update.setInt(2, id);
                update.execute();
                update.close();
                mensaje = "Registro actualizado con éxito...\n";
           }
           case 6 ->{
                String sql = "update persona SET Univerisdad= ? WHERE UserID = ?;";
                update = conect.getConexion().prepareStatement(sql);
                update.setInt(1, idaux);
                update.setInt(2, id);
                update.execute();
                update.close();
                mensaje = "Registro actualizado con éxito...\n";
           }
       }
        } catch (SQLException ex) {
           mensaje="Error al intentar actualizar...\n"+ex;
        }
      return mensaje;  
   }
    
    public String insertar(){
        String mensaje=""; 
        try {
            Conexion conexion=new Conexion();
            PreparedStatement consulta = null;
            PreparedStatement consultaInv = null;
            conexion.conectar();
            
            int usertype = objP.getUsertype();
            int colectorid = 1;
            if(usertype== 2){
                
            //Ingresar información de Colector
            Investigador objI = (Investigador) objP;
            String comando2 = "insert into colector(GrupoID, Citacion, Identificador) values (?,?,?)";
            consultaInv = conexion.getConexion().prepareStatement(comando2);
            consultaInv.setInt(1, objI.getEstudioID());
            consultaInv.setString(2, objI.getCitacion());
            consultaInv.setString(3, objI.getColectorID());
            consultaInv.execute();
            consultaInv.close();
            
            //Consultar información colector para ingresar Persona
            Statement consultaCol= conexion.getConexion().createStatement();
            ResultSet data= consultaCol.executeQuery("select ColectorID from colector where Identificador = '"+objI.getColectorID()+"'");
            if (data.next()){
                colectorid = data.getInt(1);
            }
            data.close();
            }
            
            String comando= "insert into persona values(?,?,?,?,?,?,?,?,?)";
            consulta=conexion.getConexion().prepareStatement(comando);
            consulta.setInt(1,objP.getId());
            consulta.setString(2, objP.getNom());
            consulta.setString(3, objP.getPape());
            consulta.setString(4, objP.getSape());
            consulta.setInt(5, objP.getGeneroid());
            java.sql.Date nacimientosql = new java.sql.Date(objP.getfNac2().getTime());
            consulta.setDate(6, nacimientosql);
            consulta.setInt(7, objP.tipodeusuario());
            consulta.setInt(8, objP.universidad());
            consulta.setInt(9, colectorid);
            consulta.execute();
            System.out.println(consulta);
            mensaje="Registro exitoso...";
            consulta.close();
            conexion.getConexion().close();
        } catch (SQLException ex) {
           mensaje="Error al intentar insertar...\n"+ex;
        }
      return mensaje;  
    }
}
