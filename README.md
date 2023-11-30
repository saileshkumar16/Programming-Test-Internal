# Programming-Test-Internal
## Date: 23-11-2023
## Question6 :
To accept any 4 digit number from the user and get the max and minimum values from the entered 4 digits.
## Algorithm:
Input:
Prompt the user to enter a 4-digit number.
Read and store the entered number in the variable number.

Check Validity:
Verify if the entered number is a 4-digit number (between 1000 and 9999, inclusive).
If the number is not valid, print an error message and terminate the program.
If the number is valid, proceed to the next steps.
Extract Digits:

Create an array digits to store individual digits of the number.
Extract the individual digits of the entered number and store them in the array:
digits[0] stores the thousands place digit.
digits[1] stores the hundreds place digit.
digits[2] stores the tens place digit.
digits[3] stores the units place digit.

Sort Digits:
Use a nested loop to compare and sort the digits in descending order.
Swap the digits if necessary to arrange them in descending order.

Form Max and Min Numbers:
Form the maximum number (maxNumber) by combining the sorted digits.
Form the minimum number (minNumber) by combining the sorted digits in reverse order.

Output:
Print the maximum and minimum numbers formed.

## OUTPUT: ![Screenshot (83)](https://github.com/saileshkumar16/Programming-Test-Internal/assets/144588637/bf80e66e-aafb-45c0-8c70-9131bf2025b0)

