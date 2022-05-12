#include "passager.h"

#include<string>
#include<iostream>
using namespace std;

passager::passager( string n,string p,string portable,int numpass,int c)
{
   nom=n;
   prenom=p;
   CIN=c;
   numpassport=numpass;
   num_tel=portable;
}
passager::~passager()
{
}
 ostream& operator<<(ostream& out ,passager& p)
{
  cout<<p.nom<<endl;
  cout<<p.prenom<<endl;
  cout<<p.CIN<<endl;
  cout<<p.numpassport<<endl;
  cout<<p.num_tel;
}
istream& operator>>(istream& in ,passager& p)
{
   cout<<"saisir le nom:";
   in>>p.nom;
   cout<<"saisirle prenom:";
   in>>p.prenom;
   cout<<"saisir le numerode la carte d’identité:";
   in>>p.CIN,
   cout<<"saisir le num passport";
   in>>p.numpassport;
   cout<<"saisir le num_tel";
 in>>p.num_tel;
return in;
}
istream& operator>>(istream& in ,passager* p)
{

   in>>p->nom;

   in>>p->prenom;

   in>>p->CIN,

   in>>p->numpassport;

   in>>p->num_tel;
return in;
}
ostream& operator<<(ostream& out ,passager* p)
{
  out<<p->nom<<" ";
  out<<p->prenom<<" ";
  out<<p->CIN<<" ";
  out<<p->numpassport<<" ";
  out<<p->num_tel;
  return out;
}




