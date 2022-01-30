import javax.swing.*;
public class bases{
    public static void main(String[] args){
        JFrame fenetre=new JFrame("Titre de Fenêtre");
        // button.setSize(50,30);
        JButton button=new JButton("Click");
        fenetre.add(button);
        fenetre.setSize(800,600);
        fenetre.setVisible(true);
    }
}