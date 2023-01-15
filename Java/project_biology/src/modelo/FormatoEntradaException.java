/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author David
 */
public class FormatoEntradaException extends Exception {
public int Nro;
public String msj;

/*
    public FormatoEntradaException(int Nro, String dato) {
        this.Nro = Nro;
        this.msj = msj;
    }
*/
    public FormatoEntradaException(int Nro) {
        this.Nro = Nro;
        switch(Nro){
            case 111:
                msj ="No se admite valores nulos";
                break;
            case 112:
                msj="No se admiten valores numericos";
                break;
            case 113:
                msj="No se admiten caracteres especiales";
                break;
            case 114:
                msj="No se admiten espacios";
                break;
            case 115:
                msj="No se adminten letras";
                break;
            case 116:
                msj="No se admiten acentos";
                break;
        }
    }

    public FormatoEntradaException(int Nro, String dato) {
        this.Nro = Nro;
        switch(Nro){
            case 111:
                msj ="No se admite valores nulos";
                break;
            case 112:
                msj="No se admiten valores numericos";
                break;
            case 113:
                msj="No se admiten caracteres especiales";
                break;
            case 114:
                msj="No se admiten espacios";
                break;
            case 115:
                msj="No se adminten letras";
                break;
            case 116:
                msj="No se admiten acentos";
                break;
        }
        msj+=" Generado por: "+dato;
    }
    
    
    public int getNro() {
        return Nro;
    }

    public void setNro(int Nro) {
        this.Nro = Nro;
    }

    public String getMsj() {
        return msj;
    }

    public void setMsj(String msj) {
        this.msj = msj;
    }

    @Override
    public String toString() {
        return "FormatoEntradaException: " + "Nro=" + Nro + " :" + msj;
    }
    
}
