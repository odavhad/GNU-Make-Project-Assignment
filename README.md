## Embedded Linux GNU Make Project Assignment

### Questions
1. Write a ‘C’ program to encrypt/decrypt a file using any one of the given cipher:
	
	+ An offset cipher: In an offset cipher each character from the source file is offset with a fixed value and then written to the target file. For example, if character read from the source file is ‘A’, then convert this into a new character by offsetting ‘A’ by a fixed value, say 128, and then writing the new character to the target file.
    
	+ A substitution cipher: In this each character read from the source file is substituted by a corresponding predetermined character and this character is written to the target file. For example, if character ‘A’ is read from the source file, and if we have decided that every ‘A’ is to be substituted by ‘!’, then a ‘!’ would be written to the target file in place of every ‘A’ Similarly, every ‘B’ would be substituted by ‘5’ and so on. Modularize the given problem and define the following modules/functions separately in C source (.c) files:
		- ReadSrc()
		- ConvertCipher()
		- DsiplayCipher()
		
	Write a Makefile to compile and link these three C source files and produce a final binary myencrpt. Build the program in Linux environment using GNU Compiler Collection (GCC).

2. Suppose a file contains student’s records with each record containing name and age of a student. Write a ‘C’ program to read these records and display them in sorted order by name. Modularize the given problem and define the following modules/functions separately in .c file:
	
	+ ReadRec()
	+ DisplayRec()
	+ SortRec()
	
	Write a Makefile to compile and link these three C source files and produce a final binary myrec. Build the program in Linux environment using GNU Compiler Collection (GCC).
