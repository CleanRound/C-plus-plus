#include "library.h"

struct Account
{
private:
    string login;
    string password;
    bool isAdmin;
    double balance; // new member variable
public:
    Account() = default;
    Account(string login, string password, bool isAdmin)
    {
        this->login = login;
        this->password = password;
        this->isAdmin = isAdmin;
        this->balance = 1000.0;
    }
    string getLogin()
    {
        return this->login;
    }
    string getPassword()
    {
        return this->password;
    }
    bool getIsAdmin()
    {
        return this->isAdmin;
    }
    double getBalance() // new member function
    {
        return this->balance;
    }
    void setLogin(string login)
    {
        this->login = login;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
    void setIsAdmin(bool isAdmin)
    {
        this->isAdmin = isAdmin;
    }
    void setBalance(double balance) // new member function
    {
        this->balance = balance;
    }
    void about()
    {
        println("Login: " << this->login);
        println("Password: " << this->password);
        println("Is admin: " << this->isAdmin);
        println("Balance: $" << this->balance); // new output statement
    }
};