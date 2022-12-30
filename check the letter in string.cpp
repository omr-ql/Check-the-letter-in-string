#include <iostream>
#include <string>
using namespace std ; 
int main() {
    string msg ; 
    cout << "Enter = " << endl ; 
    getline(cin , msg ) ; 
    
    string letter ; 
    cout << "Enter = " << endl ; 
    getline(cin , letter) ; 
    int flag =0;
    for (int i = 0 ; i < msg.length() ; i++) {
            if (msg[i] == letter[0]) 
                flag=1;
    }
    
    if(flag==1){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
        
}