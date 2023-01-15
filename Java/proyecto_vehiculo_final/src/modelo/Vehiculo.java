/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

/**
 *
 * @author Estudiante
 */
public abstract class Vehiculo {
    protected String placa, marca;
    protected int modelo, tipo;
    protected double valor;

       //Constructor parametrico
    public Vehiculo(String placa, String marca, int modelo, int tipo, double valor) {
        this.placa = placa;
        this.marca = marca;
        this.modelo = modelo;
        this.valor = valor;
        this.tipo = tipo;
    }
    
        //Constructor Basico
    public Vehiculo() {
        this.placa = "";
        this.marca = "";
        this.modelo = 0;
        this.valor = 0;
        this.tipo = 0;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setModelo(int modelo) {
        this.modelo = modelo;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public String getPlaca() {
        return placa;
    }
    
    public String getMarca() {
        return marca;
    }
    
    public int getModelo() {
        return modelo;
    }

    public double getValor() {
        return valor;
    }

    public int getTipo() {
        return tipo;
    }

    public void setTipo(int tipo) {
        this.tipo = tipo;
    }

    //David Santiago Padilla Fino
    @Override
    public String toString() {
        return "\nplaca=" + placa + "\nmarca=" + marca + "\nmodelo=" + modelo + "\nvalor=" + valor;
    }
    
    /*public double impuesto(){
        if(modelo<2000)
            return valor*0.05;
        else
            return valor*0.10;
    */
    public abstract double impuesto();
    
}
    
    

