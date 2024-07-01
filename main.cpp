#include <iostream>
#include "Accounting.h"
#include "Drink.h"
#include "Beer.h"
#include "Wine.h"
#include "Spirits.h"
#include "NonAlcoholicDrink.h"

int main() {
    // Accounting class usage
    Accounting::setPVM(18.5);
    std::cout << "Current PVM: " << Accounting::getPVM() << std::endl;

    // Drink class usage
    Drink drink;
    drink.setName("Coca-Cola");
    drink.setPrice(1.99);
    drink.getDrinkFeatures();

    // Beer class usage, pass all required parameters
    Beer beer("Lager Beer", 2.99, 50, "Lager");
    beer.setBeerKind("Lager");
    std::cout << "Beer Kind: " << beer.getBeerKind() << std::endl;

    // Wine class usage
    Wine wine("Merlot", "Napa Valley");
    wine.setWineKind("Merlot");
    wine.setWineRegion("Napa Valley");
    std::cout << "Wine Kind: " << wine.getWineKind() << std::endl;
    std::cout << "Wine Region: " << wine.getWineRegion() << std::endl;

    // Spirits class usage
    Spirits spirits;
    spirits.setSpiritsKind("Vodka");
    std::cout << "Spirits Kind: " << spirits.getSpiritsKind() << std::endl;

    // NonAlcoholicDrink class usage
    NonAlcoholicDrink nonAlcoholicDrink("Juice");
    nonAlcoholicDrink.setTypeOfDrink("Juice");
    std::cout << "Non-Alcoholic Drink Type: " << nonAlcoholicDrink.getTypeOfDrink() << std::endl;

    return 0;
}
