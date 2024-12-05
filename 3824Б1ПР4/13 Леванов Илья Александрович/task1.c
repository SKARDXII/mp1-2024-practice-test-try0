/* // Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  return 0;
} */

// =============== 

#include <limits.h>

int sum_of_two_numbers(int a, int b)
{
    long long sum = (long long)a + (long long)b; // Используем long long для предотвращения переполнения

    if (sum > INT_MAX) {
        return INT_MAX;  // Если сумма больше INT_MAX, возвращаем INT_MAX
    }
    if (sum < INT_MIN) {
        return INT_MIN;  // Если сумма меньше INT_MIN, возвращаем INT_MIN
    }
    
    return (int)sum;  // Если переполнения нет, возвращаем сумму как целое число
}
