// PREFIX TO INFIX AND POSTFIX CONVERSION

#include <iostream>
#include<string>
using namespace std;

struct stack
{
    int top;
    int size;
    char elements[100];
    string str_ele[100];
};
void push_char(struct stack &s,char x)
{ 
    if(s.top==s.size-1)
    cout<<"Stack is full \n";
    else
    {
        s.elements[++s.top]=x;
    }
}
char peek_char(struct stack &s)
{
  if(s.top==-1)
    return 'a' ;
    else 
    return s.elements[s.top];   
}
char pop_char(struct stack &s)
{
   if(s.top==-1)
    return 'a' ;
    else 
    return s.elements[s.top--]; 
}
void push_string(struct stack &s,string x)
{ 
    if(s.top==s.size-1)
    cout<<"Stack is full \n";
    else
    {
        s.str_ele[++s.top]=x;
    }
}
string peek_string(struct stack &s)
{
  if(s.top==-1)
    return ".." ;
    else 
    return s.str_ele[s.top];   
}
string pop_string(struct stack &s)
{
    if(s.top==-1)
    return ".." ;
    else 
    return s.str_ele[s.top--];  
}
bool isoperator(char a)
{
    return (a=='*' || a=='/' || a=='-' || a=='+');
}
bool isbracket(char a)
{
    return (a=='(' || a==')'||a=='[' || a==']' || a=='{' ||a=='}' );
}
int operation(char c)
{
    switch(c){
        case '(' : return 0;
        case '+' : return 1;
        case '-' : return 2;
        case '*' : return 3;
        case '/' : return 4;
    }
    return -1;
}



string pre_to_post(struct stack &s,string str,int index)
{
    if(isoperator(str[index]))
    {
        string op1=pop_string(s);
        string op2=pop_string(s);
        string res=op1+op2+str[index];
        push_string(s,res);
    }
    else
    push_string(s,string(1,str[index]));
    if(index==0)
    return pop_string(s);
    else
    return pre_to_post(s,str,index-1);
}
string pre_to_in(struct stack &s,string str,int index)
{
    if(isoperator(str[index]))
    {
        string op1=pop_string(s);
        string op2=pop_string(s);
        string res=op1+str[index]+op2;
        push_string(s,res);
    }
    else
    push_string(s,string(1,str[index]));
    if(index==0)
    return peek_string(s);
    else
    return pre_to_in(s,str,index-1);
}




string ques3(string str)
{
    struct stack s3;
    s3.size=100;
    s3.top=-1;
    return pre_to_in(s3,str,str.size()-1);
}
string ques4(string str)
{
    struct stack s4;
    s4.size=100;
    s4.top=-1;
    return pre_to_post(s4,str,str.size()-1);
}

int main()
{
    string q1,q2,q3;
    
   cout<<"Enter a prefix :\n";
   cin>>q2;
   cout<<"prefix to infix : "<<ques3(q2)<<"\n";
   cout<<"prefix to postix : "<<ques4(q2)<<"\n";
   
  
   
    return 0;
}
