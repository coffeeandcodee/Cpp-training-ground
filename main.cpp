#include <iostream>
#include <string>
using namespace std;

//NOTE: the getline function is part of the <string> library. Cannot be used with other
// data types
int main() {
    
    string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string   key    {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvtsrqponmlkjihgfedcba"};
    
    string message{}, encryption{""};
    cout <<"Provide string: "; 
    getline(cin, message);


    for(char c: message){
        size_t index {alphabet.find(c)};
        if (index != string::npos){
            char new_char {key.at(index)};
            encryption += new_char;
    
        } else {
            encryption += c;
        }
    } 
    
    cout << "\nEncrypting message..." << endl;
    cout << "\nEncryption: " <<  encryption << endl;
   
    cout << "\nWould you like to decrypt? (Y/N)" << endl;
    
    string select {};
    getline(cin, select);
    
    string decryption {};
    string Y {"Y"}; string y {"y"};
     
    if(select.compare(Y) == 0 || select.compare(y) == 0) {
    
        cout << "\nDecrypting..." << endl;
    for(char c: encryption){
        size_t index = key.find(c);
        if(index != string::npos){
            char new_char(alphabet.at(index));
                decryption += new_char;
            } else {
                decryption += index;
            }   
        }
        
        cout << "\n" << decryption;
        
    } else {
        
        cout << "\n=== Goodbye! ===" << endl;
    }
    
    return 0;
}