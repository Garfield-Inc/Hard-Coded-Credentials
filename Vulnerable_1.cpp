#include <string>

bool authenticationSuccessful_v(const std::string& username, const std::string& pwd)
{
	bool verified = false;

	if (username == "Administrator")
		verified = true;

	if (pwd.compare("changeme"))
		verified = true;

	return verified;
}

bool authenticate_v(char* user, char* password123)
{
	if (strcmp(password123, "4d101bb86330af90e4f71b1673895c17"))
		return true;

	return false;
}