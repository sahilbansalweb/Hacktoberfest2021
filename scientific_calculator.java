import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code="scientific_calculator.class" height=300 width=300></applet>*/
public class scientific_calculator extends Applet implements ActionListener
{   Label l1=new Label("Enter the value1");
    Label l2=new Label("Enter the value2");
	 Label l3=new Label("result is");
	TextField txt1=new TextField(20);
	TextField txt2=new TextField(20);
	TextField txt3=new TextField(20);
	Button b1=new Button("Sin");
	Button b2=new Button("cos");
	Button b3=new Button("tan");
	Button b4=new Button("log");
	Button b5=new Button("power of 2");
	Button b6=new Button("square root");
	Button b7=new Button("sum");
	Button b8=new Button("mainus");
	Button b9=new Button("mul");
	Button b10=new Button("div");
	public void init()
	{
		setLayout(new FlowLayout());
		add(l1);
		add(txt1);
		add(l2);
		add(txt2);
		add(l3);
		add(txt3);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		add(b5);
		add(b6);
		add(b7);
		add(b8);
		add(b9);
		add(b10);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
        b4.addActionListener(this);
	    b5.addActionListener(this);
		b6.addActionListener(this);
		b7.addActionListener(this);
		b8.addActionListener(this);
		b9.addActionListener(this);
		b10.addActionListener(this);
      		
	}
	public void actionPerformed(ActionEvent a)
	{  	
	   Object ob = a.getSource();
		if(ob==b1)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double ans=Math.sin(d1);
			txt3.setText(String.valueOf(ans));
		
		}
		else if(ob==b2)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double ans1=Math.cos(d1);
			txt3.setText(String.valueOf(ans1));
			
	    }
		else if(ob==b3)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double ans2=Math.tan(d1);
			txt3.setText(String.valueOf(ans2));
			
	    }
		else if(ob==b4)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double ans3=Math.log(d1);
			txt3.setText(String.valueOf(ans3));
		}
		else if(ob==b5)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double ans4=Math.exp(d1);
			txt3.setText(String.valueOf(ans4));
		}
		else if(ob==b6)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double ans5=Math.sqrt(d1);
			txt3.setText(String.valueOf(ans5));
			
		}
		else if(ob==b7)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double d2=Double.parseDouble(txt2.getText().toString());
			double ans6=d1+d2;
			txt3.setText(String.valueOf(ans6));
        }
		else if(ob==b8)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double d2=Double.parseDouble(txt2.getText().toString());
			double ans7=d1-d2;
			txt3.setText(String.valueOf(ans7));
        }
		else if(ob==b9)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double d2=Double.parseDouble(txt2.getText().toString());
			double ans8=d1*d2;
			txt3.setText(String.valueOf(ans8));
        }
		else if(ob==b10)
		{
			double d1=Double.parseDouble(txt1.getText().toString());
			double d2=Double.parseDouble(txt2.getText().toString());
			double ans9=d1/d2;
			txt3.setText(String.valueOf(ans9));
        }
}
}
