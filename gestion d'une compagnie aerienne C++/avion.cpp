#include "avion.h"
#include"vol.h"
avion::avion(int a ,string ch , int n)
{
  referance=a;
  type=ch;
  capacite=n;
}
ostream& operator<<(ostream& out ,avion& a)
{
     cout<<"referance:";
            out<<a.referance<<endl;
            cout<<"type:";
            out<<a.type<<endl;
            cout<<"capacacité:"<<endl;
            out<<a.capacite;
            return out;

}

ostream& operator<<(ostream& out ,avion* a)
{
    out<<setw(10)<<a->referance<<" "<<setw(10)<<a->type<<" "<<setw(10)<<a->capacite;
    return out;
}

void avion::creer(fstream& f)
{
      f.open("E:\\avion.txt",ios::in|ios::out|ios::trunc);
      if (!f.is_open()) exit (-1);
}

 void avion::remplir(fstream&f )
{
f.open("E:\\avion.txt",ios::app);
      if (!f.is_open()) exit (-1);
    avion *a= new avion  ;
    int b;
    cout<< " combien vous voulez ajouter d'avion: ";
    cin>>b;

    for( int i=0;i<b;i++)
    {
        cout<<"saisir les informations du  "<<(i+1)<<" ieme avion"<<endl;
        cin>>*a;
        f<<a<<endl ;
    }
}

istream& operator>>(istream& in ,avion* a)
{
   in>> a->referance;
   in>> a->type;
   in>> a->capacite;
   return in ;
}

void avion::afficher(fstream& f)
{
    avion *a =new avion;
    f.seekg(0);
    while(1)
    {
        f>>a;
        if(f.eof()) break;
        cout<<*a<<endl;
    }
}


istream& operator>>(istream& in ,avion& a)
{
   cout<<"donner le reference : ";
   in>>a.referance;
   cout<<"donner le type : ";
   in>>a.type;

   cout<<"donner la capacite : ";
   in>>a.capacite;

   return in ;
}




avion::~avion()
{

}
