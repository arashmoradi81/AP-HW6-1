#include "Jungle.h"
#include "DomesticAnimal.h"
#include "WildAnimal.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));    //for different x,y of animals
    cout<<"enter the number of animals:";
    int n;
    cin>>n;
    Jungle j(n);
    cout<<"step 1:"<<endl;             //Step 1 Homework: Half domestic animals and half wild animals
    DomesticAnimal d[n/2];
    Animal *animal1=d;
    for (int i = 0; i < n/2; ++i)
        j.AddAnimal(&animal1[i]);       //add domestic animal to jungle
    WildAnimal w[n/2];
    Animal *animal2=w;
    for (int i = 0; i < n/2; ++i)
        j.AddAnimal(&animal2[i]);       //add wild animal to jungle
    for (int i = 0; i < 1000; ++i)
        j.movement();
    cout<<j.getTotalFall();
    Animal animal;
    animal.fall();
    return 0;
}