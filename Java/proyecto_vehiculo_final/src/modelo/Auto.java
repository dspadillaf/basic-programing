/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author David
 */
public class Auto extends Vehiculo{

    public Auto(String placa, String marca, int modelo, int tipo, double valor) {
        super(placa, marca, modelo, tipo, valor);
    }

    public Auto() {
        super();
    }
      
    @Override
    public double impuesto(){
        if(modelo<2000){
            return valor*0.05;
        }else{
            return valor*0.10;
        }
    }
    
    
}
