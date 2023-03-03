#include <iostream>
#include <algorithm>
using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

Fraction reduce(const Fraction& f)
{
    int divisor = gcd(f.numerator, f.denominator);
    return { f.numerator / divisor, f.denominator / divisor };
}

Fraction toSimple(const Fraction& f)
{
    int wholePart = f.numerator / f.denominator;
    int newNumerator = f.numerator % f.denominator;
    return { newNumerator, f.denominator };
}

Fraction operator+(const Fraction& a, const Fraction& b)
{
    int newNumerator = a.numerator * b.denominator + b.numerator * a.denominator;
    int newDenominator = a.denominator * b.denominator;
    Fraction result = { newNumerator, newDenominator };
    return reduce(result);
}

Fraction operator-(const Fraction& a, const Fraction& b)
{
    int newNumerator = a.numerator * b.denominator - b.numerator * a.denominator;
    int newDenominator = a.denominator * b.denominator;
    Fraction result = { newNumerator, newDenominator };
    return reduce(result);
}

Fraction operator*(const Fraction& a, const Fraction& b)
{
    int newNumerator = a.numerator * b.numerator;
    int newDenominator = a.denominator * b.denominator;
    Fraction result = { newNumerator, newDenominator };
    return reduce(result);
}

Fraction operator/(const Fraction& a, const Fraction& b)
{
    int newNumerator = a.numerator * b.denominator;
    int newDenominator = a.denominator * b.numerator;
    Fraction result = { newNumerator, newDenominator };
    return reduce(result);
}

void print(const Fraction& f)
{
    cout << f.numerator << "/" << f.denominator << endl;
}

int main() {
    Fraction f1, f2;

    cout << "Enter the numerator and denominator of the first fraction: ";
    cin >> f1.numerator >> f1.denominator;
    cout << "Enter the numerator and denominator of the second fraction: ";
    cin >> f2.numerator >> f2.denominator;

    system("cls");

    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction product = f1 * f2;
    Fraction quotient = f1 / f2;

    cout << "f1 = ";
    print(toSimple(f1));

    cout << "f2 = ";
    print(toSimple(f2));

    cout << "f1 + f2 = ";
    print(toSimple(sum));

    cout << "f1 - f2 = ";
    print(toSimple(diff));

    cout << "f1 * f2 = ";
    print(toSimple(product));

    cout << "f1 / f2 = ";
    print(toSimple(quotient));

    return 0;
}