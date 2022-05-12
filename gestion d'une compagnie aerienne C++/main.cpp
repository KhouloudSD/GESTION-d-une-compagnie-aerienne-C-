#include <iostream>
using namespace std;
#include<string>
#include "vol.h"
#include"personnel.h"
#include"compagnie.h"
#include "complain.h"
#include "compagnie.h"
#include "about.h"
#include <vector>
#include <fstream>


#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
void Title()
{
    system("COLOR 7C");
    printf("\n\t\t\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5");
    cout<<endl;
    printf(ANSI_COLOR_YELLOW"\n\t\t                 Welcome to TUNISAIRE Airline               "ANSI_COLOR_RESET);
    cout<<endl;
    system("COLOR 7C");
    printf("\n\t\t\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5");
	cout<<endl;
	cout<<ANSI_COLOR_RED"\nPress Enter to continue: "ANSI_COLOR_RESET;
	getch();
    system("cls");
}

void enregistrer (fstream& f, vector<vol> v)
{

    f.open("E:\\vol.txt",ios::app);
      if (!f.is_open()) exit (-1);
    vol *a= new vol  ;
    int z=v.size();
    for(long long int i =0; i <z;i++)
              {
                 *a=v[i];
                 cout<<*a;
                 f<<a;
              }
               f.close();
}



void charger (fstream& f, vector<avion> v)
{

    f.open("E:\\avion.txt",ios::app);
      if (!f.is_open()) exit (-1);
    avion *a= new avion  ;
    int z=v.size();
    for(long long int i =0; i <z;i++)
              {
                 *a=v[i];
                 cout<<*a;
                 f<<a;
              }
               f.close();
}

   vector<avion> list_avions(fstream& f)
{
                 vector<avion> v;
                 f.open("E:\\avion.txt",ios::in);
                 if (!f.is_open()) exit (-1);

                 avion *a =new avion;
                 f.seekg(0);
                 while(1)
                  {
                   f>>a;

                   v.push_back(*a);
                   if(f.eof()) break;
                   }
               f.close();
               return v;
}

vector<personnel> list_personnels(fstream & f )
{

    vector<personnel> v;

    f.open("E:\\personnel.txt",ios::in);
      if (!f.is_open()) exit (-1);

    personnel *a =new personnel;
    f.seekg(0);
    while(1)
    {
        f>>a;

        v.push_back(*a);
        if(f.eof()) break;
    }
    f.close();
    return v ;
}
void charger (fstream& f, vector<personnel> v)
{
           f.open("E:\\personnel.txt",ios::app);
           if (!f.is_open()) exit (-1);
           personnel * p=new personnel;
           int z=v.size();
              for(long long int i =0;i<z;i++)
           {
               *p=v[i];
               f<<p;
              }
               f.close();
};


