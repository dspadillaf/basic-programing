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
public class Visitante extends Persona{
    private int UniversidadID;

    public Visitante(int UniversidadID, int id, int generoid, int usertype, String nom, String pape, String sape, Date fNac2, Fecha fNac) {
        super(id, generoid, usertype, nom, pape, sape, fNac2, fNac);
        this.UniversidadID = UniversidadID;
    }

    public Visitante() {
        super();
        this.UniversidadID = 0;
    }

    public int getUniversidadID() {
        return UniversidadID;
    }

    public void setUniversidadID(int UniversidadID) {
        this.UniversidadID = UniversidadID;
    }

    @Override
    public int tipodeusuario() {
        return 3;
    }

    @Override
    public int universidad() {
        return this.getUniversidadID(); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public int colector() {
        return 1; // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

}
