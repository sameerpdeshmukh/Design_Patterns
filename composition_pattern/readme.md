### Definition:

The composite pattern describes a group of objects that is treated the same way as a single instance of the same type of object. The intent of a composite is to "compose" objects into tree structures to represent part-whole hierarchies. Implementing the composite pattern lets clients treat individual objects and compositions uniformly

### Explanation:

The main thing about composition design pattern is the fact that it allows a part-whole hierarchy. Thus allowing an object to be built from composition of multiple smaller objects.

In the example we used the composition is simply an object that is built of multiple smaller structures like lines and rectangles.
This allows the user of such composite objects to treat all bitmaps as the same even when they are composite objects like the canvas. this also allows a tree like structure to be built in a flat hierarchy while defining ownership and maintaining the uniform structure.

The only difference between composition and aggregation is that in composition the composed object owns the sub-objects and the lifetime of the parts is tied to the lifetime of the whole.
While in aggregation the sub-objects are not owned by the composite object and the lifetime of the parts can outlive the whole.

Composition is also a preferred approach to inheritance  since classes should achieve polymorphic behavior and code reuse by their composition (by containing instances of other classes that implement the desired functionality) rather than inheritance from a base or parent class.

#### references:
* [wikipedia page](https://en.wikipedia.org/wiki/Composite_pattern)
* [composition over inheritance](https://en.wikipedia.org/wiki/Composition_over_inheritance)