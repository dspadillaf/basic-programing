/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author David
 */
public class Numero {
    private int Valor;

    public Numero(int Valor) {
        this.Valor = Valor;
    }
    
    public Numero() {
        this.Valor = 0;
    }

    @Override
    public String toString() {
        return "Numero{" + "Valor=" + Valor + '}';
    }
    
    public double potencia(int exp){
        double pot =1;
        for(int i=1; i<=exp;i++){
            pot*=this.Valor;
        }
    return pot;
    }
    
    public int suma(int val){
        return Valor+val;
    }

    public int getValor() {
        return Valor;
    }

    public void setValor(int Valor) {
        this.Valor = Valor;
    }
    
    
}
