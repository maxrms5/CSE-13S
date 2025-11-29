3. Explain your answers (10 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. my-grep
For the my-grep assignment, I used fopen() to open the given file. I then checked if the pointer was valid (ptr != NULL) and if int
was not, I returned -1. Then using a while loop, I iterated over every line of the file using fgets, storing each line in a line[] 
char array that I initilized. I then checked the line[] against the target substring using strstr(). If the substring was in line[],
I printed the line. When the line[] == EOF, I broke out of the while loop and closed the file, again checking for errors and returnng -1 if so.


2. data-extract
For the data-extract part of the assignment, in main(), I used fopen() to open the infp file in read mode, and the outfp file in write mode. When doing so,
I also checked to see if ptr == NULL, and if so returned -1. I also used fclose() in the same way. For the copy_integers() function, I first 
used fseek() to set a pointer to the starting index specified in the file. Then I used a for loop to iterate over each int in the data, until 
the count of ints (end - start + 1) had been met. In the for loop, I first used fread() to read an integer from the input file. Then I used fwrite() 
to write that integer to the output file. I returned -1 if reading or writing was unsuccessful.



