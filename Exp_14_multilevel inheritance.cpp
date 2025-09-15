//Multilevel Inheritance
//Program-3
#include<iostream>
using namespace std;

class Company{
    public:

    string cname;
    double valuation;

    void sales(){
        cout<<"Sales of the company is 100 cr"<<endl;
    }
};

class Department: public Company{
    public:

    void department(){
        cout<<"Sales Dept."<<endl;
    }

    double turnover;
    int numcustom;
};

class Employee: public Department{
    public:

    string name;
    int id;
    double salary;
};

int main(){

    Employee e1;
    e1.name="Ananya";
    e1.id=1234;
    e1.salary=1234567.123;
    e1.cname="XYZ";
    e1.sales();
    e1.department();

    cout<<"Employee Name: "<<e1.name<<endl;
    cout<<"Employee ID: "<<e1.id<<endl;
    cout<<"Employee Salary: "<<e1.salary<<endl;
    cout<<"Company Name: "<<e1.cname<<endl;

    return 0;
}


/*==========OUTPUTS==========
Sales of the company is 100 cr
Sales Dept.
Employee Name: Ananya Chauhan 
Employee ID: 1234
Employee Salary: 1.23457e+06
Company Name: XYZ
*/
