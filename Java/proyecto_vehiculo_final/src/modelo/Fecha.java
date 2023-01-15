/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

import java.util.Calendar;

/**
 *
 * @author Estudiante
 */
public class Fecha {
      private int dd, mm, aa;

    public Fecha(int dd, int mm, int aa) { //Constructor parametrico
        this.dd = dd;
        this.mm = mm;
        this.aa = aa;
    }
    
    public Fecha() { //Constructor basico
      Calendar fecha = Calendar.getInstance();
        this.dd = fecha.get(Calendar.DAY_OF_MONTH);
        this.mm = fecha.get(Calendar.MONTH)+1;
        this.aa = fecha.get(Calendar.YEAR);
    }

    public int getDd() {
        return dd;
    }

    public int getMm() {
        return mm;
    }

    public int getAa() {
        return aa;
    }

    public void setDd(int dd) {
        this.dd = dd;
    }

    public void setMm(int mm) {
        this.mm = mm;
    }

    public void setAa(int aa) {
        this.aa = aa;
    }

    @Override
    public String toString() {
        return dd + "/" + mm + "/" + aa;
    }
}
