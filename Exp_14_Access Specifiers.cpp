//Access Specifiers
//Program-5
#include<iostream>
using namespace std;

class Github {
public:
    void disp() {
        cout << "Repository is Private" << endl;
    }

protected:
    int repo;

private:
    void disp2() {
        cout << "Hello World" << endl;
    }

public:
    void callDisp2() {   // public function to access private disp2
        disp2();
    }
};

class User : protected Github {
public:
    int user_id;

    void setRepo(int r) {   // function to access protected member repo
        repo = r;
    }

    void showRepo() {
        cout << "No. of Repositories: " << repo << endl;
    }

    void showDisp() {       // function to access disp() from Github
        disp();
    }
};

int main() {
    Github g1;
    g1.callDisp2();   // Access private function via public wrapper

    User u1;
    u1.user_id = 123;
    u1.showDisp();    // Access disp() via public function
    u1.setRepo(13);   // Set protected member repo
    u1.showRepo();    // Display repo

    return 0;
}


/*==========OUTPUTS==========
Hello World
Repository is Private
No. of Repositories: 13
*/
