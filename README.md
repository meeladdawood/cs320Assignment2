## CS 320 Assignment 2 
**Description:** 
This assignment is a basic implementation of a stack machince and a tokenizer class, and to reimplement assignment 1 in a more appropriate C++ version. The Stack machince consists of two parts the stack class (Stack.cpp) and the stack header file (Stack.hpp). The tokenizer class consists of two parts. The tokenizer class (Tokenizer.cpp) and the tokenizer header file (Tokenizer.hpp). The reimplementation of assignment 1 can be found in files prog2\_1 ... prog2\_3

### Stack.cpp
**Description:** 
The Stack.cpp is the main class file for the stack machince implementation, it implements 3 functions Push, Pop, and Print. It is a basic stack C++ implementation. It is the templated version, which will allow the programmer to specifiy the data type of objects that the stack will contain.

**How to compile/run:**

Inorder to compile and run successful, the Stack.cpp must be ran with accompanying files.

```
//Compiling
g++ prog2_3.cpp Tokenizer.cpp Stack.cpp -o prog2_3

//Running
./prog2_3

``` 


### Stack.hpp
**Description:**
The Stack.hpp file is the header file for the Stack.cpp. It contains the data field for the stack and the function prototypes.

**How to compile/run:**
It is linked to the Stack.cpp. When you run the Stack.cpp file the Stack.hpp will run as well.


### Tokenizer.cpp
**Description:**
The Tokenizer.cpp is the main Tokenizer class in which the function GetTokens in which the tokenization occurs is implemented here. The GetTokens tokenizes based on whitespaces. The GetTokens function returns a pointer to the vector that stores the tokens. 
 

**How to compile/run:**
Inorder to compile and run successful, the Tokenizer.cpp must be ran with accompanying files.

```
//Compiling
g++ prog2_2.cpp Tokenizer.cpp -o prog2_2

//Running
./prog2_2

```


### Tokenizer.hpp
**Description:**
The Tokenizer.hpp file is the header file for the Tokenizer.cpp. It contains the data field for the vector and the function prototypes.
 

**How to compile/run:**
It is linked to the Stack.cpp. When you run the Stack.cpp file the Stack.hpp will run as well.

### prog2\_1
**Description:**
prog2\_1 is the C++ version of prog1\_6. This program will read in a single command line argument of N-integer, if the user inputs more than one or zero command line arguments then an appropriate error message will be printed. After the user inputs a single integer command line argument. The program will peform the same as prog1\_5.c expect this time, it will N times. The user can input "quit" to exit the program before entering data N times.


**How to compile/run:**

```
//Compiling
g++ prog2_1.cpp -o prog2_1

//Running
./prog2_1 8

```

### prog2\_2
**Description:**
prog2\_2 is an reimplementation of prog2\_1 except this program uses the Tokenizer class to tokenize input String.
 

**How to compile/run:**

```
//Compiling
g++ prog2_2.cpp Tokenizer.cpp -o prog2_2

//Running
./prog2_2 8

```


### prog2\_3
**Description:**

 



**How to compile/run:**

```
//Compiling
g++ prog2_3.cpp Tokenizer.cpp Stack.cpp -o prog2_3

//Running
./prog2_3 8

```

