#include "Jungle.h"
#include "DomesticAnimal.h"
#include "WildAnimal.h"
#include "Pet.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));    //for different x,y of animals
    cout << "enter the number of animals:";
    int n;
    cin >> n;
    Jungle j(n);
    cout << "step 1:" << endl;             //Step 1 Homework: Half domestic animals and half wild animals
    DomesticAnimal d[n / 2];
    Animal *animal1 = d;
    for (int i = 0; i < n / 2; ++i)
        j.AddAnimal(&animal1[i]);       //add domestic animal to jungle
    WildAnimal w[n / 2];
    Animal *animal2 = w;
    for (int i = 0; i < n / 2; ++i)
        j.AddAnimal(&animal2[i]);       //add wild animal to jungle
    for (int i = 0; i < 1000; ++i)
        j.movement();
    cout << j.getTotalFall();
    Animal animal;
    animal.fall();
    cout << "step 2:" << endl;     //Step 2 Homework: third domestic animals and third wild animals and third pet animals
    Jungle jungle(n);
    DomesticAnimal domestic[n / 3];
    Animal *a1 = domestic;
    for (int i = 0; i < n / 3; ++i)
        jungle.AddAnimal(&a1[i]);       //add domestic animal to jungle
    WildAnimal wild[n / 3];
    Animal *a2 = wild;
    for (int i = 0; i < n / 3; ++i) {
        jungle.AddAnimal(&a2[i]);       //add wild animal to jungle
    }
    Pet pet[n / 3];
    Animal *a3=pet;
    for (int i = 0; i < n / 3; ++i) {
        jungle.AddAnimal(&a3[i]);       //add pet animal to jungle
    }
    for (int i = 0; i < 1000; ++i)
        jungle.movement();
    cout << jungle.getTotalFall();
    Animal a;
    a.fall();
    return 0;
}