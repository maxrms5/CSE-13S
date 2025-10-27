4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Printing patterns
For the printing patters assignment, when working on the regular triangles,
I used nested for loops with variables i and j for in outer and inner loops. Loop i 
controled the lines, while j controled the asterisks. For the mirrored triangles, i added another loop, k.
The k loop controled the asterisks and the old j loop now controled the printing of a "seperate" white space 
triangle to act as filler to invert the other triangle.


2. Arithmetic calculator
For the calculator assignment, I used printf() statements in order to prompt the user for choices 1-6.
Then in a while loop, I used a switch statement in order to check what number was input. Based on 
the user's choice, I then executed their operation, using C's native algebraic operators. There are if
statements checking if certain inputs are valid or not. 


3. Lockers
For the locker assignment, I used a recursive function call with base case t=1 to determine the state of the locker.
If the current state was divisible, I returned !lockerState(1, t-1) otherwise, I just returned lockerState(l, t-1).


