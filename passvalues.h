#ifndef PASSVALUES_H
#define PASSVALUES_H
#include "anexos.h"

namespace passValues
{
std::string nombre{};
std::string apellido{};
std::string email{};
std::string ccard{};
std::string expireY{};
std::string expireM{};
std::string digits{};
std::string pass{};
std::string usuarioFinal{}; 
std::string finalDate{};
bool hasNoSpecialCharacters{};
bool validEmail{};
bool validCreditCard{};
bool validExpireY{};
bool validExpireM{};


std::string placeHolderOLd{"NMARTINEZ"};
}

namespace logInInfo
{


std::string accountEmail{"nesmb16@gmail.com"};
std::string accountPassword{"P1R@T4"};
	
}

#endif
