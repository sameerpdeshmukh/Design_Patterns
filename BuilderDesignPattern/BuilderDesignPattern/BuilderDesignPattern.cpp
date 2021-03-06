// BuilderDesignPattern.cpp : Defines the entry point for the console application.

//BUILDER DESIGN PATTERN :- Builds complex object from simpler objects.
//JEEP & NISSAN Car are complex cars which is build using simple parts like wheel,engine and its body.

#include "stdafx.h"
#include "CarParts.h"
#include "Car.h"
#include "Builder.h"
using namespace std;

/* Director is responsible for the whole process */
class Director
{
  Builder* builder;

public:
  void setBuilder(Builder* newBuilder)
  {
    builder = newBuilder;
  }

  Car* getCar()
  {
    Car* car = new Car();

    car->body = builder->getBody();

    car->engine = builder->getEngine();

    car->wheels = builder->getWheel();

    return car;
  }
};



int main()
{

  cout << "\n************BUILDER EXAMPLE**********\n";
  Car* car; // Final product

  /* A director who controls the process */
  Director director;

  //Builder objects to create complex object Jeep & Nissan car.
  JeepBuilder jeepBuilder;
  NissanBuilder nissanBuilder;

  /* Build a Jeep */
  std::cout << "\nCar Type JeepBuilder" << std::endl;
  director.setBuilder(&jeepBuilder); // using JeepBuilder instance
  car = director.getCar();
  car->specifications();

  std::cout << std::endl;

  /* Build a Nissan */
  std::cout << "\nCar Type NissanBuilder" << std::endl;
  director.setBuilder(&nissanBuilder); // using NissanBuilder instance
  car = director.getCar();
  car->specifications();

  cout << "\n*************************************";

  getchar();

    return 0;
}

