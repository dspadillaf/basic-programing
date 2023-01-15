/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package control;

import java.awt.Component;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.math.BigInteger;
import javax.swing.ImageIcon;
import javax.swing.JInternalFrame;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.table.DefaultTableModel;
import modelo.Auto;
import modelo.Fecha;
import modelo.Formulario;
import modelo.FormularioDAO;
import modelo.Moto;
import modelo.Persona;
import vista.frmConsultaMDI;
import vista.frmInicio;
import vista.frmRegistroMDI;

/**
 *
 * @author Estudiante
 */
public class ControladorMDI implements ActionListener{
    frmConsultaMDI frmC;
    frmRegistroMDI frmR;
    frmInicio frmI;
    Persona objP;
    Formulario objF;

    public ControladorMDI() {
        frmC = new frmConsultaMDI();
        frmR = new frmRegistroMDI();
        frmI = new frmInicio();
        objP = new Persona();
        objF = new Formulario();
    }

    
    public void Borrar(frmRegistroMDI Form){
        for(Object Borra: Form.getContentPane().getComponents()){
            if(Borra instanceof JTextField ){
                ((JTextField)Borra).setText("");
            }
        }
    }
    
    public static void Clear(JInternalFrame intFrame)
    {
        if (intFrame == null)
            return;
        Container con = intFrame.getContentPane();
        for (Component c : con.getComponents())
        {
            if (c instanceof JTextField)
            {
                JTextField j = (JTextField)c;
                j.setText("");
            }
            
            if (c instanceof Container){
                    for (Component ca : ((Container) c).getComponents())
                    {
                        if (ca instanceof JTextField)
                        {
                            JTextField j = (JTextField)ca;
                            j.setText("");
                        }
                    }
            }
        }
    }
   
    public void iniciar(){
        
        frmI.setVisible(true);
        frmI.setLocationRelativeTo(null);
        frmI.getBtmConsultar().addActionListener(this);
        frmI.getBtmRegistrar().addActionListener(this);
        frmI.getBtmSalir().addActionListener(this);
        frmI.getOpcConsultar().addActionListener(this);
        frmI.getOpcRegistrar().addActionListener(this);
        frmI.getOpcSalir().addActionListener(this);
        
        //Actionlistener para Consulta
        frmC.getBtngVehiculo().add(frmC.getRdbMoto());
        frmC.getBtngVehiculo().add(frmC.getRdboCarro());
        frmC.getRdbMoto().addActionListener(this);
        frmC.getRdboCarro().addActionListener(this);
        frmC.getRdbMoto().setSelected(true);
        frmC.getBtmCerrar().addActionListener(this);
        frmC.getBtmActualizar().addActionListener(this);
        
        //Actionlistener para Registro
        frmR.getBtmRegistrar().addActionListener(this);
        frmR.getBtngGenero().add(frmR.getRdbHombre());
        frmR.getBtngGenero().add(frmR.getRdbMujer());
        frmR.getRdbHombre().addActionListener(this);
        frmR.getRdbMujer().addActionListener(this);
        frmR.getRdbMujer().setSelected(true);
        frmR.getIblImg().setIcon(new ImageIcon("src/img/mujer.png"));
        frmR.getjCmboVehiculo().addActionListener(this);
        
    }
    
    public void registrarVehiculo(){
        DefaultTableModel plantilla = (DefaultTableModel)frmC.getTblVehiculos().getModel();
        
        Object [] registro={
            /*objR.getListaF().get(cantV-1).getPropietario().getNom(),
            objR.getListaF().get(cantV-1).getPropietario().getId(),
            objR.getListaF().get(cantV-1).getPropietario().getTel(),
            objR.getListaF().get(cantV-1).getObjV().getPlaca(),
            objR.getListaF().get(cantV-1).getObjV().getMarca(),
            objR.getListaF().get(cantV-1).getObjV().getModelo(),
            objR.getListaF().get(cantV-1).getObjV().getValor()    */   
            objF.getNumForm(),
            objF.getPropietario().getNom(),
            objF.getObjV().getPlaca(),
            objF.getObjV().getMarca(),
            objF.getObjV().getModelo(),
            objF.getObjV().getValor(),
            objF.getObjV().impuesto()
        };
        plantilla.addRow(registro);  
        //objV.getTxtTotal().setText(String.valueOf(objR.totalRecaudo()));
        //frmProd.getLblTotalReg().setText(objL.totalGastosL());
        //frmProd.getLblTotalVenta().setText(objL.totalVentas());
    }
    
