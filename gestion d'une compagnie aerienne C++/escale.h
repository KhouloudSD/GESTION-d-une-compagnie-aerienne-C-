#ifndef ESCALE_H
#define ESCALE_H
#include"aeroport.h"
#include "heure.h"
using namespace std;

class escale
{
    friend class vol ;
    heure heure_de,heure_arv;
    aeroport esc ;

    public:

        escale(int=0,int=0,int=0,int=0,string="");
        friend ostream& operator<<(ostream&,escale&);
        friend istream& operator>>(istream&,escale&);
        friend ostream& operator<<(ostream&,escale*);
        friend istream& operator>>(istream&,escale*);

        virtual ~escale();


};

#endif // ESCALE_H

