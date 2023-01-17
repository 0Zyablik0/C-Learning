int main()
{
    // Arithmetic operations:

    int a = 1;
    int b = 2;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int del = a / b;

    // Boolean operations;

    bool _and = true && false and true;
    bool _or = true || false or false;
    bool _not = !false; // not false
    bool _eq = 5 == 4;
    bool _ne = 5 != 4;
    bool _gt = 5 > 4;
    bool _ge = 5 >= 4;
    bool _lt = 5 < 4;
    bool _le = 5 <= 4;

    // Bitwise operations;

    int l_shift = 2 << 4;
    int r_shift = 1024 >> 4;
    int complement = ~1024;
    int bitwise_and = 2 & 5;
    int bitwise_or = 2 | 5;
    int bitwise_xor = 2 ^ 5;

    // Memory Handling

    int *num = new int;
    delete num;
}