
# INHERITANCE IN CPP

Aim: To study and implement types of Inheritances.

Tools Used: VS Code or Programiz online compiler.

# Theory:

Inheritance in Cpp

In C++, inheritance is a key feature of object-oriented programming that allows a new class, called the derived class, to use the properties and methods of an existing class, called the base class. It promotes code reusability, as common features of multiple classes can be defined once in a base class and reused by derived classes. C++ provides different types of inheritance such as single, multiple, multilevel, hierarchical, and hybrid, which help in building complex real-world models. Access specifiers like public, private, and protected determine how the base class members are inherited. Inheritance also enables polymorphism and method overriding, making programs more flexible, extensible, and easier to maintain.

# -->Types of inheritance in C++:

1. Single Inheritance: Single inheritance in C++ is the simplest form of inheritance where a single derived class inherits from one base class. It allows the derived class to reuse the data members and member functions of the base class, reducing code duplication. With single inheritance, a clear parent-child relationship is formed, making the program easy to understand and maintain. Access specifiers like public, private, and protected define how the base class members are accessible in the derived class.

''' 
#include <iostream>
using namespace std;

// Base Class
class Base {
public:
    // base class members
    void baseFunction() {
        cout << "Base class function" << endl;
    }
};

// Derived Class (inherits Base)
class Derived : access_specifier Base {
public:
    // derived class members
    void derivedFunction() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Derived obj;           // object of derived class
    obj.baseFunction();    // access base class function
    obj.derivedFunction(); // access derived class function
    return 0;
}
'''

2. Multiple Inheritance: Multiple inheritance in C++ is a type of inheritance where a single derived class inherits from more than one base class. This allows the derived class to combine features and functionalities of multiple classes into one. It promotes code reusability but can also lead to ambiguity issues, such as the Diamond Problem, when the same member is inherited from more than one base class. C++ resolves such issues using scope resolution or virtual inheritance. Multiple inheritance is useful when a class logically needs to represent properties of different classes at the same time.

'''
#include <iostream>
using namespace std;

// First Base Class
class Base1 {
public:
    void base1Function() {
        cout << "This is Base1 class" << endl;
    }
};

// Second Base Class
class Base2 {
public:
    void base2Function() {
        cout << "This is Base2 class" << endl;
    }
};

// Derived Class inheriting from both Base1 and Base2
class Derived : access_specifier1 Base1, access_specifier2 Base2 {
public:
    void derivedFunction() {
        cout << "This is Derived class" << endl;
    }
};

int main() {
    Derived obj;             // object of derived class
    obj.base1Function();     // from Base1
    obj.base2Function();     // from Base2
    obj.derivedFunction();   // from Derived
    return 0;
}
'''

3. Multilevel Inheritance: Multilevel inheritance in C++ is a type of inheritance where a class is derived from another derived class, forming a chain of inheritance. The base class passes its properties to the derived class, which then acts as a base class for another class. This helps in reusing code across multiple levels and creating a step-by-step hierarchy. It also demonstrates how features can be inherited through multiple generations of classes.

'''
#include <iostream>
using namespace std;

// Base Class
class Base {
public:
    void baseFunction() {
        cout << "This is Base class" << endl;
    }
};

// Intermediate Derived Class
class Derived1 : access_specifier Base {
public:
    void derived1Function() {
        cout << "This is First Derived class" << endl;
    }
};

// Final Derived Class
class Derived2 : access_specifier Derived1 {
public:
    void derived2Function() {
        cout << "This is Second Derived class" << endl;
    }
};

int main() {
    Derived2 obj;            // object of final derived class
    obj.baseFunction();      // from Base
    obj.derived1Function();  // from Derived1
    obj.derived2Function();  // from Derived2
    return 0;
}
'''
4. Hierarchical Inheritance: Hierarchical inheritance in C++ is a type of inheritance where multiple derived classes inherit from a single base class. This means that the base class shares its properties and functions with all the derived classes. It is useful when different classes need to use common features defined in one base class but also have their own unique functionalities. Hierarchical inheritance promotes code reusability and helps in organizing programs in a tree-like structure. It also forms the basis for concepts like function overriding and polymorphism in C++.

