/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

import java.util.Date;

/**
 *
 * @author David
 */
public class Administrador extends Persona{

    public Administrador(int id, int generoid, int usertype, String nom, String pape, String sape, Date fNac2, Fecha fNac) {
        super(id, generoid, usertype, nom, pape, sape, fNac2, fNac);
    }

    public Administrador() {
        super();
    }
    
    @Override
    public int tipodeusuario() {
        return 1;
    }

    @Override
    public int universidad() {
        return 1;
    }

    @Override
    public int colector() {
        return 1;
    }
    
}
