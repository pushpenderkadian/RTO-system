#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cstdlib>

using namespace std;



class showroom                                                //class showroom
{
	//                                    members of class Showroom 
	private:
		string name , color , gear_type , fuel_types , company , search;
		int price , mileage , seating_capacity , Case , found , countc;
		string  vehicle_number , vehicle_name , owner_name , fuel , gear , colour , reg_date , expiry_date , insurance_expiry;
		
	public:
		void add_new_car()                                       //member function to add a new car in txt file 
		{
			ofstream new_car("SHOWCASE.txt", ios::out | ios::app);                 //file opened in write mode
			ifstream show_cars("SHOWCASE.txt", ios::in);                           //file opened in read mode
			cout<<"\t\t\t====================================================================\n";
			cout<<"\t\t\tEnter the new car details which you want to add in your showroom -: \n";
			cout<<"\t\t\tEnter the COMPANY of the car -:\n";
			cin.ignore();
			getline(cin,company);
			cout<<"\t\t\tEnter the NAME of the new car -:\n";
			getline(cin,name);
			cout<<"\t\t\tEnter the FUEL TYPES in which the car is available -:\n";
			getline(cin,fuel_types);
			cout<<"\t\t\tEnter the COLOR of the cars  which are available -:\n";
			getline(cin,color);
			cout<<"\t\t\tEnter in which GEAR TYPES is the car available -:\n";
			getline(cin,gear_type);
			cout<<"\t\t\tEnter the MILEAGE of the car -:\n";
			cin>>mileage;
			cout<<"\t\t\tEnter the SEATING CAPACITY of the car -:\n";
			cin>>seating_capacity;
			cout<<"\t\t\tEnter the price of the car (in LAKHS)-:\n";
			cin>>price;
			cout<<"\t\t\t====================================================================\n";
			while(getline(show_cars,search))
			{
				found=search.find("~");
				if(found>=0)
				{
					countc++;
				}
			}
			
			//		Adding a new car in showroom txt file
			
			new_car<<"\nCOMPANY -: "<<company<<"\n";
            new_car<<"NAME -: "<<name<<"\n";
            new_car<<"FUEL TYPES -: "<<fuel_types<<"\n";
            new_car<<"COLOR -: "<<color<<"\n";
            new_car<<"GEAR TYPE -: "<<gear_type<<"\n";
            new_car<<"MILEAGE -: "<<mileage<<"KM\n";
            new_car<<"SEATING CAPACITY -: "<<seating_capacity<<"\n";
            new_car<<"BASE PRICE -: "<<price<<"LAKHS\n";
            new_car<<"------------------------------------------------------------\n~\n"; 
            cout<<endl;
            cout<<"Processing ";
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
		    cout<<"\n\n\t\t\t!!New car has been succesfully added!!\n\t\t\t\t!!Check ur SHOWROOM!!\n\n";
		    
		    //Output used as a receipt
		    
		    cout<<"\t\t\tYour new car details:- \n";
		    cout   <<"\t\t\t------------------------------------------------------------\n";
		    cout<<"\n\t\t\tCOMPANY -: "<<company<<"\n";
            cout<<"\t\t\tNAME -: "<<name<<"\n";
            cout   <<"\t\t\tFUEL TYPES -: "<<fuel_types<<"\n";
            cout   <<"\t\t\tCOLOR -: "<<color<<"\n";
            cout   <<"\t\t\tGEAR TYPE -: "<<gear_type<<"\n";
            cout   <<"\t\t\tMILEAGE -: "<<mileage<<"KM\n";
            cout   <<"\t\t\tSEATING CAPACITY -: "<<seating_capacity<<"\n";
            cout   <<"\t\t\tBASE PRICE -: "<<price<<"LAKHS\n";
            cout   <<"\t\t\t------------------------------------------------------------\n";
		       
            new_car.close();                      //file closed
			show_cars.close();		              //file closed
        }
        
        
        
        
        
        
        void add_new_registration()                        //member function to register a new car to a customer
		{
			fstream new_registration("vehicle.txt",ios::in | ios::out | ios::app);                //file opened
			cout<<"\t\t\t==================================================================================\n";
			cout<<"\t\t\tEnter the REGISTRATION details of the car which has been bought from your showroom\n";
			cout<<"\t\t\tEnter the VEHICLE NUMBER of the car -:\n";
			cin.ignore();
			getline(cin,vehicle_number);
			cout<<"\t\t\tEnter the VEHICLE NAME which has been registered -:\n";
			getline(cin,vehicle_name);
			cout<<"\t\t\tEnter the OWNER NAME of the car -:\n";
			getline(cin,owner_name);
			cout<<"\t\t\tEnter the FUEL TYPE of the car -:\n";
			getline(cin,fuel);
			cout<<"\t\t\tEnter the GEAR TYPE of the car -:\n";
			getline(cin,gear);
			cout<<"\t\t\tEnter the DATE of which the vehicle was registered -:\n";
			cin>>reg_date;
			cout<<"\t\t\tEnter the EXPIRY DATE of the car (Should not exceed 15 years) -:\n";
			cin>>expiry_date;
			cout<<"\t\t\tEnter the INSURANCE EXPIRY date of the car -:\n";
			cin>>insurance_expiry;
			cout<<"\t\t\tEnter the COLOR of the new registered vehicle -:\n";
			cin.ignore();
			getline(cin,colour);
			cout<<"\t\t\t==================================================================================\n";
			
			
			
			
			new_registration<<vehicle_number<<"\n";
			new_registration<<"--------------------------------------------\n";
			new_registration<<"VEHICLE NUMBER -- "<<vehicle_number<<"\n";
			new_registration<<"VEHICLE NAME -- "<<vehicle_name<<"\n";
			new_registration<<"OWNER NAME -- "<<owner_name<<"\n";
			new_registration<<"FUEL TYPE -- "<<fuel<<"\n";
			new_registration<<"GEAR -- "<<gear<<"\n";
			new_registration<<"REG. DATE -- "<<reg_date<<"\n";
			new_registration<<"EXPIRY DATE -- "<<expiry_date<<"\n";
			new_registration<<"INSURANCE EXPIRY -- "<<insurance_expiry<<"\n";
			new_registration<<"COLOR -- "<<colour<<"\n";
			new_registration<<"--------------------------------------------\n";
			new_registration<<"~\n";
			cout<<endl;
			cout<<"Processing ";
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
			cout<<"\n\n\t\t\t!!New vehicle has been registered!!\n\n";
			
			//Output used as a receipt
			
			cout<<"\n\n\n\n\t\t\tYour registration details are :- \n";
			cout<<"\t\t\t--------------------------------------------\n";
			cout<<"\t\t\tVEHICLE NUMBER -- "<<vehicle_number<<"\n";
			cout<<"\t\t\tVEHICLE NAME -- "<<vehicle_name<<"\n";
			cout<<"\t\t\tOWNER NAME -- "<<owner_name<<"\n";
			cout<<"\t\t\tFUEL TYPE -- "<<fuel<<"\n";
			cout<<"\t\t\tGEAR -- "<<gear<<"\n";
			cout<<"\t\t\tREG. DATE -- "<<reg_date<<"\n";
			cout<<"\t\t\tEXPIRY DATE -- "<<expiry_date<<"\n";
			cout<<"\t\t\tINSURANCE EXPIRY -- "<<insurance_expiry<<"\n";
			cout<<"\t\t\tCOLOR -- "<<colour<<"\n";
			cout<<"\t\t\t--------------------------------------------\n";
			
		    new_registration.close();	                      //file closed
		 } 

};
