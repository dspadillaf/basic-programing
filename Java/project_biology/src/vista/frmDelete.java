/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JInternalFrame.java to edit this template
 */
package vista;

import javax.swing.JButton;
import javax.swing.JTextField;

/**
 *
 * @author David
 */
public class frmDelete extends javax.swing.JInternalFrame {

    /**
     * Creates new form frmDelete
     */
    public frmDelete() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        txtDelete = new javax.swing.JTextField();
        btmDelete = new javax.swing.JButton();

        setClosable(true);
        setTitle("Eliminar Persona");
        setFrameIcon(new javax.swing.ImageIcon(getClass().getResource("/img/delete24.png"))); // NOI18N

        jLabel1.setText("Identificacion a eliminar:");

        btmDelete.setText("Eliminar");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(26, 26, 26)
                .addComponent(jLabel1)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(txtDelete, javax.swing.GroupLayout.PREFERRED_SIZE, 170, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(btmDelete)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel1)
                    .addComponent(txtDelete, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btmDelete))
                .addContainerGap(18, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    public JButton getBtmDelete() {
        return btmDelete;
    }

    public void setBtmDelete(JButton btmDelete) {
        this.btmDelete = btmDelete;
    }

    public JTextField getTxtDelete() {
        return txtDelete;
    }

    public void setTxtDelete(JTextField txtDelete) {
        this.txtDelete = txtDelete;
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btmDelete;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JTextField txtDelete;
    // End of variables declaration//GEN-END:variables
}
