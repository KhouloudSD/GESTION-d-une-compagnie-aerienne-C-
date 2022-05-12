#include "date.h"

date::date(int j , int m ,int a)
{
   jour=j;
   mois=m;
   annee=a;
}
istream& operator>>(istream& in ,date& c)
{
    cout<<"day: ";
    in>>c.jour;
    cout<<"/ month: ";
    in>>c.mois;
    cout<<"/ year: ";
    in>>c.annee;
    cout<<endl;
return in;
}
bool date::operator==(date d1)
{
    if(d1.annee==annee&&d1.mois==annee&&d1.mois==mois&&d1.jour==jour)
        return true;
        else
        return false;
}
bool date::operator<(date d1)
{

    if(annee<d1.annee)
        return true;
    else
    {
        if(annee==d1.annee)
            {
                if(mois<d1.mois)
                {
                    return true;
                }
                else return false;
            }
            else return false ;
    }



}


ostream& operator<<(ostream& out ,date& c)
{
    out<<c.jour;
    out<<c.mois;
    out<<c.annee;
    return out;
}
istream& operator>>(istream& in ,date* c)
{
    in>>c->annee;
    in>>c->mois;
    in>>c->jour;
    return in;
}
ostream& operator<<(ostream& out ,date* c)
{
    out<<c->annee<<" "<<c->mois<<" "<<c->jour<<" ";
}
date::~date()
{
    //dtor
}
