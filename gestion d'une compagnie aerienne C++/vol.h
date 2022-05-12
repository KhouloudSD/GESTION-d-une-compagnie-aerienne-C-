#ifndef VOL_H
#define VOL_H
#include"aeroport.h"
#include<vector>
#include <iostream>
#include"date.h"
#include"avion.h"
#include"compagnie.h"
#include "escale.h"

#include"passager.h"
using namespace std;
class vol
{
    date date_dapart, date_arrive ;
    aeroport aeroport_dep,aeroport_arv;
    heure heure_depart , heure_arrive ;
    bool ouv ;
    float prix ;
    vector<passager> passg ;
    vector<personnel> per ;
    vector<escale>escales;
    avion av;
    public:
        friend class compagnie ;

        void ouvrir_vol();
        void fermer_vol();
        vol();
         friend vector<avion> charger  (fstream& );
         friend void enregistrer(fstream& , vector<avion> );
        friend ostream& operator<<(ostream&,vol&);
        friend istream& operator>>(istream&, vol&);
        friend istream& operator>>(istream&  ,vol* );
        friend ostream& operator<<(ostream& ,vol* );

        date get_date_dep () { return date_dapart;};
        avion get_av (){ return av;};
        void ajouter_passagerr(passager&);
        friend list_avions();
        avion choisir_avion();

        void  ajouter_escale(vector<escale>&);
       void ajouter_per(vector<personnel> &);
        void ajouter_per(personnel);
        virtual ~vol();



};

#endif // VOL_H
