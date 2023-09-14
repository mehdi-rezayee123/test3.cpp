#include <iostream>
#include "Car.h"

Car::car() : _price (0), _emission (0){}
Car::car(int _price) : _price(0), _emission (0){} 

int Car::get_price() const {
    return price;
}

void car:: set_price(int price){

    _price = price;

}

int car:: get_price () const {
    return price;
}

int Car :: set_emission(int emission){
    _emission = emission;

}

void car :: get_emission()const {
    return emission;
}

void car :: drive() {
    return 0.0;

}



