#ifndef SPIRITS_H
#define SPIRITS_H

#include <string>

class Spirits {
private:
    std::string spiritsKind;

protected:
    static float staticSpiritsExcise;

public:
    Spirits(); // Varsayılan yapıcı
    Spirits(const std::string& kind); // Aşırı yüklenmiş yapıcı
    ~Spirits(); // Yıkıcı

    void setSpiritsKind(const std::string& kind);
    std::string getSpiritsKind() const;

    static void setSpiritsExcise(float excise);
    static float getSpiritsExcise();
};

#endif // SPIRITS_H
