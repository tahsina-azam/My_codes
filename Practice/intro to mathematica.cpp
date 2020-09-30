#include<bits/stdc++.h>
using namespace std;
int g=0,actual=0;
queue<char>q;



int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}


void removeSpaces(char *str)
{

    int count = 0;


    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            {
              str[count++] = str[i];
              if(str[i]!=')' && str[i]!='(')
                actual++;
              g++;
            }

    str[count] = '\0';
}


void infixToPostfix(char *s)
{
    std::stack<char> st;
    st.push('N');
    string ns;
    for(int i = 0; i < g; i++)
    {

        if(s[i] != '+' && s[i] != '-' && s[i] != '^' && s[i] != '*' && s[i]!='/' && s[i]!='(' && s[i]!=')')
        ns+=s[i];


        else if(s[i] == '(')
        st.push('(');



        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ns += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }


        else{
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }

    }

    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }

    for(int u=0;u<actual;u++)
    {
      if(ns[u]==q.front())
      {
        printf("%c",ns[u]);
        q.pop();
        char h=q.front();
        if(h=='#')
        {
          printf(" ");
          while(q.front()=='#')
            q.pop();
        }
      }
else
{
  printf("%c ",ns[u]);
}
    }
    printf("\n");
}


int main()
{
int  p;
    char infix[10000];
    char t;
    scanf("%[^\n]",infix);
    removeSpaces(infix);
    for(int i=0;i<g;i++)
    {
      if(infix[i] != '+' && infix[i] != '-' && infix[i] != '^' && infix[i] != '*' && infix[i]!='/' && infix[i]!='(' && infix[i]!=')')
              {
                q.push(infix[i]);
              }
              else
                q.push('#');
    }
    q.push('#');
    infixToPostfix(infix);
    return 0;
}