int main()
{

    /*

    choice = getch();
	system("cls");
	switch(choice)
	{
		case 49:
			{
                break;
			}

			case 50:	//choice = 2
				{
                      break;
				}

			case 51:	//choice = 3
				{
					getch();
					system("cls");
					goto back2;
					break;
				}

			case 52:	//choice = 4
				{
					cout<<">>>>>>>>>>COMPLAINT<<<<<<<<<<<\n";

					system("cls");
					goto back2;
					break;
					break;
				}
			case 53://choice = 0
				{
			        system("cls");
					goto back2;
					break;
				}

			default:
				cout<<endl<<endl<<"ERROR!!!";
				goto back2;
	}


    */

















/*
int choix;
   compagnie c("tunisair");

    char rep;
    system("color");
    do
    {
        system("cls");
        printf("\n\n\t\t\t\t***************************************************************\n");
        printf(ANSI_COLOR_RED"\t\t\t\t*--------------- Base de donnees de la compagnie--------------*\n"ANSI_COLOR_RESET );
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 1  : Ajouter avion                                 *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 2  :  Afficher la liste  des avions                *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 3  : ajouter personnel                             *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 4  : Afficher la liste des personnels              *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 5  : ajouter vols                                  *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 6  : afficher la liste des  vols                   *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 7  : ajouter passager ( client side )              *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 8  : COMPLAIN                                      *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 9  : ABOUT US                                      *\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_CYAN"\t\t\t\t* 0  : Quitter L'application                         *\n"ANSI_COLOR_RESET);
        printf("\t\t\t\t***************************************************************\n");
        printf("\n");
        printf(ANSI_COLOR_YELLOW"Veuillez taper l'un de ces nombres disposes ci dessus:"ANSI_COLOR_RESET);
       cin>>choix;

        switch(choix)
        {
          case 0:
            goto FIN;
            break;
        case 1:

              avion a ;
             c.ajouter_avion();
            break;
        case 2:
            c.afficher_avion();


            break;
        case 3:
            c.ajouter_personnel();
            break;
        case 4:
            c.afficher_personnel();
            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        default:
            printf(ANSI_COLOR_MAGENTA"!Votre choix doit etre compris entre 0 et 10!.\n"ANSI_COLOR_RESET);
            break;
        }
        printf(ANSI_COLOR_MAGENTA"\n\n Voulez-vous continuez O/N?:"ANSI_COLOR_RESET);
        cin>>rep;
        fflush(stdin);
    }
    while(rep=='o'|| rep=='O');
FIN:
    printf(ANSI_COLOR_RED "\n\t\t\t\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED"\3"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN"Merci d'avoir utiliser notre"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN" logiciel"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED"\3"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n "ANSI_COLOR_RESET);

    getch();



    /*


    Title();
    system("COLOR 7C");
	//cout<<"\n\t\t\t\t COMPUTER PROGRAMMING LAB PROJECT\n\t\t\t\t  FLIGHT MANAGEMENT SYSTEM";
	//cout<<"\nPress Enter to continue: ";

	//cout<<endl<<"\n\n\n\t\t\t---------Welcome to TUNISAIRE Airline---------"<<endl;
	string f_name, l_name, add, pass_no,phone_no;





















*/
    compagnie c("tunisaire") ;

    fstream f;

/*
   int n ;
   vector<avion> aav,avv ;

   cout<<"donner le nb des avions "<<endl;
   cin>>n;
   for(int i =0;i<n;i++)
   {
      avion v;
      cin>>v;
      avv.push_back(v) ;
   }
   charger(f,avv);
   */

/*
                 f.open("E:\\avion.txt",ios::in);
                 if (!f.is_open()) exit (-1);

                 avion *a =new avion;
                 f.seekg(0);
                 while(1)
                  {
                   f>>a;

                   aav.push_back(*a);
                   if(f.eof()) break;
                   }
                   long long int i;
     int z=aav.size();
     for(  i=0;i<z;i++)
     {
         cout<<"["<<i<<"]"<<":          "<<aav[i];

     }
               f.close();
               /*
    aav=list_avions(f);
    cout<<endl<<"__________________lire a partir du fichier"<<endl;
    for(int i=0;i<aav.size();i++)
    {

        cout<<aav[i];
    }
*/
/*
vector<personnel> pp;
    pp=list_personnels(f);
    cout<<endl<<"__________________lire a partir du fichier"<<endl;
    int a=pp.size();
    for(long long int i=0;i<a;i++)
    {

        cout<<pp[i];
    }


*/

/*

 int z ;
   vector<personnel> p1,p2 ;

   cout<<"donner le nb des personnel "<<endl;
   cin>>z;
   for(int i =0;i<z;i++)
   {
      personnel p;
      cin>>p;
      p1.push_back(p) ;
   }
   charger(f,p1);
*/
    int nb;

    cout<<"nbre of vols = ";
    cin>>nb;
    for (int i=0; i<nb; i++)
    {
            vol v;
            c.ajouter_vol(v);

    }
     enregistrer(f,c.getVOLS());
for(int i=0;i<c.getVOLS().size();i++)
{
    cout<<c.getVOLS()[i];
}



    c.afficher_vols();






























/*
    cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;

     avion a ;
    c.ajouter_avion();
    cout<<endl<<"*************affichage le continue du vecteure**********************"<<endl;
    c.afficher_avion();

      vector<avion> v =c.getAVI();


      cout<<endl<<"_______________________________________________________________________"<<endl;
    charger(f,v);
*/

    /*
    cout<<endl<<"persnnel"<<endl;

    personnel p ;
    c.afficher_avion();
     c.ajouter_personnel();
    cout<<endl<<"*************affichage le continue du vecteure**********************"<<endl;
    //c.afficher_personnel();
    fstream f2;
    vector<personnel> v1 =c.getPERS();
    charger(f,v1);
    vector<personnel> pp ;
    pp=list_personnels(f);
    cout<<endl<<"__________________lire a partir du fichier"<<endl;
    int a=pp.size();
    for(long long int i=0;i<a;i++)
    {

        cout<<pp[i];
    }
*/








      return 0;
}
