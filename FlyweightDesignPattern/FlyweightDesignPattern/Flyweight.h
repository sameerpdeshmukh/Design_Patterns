#pragma once

 #include <string>
 #include <vector>

 using namespace std;

 //Interface Flyweight
class Flyweight
{
public:
     //The operation of the external state extrinsicState
     virtual void Operation(const string& extrinsicState) = 0;
     string GetIntrinsicState();
     virtual ~Flyweight();
 protected:
     Flyweight(string intrinsicState);
 private:
     //The internal state, also can put in the ConcreteFlyweight
     string _intrinsicState;
 };

class ConcreteFlyweight :public Flyweight
{
 public:
     //Realization of interface function
     virtual void Operation(const string& extrinsicState);
     ConcreteFlyweight(string intrinsicState);
    ~ConcreteFlyweight();
 };


 class FlyweightFactory
 {
   public:
         FlyweightFactory();
         ~FlyweightFactory();
         //To obtain a requested Flyweight object
         Flyweight* GetFlyweight(string key);
         //Number of objects stored in the acquisition of container
         void GetFlyweightCount();
     protected:
      private:
             //Container preservation of internal state of the object
               vector<Flyweight*> m_vecFly;
 };

