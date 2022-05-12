#include "aeroport.h"



aeroport::aeroport(string name)
{
        this->nom =name ;
}
ostream& operator<<(ostream& out , aeroport& a)
    {
        cout<<"le nom de l'aeroport:";
        out<<a.nom<<endl;
        /*
        cout<<"voici les villes asservi par cette aeroport"<<endl;
        for (int i=0 ; i<a.destination.size(); i++)
        {
            out<<a.destination[i];
        }
        */
        return out;
    }
istream& operator>>(istream& in , aeroport& a)
{
    cout<<" saisir le nom de l'aeroport:";
    in>> a.nom;
    int d;
    cout<<endl;
    /*
    cout<<"1er ville : "<<endl;
    do
    {
        ville V;
        in>>V;
        a.destination.push_back(V);
        cout<<"\n taper 1 si vous voulez ajouter une autre destination sinon tapez 0; " ;
        cin>> d;
    }
    while (d==1) ;
        */
    return in;
    }
ostream& operator<<(ostream& out , aeroport* a)
{
        out<<a->get_nom()<<" ";
        /*
        for (int i=0;i<a->destination.size() ;i++)
        {
            out<<a->destination[i]<<" ";
        }
        */
        return out;
}
istream& operator>>(istream& in , aeroport* a)
{
    in>>a->nom ;
    /*
    for(int i=0;i<a->destination.size();i++)
    {
        in>>a->destination[i];
    }
    */
    return in;
}

aeroport::~aeroport (void)
{
    destination.clear()  ;
}
