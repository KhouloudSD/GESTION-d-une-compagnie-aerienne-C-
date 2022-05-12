#ifndef DATE_H
#define DATE_H
#include <iostream>

using namespace std;


class date
{

        int jour, mois, annee;
    public:
        date(int=0,int=0,int=0);
        friend ostream& operator<<(ostream&,date&);
        friend istream& operator>>(istream&,date&);

        friend ostream& operator<<(ostream&,date*);
        friend istream& operator>>(istream&,date*);

        bool operator==(date);
        bool operator<(date );
        virtual ~date();



};

#endif // DATE_H

