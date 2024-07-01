// Accounting.cpp
#include "Accounting.h"

// Statik üye değişkenin başlangıç değeri
float Accounting::staticPVM = 0;

// setPVM metodunun implementasyonu
void Accounting::setPVM(float taxSize) {
    staticPVM = taxSize;
}

// getPVM metodunun implementasyonu
float Accounting::getPVM() {
    return staticPVM;
}
