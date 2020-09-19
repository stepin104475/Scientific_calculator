///@file calculator.h
#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED



/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 + operand2
*/
int addition(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 - operand2
*/
int subtraction(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 * operand2
*/
int multiplication(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int division(int operand1, int operand2);
/**
* finds sine function value and returns the result
* @param[in] operand1
* @return float value of the sine(operand1)
*/
float sine(float  operand1);
/**
* finds cosine function value and returns the result
* @param[in] operand1
* @return float value of the cosine(operand1)
*/

float cosine(float operand1);
/**
* finds tangent function value and returns the result
* @param[in] operand1
* @return float value of the tangent(operand1)
*/

float tangent(float operand1);
/**
* finds sineh function value and returns the result
* @param[in] operand1
* @return float value of the sinh(operand1)
*/

float sineh(float operand1);
/**
* finds cosineh function value and returns the result
* @param[in] operand1
* @return float value of the cosineh(operand1)
*/

float cosineh(float operand1);
/**
* finds tangenth function value and returns the result
* @param[in] operand1
* @return float value of the tangenth(operand1)
*/

float tangenth(float operand1);
/**
* finds logten function value and returns the result
* @param[in] operand1
* @return float value of the logten(operand1)
*/

float logten(float operand1);
/**
* finds squareroot function value and returns the result
* @param[in] operand1
* @return float value of the squareroot(operand1)
*/

float squareroot(float operand1);
/**
* finds exponent function value and returns the result
* @param[in] operand1
* @return float value of the exponent(operand1)
*/

float exponent(float operand1);
/**
* finds power function value and returns the result
* @param[in] operand1
* @return float value of the power(operand1)
*/

float power(float operand1,float operand2);
/**
* finds factorial function value and returns the result
* @param[in] operand1
* @return float value of the factorial(operand1)
*/
int factorial(int operand3);
/**
* finds absolute function value and returns the result
* @param[in] operand1
* @return float value of the absolute(operand1)
*/

float absolute(float operand1,float operand2);


#endif // CALCULATOR_H_INCLUDED
