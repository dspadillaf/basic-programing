/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vista;

import java.util.Scanner;

/**
 *
 * @author Estudiante
 */
public class Entrada {
    private Scanner entrada;
    private String titulo;

    public Entrada(Scanner entrada, String titulo) {
        this.entrada = entrada;
        this.titulo = titulo;
    }
    
    public Entrada() {
        this.entrada = new Scanner(System.in);
        this.titulo = "";
    }

    public Scanner getEntrada() {
        return entrada;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setEntrada(Scanner entrada) {
        this.entrada = entrada;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String leerTexto(String msj){
        System.out.println(msj);
        return entrada.nextLine();
    }

    public int leerEntero(String msj){
        System.out.println(msj);
        return entrada.nextInt();
    }
    
    public double leerDecimal(String msj){
        System.out.println(msj);
        return entrada.nextDouble();
    }
    
    public void mostrar(String msj){
        System.out.println(msj);
    }
}
