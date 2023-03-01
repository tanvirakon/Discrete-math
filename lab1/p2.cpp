#include <bits/stdc++.h>
using namespace std;


int implies1(int p,int q)
{
    if(p==1)
    {
        if(q==1) return 1;
        else return 0;
    }
    else return 1;
}

int implies2(int q,int p)
{
    if(q==1)
    {
        if(p==1) return 1;
        else return 0;
    }
    else return 1;

}


int negation1(int q,int p)
{
//cout<<q<<p;
p=!p;
q=!q;

//cout<<q<<p;
    implies2(q,p);
}

int bidirectional(int q,int p){
int x=implies1(q,p);
int y=implies2(p,q);
if(x==y) return 1;
else return 0;

}

int main()
{

    int p,q;
    cout<<"p"<<" "<<"q"<<" p->q "<<" q->p "<<"q`->p` "<<" q<-->p "<<endl;;


    p=1,q=1;
    cout<<p<<" "<<q<<"   ";
    cout<<implies1(p,q)<<"     ";
    cout<<implies2(q,p)<<"    ";
    cout<<negation1(q,p)<<"       ";
    cout<<bidirectional(q,p);
    cout<<endl;


    p=1,q=0;
    cout<<p<<" "<<q<<"   ";
    cout<<implies1(p,q)<<"     ";
    cout<<implies2(q,p)<<"    ";
    cout<<negation1(q,p)<<"       ";
    cout<<bidirectional(q,p);
    cout<<endl;

    p=0,q=0;
     cout<<p<<" "<<q<<"   ";
    cout<<implies1(p,q)<<"     ";
    cout<<implies2(q,p)<<"    ";
    cout<<negation1(q,p)<<"       ";
    cout<<bidirectional(q,p);
    cout<<endl;

    p=0,q=1;
     cout<<p<<" "<<q<<"   ";
    cout<<implies1(p,q)<<"     ";
    cout<<implies2(q,p)<<"    ";
    cout<<negation1(q,p)<<"       ";
    cout<<bidirectional(q,p);
    cout<<endl;







}
