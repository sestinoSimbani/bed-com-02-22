#include <iostream>
#include <random>

using namespace std;

int main ()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> distribution(0, 11);

    int daysUntilExpiration = distribution(gen);

    if (daysUntilExpiration <= 0) {
        cout << "your subscription has expired";
    }
    else if (daysUntilExpiration <= 1) {
        cout << "your subscription expires within a day " << endl;
        cout << " Renew Now and save 20%";
    }
    else if (daysUntilExpiration <= 5) {
        cout << "your subscription will expires in " << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%";
    }
    else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now! ";
    }
    else {
        cout << "you have an active subscription.";
    }
    return 0;
}