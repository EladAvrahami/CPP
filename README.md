# helloWorld of C++

https://github.com/profjpbaugh/complete-cpp-developer-course

<h3>Hello wrold section </h3>
input output print string and int to consol


<h3>Section 3 </h3>
<pre>  
crtegories of control statment:
sequential - Like js line by line.
selection - execution according to if else.
repetition - loops

</pre>


<h3>Section 4 - Arrays and Vectors</h3>
<pre> 
STL - Standard Template Library
araryand vector templates classes are part of the Standard Template Library
built-in array
array class
Vectors - like array but can be resize as more elemts are added to them(no need spesify initial capacity)
methods :
front - return front elemnt
back -  back elemnt
pop_back - remove the last element of the vector
push_back -enter val to last elemnt of vector
insert - give spesice location to add vector
being - first vector element


data strucctres - containers that hold many elemnts like vector or array
</pre>


<h3>Section 5 - FUNCTIONS </h3>
<pre>  
function prototypes - declare function before main but define it after main (42)
function defenition - describe what it does
parameter pass by val &by ref
variable scope (inside fun) and lifetime (global val declare above main)
static - combination between global and local variable
functions overloading -same name diffrent types or parameter
-------------
Cmath Library:
sqrt-finding square root.
pow- finding base taken to a power
celi-rounding value up to nearest int
floor-rounding value down to nearest int
more of the library fun :https://www.programiz.com/cpp-programming/library-function/cmath
-------------
recursion-when function call itself 
overloading -use function with the same name but diffrent function signatures 
which include the number type and order of these functions parameter
</pre>

<h3>Section 6 - classes and Objects </h3>
<pre>  
OOP -object oriented programing , classes obj
The three principles of OOP :
1. Encapsulation - provides: 
information hiding, data protected form outside world, portability
2. Inheritance
3. Polymorphism
Unified Modeling Language (UML)
sparated compilation (58)
spesification file (.h)
implementation file (.cpp)
#ifndef -if not defined, #define ,#endif ?????
the "this" keyword means that i mean to the data member not the parameter

CONSTRUCTORS & DESTRUCTORS
constructors:
* must have the same name as the class itself
* are functions
* can be overloaded
* have NO return type (not even void)
* are called when obj is created
destructors:
* there cam only be one
* called automaticly whaen obj destroyed
* does cleanup when obj is removed from memory
(in other words,they called when obj destroyed)

immutable class- no setters just getters (book example)

M_PI- is built in constant in the cmath library that represent pi
and equall to 3.14159265358979323846
(https://linuxhint.com/use-the-pi-constant-in-cpp/)

encapsulation-combining fields and methods into individual entities,providing
portability and security.
</pre>

<h3>Section 7 - Exceptions Debugging and inheritance</h3>
<pre>  
Exception: 
* objects representing a response to an event
* help us make the program more robust and fault-tolerant
* Exception obj are created from classes ,just like any obj are.
The top exception hierarchy is a class named exception.
after that ther are most comman cousses are : 
logic_error , runtime_error, bad_optional_access,bad_typeid

first lets import the currect library like that👉 #include<stdexcept>  in order to be able using exceptions

try{}
catch(){cerr << "yayyy it big vector!" << endl;}
print error using cerr insted of cout



Inheritance - superclass and sub classes (superclass -animal subclasses- bird cat etc..)
evrey subclass posses features of the superclass'but also have a spacial features of their own 

</pre>