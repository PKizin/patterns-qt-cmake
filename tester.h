#ifndef TESTER_H
#define TESTER_H

class Tester {
public:
    static void test_creating_patterns();
    static void test_structural_patterns();

private:
    Tester();
    Tester(const Tester&);
    Tester& operator=(const Tester&);
};

#endif
