#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Cow.hpp"
#include "Goat.hpp"
#include "Sheep.h"

int main() {
    int num_cow, num_goat, num_sheep;
    std::cout << "Enter num cow, num goat, num sheep: ";
    std::cin >> num_cow >> num_goat >> num_sheep;
    std::vector<Animal*> farm(num_cow + num_goat + num_sheep, nullptr);
    int i = 0;
    while (i < num_cow)
        farm[i++] = new Cow();
    while (i < num_cow + num_goat)
        farm[i++] = new Goat();
    while (i < num_cow + num_goat + num_sheep)
        farm[i++] = new Sheep();
    
    for (Animal* a : farm)
        a->Cry();
    
    int year, milk = 0;
    std::cout << "How many years pass: ";
    std::cin >> year;
    for (int i = 0; i < year; ++i) {
        for (Animal* a : farm)
            milk += a->GetMilk();
    
        for (Animal* a : farm) {
            for (int i = 0; i < a->GiveBirth(); ++i) {
                Animal* new_born;
                if (a->GetType() == ANIMAL_TYPE::COW) {
                    new_born = new Cow();
                    ++num_cow;
                }
                else if (a->GetType() == ANIMAL_TYPE::GOAT) {
                    new_born = new Goat();
                    ++num_goat;
                }
                else {
                    new_born = new Sheep();
                    ++num_sheep;
                }
                farm.emplace_back(new_born);
            }
        }
    }
    
    std::cout
    << "Milk: " << milk << "\n"
    << "Total cow: " << num_cow << "\n"
    << "Total goat: " << num_goat << "\n"
    << "Total sheep: " << num_sheep << "\n";
    
    for (Animal* a : farm)
        delete a;
}
