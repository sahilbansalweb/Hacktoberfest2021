import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class button extends Frame implements ActionListener
{
	Button b;
	Frame f;
	public button()
	{   b=new Button("red");
	    f=new Frame();
		f.setVisible(true);
	    f.setBackground(Color.red);
	    b.setBackground(Color.red);
		b.addActionListener(this);
		f.setLayout(new FlowLayout());
		f.add(b);
	}
	public static void main(String args[])
	{
		new button();
	}
	public void actionPerformed(ActionEvent e)
	{
		
		if(b.getLabel()=="red")
		{
			
			f.setBackground(Color.green);
			b.setBackground(Color.green);
			b.setLabel("green");
			
		}
		else if(b.getLabel()=="green")
		{   f.setBackground(Color.blue);
			b.setBackground(Color.blue);
			b.setLabel("blue");
		
		}
       else {
		   f.setBackground(Color.red);
		   b.setBackground(Color.red);
		   b.setLabel("red");
	   }		   
		
	
	}
}
			
		
		

	
