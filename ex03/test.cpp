#include <iostream>
#include <string>
using namespace std;

class Team{
    public: 
        int x;
        Team(int &v) : x(v){
            cout << &v << "\n";
            cout << &x << "\n";
        }
        void print()
        {
            cout << x << "\n";
        }
};

class Tr{
    int x = 9;
};

int main()
{
    int v = 8;
    Team ob(v);
    ob.print();
    cout << v << "\n";
    v = 9;
    ob.print();
}

