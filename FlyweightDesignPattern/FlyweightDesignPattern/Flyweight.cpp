#include"stdafx.h"
#include "Flyweight.h"
#include <iostream>

using namespace std;

 Flyweight::Flyweight(string intrinsicState)
 {
     this->_intrinsicState = intrinsicState;
 }

Flyweight::~Flyweight()
 {}

 string Flyweight::GetIntrinsicState()
 {
     return this->_intrinsicState;
 }

 ConcreteFlyweight::ConcreteFlyweight(string intrinsicState) :Flyweight(intrinsicState)
 {
 }

 ConcreteFlyweight::~ConcreteFlyweight()
 {
 }

 void ConcreteFlyweight::Operation(const string& extrinsicState)
 {
   cout << "\n Intrinsic State String is :- ";
   cout << this->GetIntrinsicState() << endl;
   cout << "\n Extrensic State String is :- ";
     cout << extrinsicState << endl;
 }

 FlyweightFactory::FlyweightFactory()
 {}

FlyweightFactory::~FlyweightFactory()
{}

 //If the object already exists, direct return, or create a new object, into the container, then return
 Flyweight* FlyweightFactory::GetFlyweight(string key)
 {
     vector<Flyweight*>::iterator iter = this->m_vecFly.begin();
    for (; iter != this->m_vecFly.end(); iter++)
     {
         if ((*iter)->GetIntrinsicState() == key)
         {
             return *iter;
         }
     }
     Flyweight* fly = new ConcreteFlyweight(key);
    this->m_vecFly.push_back(fly);
     return fly;
 }

 void FlyweightFactory::GetFlyweightCount()
 {
     cout << this->m_vecFly.size() << endl;
 }