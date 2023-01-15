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
public class Investigador extends Persona{
    private int UniversidadID, EstudioID;
    private String citacion, ColectorID;

    public Investigador(int UniversidadID, int EstudioID, String citacion, String ColectorID, int id, int generoid, int usertype, String nom, String pape, String sape, Date fNac2, Fecha fNac) {
        super(id, generoid, usertype, nom, pape, sape, fNac2, fNac);
        this.UniversidadID = UniversidadID;
        this.EstudioID = EstudioID;
        this.citacion = citacion;
        this.ColectorID = ColectorID;
    }

    public Investigador() {
        super();
        this.UniversidadID = 0;
        this.ColectorID = "";
        this.EstudioID = 0;
        this.citacion = "";
    }
    
    public int getUniversidadID() {
        return UniversidadID;
    }

    public void setUniversidadID(int UniversidadID) {
        this.UniversidadID = UniversidadID;
    }

    public String getColectorID() {
        return ColectorID;
    }

    public void setColectorID(String ColectorID) {
        this.ColectorID = ColectorID;
    }

    public int getEstudioID() {
        return EstudioID;
    }

    public void setEstudioID(int EstudioID) {
        this.EstudioID = EstudioID;
    }

    public String getCitacion() {
        return citacion;
    }

    public void setCitacion(String citacion) {
        this.citacion = citacion;
    }

    @Override
    public int tipodeusuario() {
        return 2;
    }

    @Override
    public int universidad() {
        return this.getUniversidadID(); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public int colector() {
        return 1;
    }

   
    
}
