#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{

     int n = s.size();
     stack<char> st;
     bool ans = true;

     for (int i = 0; i < n; i++)
     {
          if (st.empty() and (s[i] == ')' or s[i] == '}' or s[i] == ']'))
          {
               return false; // if start with closed paranthesis
          }
          else if (s[i] == '(' or s[i] == '{' or s[i] == '[')
          {
               st.push(s[i]);
          }
          else if (s[i] == ')')
          {
               if (!st.empty() and st.top() == '(')
               {
                    st.pop();
               }
               else
               {
                    ans = false;
                    break;
               }
          }
          else if (s[i] == '}')
          {
               if (!st.empty() and st.top() == '{')
               {
                    st.pop();
               }
               else
               {
                    ans = false;
                    break;
               }
          }
          else if (s[i] == ']')
          {
               if (!st.empty() and st.top() == '[')
               {
                    st.pop();
               }
               else
               {
                    ans = false;
                    break;
               }
          }
     }
     if (!st.empty())
     {
          return false;
     }

     return ans;
}

int main()
{
     string s = "{[(((())))]}";
     if (isValid(s))
     {
          cout << "Valid!" << endl;
     }
     else
     {
          cout << "Not valid!" << endl;
     }

     return 0;
}
