#include <string>

class Account
{
public:
	static bool verifyCredentials(const std::string& user, const std::string& password);
	static std::string get_decrypted_username();
	static std::string get_decrypted_password();
};