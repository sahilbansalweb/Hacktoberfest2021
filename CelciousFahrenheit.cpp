#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"1. For Celsius To Fahrenheit. \n";
  cout<<"2. For Fahrenheit To Celsius. \n";
  cout<<"3. For Exit\n\n";
  cout<<"Enter Your Choice \n ";
  cin>>a;
  switch(a)
   { 
    double cel,feh;
    case 1: cout<<"Enter The Temperature In Celsius\n";
      cin>>cel;
      feh=(cel*9/5)+32;
      cout<<"\nTemperature In Fahrenheit Is = "<<feh ;
    break;
   
   case 2: cout<<"Enter The Temperature In Fahrenheit\n";
      cin>>feh;
      cel=(feh-32)*5/9;
      cout<<"\nTemperature In Celsius Is = "<<cel ;
    break;
      
   case 3:exit(0);
   
   default:cout<<"\nEnter The Right Choice \n";
    break;     
   }
}
