#include "vol.h"

vol::vol()
{

    ouv= true;
    prix=0.0 ;
}




void vol::ajouter_passagerr(passager & p)
{
    cout<<p;
    cout<<"-----------";
    if(av.getCAPACITE()>passg.size())
    {
      passg.push_back(p);
      cout<<"le passager est bie ajouter"  ;
    }
    else

     cout<<"echec d'ajout";
}




istream& operator>>(istream& in, vol* v)
{

    in>>&v->date_arrive;
    in>>&v->date_dapart;
    in>>&v->aeroport_arv;
    in>>&v->aeroport_dep;
    in>>&v->heure_arrive;
    in>>&v->heure_depart;
    int n , z ,y ;
    in>>n;
    for(int i ; i<n;i++)
    {
        in>>&v->per[i];
    }
    in>>z;
    for(int i ; i<z;i++)
    {
        in>>&v->passg[i];
    }
    in>>y;
    for(int i ; i<z;i++)
    {
        in>>&v->escales[i];
    }
    in>>v->ouv;





    return in;
}




ostream& operator<<(ostream& out ,vol* c)
{
    out<< &c->date_arrive<<" "<<&c->date_dapart<<" "<<&c->aeroport_arv<<" "<<&c->aeroport_dep<<" ";
    out<<&c->heure_depart<<" "<<&c->heure_arrive<<" ";
    int n=c->per.size();
    out<<n<<" ";
    for(long long int i =0 ; i<n; i++)
    {
        out<<&c->per[i]<<" ";
    }
    int z=c->passg.size();
    out<<z<<" ";
    for(long long int i=0;i<z;i++)
    {
        out<<setw(10)<<&c->passg[i]<<" ";
    }

    int y =c->escales.size();
    out<<y<<" ";
    for(long long int i=0;i<y;i++)
    {
        out<<setw(10)<<&c->escales[i]<<" ";
    }
     out<<c->ouv;
    return out;
}







istream& operator>>(istream& in, vol& v )
{
    v.ajouter_per(v.per);
    cout<<"donner l'heure de depart et d'arrive du vol"<<endl;
    cin>>v.date_arrive;
    cin>>v.date_dapart;
    cin>>v.aeroport_arv;
    cin>>v.aeroport_dep;
    cout<<"donner l'heure d'arrive et de depart : "<<endl;
    cin>>v.heure_arrive;
    cin>>v.heure_depart;
    v.ouv=1;

    cout<<"saisir combien vous voulez affecter personnel a cette vol:";
    int n ;
    cin>>n;


    v.av=v.choisir_avion();

    v.ajouter_escale(v.escales);








    return in;
}


ostream& operator<<(ostream& out ,vol& c)
{
    out<<c.date_arrive;
    out<<c.date_dapart;
    out<<c.aeroport_arv;
    out<<c.aeroport_dep;
    out<<c.heure_depart;
    out<<c.heure_arrive;
    out<<c.ouv;
    int n=c.per.size();
    out<<c.av;
    for(long long int i =0 ; i<n; i++)
    {
        out<<c.per[i];
    }

    int z=c.passg.size();
    for(long long int i=0;i<z;i++)
    {
        out<<c.passg[i];
    }


    int y=c.escales.size();
    for(long long int i=0;i<y;i++)
    {
        out<<c.escales[i];
    }


    return out;
}

void vol::ouvrir_vol()
{
 ouv=true;
}
void vol::fermer_vol()
{
    ouv = false;
}


void vol::ajouter_escale(vector<escale>&es)
{
    int n;
    cout<<"donner le nb des ascales : ";
    cin>>n;



         for(int i=0;i<n;i++)
         {
            escale e;

           cout<<"_______"<<endl;
            cout<<e;
          cout<<"__________"<<endl;
            cin>>e;
            es.push_back(e);
         }

}


void vol::ajouter_per(vector<personnel>& per)
 {
      vector<personnel> v;
     fstream f ;
    f.open("E:\\personnel.txt",ios::in);
      if (!f.is_open()) exit (-1);

    personnel *a =new personnel;
    f.seekg(0);
    while(1)
    {
        f>>a;

        v.push_back(*a);
        if(f.eof()) break;
    }
    f.close();
     int i;

     for( int j=0;j<v.size();j++)
     {
         cout<<"["<<j<<"]"<<":          "<<v[j];
     }
    int n;
    cout<<"saisir combien vous voulez affecter personnel a cette vol:";
    cin>>n;
    cout<<"saisit le numero du personnel que vous voulez affecter a cette vol:"<<endl;

    for(int j=0;j<n;j++)
    {
       cin>>i;
       per.push_back(v[i]);
    }

 }


  avion vol::choisir_avion()
 {


     int choix ;
     vector<avion> v;
     fstream f ;
                 f.open("E:\\avion.txt",ios::in);
                 if (!f.is_open()) exit (-1);

                 avion *a =new avion;
                 f.seekg(0);
                 while(1)
                  {
                   f>>a;

                   v.push_back(*a);
                   if(f.eof()) break;
                   }
               f.close();
     //avion a;



     long long int i;
     int z=v.size();
     for(  i=0;i<z;i++)
     {
         cout<<"["<<i<<"]"<<":          "<<v[i];

     }
     cin>>choix;
     //a=v[i];
     //return a ;
     return v[choix];

 }

vol::~vol()
{
    //dtor
}
