#pragma once
#include "CarParts.h"

//Car Product is created with Engine,Body & Wheel.
class Car
{
public:
  Wheel*   wheels;
  Engine*  engine;
  Body* body;

  void specifications()
  {
    std::cout << "Specifications are :-" << std::endl;
    std::cout << "Body:" << body->shape << std::endl;
    std::cout << "Engine horsepower:" << engine->horsepower << std::endl;
    std::cout << "Tire size:" << wheels->size << "'" << std::endl;
  }
};