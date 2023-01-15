/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 *
 * @author Sonia Pinzón
 */
public class Conexion {
  private Connection conexion;
  private String bd,usuario, clave,mensaje;

    public Conexion(Connection conexion, String bd, String usuario, String clave, String mensaje) {
        this.conexion = conexion;
        this.bd = bd;
        this.usuario = usuario;
        this.clave = clave;
        this.mensaje = mensaje;
    }
   public Conexion() {
        this.conexion = null;
        this.bd = "padillavehiculo";
        this.usuario = "root";
        this.clave = "";
        this.mensaje = "";
    }
public void conectar(){
      try {
          Class.forName("com.mysql.jdbc.Driver");
          String ruta="jdbc:mysql://localhost/"+bd;
          System.out.println(ruta);
          conexion= DriverManager.getConnection(ruta,usuario,clave);
          mensaje="Conexión exitosa...";
      } catch (ClassNotFoundException ex) {
          mensaje="No se pudo establecer conexion...";
      } catch (SQLException ex) {
           mensaje=" No se puede conectar con MySQL...";
      }
}
   
    @Override
    public String toString() {
        return "Conexion{" + "conexion=" + conexion + ", bd=" + bd + ", usuario=" + usuario + ", clave=" + clave + ", mensaje=" + mensaje + '}';
    }

    public Connection getConexion() {
        return conexion;
    }

    public void setConexion(Connection conexion) {
        this.conexion = conexion;
    }

    public String getBd() {
        return bd;
    }

    public void setBd(String bd) {
        this.bd = bd;
    }

    public String getUsuario() {
        return usuario;
    }

    public void setUsuario(String usuario) {
        this.usuario = usuario;
    }

    public String getClave() {
        return clave;
    }

    public void setClave(String clave) {
        this.clave = clave;
    }

    public String getMensaje() {
        return mensaje;
    }

    public void setMensaje(String mensaje) {
        this.mensaje = mensaje;
    }
   
}
