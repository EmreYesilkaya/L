#ifndef WINE_H
#define WINE_H

#include "InterfaceDrinkFeatures.h"
#include <string>

class Wine : public InterfaceDrinkFeatures {
private:
    std::string wineKind; // Sadece bildirim.

public:
    static float staticWineExcise;
    std::string wineRegion;
    Wine(const std::string& kind, const std::string& region);
    void setWineKind(const std::string& kind);
    std::string getWineKind() const;
    void setWineRegion(const std::string& region);
    std::string getWineRegion() const;

    // InterfaceDrinkFeatures'dan gelen saf sanal fonksiyonların uygulanması:
    void setYearOfProduction(int year) override;
    void setColour(const std::string& colour) override;
    void setTypeOfPackaging(const std::string& type) override;
    void setPackSize(float size) override;
    void setProducer(const std::string& producer) override;
    void setCountry(const std::string& country) override;
    void getDrinkFeatures() const override;

    static void setWineExcise(float excise);
    static float getWineExcise();
};

#endif // WINE_H
