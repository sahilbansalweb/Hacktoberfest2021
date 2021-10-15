import java.util.*;
public class voting
{
	public static void main(String args[])
	{
		int candinate4=0;
		int candinate3=0;
		int candinate2=0;
		int candinate1=0;
		int candinate0=0;
		int ch;
		int sp=0;
		int a[]=new int [5];
		for(int i=1;i<=10;i++)
		{
			System.out.println("******Voter no "+i+"******");
			System.out.println("0.Candinate0");
			System.out.println("1.Candinate1");
			System.out.println("2.Candinate2");
			System.out.println("3.Candinate3");
			System.out.println("4.Candinate4");
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter your choice to vote your favoraite candinate");
			ch=sc.nextInt();
			if(ch<=4)
			{
				switch(ch)
				{
					case 0:
					    candinate0++;
						a[ch]=candinate0;
						break;
					case 1:
					    candinate1++;
						a[ch]=candinate1;
						break;
					case 2:
               candinate2++;
               a[ch]=candinate2;
                 break;
          case 3:
             candinate3++;
             a[ch]=candinate3;
               break;
          case 4:
             candinate4++;
            a[ch]=candinate4++;
              break;
				}
			}
           else	
		   {
			   sp++;
		   }
		}
		System.out.println("----------------------");
		System.out.println("******Result is:******");
		System.out.println("----------------------");
		System.out.println("candinate0 got:"+a[0]);
		System.out.println("candinate1 got:"+a[1]);
		System.out.println("candinate2 got:"+a[2]);
		System.out.println("candinate3 got:"+a[3]);
		System.out.println("candinate4 got:"+a[4]);
		System.out.println("westage voting:"+sp); 
	}
}	
