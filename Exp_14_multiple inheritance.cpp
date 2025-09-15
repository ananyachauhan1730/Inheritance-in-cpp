//Name: Ananya Chauhan 
//PRN: 24070123157
//Exp-14

//Multiple Inheritance
//Program-2
#include<iostream>
using namespace std;

class Student{
    public:

    int prn;
    string name;
};

class Subject{
    public:

    string sub;
    int marks;
};

class Profile: public Student, public Subject{
    public:

    char div;
};

int main(){

    Profile p1;
    p1.name="Ananya Chauhan";
    p1.prn=157;
    p1.div='B';
    p1.sub="CDS";
    p1.marks=90;

    cout<<"Name: "<<p1.name<<endl;
    cout<<"PRN: "<<p1.prn<<endl;
    cout<<"Division: "<<p1.div<<endl;
    cout<<"Subject: "<<p1.sub<<endl;
    cout<<"Marks: "<<p1.marks<<endl;
    
    return 0;
}


/*==========OUTPUTS==========
Name: Ananya Chauhan 
PRN: 157
Division: B
Subject: CDS
Marks: 90
*/
