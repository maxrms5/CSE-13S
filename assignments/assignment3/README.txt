5. Explain your answers (18 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Making change
For the making change code, I used recursion to find the number of ways to make n cents. First I had the base case
n == 0 which handled if the amount had finally become 0. I also has another base case n<0 which handled the case where
a negative value was entered by the user. Then I had the recursive case which used the value() function to check the value of 
the largest 'usable' coin. Then I would call the next level of count() with an 'amount' value = amount - maxCoin and a maxcoin 
value of the next lowest maxcoin. 


2. Frequency of leading digits
For the getMSDigit() function. I used a while loop to integer divide and modulo the given number by 10 until there was only 
one digit remaining. The modulo operator stored the current lsdigit and the division eventually turned it into the msdigit.
Then in the main() function, I used the scanf() function to get numbers until ctrl-d was entered since that will return a 0.
Each number was checked against a 2D array (digits[num][count]). For each occurence of an int 0-9, the count was updated (+= 1). 
Then, I then printed the array in the form 0:A 1:B 2:C ... 9:J, where A-J are the counts of 0-9.

3. Multiplying matrices
For the multipling matricies assignment, I first used scanf() to get the numbers for the size of matricies
a and b. I then checked the sizes to make sure they were multipliable (NxM * MxP = NxP). If they were, I used 
scanf() along with 2 nested for loops to get the values for each (i, j) in the matrix. I stored these in the arrays
a and b. Then, I multiplied them together by 'dot producting' the rows of a with the columns of b using 3 nested for 
loops. Loops i, j, k got each number from both sets of coordinates and stored the result in matrix c. c(i, j) = sum((i, k) * (k, j)). 
Finally I printed all 3 matrices using a new print function that used for loops to print the rows and cols.


4. Merge sort
For the merge sort assignment, I recursively called the merge_sort() function in order to divide the array
of size n into n sub arrays containing one element. Then I called the merge function to merge a pair of single
arrays together, with thier elements in the proper order. The elements are sorted by for loops checking thier 
values against each other. Eventually, the last arrays are merged, and I return the final sorted array.

