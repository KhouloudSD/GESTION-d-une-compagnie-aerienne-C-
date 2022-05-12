#ifndef PERSONNEL_H
#include<string>
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<iostream>
#define PERSONNEL_H
#include<string>
using namespace std;
#include<iostream>

class personnel
{
    friend class vol ;


    string nom, prenom, adresse,mail,metier;
    int CIN , numtele;
    float salaire;

    public:

        personnel(string ="",string="",string="",string="",string="",int=0,int=0,float=0);
        friend ostream& operator<<(ostream&,personnel&);
        friend istream& operator>>(istream&,personnel&);
         friend ostream& operator<<(ostream&,personnel*);
        friend istream& operator>>(istream&,personnel*);

         friend vector<personnel> list_personnels(fstream& );
         friend void charger (fstream& , vector<personnel> );



        static void creer(fstream&);
        static void remplir(fstream&);

        friend vector<personnel> list_personnels(fstream& );
         friend void charger (fstream& , vector<personnel> );

         bool operator == (personnel);
        int rechercher(personnel);
        static void afficher(fstream&);
        ~personnel();


};

#endif // PERSONNEL_H
