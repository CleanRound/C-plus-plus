#include "Account.h"

struct User
{
private:
	string name;
	string surname;
	string email;
	Account account;
public:
	User(string name, string surname, string email, string login, string password, bool isAdmin)
	{
		this->name = name;
		this->surname = surname;
		this->email = email;
		this->account = Account(login, password, isAdmin);
	}
	string getName()
	{
		return this->name;
	}
	string getSurname()
	{
		return this->surname;
	}
	string getEmail()
	{
		return this->email;
	}
	Account getAccount()
	{
		return this->account;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setSurname(string surname)
	{
		this->surname = surname;
	}
	void setEmail(string email)
	{
		this->email = email;
	}
	void setAccount(Account account)
	{
		this->account = account;
	}
	void about()
	{
		println("Name: " << this->name);
		println("Surname: " << this->surname);
		println("Email: " << this->email);
		cout << endl;
		println("Account: ");
		this->account.about();
	}
};
