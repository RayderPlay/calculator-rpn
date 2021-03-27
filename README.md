# Reverse Polish notation calculator

## Tasks to do
Write a program that allows you to solve the above task using the appropriate division into modules. Don't forget to enter comments into the file as you enter the program code into it. Run and test the program for different input values. Equip the file with the source code with documentation, which in addition to previously entered comments should contain information about the author, date of creation of the program, its version, modifications, etc., short program characteristics, specification of input and output data, description of how to use the program.

## Introduction
Reverse Polish notation (RPN), also known as Polish postfix notation or simply postfix notation, is a mathematical notation in which operators follow their operands, in contrast to Polish notation (PN), in which operators precede their operands. It does not need any parentheses as long as each operator has a fixed number of operands. The description "Polish" refers to the nationality of logician Jan Łukasiewicz,[1] who invented Polish notation in 1924.

## Explanation
In reverse Polish notation, the operators follow their operands; for instance, to add 3 and 4 together, one would write 3 4 + rather than 3 + 4. If there are multiple operations, operators are given immediately after their second operands; so the expression written 3 − 4 + 5 in conventional notation would be written 3 4 − 5 + in reverse Polish notation: 4 is first subtracted from 3, then 5 is added to it. An advantage of reverse Polish notation is that it removes the need for parentheses that are required by infix notation. While 3 − 4 × 5 can also be written 3 − (4 × 5), that means something quite different from (3 − 4) × 5. In reverse Polish notation, the former could be written 3 4 5 × −, which unambiguously means 3 (4 5 ×) − which reduces to 3 20 − (which can further be reduced to -17); the latter could be written 3 4 − 5 × (or 5 3 4 − ×, if keeping similar formatting), which unambiguously means (3 4 −) 5 ×.

## stack.h
An additional library for implementing the stack, since there is no implementation of this class in the C language.

## main.c
The main class that implements the functionality of the built-in RPN linux calculator.
