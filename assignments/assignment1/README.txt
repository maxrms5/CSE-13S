4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Running total and average

For my running average code, I used total += x in order to caluclate the sum of the integers for as long as the 
input is active. I found the average by taking the sum of all of the integers (total) and dividing it by the number
of integers input (n).


2. Approximating pi
For the pi approximation script, I used a for loop from 0 to n to represent the summation notation in the given pi 
formula. Then, inside I used pi += *given equation* to have each part get summed. In the given equation, there was 
a 1/16^i. Since C does not naitively handle powers, I wrote a function that would calculate b^n, where b = base and n = exponent,
and input 16 as the base and the ith sum index as the exponent. I then returned that value and used it in the summation. I used double 
types when calculating 1/16^i since setting my values as integers and floats resulted in an overflow. 


3. Happy numbers
For my happy numbers script, I used a while loop to check if the number was NOT 4. Inside the loop, I checked if the
n == 1 (n is happy). If so, it broke the loop and returned n = 1. If n != 1: it took each digit of n
(by taking n and integer dividing it by 10^k where k is the targeted place value, then modulo-ing the result by 10 in order to get 
the remainder, which is just the digit in the kth place) and squared it. Then, I added the squares together and set n to
the value. Repeat. Subsequent loop iterations happened until either, if n == 1 (found a happy number) it broke or if n == 4 (found an unhappy number) it passed. 

