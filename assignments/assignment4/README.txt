4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. We shall trim!
For the whitespace trimming assignment, I iterated over the character array using pointers, keeping track of the 
'index' of the last non-whitespace character. I stopped looping when the null character was detected. Then, for 
every character in the array after the last non-whitespace char to the null terminator, I overwote as a 0, trimming the string.

2. Checking if a string is a palindrome.
In order to check if a string is a palindrome, I used fgets() to get a string from the user. I then got the length of the string, 
using strlen(), and used it to remove the trailing newline char. Then, I used the tolower() function to make the entire string 
lowercase. Finally, I used a for loop to compare the 1st index to the nth index, the 2nd index to the n-1 index, etc. If there was
a non alphanumeric character, detected with isalnum(), I skipped over it and continued the loop. If there was any discrepancy 
between the characters, the output would not be a palindrome and the loop would break. Otherwise, the string would be a palindrome. 

3. Filtering and sorting zoo records
For the first function, has_b(), I used strchr() to search for the character b in the string. If it returned a pointer, aka !=NULL, 
I returned 1. The second function, should_keep(), checked each criterion by accessing variables from the 'a' class, using the -> operator.
If any of the criteria were met, the function returned 1. For the 3rd function, compare_animals(), I used the strcmp() function 
to check if the two given animal species were the same, if they werent, I returned the strcmp() result. If they were the same, 
I then compared thier ages and returned the difference in age if they had different ages. If they were also the same age, I 
returned the result of strcmp() on the name variable in order to check which one was first alphabetically. Again, each variable in the 
animal struct was accessed using the -> operator. Finally, for the sort_animals() function, I used two for loops to implement bubble sort.
For each pair of elements, I used the compare_animals() function to determine if they needed to be swapped. A positive value indicated they
were in the wrong order, and I swapped thier values using two temp Animal variables x, y. When the loops finished iterating, the list was sorted.

