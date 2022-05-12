#include "escale.h"

escale::escale(int a , int b ,int c ,int d, string ch):heure_de(a,b),heure_arv(c,d),esc(ch)
{

}
ostream& operator<<(ostream& out ,escale& c)
{
   out<<c.heure_arv;
   out<<c.heure_de;
   out<<c.esc;
   return out;
}



istream& operator>>(istream& in ,escale& c)
{
    cout<<"donner l'heur d'arrive et de dapar dans ce ascale"<<endl;
    in>>c.heure_arv;
    in>>c.heure_de;
    in>>c.esc;
    return in ;
}


ostream& operator<<(ostream& out ,escale* c)
{
   out<<&c->heure_arv<<" "<<&c->heure_de<<" "<<&c->esc;
   return out;
}



istream& operator>>(istream& in ,escale* c)
{
    in>>&c->heure_arv;
    in>>&c->heure_de;
    in>>&c->esc;
    return in ;
}





escale::~escale()
{
    //dtor
}
