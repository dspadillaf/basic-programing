/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;
import java.util.Date;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 *
 * @author Estudiante
 */
public abstract class Persona {
    private int id, generoid, usertype;
    private String nom, pape, sape;
    private Date fNac2;
    private Fecha fNac;

    public Persona(int id, int generoid, int usertype, String nom, String pape, String sape, Date fNac2, Fecha fNac) {
        this.id = id;
        this.generoid = generoid;
        this.usertype = usertype;
        this.nom = nom;
        this.pape = pape;
        this.sape = sape;
        this.fNac2 = fNac2;
        this.fNac = fNac;
    }

   public Persona() {
        this.id = 0;
        this.generoid = 0;
        this.usertype = 0;
        this.nom = "";
        this.pape = "";
        this.sape = "";
        this.fNac = new Fecha();
        this.fNac2 = new Date();
    }

    public int getId() {
        return id;
    }

    public void setId(int idx) throws FormatoEntradaException{
        this.id = idx;
    }

    public int getGeneroid() {
        return generoid;
    }

    public void setGeneroid(int generoid) {
        this.generoid = generoid;
    }

    public int getUsertype() {
        return usertype;
    }

    public void setUsertype(int usertype) {
        this.usertype = usertype;
    }

    public String getNom() {
        return nom;
    }

    public void setNom(String nom) throws FormatoEntradaException{
        Pattern pa= Pattern.compile("[0-9]");
        Matcher ma= pa.matcher(nom);
        
        Pattern pa2 = Pattern.compile("[!#$%&/()]");
        Matcher ma2 = pa2.matcher(nom);
        
        Pattern pa3 = Pattern.compile(" ");
        Matcher ma3 = pa3.matcher(nom);
        
        Pattern pa4 = Pattern.compile("[á,é,í,ó,ú]");
        Matcher ma4 = pa4.matcher(nom);
        
        if(nom.equals("")){
            throw new FormatoEntradaException(111, "Nombre");
        }else if(ma.find()){
            throw new FormatoEntradaException(112, "Nombre");
        }else if (ma2.find()){
            throw new FormatoEntradaException(113, "Nombre");
        }else if (ma3.find()){
            throw  new FormatoEntradaException(114, "Nombre");
        }else if (ma4.find()){
            throw new FormatoEntradaException(115,"Nombre");
        }else{
        this.nom = nom;
        }    
    }

    public String getPape() {
        return pape;
    }

    public void setPape(String pape) throws FormatoEntradaException{
        Pattern pa= Pattern.compile("[0-9]");
        Matcher ma= pa.matcher(pape);
        
        Pattern pa2 = Pattern.compile("[!#$%&/()]");
        Matcher ma2 = pa2.matcher(pape);
        
        Pattern pa3 = Pattern.compile(" ");
        Matcher ma3 = pa3.matcher(pape);
        
        Pattern pa4 = Pattern.compile("[áéíóú]");
        Matcher ma4 = pa4.matcher(pape);
        
        if(pape.equals("")){
            throw new FormatoEntradaException(111, "Primer Apellido");
        }else if(ma.find()){
            throw new FormatoEntradaException(112, "Primer Apellido");
        }else if (ma2.find()){
            throw new FormatoEntradaException(113, "Primer Apellido");
        }else if (ma3.find()){
            throw  new FormatoEntradaException(114, "Primer Apellido");
        }else if (ma4.find()){
            throw new FormatoEntradaException(115,"Primer Apellido");
        }else{
        this.pape = pape;
        }
    }

    public String getSape() {
        return sape;
    }

    public void setSape(String sape) throws FormatoEntradaException{
        Pattern pa= Pattern.compile("[0-9]");
        Matcher ma= pa.matcher(sape);
        
        Pattern pa2 = Pattern.compile("[!#$%&/()]");
        Matcher ma2 = pa2.matcher(sape);
        
        Pattern pa3 = Pattern.compile(" ");
        Matcher ma3 = pa3.matcher(sape);
        
        Pattern pa4 = Pattern.compile("[á,é,í,ó,ú]");
        Matcher ma4 = pa4.matcher(sape);
        
        if(sape.equals("")){
            throw new FormatoEntradaException(111, "Segundo Apellido");
        }else if(ma.find()){
            throw new FormatoEntradaException(112, "Segundo Apellido");
        }else if (ma2.find()){
            throw new FormatoEntradaException(113, "Segundo Apellido");
        }else if (ma3.find()){
            throw  new FormatoEntradaException(114, "Segundo Apellido");
        }else if (ma4.find()){
            throw new FormatoEntradaException(115,"Segundo Apellido");
        }else{
        this.sape = sape;
        }
    }

    public Fecha getfNac() {
        return fNac;
    }

    public void setfNac(Fecha fNac) {
        this.fNac = fNac;
    }

    public Date getfNac2() {
        return fNac2;
    }

    public void setfNac2(Date fNac2) {
        this.fNac2 = fNac2;
    }

    public abstract int tipodeusuario();
    public abstract int universidad();
    public abstract int colector();
}
