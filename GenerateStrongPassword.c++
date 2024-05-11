#include<iostream> #include<string> #include<ctime> #include<cstdlib>  
using namespace std;
string getPassword(int length){
    string Password = "";
    string characters = "aquickbrownfoxjumpoverthelazydogaqutickbrownfoxjumpsoverthelazydog0123456789";
    int charSize = characters.size();
    int randomIndex;
    for(int i=0;i<length;i=i+1){
        randomIndex=rand()%charSize;
        Password=Password+characters[randomIndex];
    }
    return Password;
}
int main(){
    int length;
    cout<<"enter the length of the password ::";
    cin>>length;
    string password = getPassword(length);
    cout<<"gen. password :: "<< password;
}