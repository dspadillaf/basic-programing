/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package control;


import Modelo.ArchPdf;
import Modelo.ConexionArc;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.print.PrinterException;
import java.io.IOException;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.ResultSet;
import java.text.ParseException;
import java.util.Vector;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JOptionPane;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.JTableHeader;
import modelo.Administrador;
import modelo.Conexion;
import modelo.FormatoEntradaException;
import modelo.Investigador;
import modelo.PersonaDAO;
import modelo.Visitante;
import vista.frmConsultaP;
import vista.frmDelete;
import vista.frmEspecimen;
import vista.frmInterfaz;
import vista.frmPersona;
import vista.frmUpdateP;

/**
 *
 * @author David
 */
public class Controlador implements ActionListener{
    frmInterfaz frmInicio;
    frmPersona frmP;
    frmEspecimen frmE;
    frmConsultaP frmCP;
    frmUpdateP frmUP;
    frmDelete frmDP;
    ArchPdf aPdf;   

    public Controlador() {
        frmInicio = new frmInterfaz();
        frmP = new frmPersona();
        frmE = new frmEspecimen();
        frmCP = new frmConsultaP();
        aPdf = new ArchPdf();
        frmDP = new frmDelete();
        frmUP = new frmUpdateP();
    }
    
    public void iniciar(){
        frmInicio.setTitle("Registro Colección Biológica");
        frmInicio.setLocationRelativeTo(null);
        frmInicio.setVisible(true);
        
        //Elementos de Interfaz
        frmInicio.getBtmConsultarEsp().addActionListener(this);
        frmInicio.getBtmCrearEsp().addActionListener(this);
        frmInicio.getBtmLogin().addActionListener(this);
        frmInicio.getBtmSalida2().addActionListener(this);
        frmInicio.getOpcConect().addActionListener(this);
        frmInicio.getOpcConsultarEsp().addActionListener(this);
        frmInicio.getOpcConsultarUsuario().addActionListener(this);
        frmInicio.getOpcCrearEsp().addActionListener(this);
        frmInicio.getOpcCrearUsuario().addActionListener(this);
        frmInicio.getOpcSalir().addActionListener(this);

        //Elementos de Persona
        frmP.getBtmCancelar().addActionListener(this);
        frmP.getBtmRegistrar().addActionListener(this);
        frmP.getRbtmHom().addActionListener(this);
        frmP.getRbtmMuj().addActionListener(this);
        frmP.getCheckAnimales().addActionListener(this);
        frmP.getCheckPlantas().addActionListener(this);
        frmP.getBtmLimpiar().addActionListener(this);
        frmP.getBtngrpGender().add(frmP.getRbtmHom());
        frmP.getBtngrpGender().add(frmP.getRbtmMuj());
        frmP.getCboxUniversidades().addActionListener(this);
        frmP.getCboxUserType().addActionListener(this);
        
        //Elementos de Consultar Persona
        frmCP.getBtmBuscar().addActionListener(this);
        frmCP.getBtmSalir().addActionListener(this);
        frmCP.getOpcActualizar().addActionListener(this);
        frmCP.getOpcExportar().addActionListener(this);
        frmCP.getOpcImportar().addActionListener(this);
        frmCP.getCboxTipoUsusario().addActionListener(this);
        frmCP.getBtmGenerarPDF().addActionListener(this);
        frmCP.getBtmImprimir().addActionListener(this);
        frmCP.getBtmUpdate().addActionListener(this);
        frmCP.getBtmDelete().addActionListener(this);
        
        //Elementos de Nuevo Especimen
        frmE.getBtmRegistrar().addActionListener(this);
        frmE.getBtmCancelar().addActionListener(this);
        frmE.getTxtEspecie().addActionListener(this);
        frmE.getTxtEspecimenID().addActionListener(this);
        frmE.getTxtFamilia().addActionListener(this);
        frmE.getTxtGenero().addActionListener(this);
        frmE.getTxtOrden().addActionListener(this);
        frmE.getJcomboColector().addActionListener(this);
        frmE.getJcomboEspecimen().addActionListener(this);
        frmE.getJcomboExtre().addActionListener(this);
        frmE.getJcomboFrutos().addActionListener(this);
        frmE.getJcomboHojas().addActionListener(this);
        frmE.getJcomboPelaje().addActionListener(this);    
        
        //Elementos actualizar persona
        frmUP.getBtmActualizar().addActionListener(this);
        frmUP.getCboxGenero().addActionListener(this);
        frmUP.getCboxUniversidades().addActionListener(this);
        frmUP.getCboxUpdate().addActionListener(this);
        frmUP.getTxtId().addActionListener(this);
        frmUP.getTxtValor().addActionListener(this);
        
        //Elementos eliminar persona
        frmDP.getBtmDelete().addActionListener(this);
        frmDP.getTxtDelete().addActionListener(this);

    }
    
      
    @Override
    @SuppressWarnings("empty-statement")
    public void actionPerformed(ActionEvent ae) {
        PersonaDAO perDB = new PersonaDAO(); 
        
        //Funciones en Interfaz
        if(ae.getSource().equals(frmInicio.getOpcCrearUsuario())||
                ae.getSource().equals(frmInicio.getBtmLogin())){
            frmInicio.getEscritorio().add(frmP);
            frmP.setVisible(true);
        }
        
        if(ae.getSource().equals(frmInicio.getOpcSalir())||
               ae.getSource().equals(frmInicio.getBtmSalida2()) ){
            int resp=JOptionPane.showConfirmDialog(frmInicio, "Desea terminar ejecucion?...", "Salir", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE);
            if(resp==JOptionPane.YES_OPTION){
                frmInicio.dispose();
            }
        }

        if(ae.getSource().equals(frmInicio.getBtmCrearEsp())||
                ae.getSource().equals(frmInicio.getOpcCrearEsp())){
            frmInicio.getEscritorio().add(frmE);
            frmE.setVisible(true);
        }
        
        if(ae.getSource().equals(frmInicio.getOpcConsultarUsuario())){
            frmInicio.getEscritorio().add(frmCP);
            frmCP.setVisible(true);
        }
        
        //Funciones en Nuevo Ususario
        if(ae.getSource().equals(frmP.getBtmLimpiar())){
            
        }
        
        if(ae.getSource().equals(frmP.getBtmCancelar())){
            frmP.dispose();
        }
        
        //Tipo Usuario
           
            switch(frmP.getCboxUserType().getSelectedIndex()){
                case 0 -> {
                    frmP.getPanelInvestigador().setVisible(false);
                    frmP.getPanelUsuario().setVisible(false);
                }
                case 1 ->{
                    frmP.getPanelInvestigador().setVisible(true);
                    frmP.getPanelUsuario().setVisible(true);
                } 
                case 2 ->{
                    frmP.getPanelInvestigador().setVisible(false);
                    frmP.getPanelUsuario().setVisible(true);
                }
            }
            
        //Funciones en Consultar Usuarios
        
        if(ae.getSource().equals(frmCP.getBtmSalir())){
            frmCP.dispose();
        }
        
        if(ae.getSource().equals(frmCP.getOpcActualizar())){
            frmCP.getTableUsuario().setModel(perDB.consultar());
        }
        
        //Registrar información Usuario
        if(ae.getSource().equals(frmP.getBtmRegistrar())){
            try{
            switch(frmP.getCboxUserType().getSelectedIndex()){
                case 0 -> {
                    
                        Administrador objA = new Administrador();
                        objA.setId(Integer.parseInt(frmP.getTxtId().getText()));
                        objA.setNom(frmP.getTxtNom().getText());
                        objA.setPape(frmP.getTxtPrimerApe().getText());
                        objA.setSape(frmP.getTxtSegundoApe().getText());
                        
                        //Genero
                        if(frmP.getRbtmHom().isSelected()){
                            objA.setGeneroid(Integer.parseInt("1"));
                        }else if(frmP.getRbtmMuj().isSelected()){
                            objA.setGeneroid(Integer.parseInt("2"));
                        }
                        
                        //Fecha nacimiento
                        objA.setfNac2(frmP.getjDateNacimiento().getDate());
                        
                        //Tipo Usuario
                        objA.setUsertype(objA.tipodeusuario());
                        
                        perDB.setObjI(objA);
                    
            
                }

                
                case 1 -> {
                    
                        Investigador objI = new Investigador();
                        objI.setId(Integer.parseInt(frmP.getTxtId().getText()));
                        objI.setNom(frmP.getTxtNom().getText());
                        objI.setPape(frmP.getTxtPrimerApe().getText());
                        objI.setSape(frmP.getTxtSegundoApe().getText());
                        
                        //Genero
                        if(frmP.getRbtmHom().isSelected()){
                            objI.setGeneroid(Integer.parseInt("1"));
                        }else if(frmP.getRbtmMuj().isSelected()){
                            objI.setGeneroid(Integer.parseInt("2"));
                        }
                        
                        //Fecha nacimiento
                        objI.setfNac2(frmP.getjDateNacimiento().getDate());
                        
                        //Tipo Usuario
                        objI.setUsertype(objI.tipodeusuario());
                        
                        //Institucion
                        switch(frmP.getCboxUniversidades().getSelectedIndex()){
                            case 0 ->{
                                objI.setUniversidadID(Integer.parseInt("1"));
                            }
                            case 1 ->{
                                objI.setUniversidadID(Integer.parseInt("2"));
                            }
                            case 2 ->{
                                objI.setUniversidadID(Integer.parseInt("3"));
                            }
                            case 3 ->{
                                objI.setUniversidadID(Integer.parseInt("4"));
                            }
                        }
                        
                        //Datos Investigador
                        objI.setColectorID(frmP.getTxtIdColector().getText());
                        objI.setCitacion(frmP.getTxtCitacion().getText());
                        if(frmP.getCheckAnimales().isSelected() & !frmP.getCheckPlantas().isSelected()){
                            objI.setEstudioID(2);
                        }else if(!frmP.getCheckAnimales().isSelected() & frmP.getCheckPlantas().isSelected()){
                            objI.setEstudioID(1);
                        }else if(frmP.getCheckAnimales().isSelected() & frmP.getCheckPlantas().isSelected()){
                            objI.setEstudioID(3);
                        }
                        perDB.setObjI(objI);
                    
                }

                
                case 2 -> {
                    
                        Visitante objV = new Visitante();
                        objV.setId(Integer.parseInt(frmP.getTxtId().getText()));
                        objV.setNom(frmP.getTxtNom().getText());
                        objV.setPape(frmP.getTxtPrimerApe().getText());
                        objV.setSape(frmP.getTxtSegundoApe().getText());
                        
                        //Genero
                        if(frmP.getRbtmHom().isSelected()){
                            objV.setGeneroid(Integer.parseInt("1"));
                        }else if(frmP.getRbtmMuj().isSelected()){
                            objV.setGeneroid(Integer.parseInt("2"));
                        }
                        
                        //Fecha nacimiento
                        objV.setfNac2(frmP.getjDateNacimiento().getDate());
                        
                        //Tipo Usuario
                        objV.setUsertype(objV.tipodeusuario());
                        
                        //Institucion
                        switch (frmP.getCboxUniversidades().getSelectedIndex()) {
                            case 1 -> objV.setUniversidadID(1);
                            case 2 -> objV.setUniversidadID(2);
                            case 3 -> objV.setUniversidadID(3);
                            case 4 -> objV.setUniversidadID(4);
                            default -> {
                            }
                        }
                        perDB.setObjI(objV);
                    
                }
            

            }
            } catch (FormatoEntradaException ex) {
                        JOptionPane.showMessageDialog(frmInicio, ex.toString());
            }
                      
            JOptionPane.showMessageDialog(frmP,perDB.insertar()); 
        }
        
        //Consultar Información Usuario
        if(ae.getSource().equals(frmCP.getOpcExportar())){
            ConexionArc conarchivo = new ConexionArc();
            
            for (int i = 0; i< frmCP.getTableUsuario().getModel().getRowCount(); i++){
                try {
                    String usuario = "";
                    for (int j = 0; j < frmCP.getTableUsuario().getModel().getColumnCount(); j++){
                        usuario = usuario+frmCP.getTableUsuario().getModel().getValueAt(i, j).toString()+";";
                    }
                    conarchivo.EscribeDatos(usuario);
                } catch (IOException ex) {
                    JOptionPane.showMessageDialog(frmInicio,"Error de escritura en archivo...");
                }
            }
            JOptionPane.showMessageDialog(frmInicio, "Se ha exportado la información con éxito");
        }
        
        if(ae.getSource().equals(frmCP.getOpcImportar())){
            if (frmCP.getTableUsuario().getModel().getRowCount() > 0) {
                for (int i = frmCP.getTableUsuario().getModel().getRowCount() - 1; i > -1; i--) {
                    DefaultTableModel model = (DefaultTableModel) frmCP.getTableUsuario().getModel();
                    model.removeRow(i);
                }
            }
            try {
                ConexionArc conachivo = new ConexionArc();
                String[] usuarios = conachivo.leerDatos().split("\n");
                for(String usuario : usuarios){
                    Object[] usu = usuario.split(";");
                    DefaultTableModel model = (DefaultTableModel) frmCP.getTableUsuario().getModel();
                    model.addRow(usu);
                }
            } catch (IOException ex) {
                 JOptionPane.showMessageDialog(frmP,"Error de I/0 en archivo...");
            }
        }
        
        if(ae.getSource().equals(frmCP.getBtmImprimir())){
            try {
                DefaultTableModel viewModel = (DefaultTableModel) frmCP.getTableUsuario().getModel();
                DefaultTableModel printModel = new DefaultTableModel(0, viewModel.getColumnCount());
                for (int row : frmCP.getTableUsuario().getSelectedRows()) {
                    printModel.addRow((Vector)viewModel.getDataVector().get(row));
                }
                JTable toPrint = new JTable(printModel);
                toPrint.setSize(toPrint.getPreferredSize());
                JTableHeader tableHeader = toPrint.getTableHeader();
                tableHeader.setSize(tableHeader.getPreferredSize());
                toPrint.print(JTable.PrintMode.FIT_WIDTH);
            } catch (PrinterException ex) {
                Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        
        if(ae.getSource().equals(frmCP.getBtmGenerarPDF())){
            String pdftable = "";
            for (int row : frmCP.getTableUsuario().getSelectedRows()) { 
                    pdftable += "\n";
                for(int j=0 ; j<frmCP.getTableUsuario().getColumnCount() ; j++)
                {
                    pdftable += frmCP.getTableUsuario().getColumnName(j)+" = "+ frmCP.getTableUsuario().getValueAt(row, j)+"\n";
                }
            }

            aPdf.crear_PDF("Datos Persona", pdftable);
        }
        
        //Acciones para creacion de Especimen
        
          
        String sql = "select Identificador from colector;";
        Vector v;
            Conexion conect = new Conexion();
            frmE.getJcomboColector().setSelectedIndex(-1);
            try{
            conect.conectar();
            Statement statment = conect.getConexion().createStatement();
            ResultSet result = statment.executeQuery(sql);
            /*v = new Vector();
                while (result.next()){
                    String list = result.getString("Identificador");
                    v.add(list);
                }
            */
                while(result.next()){
                    String list = result.getString(1);
                    frmE.getJcomboColector().addItem(list);
                }
            result.close();
            }catch(SQLException lol){
                System.out.println(lol.toString());
            }
        
            //Acciones para actulizar
            if(ae.getSource().equals(frmCP.getBtmUpdate())){
            frmInicio.getEscritorio().add(frmUP);
            frmUP.setVisible(true);
            }
            
            switch(frmUP.getCboxUpdate().getSelectedIndex()){
                case 0 -> {
                    frmUP.getPanelValor().setVisible(true);
                    frmUP.getPanelFecha().setVisible(false);
                    frmUP.getPanelUniversidad().setVisible(false);
                    frmUP.getPanelGenero().setVisible(false);
                }
                case 1 -> {
                    frmUP.getPanelValor().setVisible(true);
                    frmUP.getPanelFecha().setVisible(false);
                    frmUP.getPanelUniversidad().setVisible(false);
                    frmUP.getPanelGenero().setVisible(false);
                }
                case 2 -> {
                    frmUP.getPanelValor().setVisible(true);
                    frmUP.getPanelFecha().setVisible(false);
                    frmUP.getPanelUniversidad().setVisible(false);
                    frmUP.getPanelGenero().setVisible(false);
                }
                case 3 -> {
                    frmUP.getPanelValor().setVisible(false);
                    frmUP.getPanelFecha().setVisible(false);
                    frmUP.getPanelUniversidad().setVisible(false);
                    frmUP.getPanelGenero().setVisible(true);
                }
                case 4 -> {
                    frmUP.getPanelValor().setVisible(false);
                    frmUP.getPanelFecha().setVisible(true);
                    frmUP.getPanelUniversidad().setVisible(false);
                    frmUP.getPanelGenero().setVisible(false);
                }
                case 5 -> {
                    frmUP.getPanelValor().setVisible(false);
                    frmUP.getPanelFecha().setVisible(false);
                    frmUP.getPanelUniversidad().setVisible(true);
                    frmUP.getPanelGenero().setVisible(false);
                }
            }
            
        if(ae.getSource().equals(frmUP.getBtmActualizar())){ 
            switch(frmUP.getCboxUpdate().getSelectedIndex()){
                case 0 -> {

                try {
                    JOptionPane.showMessageDialog(frmUP,perDB.update(1, frmUP.getTxtValor().getText(), Integer.parseInt(frmUP.getTxtId().getText()), 0));
                } catch (SQLException ex) {
                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                } catch (ParseException ex) {
                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                }
                
                }
                case 1 -> {
                        try { 
                            JOptionPane.showMessageDialog(frmUP,perDB.update(2, frmUP.getTxtValor().getText(), Integer.parseInt(frmUP.getTxtId().getText()), 0));
                        } catch (SQLException ex) {
                            Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                        } catch (ParseException ex) {
                            Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                        }
                }
                case 2 -> {
                        try { 
                            JOptionPane.showMessageDialog(frmUP,perDB.update(3, frmUP.getTxtValor().getText(), Integer.parseInt(frmUP.getTxtId().getText()), 0));
                        } catch (SQLException ex) {
                            Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                        } catch (ParseException ex) {
                            Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                        }
                }
                case 3 -> {
                        switch (frmUP.getCboxGenero().getSelectedIndex()) {
                            case 0 -> {
                            try {
                                JOptionPane.showMessageDialog(frmUP,perDB.update(4, "", Integer.parseInt(frmUP.getTxtId().getText()), 1));
                            } catch (SQLException ex) {
                                Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                            } catch (ParseException ex) {
                                Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                            }
                            }
                            case 1 -> {
                               try {
                                JOptionPane.showMessageDialog(frmUP,perDB.update(4, "", Integer.parseInt(frmUP.getTxtId().getText()), 2));
                            } catch (SQLException ex) {
                                Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                            } catch (ParseException ex) {
                                Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                            } 
                            }
                            default -> throw new AssertionError();
                        }
                }
                case 4 -> {
                        JOptionPane.showMessageDialog(frmUP,perDB.updatefecha(frmUP.getJdatenac().getDate(), Integer.parseInt(frmUP.getTxtId().getText())));
                }
                case 5 -> {
                        switch (frmUP.getCboxUniversidades().getSelectedIndex()) {
                                case 1 -> {
                                try {
                                    JOptionPane.showMessageDialog(frmUP,perDB.update(5, "", Integer.parseInt(frmUP.getTxtId().getText()), 1));;
                                } catch (SQLException | ParseException ex) {
                                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                                }

                                }

                                case 2 -> {
                                try {
                                    JOptionPane.showMessageDialog(frmUP,perDB.update(5, "", Integer.parseInt(frmUP.getTxtId().getText()), 2));;
                                } catch (SQLException ex) {
                                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                                } catch (ParseException ex) {
                                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                                }

                                }

                                case 3 -> {
                                try {
                                    JOptionPane.showMessageDialog(frmUP,perDB.update(5, "", Integer.parseInt(frmUP.getTxtId().getText()), 3));;
                                } catch (SQLException ex) {
                                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                                } catch (ParseException ex) {
                                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                                }

                                }

                                case 4 -> {
                                try {
                                    JOptionPane.showMessageDialog(frmUP,perDB.update(5, "", Integer.parseInt(frmUP.getTxtId().getText()), 4));;
                                } catch (SQLException ex) {
                                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                                } catch (ParseException ex) {
                                    Logger.getLogger(Controlador.class.getName()).log(Level.SEVERE, null, ex);
                                }

                                }

                                default -> {
                                }
                        }
                    }
                }
            }
        
            //Eliminar ususario
            if(ae.getSource().equals(frmCP.getBtmDelete())){
                frmInicio.getEscritorio().add(frmDP);
                frmDP.setVisible(true);
            }
            
            if(ae.getSource().equals(frmDP.getBtmDelete())){
                JOptionPane.showMessageDialog(frmDP,perDB.delete(Integer.parseInt(frmDP.getTxtDelete().getText())));             
            }
        }
        
}
        

