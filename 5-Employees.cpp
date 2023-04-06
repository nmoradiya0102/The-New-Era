#include<iostream>
#include<string.h>


using namespace std;
class Employes {
	public:
		int emp_id;
		char emp_name[100];
		char emp_role[100];
		int emp_age;
		int emp_salary;
		char emp_experience[100];
		char emp_city[100];
		char emp_company_name[100];
};

int main(){
	
    Employes  emp1 , emp2 , emp3, emp4 , emp5;
	
	emp1.emp_id = 111;
	strcpy(emp1.emp_name,"Isha");
	strcpy(emp1.emp_role,"salesperson");
	emp1.emp_age = 18;
	emp1.emp_salary = 7000;
	strcpy(emp1.emp_experience,"two year");
	strcpy(emp1.emp_city,"Surat");
	strcpy(emp1.emp_company_name,"opticals");

    emp2.emp_id = 222;
	strcpy(emp2.emp_name,"vikram");
	strcpy(emp2.emp_role,"bussinesman");
	emp2.emp_age = 25;
  	emp2.emp_salary = 200000;
	strcpy(emp2.emp_experience,"three year");
	strcpy(emp2.emp_city,"Mumbai");
	strcpy(emp2.emp_company_name,"Our clothes");

    emp3.emp_id = 333;
	strcpy(emp3.emp_name,"yesha");
	strcpy(emp3.emp_role,"Accountant");
	emp3.emp_age = 20;
	emp3.emp_salary = 15000;
	strcpy(emp3.emp_experience,"one year");
	strcpy(emp3.emp_city,"Bangalore");
	strcpy(emp3.emp_company_name,"Agarwal Associate");

    emp4.emp_id = 444;
	strcpy(emp4.emp_name,"shrey");
	strcpy(emp4.emp_role,"Cansaltant");
	emp4.emp_age = 29;
	emp4.emp_salary = 50000;
	strcpy(emp4.emp_experience,"six year");
	strcpy(emp4.emp_city,"surat");
	strcpy(emp4.emp_company_name,"aspire immigration");
	
	emp5.emp_id = 555;
	strcpy(emp5.emp_name,"sneh");
	strcpy(emp5.emp_role,"professer");
	emp5.emp_age = 25;
	emp5.emp_salary = 40000;
	strcpy(emp5.emp_experience,"two year");
	strcpy(emp5.emp_city,"Ahamdabad");
	strcpy(emp5.emp_company_name,"VNSGU");

   


    cout<<"Employee id: " <<emp1.emp_id<<endl;
	cout<<"Employee name :  "<<emp1.emp_name<<endl;
	cout<<"Employee role :  "<<emp1.emp_role<<endl;
	cout<<"Employee age :  "<<emp1.emp_age<<endl;
	cout<<"Employee salary :  "<<emp1.emp_salary<<endl;
	cout<<"Employee experience :  "<<emp1.emp_experience<<endl;
	cout<<"Employee city :  "<<emp1.emp_city<<endl;
	cout<<"Employee company name : "<<emp1.emp_company_name<<endl<<endl;;
	
	cout<<"Employee id: " <<emp2.emp_id<<endl;
	cout<<"Employee name :  "<<emp2.emp_name<<endl;
	cout<<"Employee role :  "<<emp2.emp_role<<endl;
	cout<<"Employee age :  "<<emp2.emp_age<<endl;
	cout<<"Employee salary :  "<<emp2.emp_salary<<endl;
	cout<<"Employee experience :  "<<emp2.emp_experience<<endl;
	cout<<"Employee city :  "<<emp2.emp_city<<endl;
	cout<<"Employee company name : "<<emp2.emp_company_name<<endl<<endl;;
	
	cout<<"Employee id: " <<emp3.emp_id<<endl;
	cout<<"Employee name :  "<<emp3.emp_name<<endl;
	cout<<"Employee role :  "<<emp3.emp_role<<endl;
	cout<<"Employee age :  "<<emp3.emp_age<<endl;
	cout<<"Employee salary :  "<<emp3.emp_salary<<endl;
	cout<<"Employee experience :  "<<emp3.emp_experience<<endl;
	cout<<"Employee city :  "<<emp3.emp_city<<endl;
	cout<<"Employee company name : "<<emp3.emp_company_name<<endl<<endl;;
	
	cout<<"Employee id: " <<emp4.emp_id<<endl;
	cout<<"Employee name :  "<<emp4.emp_name<<endl;
	cout<<"Employee role :  "<<emp4.emp_role<<endl;
	cout<<"Employee age :  "<<emp4.emp_age<<endl;
	cout<<"Employee salary :  "<<emp4.emp_salary<<endl;
	cout<<"Employee experience :  "<<emp4.emp_experience<<endl;
	cout<<"Employee city :  "<<emp4.emp_city<<endl;
	cout<<"Employee company name : "<<emp4.emp_company_name<<endl<<endl;
	
	cout<<"Employee id: " <<emp5.emp_id<<endl;
	cout<<"Employee name :  "<<emp5.emp_name<<endl;
	cout<<"Employee role :  "<<emp5.emp_role<<endl;
	cout<<"Employee age :  "<<emp5.emp_age<<endl;
	cout<<"Employee salary :  "<<emp5.emp_salary<<endl;
	cout<<"Employee experience :  "<<emp5.emp_experience<<endl;
	cout<<"Employee city :  "<<emp5.emp_city<<endl;
	cout<<"Employee company name : "<<emp5.emp_company_name<<endl<<endl;;
	return 0;
	  
}

