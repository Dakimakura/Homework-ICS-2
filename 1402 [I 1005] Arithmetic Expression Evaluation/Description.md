# [I 1005] Arithmetic Expression Evaluation

# Description
Arithmetic expression can be defined recursively as following:
 
1. If a is a positive integer number, then a is an arithmetic expression.
2. If a is a negative integer number, then ``(a)`` is an arithmetic expression. 
3. If e and f are arithmetic expressions, then ``(e+f)``, ``(e*f)``,``(e-f)``,and ``(e/f)`` are all arithmetic expressions.
The expression ``((6*(-7))+(-9))`` is an example of arithmetic expression, and its value is ``-51``.  
Write a program that accepts an arithmetic expression represented as a string, output its value as an integer.
# Input
A string representing an arithmetic expression on one line.
# Output
The value of the arithmetic expression on one line.
# Sample Input
``` 
((6*(-7))+((-9)/3))
```
# Sample Output
```
-45
```
# Hint
There are mutiple test cases ended with EOF.
You can deal with it as the following code:
```c
//First read somehting from input.
while(scanf("...") != EOF) {
  //Read the remaining input.
  ....
  //Deal with one test case
  ...
  //Output the result.
  ...
}
```