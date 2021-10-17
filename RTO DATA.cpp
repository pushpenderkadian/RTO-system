//Main file for the RTO system                   

#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include "showroom.h"                    //user defined header file for class showroom
#include "customer.h"					//user defined header file for class customer
#include "insurance.h"				   //user defined header file for class insurance
using namespace std;


void allshowroomwork()                       //function for Showroom work
{
	showroom S;
	int x;
	cout<<"\t\t\t***************************************************************\n";
	cout<<"\t\t\t**\tPress 1 to add NEW CAR to your showroom              **\n"
	    <<"\t\t\t**\tPress 2 to add the details of a new registered car   **\n";
	cout<<"\t\t\t***************************************************************\n";
	cin>>x;
	if(x==1)
	S.add_new_car();
	if(x==2)
	S.add_new_registration();
}
void customerrelated()                        //function for Customer work
{
	customer C;
	int y;
	cout<<"\t\t\t*********************************************************************\n";
	cout<<"\t\t\t**\tEnter 1 to see the cars of companies available now to buy  **\n"
	    <<"\t\t\t**\tEnter 2 to search a pre-registerd vehicle's information    **\n";
	cout<<"\t\t\t*********************************************************************\n";
	cin>>y;
	if(y==1)
	C.showcase();
	if(y==2)
	C.find_detail();
}
void allinsurancework()                        //function for insurance work
{
	insurance I;
	int y;
	cout<<"\t\t\t****************************************************\n";
	cout<<"\t\t\t**\tEnter 1 to renew the pre-insured vehicle  **\n"
	    <<"\t\t\t**\tEnter 2 to take responsiblty of repair    **\n"
	    <<"\t\t\t**\tEnter 3 to provide claim amount           **\n";
	cout<<"\t\t\t****************************************************\n";
	cin>>y;
	if(y==1)
	I.renew_insurance();
	if(y==2)
	I.damage_repair();
	if(y==3)
	I.lost_claim();
	
}
void banner()                                  //function for display of bannner
{
	
	cout<<"\t\\\\<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>//\n";
	cout<<"\t\t\\\\<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>//\n";
	cout<<"\t\t\t\\\\<><><><><><><><><><><><><><><><><><><><><><><><><><><><><>//\n";
	cout << "\t\t\t\t\t\tWELCOMEE"<<endl;
  	cout.flush();
  	sleep(2);  	                                        //sleep is used for a delay of time to execute the next statement
	cout << "\t\t\t\t\t\t   TO\n";
  	cout.flush();
  	sleep(2);
  	cout << "\t\t\t\t\t\t EXOTIC\n";
  	cout.flush();
  	sleep(2);
  	cout << "\t\t\t\t\t\t WHEELS\n";
  	cout.flush();
  	sleep(2);
  	cout << endl;
  	
}
int main()                                            //main function
{
	char m;
	char z;
	
	//Employee ids and there passwords
	
	string Empid,Pass,Empid1="Exotic_Wheels",Pass1="exo@tic",Empidinsure="Ins_Exo_Wheels",Passinsure="Ins@1234";    
	
	start:                     //start tag     
		banner();                               //function called
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<"\t\t\tThis is the main entry to the RTO system.\n"
	    <<"\t\t\tHOW You wanna to enter\n"
	    <<"\t\t\tPress 1 to enter as a SHOWROOM employee\n"
	    <<"\t\t\tPress 2 to enter as a Customer/Owner of a car\n"
	    <<"\t\t\tPress 3 to enter as a Insurance Company employee\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	cin>>z;
	if(z=='1')
	{
		cout<<"\t\t\tYou have entered as a SHOWROOM employee\n"
		    <<"\t\t\tEnter your Employee ID:- ";
		cin>>Empid;
		cout<<endl<<"\t\t\tEnter your Password:- ";
		cin>>Pass;
		system("database.bat");
		system("cls");
		
		if(Empid==Empid1 && Pass==Pass1)
			allshowroomwork();                          //function called 
		else
		cout<<"\n\t\t\t!!You enterd a Wrong combination!!\n";
	}
	if(z=='2')
	{
		system("database.bat");
		system("cls");
		cout<<"\t\t\tYou have entered as a Customer:-\n";
		customerrelated();                                           //function called
	}
	if(z=='3')
	{
		cout<<"\t\t\tYou have entered as a INSURANCE employee\n"
		    <<"\t\t\tEnter your Employee ID:- ";
		cin>>Empid;
		cout<<endl<<"\t\t\tEnter your Password:- ";
		cin>>Pass;
		system("database.bat");
		system("cls");
		if(Empid==Empidinsure && Pass==Passinsure)
			allinsurancework();                                          //function called
		else
		cout<<"\n\t\t\t!!You enterd a Wrong combination!!\n";
	}
	else{
	}
	cout<<"\n\n---------------------------------------------------------------------------------------------------------";
	cout<<"\n\n\n\t\t\tDo You wanna go to start or wanna exit??\n"
	    <<"\t\t\tPress S for start\n\t\t\tPress E for exit\n";
	cin>>m;
	// last ending of the program and User has choice to go to the starting
	if(m=='S' || m=='s')
	{
		cout<<"\n\n------------------------------------------------------------------------------------------------------\n\n";
		system("cls");                                           //clear screen
		goto start;
	}
	if(m=='E' || m=='e')
	{}
	cout<<"\t\t\t\t\tTHANKS FOR VISITING\n";
	cout<<"\t\t\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
	cout<<"\t\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
	cout<<"\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
	
	return 0;
}
