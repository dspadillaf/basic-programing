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
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;

/**
 *
 * @author David
 */
public class FormularioDAO {
    Formulario objF;

    public FormularioDAO(Formulario objF) {
        this.objF = objF;
    }
    
    public FormularioDAO() {
        this.objF = null;
    }

    public void setObjF(Formulario objF) {
        this.objF = objF;
    }
 
    public DefaultTableModel consultar(){
         DefaultTableModel plantilla= new DefaultTableModel();
         Conexion con= new Conexion();
        try {
           con.conectar();
           Statement consulta= con.getConexion().createStatement();
            ResultSet datos= consulta.executeQuery("SELECT a.Formulario, b.Nombre, a.Placa, a.Modelo, a.Valor, a.Impuesto FROM vehiculo a INNER JOIN propietario b ON a.Propietario = b.Identificacion");
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
   
    public String insertar(){
        String mensaje=""; 
        try { 
            Conexion conexion=new Conexion();
            PreparedStatement consulta = null;
            PreparedStatement consultaInv = null;
            conexion.conectar();
            
            //Ingresar información de Persona
            //Consultar si ya existe la persona
            Statement consultaCol= conexion.getConexion().createStatement();
            ResultSet data= consultaCol.executeQuery("Select Identificacion from propietario where Identificacion = "+objF.getPropietario().getId());
            if (!data.next()){
                String comando2 = "insert into propietario values (?,?,?,?,?)";
                consultaInv = conexion.getConexion().prepareStatement(comando2);
                consultaInv.setInt(1, Integer.parseInt(objF.getPropietario().getId()));
                consultaInv.setString(2, objF.getPropietario().getNom());
                consultaInv.setLong(3, objF.getPropietario().getTel());
                consultaInv.setInt(4, objF.getPropietario().getGeneroid());
                java.sql.Date nacimientosql = new java.sql.Date(objF.getPropietario().getFecha_nacimiento2().getTime());
                consultaInv.setDate(5, nacimientosql);
                consultaInv.execute();
                consultaInv.close();
            }
            data.close();
            
            String comando= "insert into vehiculo values(?,?,?,?,?,?,?,?)";
            consulta=conexion.getConexion().prepareStatement(comando);
            consulta.setString(1,objF.getObjV().getPlaca());
            consulta.setString(2, objF.getNumForm());
            consulta.setInt(3, Integer.parseInt(objF.getPropietario().getId()));
            consulta.setString(4, objF.getObjV().getMarca());
            consulta.setInt(5, objF.getObjV().getModelo());
            consulta.setDouble(6, objF.getObjV().getValor());
            consulta.setDouble(7, objF.getObjV().impuesto());
            consulta.setInt(8, objF.getObjV().getTipo());
            consulta.execute();
            System.out.println(consulta);
            mensaje="Registro exitoso...";
            consulta.close();
            conexion.getConexion().close();
            return mensaje;  
        } catch (SQLException ex) {
            mensaje="Error al intentar insertar...\n"+ex;
        }
      return mensaje;  
    }
}
