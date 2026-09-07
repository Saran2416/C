#include <stdio.h>
#include <stdbool.h>

enum Weekday { MON, TUE, WED, THU, FRI };

struct Student {
    int id;
    char grade;
    float marks;
};

union Data {
    int i;
    float f;
    char c;
};

int main() {
    // Integer types
    char ch = 'A';
    signed char sch = -10;
    unsigned char uch = 200;
    short sh = -32000;
    unsigned short ush = 60000;
    int age = 20;
    unsigned int uage = 20;
    long lnum = 123456789L;
    unsigned long ulnum = 123456789UL;
    long long llnum = 1234567890123LL;
    unsigned long long ullnum = 1234567890123ULL;

    // Floating point types
    float fnum = 3.14f;
    double dnum = 3.1415926535;
    long double ldnum = 3.141592653589793238L;

    // Boolean type (needs <stdbool.h>)
    bool isPassed = true;

    // Derived types: array, string, pointer, enum, struct, union
    int numbers[3] = {1, 2, 3};
    char name[20] = "Zenen";
    int *ptr = &age;
    enum Weekday today = WED;
    struct Student s1 = {1, 'A', 95.5f};
    union Data data;
    data.i = 100;

    // Printing values
    printf("=== C Data Types ===\n");
    printf("char: %c (size: %zu bytes)\n", ch, sizeof(ch));
    printf("signed char: %d (size: %zu bytes)\n", sch, sizeof(sch));
    printf("unsigned char: %u (size: %zu bytes)\n", uch, sizeof(uch));
    printf("short: %hd (size: %zu bytes)\n", sh, sizeof(sh));
    printf("unsigned short: %hu (size: %zu bytes)\n", ush, sizeof(ush));
    printf("int: %d (size: %zu bytes)\n", age, sizeof(age));
    printf("unsigned int: %u (size: %zu bytes)\n", uage, sizeof(uage));
    printf("long: %ld (size: %zu bytes)\n", lnum, sizeof(lnum));
    printf("unsigned long: %lu (size: %zu bytes)\n", ulnum, sizeof(ulnum));
    printf("long long: %lld (size: %zu bytes)\n", llnum, sizeof(llnum));
    printf("unsigned long long: %llu (size: %zu bytes)\n", ullnum, sizeof(ullnum));

    printf("float: %f (size: %zu bytes)\n", fnum, sizeof(fnum));
    printf("double: %lf (size: %zu bytes)\n", dnum, sizeof(dnum));
    printf("long double: %Lf (size: %zu bytes)\n", ldnum, sizeof(ldnum));

    printf("bool: %d (size: %zu bytes)\n", isPassed, sizeof(isPassed));

    printf("array: {%d, %d, %d} (size: %zu bytes)\n", numbers[0], numbers[1], numbers[2], sizeof(numbers));
    printf("string: %s (size: %zu bytes)\n", name, sizeof(name));
    printf("pointer: address=%p, value=%d (size: %zu bytes)\n", (void*)ptr, *ptr, sizeof(ptr));
    printf("enum Weekday (WED): %d (size: %zu bytes)\n", today, sizeof(today));
    printf("struct Student: id=%d, grade=%c, marks=%.1f (size: %zu bytes)\n", s1.id, s1.grade, s1.marks, sizeof(s1));
    printf("union Data (as int): %d (size: %zu bytes)\n", data.i, sizeof(data));

    return 0;
}
