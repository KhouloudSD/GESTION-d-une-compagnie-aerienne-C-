#ifndef COMPAGNIE_H
#define COMPAGNIE_H
#include<string>
#include"vol.h"
#include "avion.h"
#include<unistd.h>
#include<conio.h>
#include<stdlib.h>

class vol;

class compagnie
{

    friend class aeroport;
    //friend class vol ;
    string nom_cpn;


    vector<vol> vols;
    public:
        compagnie(string="");

         void ajouter_vol(vol );
         void afficher_vols();
         void ajouter_avion();
         void afficher_avion();
         void supprimer_vol( vol);

         int recherche_vol();
         void recherche_vol(date , aeroport , aeroport);

         void ajouter_personnel();
         void afficher_personnel();

         void  afficher_listevol();
         vector<vol> getVOLS(){return vols;};
         void supprimer_supprimervol();

         void afficher_listepassagervol();
         void chercher_passager();
         void ajouter_passager();
         void supprimer_passager();

        static void creer(fstream&);
        virtual ~compagnie();


};

#endif // COMPAGNIE_H
