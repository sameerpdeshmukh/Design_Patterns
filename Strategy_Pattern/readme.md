### Definition:

the strategy pattern (also known as the policy pattern) is a behavioral software design pattern that enables selecting an algorithm at runtime. The strategy pattern

* defines a family of algorithms,
* encapsulates each algorithm, and
* makes the algorithms interchangeable within that family.

Strategy lets the algorithm vary independently from clients that use it.

when the strategy is selected and set by the client at compile time its called policy based design pattern. (created by  Andrei Alexandrescu in his book modern c++ design).

### Explanation:

Simply put strategy design patterns allows an object to use other "strategy" objects to execute its action for it. In our example we used the strategy object's concrete implementation to decide how the collection object would perform sort and search.

when this choice is performed at compile time (example is c++ its possible using templates), the "strategy" objects are called "Policy" objects but the rest of dynamically selecting the way search and sort are performed remains the same the only difference is using templates we can decide the class whose object the collection has at the call site.

#### references:
* [wikipedia page](https://en.wikipedia.org/wiki/Strategy_pattern)
* [policy based design](https://en.wikipedia.org/wiki/Policy-based_design)