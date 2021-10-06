//Secret Message Generator in C++
// This program works by replacing the entered string by a secret key string
// Only the people with the key can decipher it
// contributed by Sameer Trivedi
// Feel free to change the key to any 26 letter string you want
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key      {"qwertyuiopasdfghjklmnbvcxzMNBVCXZASDFGHJKLPOIUYTREWQ@"};
    string secret_msg {};
    int key_compare;
    cout << "Please Enter the secret message to be encrypted" << endl;
    getline(cin, secret_msg);
    for(size_t i=0;i<secret_msg.length();i++)
    {
        key_compare=alphabet.find(secret_msg.at(i));
        secret_msg.at(i)=key.at(key_compare);
    }
    cout << "The encrypted secret message is " << secret_msg << endl;
    return 0;
}
