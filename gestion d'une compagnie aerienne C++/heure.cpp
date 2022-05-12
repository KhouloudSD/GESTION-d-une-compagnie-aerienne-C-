#include "heure.h"
#include<iostream>
using namespace std ;
#include<string>

heure::heure(int a,int b)
{
    hour=a;
    minute=b;
}


istream& operator>>(istream& in ,heure& h)
{
    cout<<"saisir l'heure:";
    in>>h.hour;
    in>>h.minute;
    return in;

}
bool heure::operator==(heure t1)
 {
     if (hour==t1.hour && minute==t1.minute)
        return true;
    return false;
 }

bool heure::operator<(heure h1)
{
    if(hour<h1.hour)

      return true;


    if(hour==h1.hour)
        {

             if(minute<h1.minute)

                return true;
             if(minute>h1.minute)
                return false;
       }

     if(hour>h1.hour)
        return false;
   return true;

}




ostream& operator<<(ostream& out ,heure& h)
{
    out<<h.hour<<":"<<h.minute<<":00";
    return out;
}



ostream& operator<<(ostream& out ,heure* h)
{
    out<<h->hour<<" "<<h->minute;
    return out;
}

istream& operator>>(istream& in ,heure* h)
{

    in>>h->hour;
    in>>h->minute;


    return in;

}



heure::~heure()
{
    //dtor
}
