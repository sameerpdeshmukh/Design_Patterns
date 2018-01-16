### Definition:

The observer pattern is a software design pattern in which an object, called the subject, maintains a list of its dependents, called observers,and notifies them automatically of any state changes, usually by calling one of their methods.

### Explanation:

the observer pattern is mainly used for systems where multiple sub-parts of the system need to be notified when an event occurs or is received in the system.

this allows a the subject(the object that receives or triggers the event) to notify the other subsystems when its state changes so that they can perform their action on this trigger. this kind of decoupling allows multiple subsystems to register for events and be asynchronously notified about them without having to wait or block a thread individually to be notified about the events.

system like GUI(model view controller), languages like c# and message brokers like dbus use this design pattern.

#### references:
* [wikipedia page](https://en.wikipedia.org/wiki/Observer_pattern)