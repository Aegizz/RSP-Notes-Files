The factory design pattern is used when we have a superclass with multiple sub-classes and based on input we need to return one of the sub-class. 

1. We can keep factory class singleton or we keep the method that returns the subclass as static.
2. Notice that based on the input parameter, different subclass is created and returned. 

Factory design pattern provides approach to code for interface rather than implementation.

Factory pattern removes the instantiation of actual implementation classes from client code. Factory pattern makes code more robust and easy to extend.

Factory pattern provides abstraction between implementation and client classes through inheritance. 