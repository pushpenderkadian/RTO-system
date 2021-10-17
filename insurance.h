#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cstdlib>

using namespace std;




class insurance                                         //class declared
{
	private:                                            
		string vehicle_info,search_date,search_no,newdate;                              //members of a class
		int found1,found2;
		char a;
		
	public:
		void damage_repair()                                         //member function for the claim of insurance if car is damaged
		{
		    ifstream fin;
		    fin.open("vehicle.txt");                                //file opened
    		if(fin.fail())
    		{
    		    cout<<"\t\t\tInput file opening failed.\n";
    		    exit(1);
   			}
   			string search;
   			cout<<"\t\t\tPlease enter the Vehicle Number \n";
    		cin>>search;
    		bool isfound=0;
    		while (!fin.eof())
    		{
    		    string temp="";
        		getline(fin,temp);
        		for (int i = 0; i < search.size(); i++)
        		{
        		    if (temp[i]==search[i])                                                //search function
            		{
            		    isfound=1;
            		}
            		else
           			{
            	    	isfound=0;
            		    break;
            		}  
        		}
        		if (isfound)
    	    	{
    	    		cout<<"Checking ";
    				cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);                                        //sleep is used for a delay of time to execute the next statement
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".\n";
					cout<<"\n\t\t\t!!Data found!!\n";
            		cout<<"\n\t\t\tGo to room number 3 for your damage repair\n\n\n";
            		break;
        		}   
    		}
   			if ((!fin.eof())&&(isfound=0))  
    		{
    			cout<<"Checking ";
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
    		    cout<<"\n\t\t\t!!Your vehicle not registered!!\n\n";
    		}
    		fin.close();                                                //file closed
		}
		
		
		
		
		
		void renew_insurance()                                         //member function for renew of date 
		{
			fstream renew("vehicle.txt");          //file opened
		    cout<<"\t\t\tEnter the vehicle no for renew of date :- ";
		    cin.ignore();
		    getline(cin,search_no);
		    cout<<"\n\t\t\tEnter the new date :- ";
			getline(cin,newdate);
			while(renew>>vehicle_info)
			{
				if(!vehicle_info.compare(search_no))
				{
					cout<<"\n\t\t\tSearching for the data \n";
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
					cout<<"!!Found!!";
					cout<<"\n\t\t\tRenewing the date\n\t\t\tPls wait \n";
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
					renew.seekp(415,ios::cur);
					renew<<newdate;
					cout<<"\n\n!!Date renewed!!\n Now, Car's Owner can check the details by logging in as a Customer ";
					break;
				
				}
				
			}
		    
    		
		
			renew.close();                           //file closed
    
   		}
	
		void lost_claim()
		{
			ifstream fin;
		    fin.open("vehicle.txt");                                //file opened
    		if(fin.fail())
    		{
    		    cout<<"\t\t\tInput file opening failed.\n";
    		    exit(1);
   			}
   			string search;
   			cout<<"\t\t\tPlease enter the Vehicle Number \n";
    		cin>>search;
    		bool isfound=0;
    		while (!fin.eof())
    		{
    		    string temp="";
        		getline(fin,temp);
        		for (int i = 0; i < search.size(); i++)
        		{
        		    if (temp[i]==search[i])                                                //search function
            		{
            		    isfound=1;
            		}
            		else
           			{
            	    	isfound=0;
            		    break;
            		}  
        		}
        		if (isfound)
    	    	{
    	    		cout<<"\n\nChecking ";
    				cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);                                        //sleep is used for a delay of time to execute the next statement
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".";
					cout.flush();
  					sleep(1);
					cout<<".\n";
					cout<<"\n\t\t\t!!Data found!!\n";
            		cout<<"\n\t\t\tHave you these documents available"<<endl;
					cout <<"\n\t\t\tIf Yes Then Press Y and if not then presss N"<<endl;
					cout<<"\n\t\t\t1. FIR of your lost vehicle"<<endl;
					cin>>a;
					if (a=='N' || a=='n')
					{
						cout<<"\t\t\t Please bring your FIR copy"<<endl;
						goto last;
					}
					cout<<"\t\t\t2. Your Insurance copy"<<endl;
					cin>>a;
					if (a=='N' || a=='n')
					{
						cout<<"\t\t\tPlease bring your Insurance copy"<<endl;
						goto last;
					}
					else
					{
						goto onest;
					}
					onest:
					cout<<"\t\t\t3. Your Registration Certificate copy or RC"<<endl;
					cin>>a;
					if (a=='N' || a=='n')
					{
						cout<<"\t\t\tPlease bring your Registration Certficate or RC copy"<<endl;
						goto last;
					}
					else
					{
						goto secnd;
					}
					secnd:
					cout<<"\t\t\t4. Your Licence copy"<<endl;
					cin>>a;
					if (a=='N' || a=='n')
					{
						cout<<"\t\t\tPlease bring your Licence copy"<<endl;
						goto last;
					}
					else
					{
						goto third;
					}
					third:
					cout<<"\t\t\t5. Your Identification proof copy"<<endl;
					cin>>a;
					if (a=='N' || a=='n')
					{
						cout<<"\t\t\tPlease bring your identification proof copy"<<endl;
						goto last;
					}
					else
					{
						goto done;
					}
					done:
					{
						cout<<"\t\t\tYour documents are verified ...\n\t\t\t!!Your claimed will be transferred in next 15 working days!!"<<endl;
					}
            		break;
					}   
    		}
   			if ((!fin.eof())&&(isfound=0))  
    		{
    			cout<<"\n\n\nChecking ";
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
    		    cout<<"\n\t\t\t!!Your vehicle not registered!!\n\n";
    		}
			last:
    		fin.close(); 
		}

};
