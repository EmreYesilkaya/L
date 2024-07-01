// Accounting.h
#ifndef ACCOUNTING_H
#define ACCOUNTING_H

class Accounting {
protected:
    static float staticPVM; // Bu değişken sınıfın tüm örnekleri arasında paylaşılır.

public:
    static void setPVM(float taxSize);
    static float getPVM();
};

#endif // ACCOUNTING_H
