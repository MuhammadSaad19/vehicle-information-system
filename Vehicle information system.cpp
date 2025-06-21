#include<iostream>
using namespace std;
class vehicles{
	
	protected:
	string speed;
	string fuel_capacity;
	int tyres;
	string brand;
	int sitting;
	void vehicle_details(){
		cout<< "Enter a Brand=";
		cin>> brand;
		cout<< "Enter sitting=";
		cin>> sitting;
		cout<<"Enter Fuel capacity=";
		cin>> fuel_capacity;
		cout<<"enter Speed=";
		cin>>speed;
	}
	void vehicle_details_display(){
		cout<< endl<<"Following is the information that you Provided"<<endl;
		cout<< "Brand="<< brand <<endl;
		cout<< "Sitting="<< sitting<<endl;
		cout<<"Fuel Capacity="<< fuel_capacity<<endl;
		cout<<"Speed="<< speed <<endl;
	}
};
class car:public vehicles{

	public:
	car(){
	string a;
	string pass="Saad";
	cout<<"Enter the saved Password to add the info=";
	cin>> a;

	if(a==pass){
	
	
	system("cls");
		cout<<"Enter car details "<<endl;
		vehicle_details();
		
	
		vehicle_details_display();
	
		string b;
		cout<<"Do u want to change the info (YES/NO)=";
		cin>>b; 
	system("cls");
		if(b=="no"){ 
		
	
    system("cls");
		cout<<"Enter Password=";
		cin>> a;
		if(a==pass){
		
		
		cout<<"If u want to enter your bike details Type YES=";
		string a;
		cin>> a;
		
		if (a=="yes")
		{
	system("cls");	
		cout<< endl<< "Enter Bike Details"<<endl;
		vehicle_details();
	
		vehicle_details_display();
	
		
		string c;
		cout<<"Do u want to change the info(YES/NO)=";
		
		cin>> c;
	system("cls");
	{
		
	
		if(c=="no"){
			cout<<"Thanks for using our system";
		}//Fifth statement else
		
		else{
			cout<< endl<< "Enter Bike Details"<<endl;
			vehicle_details();
	
			vehicle_details_display();
		}
		
	}
}
		 //Fourth if statement's else
		else{ 
		cout<<endl<< "Thanks to use our system";
		}
		
}    //Third is statement has no else 

}      //Second if statement's else 
        else{
		cout<<"Enter Info Again"<< endl;
		car();
	}
	
}
else{
	cout<<"Invalid Password \n\n Re-enter: \n ";     //First if statement's else
	car();
}
}      //Car constructor {}
    
};

int main(){

	car c1;

}
