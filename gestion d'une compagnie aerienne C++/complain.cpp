#include "complain.h"

/*complain::complain(string f,string l,string num)
{
    f_name = f;
    l_name = l;
    p_num = num;
}*/
complain::complain (passager ptr)
{
    f_name = ptr.get_nom();
    l_name = ptr.get_prenom();
    p_num =ptr.get_num_tel();
}
ostream& operator<<(ostream& out ,complain& c)
{
    out<<"first name :  "<<c.f_name<<endl<<"last name :  "<<c.l_name<<endl<<"number phone : "<<c.p_num<<endl;
    return out;
}
void  complain::type()
	{
		back:
		cout<<endl<<endl<<"Enter the type of complain you want to register:\n1.Airport Handling\n2.Baggage Delivery\n3.Booking and ticketing\n4.Other\n";
		choice = getch();
		cin.ignore();
		cout<<"Enter your complain:\n";
		if(choice==49)
		{
			cout<<"Airport Handling: ";
			types = "Aiprort Handling: ";
		}
		else if(choice==50)
		{
			cout<<"Baggage Delivery: ";
			types = "Baggage Delivery: ";
		}
		else if(choice==51)
		{
			cout<<"Booking and Ticketing: ";
			types = "Booking and Ticketing: ";
		}
		else if(choice==52)
		{
			cout<<"Other: ";
			types = "Other: ";
		}
		getline(cin,sentence);
		cout<<endl<<"Do you want to edit your complain(y/n): ";
		ch=getch();
		if(ch=='Y'||ch=='y')
			goto back;
		else
		{
			cout<<endl<<"Complain noted!\n";
			ofstream outfile;
			outfile.open("complain.txt");
			outfile<<"Name: "<<f_name<<" "<<l_name<<endl
			<<"Phone: "<<p_num<<endl
			<<"Complain:\n"<<types<<sentence;
			outfile.close();
			sleep(3);
		}
	}
complain::~complain()
{
    //dtor
}
