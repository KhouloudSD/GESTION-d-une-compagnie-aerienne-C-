#include "ville.h"
ville::ville(string ch )
{
    nomVille=ch;
}
istream& operator>>(istream& in ,ville& v)
{
    cout<<"saisir le nom de la ville :";
    in>>v.nomVille;
    return in ;
}
ostream& operator<<(ostream& out ,ville& v)
{
   out<<"le nom de la ville: ";
   out<<v.nomVille;
   return out;
}
istream& operator>>(istream& in ,ville* v)
{

    in>>v->nomVille;
    return in ;
}
ostream& operator<<(ostream& out ,ville* v)
{
   out<<v->nomVille;
   return out;
}
ville::~ville()
{

}
