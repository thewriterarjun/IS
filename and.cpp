#include<iostream>
#include<string>
using namespace std;
int main(){
    string text  = "Hello World";
    string and_op = "", or_op = "" , xor_op = "";

    for(char ch : text){
    and_op += (char)(ch&127);
    or_op += (char)(ch|127);
    xor_op += (char)(ch^127);
}
    cout<<"And Output is : "<<and_op<<endl;
    cout<<"Or Output is : "<<or_op<<endl;
    cout<<"xor output is: "<<xor_op<<endl;
    return 0;
}