'''
#include <iostream>
using namespace std;

// Base Class
class Base {
public:
    void baseFunction() {
        cout << "This is Base class" << endl;
    }
};

// First Derived Class
class Derived1 : access_specifier Base {
public:
    void derived1Function() {
        cout << "This is Derived1 class" << endl;
    }
};

// Second Derived Class
class Derived2 : access_specifier Base {
public:
    void derived2Function() {
        cout << "This is Derived2 class" << endl;
    }
};

int main() {
    Derived1 obj1;   // object of first derived class
    obj1.baseFunction();
    obj1.derived1Function();

    Derived2 obj2;   // object of second derived class
    obj2.baseFunction();
    obj2.derived2Function();

    return 0;
}
'''

5. Hybrid Inheritance: Hybrid inheritance in C++ is a combination of two or more types of inheritance, such as multiple, multilevel, or hierarchical. It is used when a class needs to derive features from different inheritance models at the same time. While it increases flexibility and reusability, it may also lead to ambiguity issues like the Diamond Problem, which can be resolved using virtual inheritance.

Access Specifiers in Cpp
In C++, access specifiers control the accessibility of class members (data and functions) from outside the class or in derived classes. There are three main access specifiers: public, private, and protected.

# -->Public:
In C++, **public** members of a class are accessible from anywhere in the program, including outside the class and in derived classes. They can be directly used by objects of the class or its derived classes. Public access allows **free interaction** with class members while maintaining the functionality of the class. It is typically used for functions or data that need to be **accessible by all parts of the program**.

''' 
#include <iostream>
using namespace std;

class Example {
public:             // Public members
    int data;       // Public data member
    void display() {  // Public member function
        cout << "Data: " << data << endl;
    }
};

int main() {
    Example obj;    // Create object of class
    obj.data = 10;  // Accessing public data member
    obj.display();  // Accessing public function
    return 0;
}
'''

# -->Private:
In C++, **private** members of a class are accessible **only within the class** in which they are declared. They cannot be accessed directly by objects of the class or by derived classes. Private access is used to **restrict direct access** to sensitive data, ensuring **data encapsulation and security**. It helps in controlling how class members are modified or used, typically through public member functions.

'''
#include <iostream>
using namespace std;

class Example {
private:            // Private members
    int data;       // Private data member
    void display() {  // Private member function
        cout << "Data: " << data << endl;
    }

public:             // Public function to access private members
    void setData(int value) {
        data = value;  // Accessing private data member
    }
    void showData() {
        display();     // Calling private function
    }
};

int main() {
    Example obj;    
    obj.setData(10); // Access private member via public function
    obj.showData();  // Display value using public function
    // obj.data = 10; // Error: Cannot access private member directly
    return 0;
}
'''

# -->Protected:
In C++, **protected** members of a class are accessible **within the class** and by its **derived classes**, but not by objects outside the class. Protected access allows derived classes to use and modify base class members while keeping them hidden from the outside world. It provides a balance between **private and public access**, supporting **controlled inheritance** and **data encapsulation**.

'''
#include <iostream>
using namespace std;

class Base {
protected:           // Protected members
    int data;        // Protected data member
    void display() { // Protected member function
        cout << "Data: " << data << endl;
    }
};

class Derived : public Base {
public:
    void setData(int value) {
        data = value;   // Accessing protected data member
    }
    void showData() {
        display();      // Calling protected function
    }
};

int main() {
    Derived obj;
    obj.setData(20);   // Setting value using derived class function
    obj.showData();    // Displaying value using derived class function
    // obj.data = 20;  // Error: Cannot access protected member directly
    return 0;
}
'''

Access specifiers are crucial for data encapsulation, security, and controlled inheritance, allowing programmers to define which parts of a class are exposed or hidden. They help in designing robust and maintainable object-oriented programs.

# Program-1: Single Inheritance
This program demonstrates the concept of single inheritance in C++. The base class Books contains common attributes such as page and price. The derived class Fiction inherits from Books and adds an additional attribute name specific to fiction books. In the main() function, an object of the Fiction class is created, which can access both its own data members and the inherited members of Books. This shows how inheritance promotes code reusability by allowing the derived class to use features of the base class while extending its functionality.

# --> Algorithm:

1.Start the program.

2 Define a base class Books with data members: page and price.

3.Define a derived class Fiction that inherits publicly from Books and adds an extra data member: name.

4.In the main() function: --Create an object b1 of class Fiction. --Assign values to page, price, and name.

5.Display the values of all data members using cout.

6.End the program.

# Program-2: Multiple Inheritance
This program demonstrates the concept of multiple inheritance in C++. The class Student stores student details like PRN and name, while the class Subject stores subject name and marks. The class Profile is created by inheriting publicly from both Student and Subject, and it adds an additional member div. In the main() function, an object of Profile is created, which can access members from both parent classes along with its own. This shows how multiple inheritance allows combining features of two or more classes into a single class. It highlights the advantage of code reusability and the ability to build more detailed objects using existing classes.

