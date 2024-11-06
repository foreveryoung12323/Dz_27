#include "passport.h"
#include "foreignpassport.h"
#include "visa.h"
#include <iostream>

int main() {
 
    Passport myPassport("AB", 123456, "Voloshyn", "Stepan", "Vitalievich", "04.12.2008", "Morintsi", "01.01.2024", "Kyiv City Administration", "Kyiv");

  
    cout << "Passport details:\n";
    myPassport.displayPassportInfo();
    cout << endl;

  
    ForeignPassport myForeignPassport("AB", 654321, "Voloshyn", "Stepan", "Vitalievich", "04.12.2008", "Morintsi", "01.01.2024", "Kyiv City Administration", "Kyiv");

 
    myForeignPassport.addVisa(Visa("France", "01.06.2020", "01.06.2025"));
    myForeignPassport.addVisa(Visa("USA", "15.08.2021", "15.08.2026"));

 
    cout << "Foreign Passport details:\n";
    myForeignPassport.displayForeignPassportInfo();


}
