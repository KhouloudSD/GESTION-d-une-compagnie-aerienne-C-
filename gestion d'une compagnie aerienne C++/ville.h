#ifndef VILLE_H
#define VILLE_H
#include <iostream>
#include <string>

using namespace std;
class ville
{
    string nomVille;
    public:
        ville(string="");
        friend ostream& operator<<(ostream&,ville&);
        friend istream& operator>>(istream&,ville&);
         friend ostream& operator<<(ostream&,ville*);
        friend istream& operator>>(istream&,ville*);


        ~ville();


};

#endif // VILLE_H

