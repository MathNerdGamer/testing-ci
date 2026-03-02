/**
 * @file placeholder.h
 * @brief Placeholder library with basic functions.
 */

#ifndef MATH_NERD_PLACEHOLDER_H
#define MATH_NERD_PLACEHOLDER_H

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of a and b.
 */
int add(int a, int b);

/**
 * @brief Subtracts two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Result of a - b.
 */
int subtract(int a, int b);

/**
 * @brief Multiplies two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Product of a and b.
 */
int multiply(int a, int b);

/**
 * @brief Divides two integers.
 * @param a Dividend.
 * @param b Divisor (must not be zero).
 * @return Quotient of a / b.
 * @note If b == 0, returns 0.
 */
int divide(int a, int b);

/**
 * @brief Remainder after division of two integers.
 * @param a Dividend.
 * @param b Divisor (must not be zero).
 * @return Remainder a % b.
 * @note If b == 0, returns 0.
 */
int rem(int a, int b);

#endif // MATH_NERD_PLACEHOLDER_H