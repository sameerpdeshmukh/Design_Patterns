// FlighweightDesignPattern.cpp : Defines the entry point for the console application.

//FlighweightDesignPattern :- Used to reduce number of objects created.
//Extrisic :- Not const has to be calculated on fly 
//Intrisic:- const and can be stored in memory

#include "stdafx.h"
#include "Flyweight.h"
#include <iostream>
#include <string>

int main()
{
        cout << "\n************Flyweight EXAMPLE**********\n";
       
        string extrinsicState = "Extrensic State";           //External state extrinsicState
           
         FlyweightFactory* fc = new FlyweightFactory();     //Factory objects, a factory object

         //Intrensic State const is passed and as string is same only one object added in vector
         Flyweight* fly = fc->GetFlyweight("Intrensic State");
    
        Flyweight* fly1 = fc->GetFlyweight("Intrensic State");
            
        //Application of external state
         fly->Operation(extrinsicState);
    
         cout << "\n Flyweight Count is :-";
         fc->GetFlyweightCount();
         cout << "\n***************************************\n";
    getchar();
    return 0;
}

