#ifndef INTERFACE_DRINK_FEATURES_H
#define INTERFACE_DRINK_FEATURES_H

#include <string>

class InterfaceDrinkFeatures {
public:
    virtual ~InterfaceDrinkFeatures() {}

    virtual void setYearOfProduction(int year) = 0;
    virtual void setColour(const std::string& colour) = 0;
    virtual void setTypeOfPackaging(const std::string& type) = 0;
    virtual void setPackSize(float size) = 0;
    virtual void setProducer(const std::string& producer) = 0;
    virtual void setCountry(const std::string& country) = 0;
    virtual void getDrinkFeatures() const = 0;
};

#endif // INTERFACE_DRINK_FEATURES_H
