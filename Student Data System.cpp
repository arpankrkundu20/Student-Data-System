#include<bits/stdc++.h>
using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
		int ch=0;
			cout<<"How many students do u want to enter: ";
			cin>>ch;
			if(total==0)
			{
			total=ch+total;
			for(int i=0;i<ch;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter Name: ";
				cin>>arr1[i];
				cout<<"Enter Roll no: ";
				cin>>arr2[i];
				cout<<"Enter Class: ";
				cin>>arr3[i];
				cout<<"Enter Section: ";
				cin>>arr4[i];
				cout<<"Enter Contact: ";
				cin>>arr5[i];
				
			}
	    	}
	    	else
	    	{
	    		
	    		for(int i=total;i<ch+total;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter Name: ";
				cin>>arr1[i];
				cout<<"Enter Roll no: ";
				cin>>arr2[i];
				cout<<"Enter Class: ";
				cin>>arr3[i];
				cout<<"Enter Section: ";
				cin>>arr4[i];
				cout<<"Enter Contact: ";
				cin>>arr5[i];
			}
			total=ch+total;
			}
	
}
void show()
{
	if(total==0)
	{
		system("cls") ;
		cout<<"\n\t\tNo data is entered\n"<<endl;
	}
	else{
		system("cls") ;
		for(int i=0;i<total;i++)
	    		{
	    		cout<<"\nData of Student "<<i+1<<endl<<endl;
	    		cout<<"Name: "<<arr1[i]<<endl;
	    		cout<<"Roll no: "<<arr2[i]<<endl;
	    		cout<<"Class: "<<arr3[i]<<endl;
	    		cout<<"Section: "<<arr4[i]<<endl;
	    		cout<<"Contact: "<<arr5[i]<<endl<<endl;
	    	    }
	    	}
}
void search()
{
	if(total==0)
	{
		system("cls") ;
		cout<<"\n\t\tNo data is entered\n"<<endl;
	}
	else{
	string roll,cls,sec;
				cout<<"Enter the Roll no: ";
				cin>>roll;
				cout<<"Enter the Class: ";
				cin>>cls;
				cout<<"Enter the Section: ";
				cin>>sec;
				for(int i=0;i<total;i++)
				{
					if(roll==arr2[i]&&cls==arr3[i]&&sec==arr4[i])
					{
						cout<<"Name: "<<arr1[i]<<endl;
	    	        	cout<<"Roll no: "<<arr2[i]<<endl;
	    		        cout<<"Class: "<<arr3[i]<<endl;
	    		        cout<<"Section: "<<arr4[i]<<endl;
	    	        	cout<<"Contact: "<<arr5[i]<<endl;
					}
					else{
						system("cls") ;
						cout<<"\n\t\tNo data found\n\n";}
				}
			}
}
void update()
{
	if(total==0)
	{
		system("cls") ;
		cout<<"\n\t\tNo data is entered\n"<<endl;
	}
	else{
		string roll,cls,sec;
		int uch;
				cout<<"Enter the Roll no: ";
				cin>>roll;
				cout<<"Enter the Class: ";
				cin>>cls;
				cout<<"Enter the Section: ";
				cin>>sec;
					for(int i=0;i<total;i++)
				{
					if(roll==arr2[i]&&cls==arr3[i]&&sec==arr4[i])
					{
						cout<<"\nPrevious data"<<endl<<endl;
						cout<<"Data of Student "<<i+1<<endl;
						cout<<"Name "<<arr1[i]<<endl;
	    	        	cout<<"Roll no. "<<arr2[i]<<endl;
	    		        cout<<"Class "<<arr3[i]<<endl;
	    		        cout<<"Section "<<arr4[i]<<endl;
	    	        	cout<<"Contact "<<arr5[i]<<endl;
	    	        	cout<<"\n\nChoose to update :"<<endl<<endl;
			        	cout<<"\t\tPress 1 to update Name"<<endl;
						cout<<"\t\tPress 2 to update Roll no"<<endl;
						cout<<"\t\tPress 3 to update Class"<<endl;
						cout<<"\t\tPress 4 to update Section"<<endl;
						cout<<"\t\tPress 5 to update Contact"<<endl;
						cin>>uch;
						switch(uch)
						{
							case 1: cout<<"Enter Name: ";
				        		    cin>>arr1[i];system("cls") ;
									break;
							case 2:cout<<"Enter Roll no: ";
			        				cin>>arr2[i];system("cls") ;
									break;
							case 3:cout<<"Enter Class: ";
			        				cin>>arr3[i];system("cls") ;
									break;
							case 4:cout<<"Enter Section: ";
			        				cin>>arr4[i];system("cls") ;
									break;
							case 5:cout<<"Enter Contact: ";
			        				cin>>arr5[i];system("cls") ;
									break;
							default:cout<<"Wrong Input"<<endl;
							break;	
						}
			    	}
			    	else{
			    		system("cls") ;
			    		cout<<"\n\t\tNo such data found\n"<<endl;}
				}
			}
		}

void deleterecord()
{
	
	if(total==0)
	{
		system("cls") ;
		cout<<"\n\t\tNo data is entered\n"<<endl;
	}
	else{
		        int a;
	        	cout<<"\t\tPress 1 to delete all record"<<endl;
				cout<<"\t\tPress 2 to delete specific record"<<endl;
				cin>>a;
				if(a==1)
				{
					total=0;
					system("cls") ;
					cout<<"\n\t\tAll record is deleted..!!\n"<<endl;
				}
				else if(a==2)
				{
				string roll,cls,sec;
				cout<<"Enter the Roll no: ";
				cin>>roll;
				cout<<"Enter the Class: ";
				cin>>cls;
				cout<<"Enter the Section: ";
				cin>>sec;
				for(int i=0;i<total;i++)
				{
					if(roll==arr2[i]&&cls==arr3[i]&&sec==arr4[i])
					{
						for(int j=i;j<total;j++)
						{
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
					    arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
				     	}
					total--;
					system("cls") ;
					cout<<"\n\t\tYour required record is deleted\n"<<endl;
					}
					else{
			    		system("cls") ;
			    		cout<<"\n\t\tNo such data found\n"<<endl;}
				}
				}
				 
			
			else 
			{
				system("cls") ;
				cout<<"\n\t\tInvalid input\n\n";
			}	
		}
}

int main()
{
int value;
	while(true)
	{
	   
	cout<<"***************************************************************************"<<endl<<endl;
	cout<<"\t\tPress 1 to Enter data"<<endl;
	cout<<"\t\tPress 2 to Show data"<<endl;
	cout<<"\t\tPress 3 to Search data"<<endl;
	cout<<"\t\tPress 4 to Update data"<<endl;
	cout<<"\t\tPress 5 to Delete data"<<endl;
	cout<<"\t\tPress 6 to Exit"<<endl<<endl;
	cout<<"***************************************************************************"<<endl;
	cin>>value;
	switch(value)
	{
		case 1:
			enter();
			system("cls") ;
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
			break;
		case 6:
			system("cls") ;
		    cout<<"\n\t\tThank you"<<endl<<endl;
		    cout<<"***************************************************************************"<<endl;
			exit(0);
			break;
		default:
			system("cls") ;
		    cout<<"\n\t\tWrong input"<<endl<<"\t\tPlease enter again.\n"<<endl;
		    break;
	}
}
return 0;
}