# --> Algorithm:

1.Start the program.

2.Define a base class Student with data members: prn and name.

3.Define another base class Subject with data members: sub and marks.

4.Define a derived class Profile that inherits publicly from both Student and Subject, and add one extra data member: div.

5.In the main() function: --Create an object p1 of the Profile class. --Assign values to name, prn, div, sub, and marks.

6.Display all the details using cout.

7.End the program.

# Program-3: Multilevel Inheritance
This program demonstrates the concept of multilevel inheritance in C++. The base class Company contains attributes like company name and valuation along with a function sales(). The class Department is derived from Company and adds new members such as turnover, numcustom, and a function department(). Further, the class Employee is derived from Department, adding employee-specific details like name, ID, and salary. In the main() function, an object of Employee is created, which can access members from all three levels of inheritance. This shows how data and functions are passed through multiple levels of classes, promoting code reusability and hierarchy representation.

# --> Algorithm:

1.Start the program.

2.Define a base class Company with data members (cname, valuation) and a function sales().

3.Define a derived class Department that inherits publicly from Company, adds new data members (turnover, numcustom), and a function department().

4.Define a further derived class Employee that inherits publicly from Department and adds data members (name, id, salary).

5.In the main() function: --Create an object e1 of the Employee class. --Assign values to employee and company details. --Call the sales() function from Company and the department() function from Department.

6.Display all the information using cout.

7.End the program.

# Program-4: Hierarchical Inheritance
This program demonstrates the concept of hierarchical inheritance combined with multilevel inheritance (hybrid inheritance) in C++. The base class Entc contains the total number of students. From this class, two branches are created: Vlsi and Embedded, each representing specialized domains. Further, Verifengg and Designengg are derived from Vlsi, while Developer and Micro are derived from Embedded. This structure creates a tree-like hierarchy where multiple classes share common properties from a single base class. In the main() function, objects of different derived classes are created, and student data is assigned for each specialization. This illustrates how hybrid inheritance allows organizing data across multiple related categories while reusing the base class attributes.

# --> Algorithm:

1.Start the program.

2.Define a base class Entc with a data member students to store total students.

3.Define two derived classes from Entc: --Vlsi for VLSI department. --Embedded for Embedded Systems department.

4.Define further derived classes: --From Vlsi: Verifengg (Verification Engineers) and Designengg (Design Engineers). --rom Embedded: Developer (Developers) and Micro (Microcontroller students).

5 In the main() function: --Create objects of Verifengg, Designengg, Developer, and Micro. --Assign values to students and specialization-specific data members.

6.End the program.

# Program-5: Access Specifiers
This program demonstrates the use of access specifiers and protected inheritance in C++. The base class Github has members with public, private, and protected access levels. The class User inherits from Github using protected inheritance, which means that the public and protected members of Github become protected in User. In the main() function, the program tries to access private and protected members, which is not allowed outside the class, leading to access errors. This illustrates how access specifiers control visibility and accessibility of class members in inheritance, ensuring data encapsulation and security of sensitive information.

# --> Algorithm:

1.Start the program.

2..Define a base class Github with: --A public function disp(). --A private function disp2(). --A protected data member repo.

3.Define a derived class User that inherits protectedly from Github. --Add a public data member user_id.
In the main() function: --Create an object g1 of Github and try to call disp2() (will cause an error because it is private). --Create an object u1 of User. --Assign a value to user_id. --Try to access disp() and repo (access errors occur because of protected inheritance).

4.End the program.

# Conclusion
These five programs collectively demonstrate the different types of inheritance in C++ and the role of access specifiers. The first program on single inheritance showed how a derived class can access and extend members of a base class, promoting code reusability. The second program illustrated multiple inheritance, where a class inherits from two base classes, combining their features for more detailed modeling. The third program demonstrated multilevel inheritance, passing properties and functions through multiple levels, which helps in creating structured and organized designs. The fourth program used hybrid inheritance, combining hierarchical and multilevel inheritance to efficiently represent complex systems with multiple branches. The fifth program highlighted protected inheritance and access specifiers, showing how public, private, and protected members affect accessibility, reinforcing data encapsulation and security. Overall, these programs emphasize how inheritance allows code reuse, hierarchy formation, and controlled access, making programs more flexible, maintainable, and logically organized.
