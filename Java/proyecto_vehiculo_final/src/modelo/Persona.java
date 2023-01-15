/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

import java.util.Date;

/**
 *
 * @author Estudiante
 */
public class Persona {
     private String id, nom;
     private int generoid;
     private long tel;
     private Fecha fecha_nacimiento;
     private Date fecha_nacimiento2;

    public Persona(String id, String nom, int generoid, long tel, Fecha fecha_nacimiento, Date fecha_nacimiento2) {
        this.id = id;
        this.nom = nom;
        this.generoid = generoid;
        this.tel = tel;
        this.fecha_nacimiento = fecha_nacimiento;
        this.fecha_nacimiento2 = fecha_nacimiento2;
    }

    public Persona() {
        this.id = "";
        this.nom = "";
        this.tel = 0;
        this.generoid = 0;
        this.fecha_nacimiento = new Fecha();
        this.fecha_nacimiento2 = new Date();
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getNom() {
        return nom;
    }

    public void setNom(String nom) {
        this.nom = nom;
    }

    public long getTel() {
        return tel;
    }

    public void setTel(long tel) {
        this.tel = tel;
    }
    
    public int getGeneroid() {
        return generoid;
    }

    public void setGeneroid(int generoid) {
        this.generoid = generoid;
    }

    public Fecha getFecha_nacimiento() {
        return fecha_nacimiento;
    }

    public void setFecha_nacimiento(Fecha fecha_nacimiento) {
        this.fecha_nacimiento = fecha_nacimiento;
    }

    public Date getFecha_nacimiento2() {
        return fecha_nacimiento2;
    }

    public void setFecha_nacimiento2(Date fecha_nacimiento2) {
        this.fecha_nacimiento2 = fecha_nacimiento2;
    }
    
    @Override
    public String toString() {
        return "Datos Persona\n"+
                "\nIdentificación= "+ id + "\n Nombre= " + nom + "\n Telefono=" + tel + "\n Fecha_nacimiento=" + fecha_nacimiento.toString() + '}';
    }
    
    
}
