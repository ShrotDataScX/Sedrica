Car Inventory System: 

This assignment introduces the basics of Object-Oriented Programming (OOP) concepts such as classes,
objects, inheritance, and encapsulation. You will create a program that simulates an inventory system for a
car dealership, using classes to represent cars and specific types of cars (e.g., electric and sports cars).

1. Objective:
Implement OOP concepts like encapsulation, inheritance, and polymorphism in a car-themed inventory
management system.

3. Instructions:
  1. Complete each exercise below in your preferred programming language (C++ or Python).
  2. Make a Git Repository and commit your code for each task. Add a README file with explanations
     and instructions.

3. Problem Statement:
Define a class Car with the following attributes and methods:
 1. Attributes:
(a) make: the make of the car (e.g., Toyota, Ford) (string)
(b) model: the model of the car (e.g., Corolla, Mustang) (string)
(c) price: the price of the car (float)
 2. Methods:
(a) apply discount(%discount): a method to apply a discount on the price
(b) get info(): a method to display the car’s information

4. Tasks:

Task 1: Basic Class Creation
1. Create the Car class with the attributes and methods listed above.
2. Write a main program that creates a Car object, assigns values to its attributes, and displays the
information.

Task 2: Encapsulation
1. Modify your Car class to make the price attribute private.
2. Create getter and setter methods for price to control its access.
3. Demonstrate that you can access and modify price only through these methods.
   
Task 3: Inheritance
1. Define two subclasses: ElectricCar and SportsCar.
2. ElectricCar should have an additional attribute called battery range (float, representing the range
in miles).
3. SportsCar should have an additional attribute called top speed (float, representing the top speed in
mph).
4. Override the get info() method in each subclass to display all the car’s information, including the
additional attributes.

Task 4: Polymorphism
1. Create an array or list of Car objects that includes instances of Car, ElectricCar, and SportsCar.
2. Write a loop to call the get info() method on each object, demonstrating polymorphism.
