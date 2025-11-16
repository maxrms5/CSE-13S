4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Reversing an array using pointers.
For this assignment, I used a for loop to iterate through the first half of the array. I then took the ith element
and the jth element (the element opposite to i in the array) and swapped them. This was accomplished
by taking the ith element, storing it in a temp variable, overwriting the ith element with the jth element, and then  
overiting the jth element with the stored value (ith) in the temp variable.



2. String handling with dynamic memory.
For this part, I allocated memory for the string using malloc(). If the string was NULL, I returned "Memory allocation failed."
Otherwise, I used fgets() to get a string from the user. I then called the countVowel function and assigned the output to vowelCount.
For the countVowel() function, I made a char array of vowels, and then checked each individual character in the string against each 
vowel in the vowel array using a while loop. If there was a match, I increased the vowel count. Otherwise, I continued the loop. The loop 
ended when the while loop detected the '\0' char at the end of the input string.


3. Implementing a binary search tree.
For the first function in this part, createNode(), I used malloc() to allocate memory for the node, then I initilized the data field 
of the node with the value passed to the function. The left and right nodes were also initilized as NULL. For the second function, insert() 
I checked if the node did not exist (Node == NULL) (base case), if not I created the node with the value passed to the function.
Otherwise, using recursion, I checked if the value passed value was < node value or > node value (recursive case). 
If its value was less, I recursively traveled to the left node, otherwise I traveled to the right node until the base case was met.
For the third function, search(), I traveled through the tree comparing the current node value to the value passed to the function. If the value 
was smaller than the node value, I traveled to the left subtree, otherwise, I traveled to the right subtree. If I found the value, I returned it, otherwise I returned NULL.
For the fourth function, inOrderTraversal() I used recursion again. The base case was the node not existing, causing a return. For the 
recursive step, I traveled to the far left of the tree to print the first values, then I traved right down every subtree recursively printing those
values too. This went on until the final value was printed on the far right of the tree. For the final function, freeTree() I recursively traveled 
through every single node in the tree, then I freed every node using the free() function from the bottom-up.