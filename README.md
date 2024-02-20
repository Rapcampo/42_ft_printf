# Overview

This is one of the 3 projects needed to complete rank 1 of the common core for the 42 programming school, as such it follow  general guidelines that must be complient with the school ☠️[norm](#the-norm)☠️ for readability of the code. The following are the general rules for this project.
This project is an introduction to variadic functions in C and how they work. As such understanding the functionality of those functions is crucial for this projects as well as a well structured and adaptible code!

### written in C and accordance with the norm 
- Must be completely error free, no seg fault, bus error, double free... undefined is ok, if it happens once. 
- No memory leaks! always free heap memory properly!  
- Must submit a makefile if required, the make file must compile with the usual flags -Werror, -Wextra, -Wall, Makefile must not relink.  
- Must contain the rules $(name), all, clean, fclean and re.  
- If bonuses are wanted, must include a rule in the makefile.  
- Bonuses must be in a different file "_bonus.c or _bonus.h"  if your project allows you to use your libft folder with its makefile. your project makefile must compile the library by using its makefile then the project.
- It is encouraged to create your own test programs.  

## Mandatory part
 
 - Files: Makefile, *.h, */*.h, *.c, */*.c
 - Makefile: NAME, all, clean, fclean, re.
 - External functions: malloc, free, write, va_start, va_arg, va_copy, va_end;
 - Write a library that contains ft_printf(), a function that will mimic the original printf();
   
## Technical considerations  
 
- Declaring global variables is forbidden.  
- If you need helper functions to split a more complex function, they must be defined as **static**. so their scope becomes limited to the appropriate file.
- Unused files are forbidden.  
- Every .c file must be compiled with the flags -Wall -Wextra -Werror.  
- Don’t implement the buffer management of the original printf().
- our function has to handle the following conversions: cspdiuxX%
- Your function will be compared against the original printf().
   
# Conversions Breakdown

For this projects there will be a detailed wiki style overview of how the function works (work in progress...). This detailed description is done with the porpuse of a better understanding of how each of these function works as well as the structure of their syntax. 

You have to implement the following conversions:
- ✔️  %c Prints a single character;
- ✔️  %s Prints a string (as defined by the common C convention);
- ✔️  %p Prints a pointer address. The void * pointer argument has to be printed in hexadecimal format;
- ✔️  %d Prints a decimal (base 10) number;
- ✔️  %i Prints an integer in base 10;
- ✔️  %u Prints an unsigned decimal (base 10) number;
- ✔️  %x Prints a number in hexadecimal (base 16) lowercase format;
- ✔️  %X Prints a number in hexadecimal (base 16) uppercase format;
- ✔️  %% Prints a percent sign;

# The Norm

The norm is set of rules stipulated by 42 for the pedagogical needs of the school. It enforces these rules through an open source tool called "Norminette", which the students can run to check if their code is complaint. Some of these rules are:

```
- No for, do...while, switch, case, goto, ternary operators and variable-length arrays are allowed
- Each function must be a maximum of 25 lines, not counting the function's curly brackets
- Each line must be at most 80 columns wide, comments included
- A function can take 4 named parameters maximum
- No assigns and declarations in the same line (unless static)
- You can't declare more than 5 variables per function
- 4 space tabulations
- and so on...
```
- [Norminette](https://github.com/42School/norminette) - The tool to enforce the 42 style of coding.
- [42 Header](https://github.com/42Paris/42header) - The header used by 42. To be used with Vim (or Neovim).
