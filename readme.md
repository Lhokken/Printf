*This project has been created as part of the 42 curriculum by gcerrete*

# Printf Replication
## Description
 The goal of this project is to replicate the behavior of the standard C function printf. The implementation is limited to the following format specifiers:

- %c: Prints a single character.

- %s: Prints a string (as defined by common C conventions).

- %p: Prints a void * pointer argument in hexadecimal format.

- %d: Prints a decimal (base 10) number.

- %i: Prints an integer in base 10.

- %u: Prints an unsigned decimal (base 10) number.

- %x: Prints a number in hexadecimal (base 16) lowercase format.

- %X: Prints a number in hexadecimal (base 16) uppercase format.

- %%: Prints a percent sign.

 The function returns the number of characters printed. It recognizes the format specifiers listed above and handles any extra characters by printing them literally. It also replicates the behavior of printf regarding specific edge cases (such as NULL parameters).

## Instructions
Compile and run using the following commands in order:

1) make
2) make test

## Resources
 To understand the original behavior of printf, I consulted the man pages and used Gemini AI. To verify the behavior of ft_printf, I compiled a main file containing numerous tests comparing both functions (printf and ft_printf).

 I used Gemini AI with the following custom instruction: "Quando chiedo delucidazioni in ambito programmazione software, non darmi direttamente la soluzione." (Translated: "When I ask for clarifications regarding software programming, do not give me the solution directly.")

 I used Gemini AI to debug errors, typically when I had been stuck for too long.