#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cstdlib>
using namespace std;

class customer{
	private:
		string car_number,cars,search,show;
		char check;                                                                      //private member of customer class
		int found,slxn;
		
		
	public:
		void find_detail()                              //member function for finding the details of a car by using Car Number
		{
			ifstream cars("vehicle.txt", ios::in);                    //file opened
			start1:
				cout<<"\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<"\t\t\tEnter the Number of Your car :- ";
			cin.ignore();
			getline(cin,car_number);
			cout<<endl<<"\n\n\t\t\tYou entered "<<car_number<<" this car number!!\n\t\t\tConfirm!!( press Y for yes and N for no)"<<endl;
			cin>>check;
			if(check=='Y' || check=='y')
			{
				cout<<"\t\t\tSearching for the data \n";
				cout.flush();
  				sleep(1);
				cout<<".";
				cout.flush();
  				sleep(1);                                                    //sleep is used for a delay of time to execute the next statement
				cout<<".";
				cout.flush();
  				sleep(1);
				cout<<".";
				cout.flush();
  				sleep(1);
				cout<<".\n";
				while(getline(cars,search))
				{
					
					found=search.find(car_number);
					if( found>=0)
					{
						cout<<endl<<"\n\t\t\t!!Data for the number entered is found!!\n"<<endl;
						while (getline(cars,show))
						{
							cout<<"\t\t\t"<<show<<endl;
							if(show=="~")                                   //ending of car search
								break;
						}
				
					}
				}
			}
			if(check=='N'||check=='n')
			{
				cin.ignore();
				goto start1;                                              //jump statement
			}
			cars.close();                                               //file closed
		}
		
		
		
		
		
		
		
		
		
		
		
		void showcase()                                          //member function to see cars in maarket to buy
		{
			ifstream show_cars("SHOWCASE.txt",ios::in);                  //file opened
			start2:
			cout<<"\t\t\tYou have 5 options to view the cars :-- \n"<<"\n\t\t\tPress 1 to see AUDI company's all cars \n\t\t\tPress 2 to see BMW all cars \n\t\t\tPress 3 to see MERCEDES companies all cars \n\t\t\tPress 4 to see TESLA companY'S all cars \n\t\t\tPress 5 to see all companies all cars \n\t\t\t\t\t ";
			cin>>slxn;
			cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			switch(slxn)
			{
				case 1:
					cout<<"\t\t\tYou are watching cars of AUDI company:-\n\n\nSEARCHING";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".\n";
					while(getline(show_cars,search))
					{
						found=search.find("COMPANY -: AUDI");                                   //find inside file
						if(found>=0)
						{
							while(getline(show_cars,show))
							{
								cout<<"\t\t\t"<<show<<endl;
								if(show=="~")
								break;
							}
						}
					}
					break;
				case 2:
					cout<<"\t\t\tYou are watching cars of BMW company:-\n\n\nSEARCHING";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".\n";
					while(getline(show_cars,search))
					{
						found=search.find("COMPANY -: BMW");
						if(found>=0)
						{
						while(getline(show_cars,show))
						{
							cout<<"\t\t\t"<<show<<endl;
							if(show=="~")
							break;
						}
						}
					}
					break;
				case 3:
					cout<<"\t\t\tYou are watching cars of MERCEDES company:-\n\n\nSEARCHING";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".\n";
					while(getline(show_cars,search))
					{
						found=search.find("COMPANY -: MERCEDES");
						if(found>=0)
						{
							while(getline(show_cars,show))
							{
								cout<<"\t\t\t"<<show<<endl;
								if(show=="~")
								break;
							}
						}
					}
					break;
				case 4:
					cout<<"\t\t\tYou are watching cars of TESLA company:-\n\n\nSEARCHING";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".\n";
					while(getline(show_cars,search))
					{
						found=search.find("COMPANY -: TESLA");
						if(found>=0)
						{
							while(getline(show_cars,show))
							{
								cout<<"\t\t\t"<<show<<endl;
								if(show=="~")
								break;
							}
						}
					}
					break;
				case 5:
					cout<<"\t\t\tYou are watching cars of all cars from our reputed comapnies:-\n\n\nSEARCHING";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".\n";
					while(getline(show_cars,show))
					{
						cout<<"\t\t\t"<<show<<endl;
					}
				break;
				default:
					cout<<"\t\t\t!!Oops!! You entered a wrong selection.\nTry Again";
				goto start2;
			}
			show_cars.close();                                           //file closed
		}
};
