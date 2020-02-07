//OO-LOGIC.cpp
#include<iostream>
#include<string.h>
using namespace std;
class logic{    
    public:
        int i,j;
        void input();
        void conjunction();
        void disjunction();
        void negation();
        void conditional();
        void biconditional();
};

int main() 
{
    
    logic a;
    a.input();
    a.conjunction();
    a.disjunction();
    a.negation();
    a.conditional();
    a.biconditional();
    return 0;
}

void logic::input()
{
    cout<<"Number: 40\nENTER THE NUMBERS: ";
    cin>>i;
    cin>>j;
}

void  logic::conjunction()
{

    if(i<=40&&j<=40)
    {
        cout<<"Conjunction: (i<=40&&j<=40)\n";
        cout<<"i="<<i<<" j="<<j<<endl;
        cout<<"TRUE\n";
    }
    else
    {
        cout<<"Conjunction: (i<=40&&j<=40)\n";
        cout<<"i="<<i<<"  j="<<j<<endl;
        cout<<"FALSE\n";
    }
}

void logic::disjunction()
{
    if(i<=40||j<=40)
    {
        cout<<"\nDisjunction: (i<=40||j<=40)\n";
        cout<<"i="<<i<<" j="<<j<<endl;
        cout<<"TRUE\n";
    }
    else
    {
        cout<<"\nDisjunction: (i<=40||j<=40)\n";
        cout<<"i="<<j<<" j="<<j<<endl;
        cout<<"FALSE\n";
    }
}

void logic::negation()
{
    cout<<"\nNegation:";
    cout<<"\nFalse statements become true: (i<=40) and (j<=40)\n";
    if(i<=40)
    {
        cout<<"I "<<i<<"<=40"<<"\t"<<"I is FALSE\n"<<endl;
        
    }
    else
    {
        cout<<"I "<<i<<"<=40"<<"\t"<<"I is TRUE\n"<<endl;
    }

    if(j<=40)
    {
        cout<<"Q "<<j<<"<=40"<<"\t"<<"Q is FALSE\n"<<endl;
        
    }
    else
    {
        cout<<"Q "<<i<<"<=40"<<"\t"<<"Q is TRUE\n"<<endl;
    }
}

void logic::conditional()
{
    if(i<=40&&j<=40)
    {
        cout<<"Conditional: (i<=40&&j<=40)\n";
        cout<<"TRUE\n";
    }
    if(i<=40&&j>=40)
    {
        cout<<"Conditional: (i<=40&&j<=40)\n";
        cout<<"FALSE\n";
    }
    if(i>=40&&j<=40)
    {
        cout<<"Conditional: (i<=40&&j<=40)\n";
        cout<<"TRUE\n";
    }
    if(i>=40&&j>=40)
    {
        cout<<"Conditional: (i<=40&&j<=40)\n";
        cout<<"TRUE\n";
    }
}

void logic::biconditional()
{
    if((i<=40&&j<=40)||(i>=40&&j>=40))
    {
        cout<<"\nConditional: (i<=40&&j<=40)\n";
        cout<<"TRUE\n";
    }
    else cout<<"\nBicondiotional: (i<=40&&j<=40)\nFALSE\n";
}
