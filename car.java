import java.applet.*;
import java.awt.*;
//<applet code="car.class" height="500" width="500"></applet>
public class car extends Applet implements Runnable
{
	Thread t1;
	int i=0;
	public void init()
	{
		t1=new Thread(this);
		t1.start();
		
	}
	public void run()
	{
		try{
			while(true)
			{
				repaint();
				t1.sleep(50);
			}
		}
			catch(Exception e)
			{
				;
			}
	}
    public void paint(Graphics g)
	{  
	g.setColor(Color.red);
    g.drawRect(i,23,47,24);
	g.drawOval(i,40,13,13);
	g.drawOval(i+30,40,13,13);
	g.setColor(Color.orange);
	g.fillRect(i+47,33,24,14);
	g.setColor(Color.yellow);
	g.fillRect(i+6,28,10,7);
	g.fillRect(i+29,28,10,7);
	g.drawLine(0,50,500,50);
	if(i>500)
	{ i=0;
      g.setColor(Color.red);
	  repaint();
	}
	else
	{
		i=i+5;
	}
}
}
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
