/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

import java.util.ArrayList;

/**
 *
 * @author David
 */
public class Recaudo {
    private ArrayList<Formulario> listaF;

    public Recaudo(ArrayList<Formulario> listaF) {
        this.listaF = listaF;
    }
    
    public Recaudo() {
        this.listaF = new ArrayList<Formulario>();
    }
    
    public double totalRecaudo(){
        double form=0;
        for(int i = 0;i<listaF.size();i++){
            form+=listaF.get(i).valorPago();
        }
        return form;
    }
    
    public int cantAutos(){
        int form=0;
        for(int i=0;i<listaF.size();i++){
            if(listaF.get(i).getObjV() instanceof Auto)
                form++;
        }
        return form;
    }
    
    public int cantMotos(){
        int form=0;
        for(int i=0;i<listaF.size();i++){
            if(listaF.get(i).getObjV() instanceof Moto)
                form++;
        }
        return form;
    }

    @Override
    public String toString() {
        String form = "";
        String tipoV;
        for(Formulario formulario: listaF){
            if(formulario.getObjV() instanceof Auto){
                tipoV="Formulario Auto";
            }else{
                tipoV="Formulario Moto";
            }
            form+="\n"+tipoV+formulario.toString()+"\n"+"Valor impuesto"+formulario.valorPago();
        }
        return "Recaudo \n"+ form;
    }

    public ArrayList<Formulario> getListaF() {
        return listaF;
    }

    public void setListaF(ArrayList<Formulario> listaF) {
        this.listaF = listaF;
    }
    
}
