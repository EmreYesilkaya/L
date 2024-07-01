#include "Spirits.h"

// Static member initialization
float Spirits::staticSpiritsExcise = 0.0;

// Default constructor
Spirits::Spirits() {
    // Yapıcı kod buraya gelecek
}

// Overloaded constructor
Spirits::Spirits(const std::string& kind) : spiritsKind(kind) {
    // Aşırı yüklenmiş yapıcı kod buraya gelecek
}

// Destructor
Spirits::~Spirits() {
    // Yıkıcı kod buraya gelecek
}

// Set the kind of spirits
void Spirits::setSpiritsKind(const std::string& kind) {
    spiritsKind = kind;
}

// Get the kind of spirits
std::string Spirits::getSpiritsKind() const {
    return spiritsKind;
}

// Set the excise value
void Spirits::setSpiritsExcise(float excise) {
    staticSpiritsExcise = excise;
}

// Get the excise value
float Spirits::getSpiritsExcise() {
    return staticSpiritsExcise;
}
