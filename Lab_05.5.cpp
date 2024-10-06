#include <iostream>
#include <cmath>
#include <algorithm>  // Для використання max, min
using namespace std;

// Рекурсивна функція для обчислення суми цифр
int sumDigits(int num)
{
    if (num == 0)
        return 0;
    return num % 10 + sumDigits(num / 10);
}

// Рекурсивна функція для обчислення кількості цифр
int countDigits(int num)
{
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}

// Рекурсивна функція для знаходження максимальної цифри
int maxDigit(int num)
{
    if (num < 10)
        return num;
    return max(num % 10, maxDigit(num / 10));
}

// Рекурсивна функція для знаходження мінімальної цифри
int minDigit(int num)
{
    if (num < 10)
        return num;
    return min(num % 10, minDigit(num / 10));
}

// Функція для обчислення глибини рекурсії
int recursionDepth(int num, int depth = 0)
{
    if (num == 0)
        return depth;
    return recursionDepth(num / 10, depth + 1);
}

int main()
{
    int num;
    cout << "Enter the digit:";
    cin >> num;

    // Якщо число негативне, беремо його модуль
    num = abs(num);

    cout << "Sum of the digits: " << sumDigits(num) << endl;
    cout << "Count of digits: " << countDigits(num) << endl;
    cout << "Max digits: " << maxDigit(num) << endl;
    cout << "Min digits: " << minDigit(num) << endl;
    cout << "Depth of recurtion: " << recursionDepth(num) << endl;

    return 0;
}
