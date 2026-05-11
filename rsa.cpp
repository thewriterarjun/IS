#include <iostream>
using namespace std;
int main()
{
    int p = 3,q=11;
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    int e = 3,d=1;

    while ((e * d) % phi != 1)
    {
        d++;
    }
    int msg;
    cout << "Enter message: ";
    cin >> msg;

    int enc = 1,dec=1;

    for (int i = 0; i < e; i++)
    {
        enc = (enc * msg) % n;
    }
    cout << "Encrypted Message: " << enc << endl;

    for (int i = 0; i < d; i++)
    {
        dec = (dec * enc) % n;
    }
    cout << "Decrypted Message: " << dec << endl;

    return 0;
}