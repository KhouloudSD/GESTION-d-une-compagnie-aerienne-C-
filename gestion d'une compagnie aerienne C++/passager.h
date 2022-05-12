#ifndef PASSAGER_H
#define PASSAGER_H

#include<string>
#include <iostream>
using namespace std;


class passager
{
    string nom,prenom,num_tel;
    int CIN ,numpassport;
    public:
         passager(string="",string="",string="",int=0,int=0);
        ~passager();
        string get_nom () {return nom;};
        string get_prenom() {return prenom ;};
        void set_num (string m) {num_tel = m;};
        void set_nom(string n) {nom=n;};
        void set_prenom (string n) {prenom =n;};
        string  get_num_tel() {return num_tel ;};
         friend ostream& operator<<(ostream&,passager&);
         friend istream& operator>>(istream&,passager&);
         friend ostream& operator<<(ostream&,passager*);
         friend istream& operator>>(istream&,passager*);
};

#endif // PASSAGER_H

