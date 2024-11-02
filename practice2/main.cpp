#include <iostream>

int main()
{
    int x = 5;
    std::cout << sizeof(x) << std::endl; // функция, которая позволяет узнать сколько байт в памяти 
                                         // занимает переменная
                                         // 4 bytes
    long l = 6;
    std::cout << sizeof(l) << std::endl; // 8 bytes

    long long ll = 10;
    std::cout << sizeof(ll) << std::endl; // 8 bytes

    char c = 'A';
    std::cout << sizeof(c) << std::endl; // 1 byte

    size_t st = 5;
    std::cout << sizeof(st) << std::endl; // 8 bytes

    float f = 4.0;
    std::cout << sizeof(f) << std::endl; // 4 bytes

    double d = 4.0;
    std::cout << sizeof(d) << std::endl; // 8 bytes

    bool b = true;
    std::cout << sizeof(b) << std::endl; // 1 byte

    bool b1 = 5;
    std::cout << "bool:" << b << std::endl; // bool:1

    // Неявные касты - bad
    // если мы сделаем так, то мантиса просто отбросится и останется 1

    //double --> long
    long l1 = 1.67;
    std::cout << l1 << std::endl; // 1

    //long --> double 
    double d1 = 212'110;
    std::cout << d1 << std::endl; // 212110

    // объявление функции
    int foo(double number);

    // определение функции
    // вернет 5, отбросив мантису при неявном касте к int
    int foo(double number)
    { 
        return 5.6;
    }
}