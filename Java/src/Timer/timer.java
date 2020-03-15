package Timer;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Date;
import javax.swing.*;

/**
 * Created by Aspen on 2017/9/26.
 */
public class timer {
    public static void main(String[] arg){
        ActionListener listener = new TimePrinter();

        Timer t = new Timer(10000, listener);
        t.start();
        JOptionPane.showMessageDialog(null,"Quit program");
        System.exit(0);
    }
}

class TimePrinter implements ActionListener{
    public void actionPerformed(ActionEvent event){
        System.out.println("At the tnoe, the time is "+ new Date());
        Toolkit.getDefaultToolkit().beep();
    }
}
