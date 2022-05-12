#include "compagnie.h"
#include "vol.h"

compagnie::compagnie(string ch)
{
   nom_cpn=ch;
}







void compagnie::creer(fstream& f)
{
      f.open("E:\\vol.txt",ios::in|ios::out|ios::trunc);
      if (!f.is_open()) exit (-1);
}

void compagnie::ajouter_vol(vol v)
{
    cin>>v;
    vols.push_back(v);

}

void compagnie::afficher_vols()
{

    vector<vol> v;
    fstream f ;

                 f.open("E:\\vol.txt",ios::in);
                 if (!f.is_open()) exit (-1);

                 vol *a =new vol;
                 f.seekg(0);
                 int i =0;
                 while(1)
                  {
                   f>>a;

                   v.push_back(*a);
                   if(f.eof()) break;
                   cout<<a;
                   i++;
                   }
               f.close();

}
void compagnie::recherche_vol(date dep , aeroport adep , aeroport aariv)
{
     long long int z=vols.size() ;
     long long int i=0;
     while (i<z)
     {
        if ((vols[i].get_date_dep()==dep) && (strcmp(vols[i].aeroport_dep.get_nom().c_str(), adep.get_nom().c_str())==0 ) && (strcmp(vols[i].aeroport_arv.get_nom().c_str() , aariv.get_nom().c_str())==0 ))
         {
             cout<<vols[i];
             i++;
         }
         else i++;
     }
}
void compagnie::supprimer_vol( vol v)
{
       long long int z=vols.size() ;
       long long int i=0;
       while(i<z)
       {
         if ((vols[i].get_date_dep()==v.get_date_dep()) &&(vols[i].get_av().get_referance()==v.get_av().get_referance() ))
         {
            vols.erase(vols.begin()+ i);
         }
       }
       cout<<"cette vol n'existe pas "<<endl;
}
void compagnie::ajouter_passager()
{
    long long int i;
   passager p;
   int choix;
     int z=vols.size();
     for(  i=0;i<z;i++)
     {
         cout<<"["<<i<<"]"<<":          "<<vols[i];

     }
     cin>>choix;
     cout<<"saisir les ifos du passager"<<endl;
     cin>>p;

     vols[i].ajouter_passagerr(p);
     cout<<"**************"<<endl;
}
compagnie::~compagnie()
{
    vols.clear();
}

