////Abstract Factory :- Its Super Factory which creates other factories

#include <iostream>
#include "stdafx.h"
#include <string>
using namespace std;

//Interface
class Shape 
{
  public:
    virtual void draw() = 0;  
};

//Implements Interface
class Circle : public Shape
{
  public:
    void draw() {
      cout << "\n In Draw method of Circle." << endl;
  }
};
//Implements Interface
class Square : public Shape
{
  public:
    void draw() {
      cout << "\n In Draw method of Square."  << endl;
    }
};
//Implements Interface
class Ellipse : public Shape 
{
  public:
    void draw() {
      cout << "\n In Draw method of Ellipse." << endl;
    }
};
//Implements Interface
class Rectangle : public Shape 
{
  public:
    void draw() {
      cout << "\n In Draw method of Rectangle."  << endl;
    }
};

//Abstract Factory
class Factory 
{
  public:
    virtual Shape* createCurvedInstance() = 0;
    virtual Shape* createStraightInstance() = 0;
};

//Factory1
class SimpleShapeFactory : public Factory 
{
  public:
    Shape* createCurvedInstance()
    {
      cout << "\n\n Creating Circle object from SimpleShapeFactory and calling draw method from Circle object.";
      return new Circle;
    }
    Shape* createStraightInstance() 
    {
      cout << "\n Creating Square object from SimpleShapeFactory and calling draw method from Square object.";
      return new Square;
  }
};

//Factory2
class RobustShapeFactory : public Factory
{
  public:
    Shape* createCurvedInstance() 
    {
      cout << "\n Creating Ellipse object from RobustShapeFactory and calling draw method from Ellipse object.";
      return new Ellipse;
    }
    Shape* createStraightInstance()
    {
      cout << "\n Creating Rectangle object from RobustShapeFactory and calling draw method from Rectangle object.";
      return new Rectangle;
    }
};

int main() 
{

    cout << "\n******************Abstract Factory******************";

    Factory* pSimpleFactory = new SimpleShapeFactory;
    Shape *ptrShape = pSimpleFactory->createCurvedInstance();
    ptrShape->draw();
    ptrShape = pSimpleFactory->createStraightInstance();
    ptrShape->draw();

    Factory* pRobustFactory = new RobustShapeFactory();
    ptrShape = pRobustFactory->createCurvedInstance();
    ptrShape->draw();
    ptrShape = pRobustFactory->createStraightInstance();
    ptrShape->draw();

    cout << "\n****************************************************";
    getchar();
    return 0;
  
}