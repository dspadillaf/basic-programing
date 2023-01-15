/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author David
 */
public class Moto extends Vehiculo{
    private int cilindraje;

    public Moto(int cilindraje, String placa, String marca, int modelo, int tipo, double valor) {
        super(placa, marca, modelo, tipo, valor);
        this.cilindraje = cilindraje;
    }

    public Moto() {
        super();
        this.cilindraje = 0;
    }
    
    
    @Override
    public double impuesto() {
        if(cilindraje>125){
            return valor*0.10;
        }else{
            return 0;
        }
    }

    @Override
    public String toString() {
        return super.toString()+"cilindraje= "+cilindraje;
    }

    public int getCilindraje() {
        return cilindraje;
    }

    public void setCilindraje(int cilindraje) {
        this.cilindraje = cilindraje;
    }
    
}
