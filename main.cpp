#include "Jungle.h"
#include "DomesticAnimal.h"
#include <iostream>

using namespace std;

int main() {
    cout<<"enter the number of animals:";
    int n;
    cin>>n;
    Jungle j(n);
    DomesticAnimal d;
    d.setPosition(100,180);
    Animal *a=&d;
    j.AddAnimal(a);
    a->isInPit(100,180,10);
    return 0;
}