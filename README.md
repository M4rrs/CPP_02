# C++ Module 02
Polymorphism, operator overloading, and Orthodox Canonical Form (OCF).

**Note: I did not do Exercise 03, BSP.**

* [Exercise 00](#exercise-00-my-first-class-in-orthodox-canonical-form)
* [Exercise 01](#exercise-01-towards-a-more-useful-fixed-point-number-class)
* [Exercise 02](#exercise-02-now-were-talking)
## Exercise 00: My First Class in Orthodox Canonical Form
This exercise is where you are first introduced to the concept of Fixed Point Numbers. However, you only really start to handle Fixed Point Numbers in Exercise 01 onwards.

In this exercise you will learn how to write out a class in OCF that represents a fixed point number. The class includes:
* Private:
	* An integer to store the value.
	* A static const integer to store the fractional bits.
* Public:
	* A default constructor.
	* A copy constructor.
	* A copy assignment operator.
	* A destructor.
	* Function **int getRawBits( void ) const;**
	* Function **void setRawBits( int const raw );**

![FPN](https://cdn.discordapp.com/attachments/989407433858375683/1087701069825585182/Screenshot_2023-03-21_at_19.35.33.png)
![FPN](https://cdn.discordapp.com/attachments/989407433858375683/1087700985436192809/Screenshot_2023-03-21_at_19.35.16.png)

## Exercise 01: Towards a more useful fixed-point number class
Here you learn how to actually print out a Fixed Point Number.

From the previous class, add:
* A constructor that takes a **constant integer**, and convert it to the corresponding fixed point value.
* A constructor that takes a **constant floating point number**, and convert it to the corresponding fixed point value.
* Function **float toFloat( void ) const;** that converts fixed point to float.
* Function **int toInt( void ) const;** that converts fixed point to int.
* Overloaded insertion (<<) operator that inserts the floating-point representation
of the fixed-point number into the output stream.
 
![fpn](https://cdn.discordapp.com/attachments/989407433858375683/1087703326369513482/Screenshot_2023-03-21_at_19.44.33.png)
![fpn](https://cdn.discordapp.com/attachments/989407433858375683/1087703194697732166/Screenshot_2023-03-21_at_19.44.02.png)

## Exercise 02: Now we’re talking
More added functions and operators.
* Overload the following operators:
	* The 6 comparison operators: **>, <, >=, <=, ==** and **!=**
	* The 4 arithmetic operators: **+ , -,** **\* ,** and **/**
	* The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators.
* Add four member functions:
	* Two member functions **min**, one that takes two references on fixed point numbers, and another that takes two references to **constant** fixed point numbers.
	* Two member functions **max**, that take in the same arguments as above.
	* Min returns reference to the smallest, and max returns the greatest.

![fpn](https://cdn.discordapp.com/attachments/989407433858375683/1087705896374767616/Screenshot_2023-03-21_at_19.54.26.png)
![fpn](https://cdn.discordapp.com/attachments/989407433858375683/1087705896567709736/Screenshot_2023-03-21_at_19.54.48.png)