// lab_12.01_Tytysh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct Elem
{
Elem   *link1,
       *link2;
int info;
};
Elem* p;

int main()
{
    p = new Elem; // 1
    p->info = 1; // 2
    p->link1 = new Elem; // 3
    p->link1->info = 2; // 4
    p->link1->link2 = NULL; // 5
    p->link1->link1 = new Elem; // 6
    p->link1->link1->info = 3; // 7
    p->link1->link1->link2 = NULL; // 8
    p->link1->link1->link1 = new Elem; // 9
    p->link1->link1->link1 = p->link2; // 10
    p->link1->link1->info = 4;; // 11
    p->link2 = p->link1; // 12
    p->link1->link2 = p->link1; // 13
    delete p->link1->link1;
    delete p->link1;
    delete p;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
