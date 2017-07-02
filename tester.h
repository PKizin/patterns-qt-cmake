#ifndef TESTER_H
#define TESTER_H

class Tester {
public:
    static void test_creation_patterns();
    static void test_structure_patterns();

private:
    Tester();
    Tester(const Tester&);
    Tester& operator=(const Tester&);
};

#endif
