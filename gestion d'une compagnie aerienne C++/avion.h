#ifndef AVION_H
#define AVION_H
#include"string"
#include <iostream>
#include<vector>


#include"personnel.h"
using namespace std;
#include <iomanip>
#include <fstream>
class vol ;
class avion
{
    friend class vol;
    int referance ;
    string type;
    int capacite;

    public:
        avion(int=0,string="",int=0);
        friend ostream& operator<<(ostream& ,avion& );
        int get_referance (){return referance ;};

        friend istream& operator>>(istream&  ,avion& );
        friend void charger (fstream& , vector<avion> );
       getCAPACITE(){return capacite;};
        friend istream& operator>>(istream&  ,avion* );
        friend ostream& operator<<(ostream& ,avion* );
   friend vector<avion> list_avions(fstream& );
friend void charger (fstream& , vector<avion> );
        static void creer(fstream&);
        static void remplir(fstream&);


        static void afficher (fstream&);

        bool operator==(avion);
        //friend avion choisir_avion(date , heure );
        ~avion();


};






#endif // AVION_H

