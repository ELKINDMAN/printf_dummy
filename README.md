Declare the function: int _printf(const char *format, ...);
Define the function as a variadic function as follows:
Declare a variable using va_list (eg(e.g., julian julien) to store the arguments in the main function.,
Use va_start to Initialize the variable declared by va_list to start with format,
Use a loop to parse through each character in the format string
Use a conditional to identify ‘%’,
If any specifer is matched
Call the corresponding function for each specifier,
If non is matched and looping is over,over.
Print out the format string using write || fputs || putchar,
Return the number of characters printed
	


We define helper functions (kind_char, dan_str, hastro_pcnt) to handle each format specifier.
We create a structure (FormatHandler) to associate format specifiers with their respective handling functions.
We declare an array of FormatHandler structures (format_handlers) to map format specifiers to handlers.
In the _printf function, we use a loop to parse the format string character by character. When a format specifier is encountered, we use the array of format handlers to call the appropriate handling function based on the specifier.
We keep track of the number of characters printed (charsPrinted) and return it as the result of the _printf function.




Task 1

First, initialize a variable (int hastrokanah) to be equal to zero,

Then add the variable argument to the list of arguments (va_start, va_list, va_arg),

We loop over the format string using for loop to iterate through each character,








JULIEN IS A GOOD BOY ABEG OO
Julien nah goat, e dey smoke igbo
