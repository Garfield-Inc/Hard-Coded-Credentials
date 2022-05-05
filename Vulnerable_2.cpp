#include "Account.h"

bool authenticateUser_v()
{
	const std::string& username = "abc";
	const std::string& passwd = "abc123";
	return Account::verifyCredentials(username, passwd);
}

bool authenticateUser_v1()
{
	const std::string user = "abc";
	const std::string pass = "abc123";
	return Account::verifyCredentials(user, pass);
}

bool authenticateUser_v2()
{
	const char* netflix_user_789 = "abc";
	const char* PASSWORD_KEY = "abc123";
	return Account::verifyCredentials(netflix_user_789, PASSWORD_KEY);
}

bool authenticate_v()
{
	std::string USER_db;
	std::string password;

	USER_db = "abc";
	password = "abc123";

	return Account::verifyCredentials(USER_db, password);
}

int main()
{
	return 0;
}