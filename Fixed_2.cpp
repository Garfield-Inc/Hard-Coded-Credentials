#include "Account.h"

bool authenticateUser_f()
{
	const std::string& username = Account::get_decrypted_username();
	const std::string& password = Account::get_decrypted_password();
	return Account::verifyCredentials(username, password);
}
