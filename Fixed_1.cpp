#include "Account.h"

bool authenticationSuccessful_f(const std::string& user, const std::string& password)
{
	return Account::verifyCredentials(user, password);
}

bool authenticate_f(char* user, char* password)
{
	return Account::verifyCredentials(user, password);
}

