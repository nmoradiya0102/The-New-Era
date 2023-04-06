#include<iostream>
#include<string.h>

using namespace std;
class cars {
	public:
    	int car_id;
    	char car_company_name[100];
    	char car_color[100];
    	int car_model;
    	int car_release_year;

};
    
int main(){
	cars car1 , car2 , car3 , car4 ;
	
	car1.car_id =101;
	strcpy(car1.car_company_name,"Mahindra(XUV 700)");
	strcpy(car1.car_color,"black");
	car1.car_model = 100000;
	car1.car_release_year = 2022;
	
	
	car2.car_id =202;
	strcpy(car2.car_company_name,"ford(ESCORT)");
	strcpy(car2.car_color,"Red");
	car2.car_model = 65656;
	car2.car_release_year = 2015;
	
	
	car3.car_id =303;
	strcpy(car3.car_company_name,"B.M.W");
	strcpy(car3.car_color,"black");
	car3.car_model = 101010;
	car3.car_release_year = 1976;
	
	
	car4.car_id =404;
	strcpy(car4.car_company_name,"Rolls Royce"); 	 
	strcpy(car4.car_color,"blue");
	car4.car_model = 77777;
	car4.car_release_year = 1998;
	
	
	
	
	cout<<"Car id :  "<<car1.car_id<<endl;
	cout<<"Car Company Name :  "<<car1.car_company_name<<endl;
	cout<<"Car Color : "<<car1.car_color<<endl;
	cout<<"Car Model : "<<car1.car_model<<endl;
	cout<<"Car release year : "<<car1.car_release_year<<endl<<endl;	
	
	cout<<"Car id :  "<<car2.car_id<<endl;
	cout<<"Car Company Name :  "<<car2.car_company_name<<endl;
	cout<<"Car Color : "<<car2.car_color<<endl;
	cout<<"Car Model : "<<car2.car_model<<endl;
	cout<<"Car release year : "<<car2.car_release_year<<endl<<endl;	
	
	cout<<"Car id :  "<<car3.car_id<<endl;
	cout<<"Car Company Name :  "<<car3.car_company_name<<endl;
	cout<<"Car Color : "<<car3.car_color<<endl;
	cout<<"Car Model : "<<car3.car_model<<endl;
	cout<<"Car release year : "<<car3.car_release_year<<endl<<endl;	
	
	cout<<"Car id :  "<<car4.car_id<<endl;
	cout<<"Car Company Name :  "<<car4.car_company_name<<endl;
	cout<<"Car Color : "<<car4.car_color<<endl;
	cout<<"Car Model : "<<car4.car_model<<endl;
	cout<<"Car release year : "<<car4.car_release_year<<endl<<endl;	
	
	
	return 0;
}
