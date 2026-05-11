#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "===== Smart Cafe Chatbot =====\n";
    cout << "Type: menu, price, order, bye\n\n";

    while (true) {
        cout << "You: ";
        getline(cin, s);

        if (s == "hi" || s == "hello")
            cout << "Bot: Welcome to Smart Cafe!\n";

        else if (s == "menu")
            cout << "Bot: Pizza, Burger, Coffee\n";

        else if (s == "price")
            cout << "Bot: Pizza=200, Burger=100, Coffee=50\n";

        else if (s == "order")
            cout << "Bot: Your order has been placed successfully!\n";

        else if (s == "bye") {
            cout << "Bot: Thank you! Visit Again.\n";
            break;
        }

        else
            cout << "Bot: Sorry, item not found\n";
    }

    return 0;
}