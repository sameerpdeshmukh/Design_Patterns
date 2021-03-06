// VisitorDesignPattern.cpp : Defines the entry point for the console application.

//Visitor Design Pattern :- Visitor object visits each element of object structure and performs common operation.
//

#include "stdafx.h"
using namespace std;

class Element1;
class Element2;
class Element3;

//Interface/Abstract of Visitor 
class Visitor
{
public:
  virtual void visit(Element1 *e) = 0;
  virtual void visit(Element2 *e) = 0;
  virtual void visit(Element3 *e) = 0;
};

//Object Structure(Collection or Array) Interface
class Element
{
public:
    virtual void accept(class Visitor &v) = 0;
};

//First element of object structure
class Element1 : public Element
{
public:
    
  string Element_1()
  {
    return "Element1";
  }

  void accept(Visitor &v)
  {
    v.visit(this);
  }
};

//Second element of object structure
class Element2 :public Element
{
public:
   
  string Element_2()
  {
    return "Element2";
  }

  void accept(Visitor &v)
  {
    v.visit(this);
  }
};

//Third element of object structure
class Element3 : public Element
{
public:
   
  string Element_3()
  {
    return "Element3";
  }

  void accept(Visitor &v)
  {
    v.visit(this);
  }
};

//Visitor 1.
class Visitor1 : public Visitor
{
  void visit(Element1 *e)
  {
    cout  <<"\n\nVisitor1 Visits :- " + e->Element_1() << '\n';
  }
  
  void visit(Element2 *e)
  {
    cout <<"Visitor1 Visits :- " + e->Element_2() << '\n';
  }
  
  void visit(Element3 *e)
  {
    cout << "Visitor1 Visits :- " + e ->Element_3() <<  '\n';
  }
};

//Visitor 2.
class Visitor2 :public Visitor
{
  void visit(Element1 *e)
  {
    cout<<"\n\nVisitor2 Visits :- " + e ->Element_1() << '\n';
  }
 
  void visit(Element2 *e)
  {
    cout<< "Visitor2 Visits :- "+ e ->Element_2() <<  '\n';
  }

  void visit(Element3 *e)
  {
    cout<<"Visitor2 Visits :- "+ e ->Element_3()<<  '\n';
  }
};

int main()
{
  cout << "\n*************Visitor Design Pattern*************\n";
  
  Element *list[] =
  {
    new Element1(), new Element2(), new Element3()
  };

  Visitor1 one_visitor;     
  Visitor2 two_visitor;     

  for (int i = 0; i < 3; i++)
     list[i] -> accept(one_visitor);
 
    for (int i = 0; i < 3; i++)
      list[i] -> accept(two_visitor);

    cout << "\n************************************************\n";
    getchar();
    return 0;
}



