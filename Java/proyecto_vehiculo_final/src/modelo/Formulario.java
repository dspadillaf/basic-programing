/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author David
 */
public class Formulario {
    private String numForm;
    private Fecha fechForm;
    private Persona propietario;
    private Vehiculo objV;

    public Formulario() {
        int cod= (int)(Math.random()*999+100);
        this.numForm = "FRM"+cod;
        this.fechForm = new Fecha();
        this.propietario = new Persona();
        this.objV = null;
    }
    
    public double valorPago(){
        return objV.impuesto();
    }

    public String getNumForm() {
        return numForm;
    }

    public void setNumForm(String numForm) {
        this.numForm = numForm;
    }

    public Fecha getFechForm() {
        return fechForm;
    }

    public void setFechForm(Fecha fechForm) {
        this.fechForm = fechForm;
    }

    public Persona getPropietario() {
        return propietario;
    }

    public void setPropietario(Persona propietario) {
        this.propietario = propietario;
    }

    public Vehiculo getObjV() {
        return objV;
    }

    public void setObjV(Vehiculo objV) {
        this.objV = objV;
    }
    
    @Override
    public String toString() {
        return "Formulario impuesto\n" + 
                "\nNumero Formulario= " + numForm + 
                "\nFecha Formulario=" + fechForm + 
                "\nPropietario=" + propietario.toString() + 
                "\nVehiculo= " + objV.toString();
    }
    
    
}