    @Override
    public void actionPerformed(ActionEvent e) {
        //Conexion DB
        FormularioDAO perDB = new FormularioDAO(); 
        
        
        if(e.getSource().equals(frmC.getBtmActualizar())){
             frmC.getTblVehiculos().setModel(perDB.consultar());
        }    
        
        //
        
        if(e.getSource().equals(frmI.getOpcRegistrar())||
                e.getSource().equals(frmI.getBtmRegistrar())){
            frmI.getDesktopPane().add(frmR);
            frmR.setVisible(true);
        }
        if(e.getSource().equals(frmI.getOpcConsultar())||
                e.getSource().equals(frmI.getBtmConsultar())){
            frmI.getDesktopPane().add(frmC);
            frmC.setVisible(true);
        }
        if(e.getSource().equals(frmI.getOpcSalir())||
               e.getSource().equals(frmI.getBtmSalir()) ){
            int resp=JOptionPane.showConfirmDialog(frmI, "Desea terminar ejecucion?...", "Salir", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE);
            if(resp==JOptionPane.YES_OPTION){
                frmI.dispose();
            }
        }

        //codigo ejecución
        
        
        if(e.getSource().equals(frmR.getjCmboVehiculo())){
            switch(frmR.getjCmboVehiculo().getSelectedIndex()){
                case 0 -> {
                    frmR.getjPanelMoto().setVisible(true);
                    frmR.getLblIconVehiculo().setIcon(new ImageIcon("src/img/moto.png"));
                }
                case 1 -> {
                    frmR.getjPanelMoto().setVisible(false);
                    frmR.getLblIconVehiculo().setIcon(new ImageIcon("src/img/car.png"));
                }            
            }
        }
        
       if(e.getSource()==frmR.getRdbMujer()){
            frmR.getIblImg().setIcon(new ImageIcon("src/img/mujer.png"));
        }
        if(e.getSource()==frmR.getRdbHombre()){
            frmR.getIblImg().setIcon(new ImageIcon("src/img/hombre.png"));
        }
        
        
        if(e.getSource()==frmR.getBtmRegistrar()){
            objF.getPropietario().setId(frmR.getTxtId().getText());
            objF.getPropietario().setNom(frmR.getTxtNombre().getText());
            objF.getPropietario().setTel(Long.parseLong(frmR.getTxtTelefono().getText()));
            if(frmR.getRdbHombre().isSelected()){
                objF.getPropietario().setGeneroid(1);
            }else if(frmR.getRdbMujer().isSelected()){
                objF.getPropietario().setGeneroid(2);
            }
            objF.getPropietario().setFecha_nacimiento2(frmR.getjDateNacimiento().getDate());
            
            switch(frmR.getjCmboVehiculo().getSelectedIndex()){
                    case 0 -> {
                        Moto objM = new Moto();
                        objM.setPlaca(frmR.getTxtPlaca().getText());
                        objM.setMarca(frmR.getTxtMarca().getText());
                        objM.setModelo(Integer.parseInt(frmR.getTxtModelo().getText()));
                        objM.setValor(Integer.parseInt(frmR.getTxtValor().getText()));
                        objM.setCilindraje(Integer.parseInt(frmR.getTxtValor().getText()));
                        objM.setTipo(2);
                        objF.setObjV(objM);
                }
                    case 1 -> {
                        Auto objA = new Auto();
                        objF.setObjV(objA);
                        objF.getObjV().setPlaca(frmR.getTxtPlaca().getText());
                        objF.getObjV().setMarca(frmR.getTxtMarca().getText());
                        objF.getObjV().setModelo(Integer.parseInt(frmR.getTxtModelo().getText()));
                        objF.getObjV().setValor(Integer.parseInt(frmR.getTxtValor().getText()));
                        objF.getObjV().setTipo(1);
                }            
                }
            perDB.setObjF(objF);
            JOptionPane.showMessageDialog(frmR,perDB.insertar()); 
            Clear(frmR);
        }
    }
   
}

