#ifndef ALCOHOLIC_DRINK_H
#define ALCOHOLIC_DRINK_H

#include "InterfaceDrinkFeatures.h"
#include <string>

class AlcoholicDrink : public InterfaceDrinkFeatures {
private:
    float degreeOfAlcohol;
    void setDegreeOfAlcohol(float degree);
    float getAlcohol() const;

public:
    AlcoholicDrink(float degree);
    void calculateExciseTaxes();

    // InterfaceDrinkFeatures'dan gelen saf sanal fonksiyonların uygulanması:
    void setYearOfProduction(int year) override;
    void setColour(const std::string& colour) override;
    void setTypeOfPackaging(const std::string& type) override;
    void setPackSize(float size) override;
    void setProducer(const std::string& producer) override;
    void setCountry(const std::string& country) override;
    void getDrinkFeatures() const override;
};

#endif // ALCOHOLIC_DRINK_H
