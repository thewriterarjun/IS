#include<iostream>
using namespace std;
int main(){
    string text,enc="",dec="";
    int key,k=0;
    cout<<"Enter the string :"<<endl;
    cin>>text;

    cout<<"Enter key"<<endl;
    cin>>key;

    for(int i=0;i<key;i++){
        for(int j=i;j<text.length();j+=key){
            enc+=text[j];
        }
    }
    cout<<"Encrypted text :"<<enc<<endl;
    dec = enc;

    for(int i = 0; i<key; i++){
        for(int j=i;j<text.length();j+=key){
            dec[j] = enc[k++];
        }
    }
    cout<<"Decrypted text: "<<dec<<endl;
}