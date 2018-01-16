Defination:

the command pattern is a behavioral design pattern in which an object is used to encapsulate all information needed to perform an action or trigger an event at a later time.

Explanation:

Three entities exist in this design pattern.
* the command itself - the action or command that needs to be executed.
* the sender - the entity that sends the command to be executed.
* the invoker - the entity that executes the command on behalf of the sender.

Using command objects makes it easier to construct general components that need to delegate, sequence or execute method calls at a time of their choosing without the need to know the class of the method or the method parameters. Using an invoker object allows bookkeeping about command executions to be conveniently performed, as well as implementing different modes for commands, which are managed by the invoker object, without the need for the client to be aware of the existence of bookkeeping or modes.


references:
* [wikipedia page](https://en.wikipedia.org/wiki/Command_pattern)