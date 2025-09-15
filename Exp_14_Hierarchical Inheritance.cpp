//Hierarchical Inheritance
//Program-4
#include<iostream>
using namespace std;

class Entc{
    public:
    int students;

    void displayStudents() {
        cout << "Total Students are: " << students << endl;
    }
};

class Vlsi: public Entc{
    public:
    int studv;

    void displayVlsi() {
        cout << "No. of Students in VLSI: " << studv << endl;
    }
};

class Embedded: public Entc{
    public:
    int stude;

    void displayEmbedded() {
        cout << "No. of Students in Embedded Systems: " << stude << endl;
    }
};

class Verifengg: public Vlsi{
    public:
    int studverif;

    void displayVerif() {
        cout << "No. of Verification Engineers: " << studverif << endl;
    }
};

class Designengg: public Vlsi{
    public:
    int studdesign;

    void displayDesign() {
        cout << "No. of Design Engineers: " << studdesign << endl;
    }
};

class Developer: public Embedded{
    public:
    int studdev;

    void displayDev() {
        cout << "No. of Developers: " << studdev << endl;
    }
};

class Micro: public Embedded{
    public:
    int studmicro;

    void displayMicro() {
        cout << "No. of Students in Microcontrollers: " << studmicro << endl;
    }
};

int main(){

    Verifengg v1;
    v1.students=100;
    v1.studverif=10;
    v1.displayStudents();
    v1.displayVerif();

    Designengg de1;
    de1.students=100;
    de1.studdesign=5;
    de1.displayStudents();
    de1.displayDesign();

    Developer d1;
    d1.students=100;
    d1.studdev=40;
    d1.displayStudents();
    d1.displayDev();

    Micro m1;
    m1.students=100;
    m1.studmicro=20;
    m1.displayStudents();
    m1.displayMicro();

    return 0;
}


/*==========OUTPUTS==========
Total Students are: 100
No. of Verification Engineers: 10
Total Students are: 100
No. of Design Engineers: 5
Total Students are: 100
No. of Developers: 40
Total Students are: 100
No. of Students in Microcontrollers: 20
*/
