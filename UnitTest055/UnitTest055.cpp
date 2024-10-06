#include "pch.h"
#include "CppUnitTest.h" 
#include "../Lab_05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest055
{
    TEST_CLASS(UnitTest055)
    {
    public:

        // Тест для перевірки функції обчислення суми цифр
        TEST_METHOD(TestSumDigits)
        {
            int num = 2457;  // Тестове число
            int expectedSum = 18;  // Очікувана сума цифр: 2 + 4 + 5 + 7 = 18

            Assert::AreEqual(expectedSum, sumDigits(num));  // Перевіряємо результат функції
        }

        // Тест для перевірки функції кількості цифр
        TEST_METHOD(TestCountDigits)
        {
            int num = 2457;
            int expectedCount = 4;  // Кількість цифр у числі 2457

            Assert::AreEqual(expectedCount, countDigits(num));
        }

        // Тест для перевірки функції знаходження максимальної цифри
        TEST_METHOD(TestMaxDigit)
        {
            int num = 2457;
            int expectedMax = 7;  // Найбільша цифра у числі 2457

            Assert::AreEqual(expectedMax, maxDigit(num));
        }

        // Тест для перевірки функції знаходження мінімальної цифри
        TEST_METHOD(TestMinDigit)
        {
            int num = 2457;
            int expectedMin = 2;  // Найменша цифра у числі 2457

            Assert::AreEqual(expectedMin, minDigit(num));
        }

        // Тест для перевірки функції глибини рекурсії
        TEST_METHOD(TestRecursionDepth)
        {
            int num = 2457;
            int expectedDepth = 4;  // Глибина рекурсії, що відповідає кількості цифр

            Assert::AreEqual(expectedDepth, recursionDepth(num));
        }
    };
}
