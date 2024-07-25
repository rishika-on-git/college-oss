### Tiny Calculator Documentation

#### Overview
The Tiny Calculator project is a simple command-line calculator implemented in C++. It provides basic arithmetic operations, exponentiation, square root, and trigonometric functions through a user-friendly console interface.

#### Functions

1. **parseAddition()**
   - Prompts the user to enter two floating-point numbers.
   - Computes and displays the sum of the two numbers.

2. **parseSubtraction()**
   - Prompts the user to enter two floating-point numbers.
   - Computes and displays the difference between the two numbers.

3. **parseMultiplication()**
   - Prompts the user to enter two floating-point numbers.
   - Computes and displays the product of the two numbers.

4. **parseDivision()**
   - Prompts the user to enter two floating-point numbers.
   - Checks if the divisor is not zero.
   - Computes and displays the result of dividing the first number by the second, if valid.

5. **parseExponentiation()**
   - Prompts the user to enter a base (floating-point) and an exponent (integer).
   - Computes and displays the result of raising the base to the exponent power using the `pow()` function from `<cmath>`.

6. **parseSquareRoot()**
   - Prompts the user to enter a floating-point number.
   - Computes and displays the square root of the number using the `sqrt()` function from `<cmath>`.

7. **parseSine()**
   - Prompts the user to enter an angle in radians (floating-point).
   - Computes and displays the sine of the angle using the `sin()` function from `<cmath>`.

8. **parseCosine()**
   - Prompts the user to enter an angle in radians (floating-point).
   - Computes and displays the cosine of the angle using the `cos()` function from `<cmath>`.

9. **parseTangent()**
   - Prompts the user to enter an angle in radians (floating-point).
   - Computes and displays the tangent of the angle using the `tan()` function from `<cmath>`.

10. **help()**
    - Displays a help message listing available operations and their corresponding input commands.

11. **error()**
    - Displays an error message for unrecognized input commands.

#### Main Functionality
- The `main()` function manages the program flow using a loop that continuously prompts the user for input.
- Depending on the user's input command, it calls the respective function to perform the desired calculation or operation.
- The loop continues until the user chooses to exit by entering 'e'.

#### Usage
- Clone the repository and compile the code using a C++ compiler (e.g., g++).
- Execute the compiled binary to start the calculator.
- Follow the prompts to perform calculations and operations.
- Enter 'h' for help at any time to see a list of available commands.

#### Command Reference
- **a**: Addition
- **m**: Subtraction
- **u**: Multiplication
- **d**: Division
- **p**: Exponentiation
- **r**: Square Root
- **s**: Sine
- **c**: Cosine
- **t**: Tangent
- **h**: Help
- **e**: Exit

#### Example Usage
```plaintext
------------------
(h) For help
(e) To exit
Enter Your type: a
Enter the first value: 10
Enter the second value: 5
15
------------------
(h) For help
(e) To exit
Enter Your type: s
Enter the value (in radians): 1.5708
1
------------------
(h) For help
(e) To exit
Enter Your type: e
```

#### Notes
- Ensure valid input formats for numeric inputs to avoid errors.
- Floating-point results are displayed with precision based on the system's default settings.

This calculator project serves as a basic demonstration of command-line interaction and mathematical function usage in C++.
