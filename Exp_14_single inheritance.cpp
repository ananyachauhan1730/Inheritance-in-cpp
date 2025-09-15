//Name: Ananya Chauhan 
//PRN: 24070123157
//Exp-14

//Single Inheritance
//Program-1
#include<iostream>
using namespace std;

class Books{
    public:

    int page;
    double price;
};

class Fiction: public Books{
    public:
    
    string name;
};

int main(){

    Fiction b1;
    b1.page=200;
    b1.price=500.5;
    b1.name="HarryPotter";

    cout<<"No. of Pages: "<<b1.page<<endl;
    cout<<"Price: "<<b1.price<<endl;
    cout<<"Name: "<<b1.name<<endl;

    return 0;
}


/*==========OUTPUTS==========
No. of Pages: 200
Price: 500.5
Name: HarryPotter
*/
