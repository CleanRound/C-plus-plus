#include "library.h"
#include "User.h"
#include "Phone.h"

START_APP
{
    ukr_lang;

User user("John", "Doe", "john.doe@gmail.com", "johndoe", "password123", false);
user.getAccount().setBalance(500);
Phone phones[3] = {
    Phone("iPhone X", "Apple", "iOS", 2017, 999.99),
    Phone("Galaxy S21", "Samsung", "Android", 2021, 799.99),
    Phone("Pixel 6", "Google", "Android", 2021, 749.99)
};

// display phones details
for (int i = 0; i < 3; i++) {
    phones[i].about();
    next_line;
}
system("cls");

// login user
string username, password;
print("Enter your username: ");
cin >> username;
print("Enter your password: ");
cin >> password;
next_line;

if (user.getAccount().getLogin() == username && user.getAccount().getPassword() == password)
{
    // display user details
    access_message("Welcome, " << user.getName() << "!");
    user.about();
    next_line;

    // display phones, their prices and ask which one the user wants to buy
    int phone_choice;
    print("Which phone do you want to buy? (Enter the number): ");
    next_line;
    for (int i = 0; i < 3; i++) {
        print(i + 1 << ". " << phones[i].getModel() << " - $" << phones[i].getPrice() << endl);
    }
    cin >> phone_choice;
    next_line;

    if (phone_choice >= 1 && phone_choice <= 3)
    {
        // deduct phone price from user's account balance
        if (user.getAccount().getBalance() >= phones[phone_choice - 1].getPrice())
        {
            user.getAccount().setBalance(user.getAccount().getBalance() - phones[phone_choice - 1].getPrice());
            access_message("Congratulations, you have bought " << phones[phone_choice - 1].getModel() << "!");
        }
        else
        {
            error_message("Sorry, you do not have enough funds to buy this phone.");
        }
    }
    else
    {
        warning_message("Invalid choice.");
    }
}
else
{
    error_message("Invalid username or password.");
}

return 0;
}
