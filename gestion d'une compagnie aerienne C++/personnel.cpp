#include<string>
#include <iostream>
#include<fstream>
using namespace std;



#include<string>
#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;


#include "personnel.h"

personnel::personnel(string a, string b , string c,string d,string ch,int e,int g, float f )
{
    nom=a;
    prenom=b;
    adresse=c;
    mail=d;
    CIN=e;
    metier=ch;
    numtele= g ;
    salaire=f;
}

istream& operator>>(istream& in ,personnel& c)
{
    int dess;
    cout<<"saisir le nom :";
    in>>c.nom;
    cout<<"saisir le prenom:";
    in>>c.prenom;
    cout<<"saisir l'adresse:";
    in>>c.adresse;
    cout<<"saisir l'adresse  mail :";
    in>>c.mail;
    cout<<"saisir le numero de la carte d'identité:";
    in>>c.CIN;
    cout<<"saisir metier:"<<endl;
    cout<<"       1:commandant de bord"<<endl;
    cout<<"       2:pilote"<<endl;
    cout<<"       3:copilote"<<endl;
    cout<<"       4:hotesse de l'air"<<endl;
    cout<<"       5:steward"<<endl;
do
{

     cin>>dess;
    switch(dess){
        case 1 : c.metier="commandant_de_bord ";break;
        case 2 : c.metier="pilote";break;
        case 3 : c.metier="copilote";break;
        case 4 : c.metier="hotesse_de_l'air" ;break;
        case 5 : c.metier="steward";break;
        default :
            cout<<"choix invalide";

          }


}
while(dess<1|dess>5);



    cout<<"saisir le numero de telephone :";
    in>>c.numtele;
    cout<<"saisir le salaire :";
    in>>c.salaire;
    return in;
}
ostream& operator<<(ostream& out ,personnel& c)
{
  cout<<"nom: ";
  out<<c.nom;
  cout<<endl;
  cout<<"prenom: ";
  out<<c.prenom;
  cout<<endl;
  cout<<"adresse: ";
  out<<c.adresse;
  cout<<endl;
  cout<<"mail: ";
  out<<c.mail;
  cout<<endl;
  cout<<"cin: ";
  out<<c.CIN;
  cout<<endl;
cout<<"metier: ";
  out<<c.metier;
  cout<<endl;
  cout<<"numero de telephone: ";
  out<<c.numtele;
  cout<<endl;
  cout<<"salaire: ";
  out<<c.salaire;
  cout<<endl;

  return out;
}
bool personnel::operator==(personnel p)
{
    return(p.CIN==CIN);

}

personnel::~personnel()
{
    //dtor
}

ostream & operator<<(ostream& out, personnel * p)
{
    out<<setw(30)<<p->nom<<" "<<setw(30)<<p->prenom<<" "<<setw(30)<<p->adresse<<" "<<setw(30)<<p->mail<<" "<<setw(30)<<p->CIN<<" "<<setw(30)<<p->numtele<<" "<<setw(30)<<p->salaire<<" "<<setw(30)<<p->metier;
    return out;
}
istream& operator>>(istream& in ,personnel* p)
{

    in>>p->nom;
    in>>p->prenom;
    in>>p->adresse;
    in>>p->mail;
    in>>p->CIN;

    in>>p->numtele;
    in>>p->salaire;
    in>>p->metier;
    return in;

}
void personnel::creer(fstream& f)
{



    f.open("E:\\personnel.txt",ios::in|ios::out|ios::trunc);
      if (!f.is_open()) exit (-1);

}
void personnel::remplir(fstream& f)
{
    f.open("E:\\avion.txt",ios::out);
      if (!f.is_open()) exit (-1);
    int n ;
    personnel * p=new personnel ;
    cout<<"donner le nb des persol";
    cin>>n;
    for(int i =0;i<n;i++)
    {


    cin>>*p;
    f<<p<<endl;


    }

}
void personnel::afficher(fstream&f)
{
    personnel * p=new personnel;
    f.seekg(0);
    while(1)
    {
        f>>p;
        if(f.eof()) break;
        cout<<*p<<endl;
    }
}
