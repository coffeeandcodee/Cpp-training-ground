#include <iostream>
using namespace std;

//Variable swap program to illustrate passby value & passby reference applications.

void incorrect_solution1(int a, int b){
    a = b; 
    b = a;
    //this wouldn't work as first line replaces
    //value of a with b. 
    //Original value of a no longer available for
    //second line (b = a)
    
}

void incorrect_solution2(int a, int b){

    int temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << " b: " << b;

    //Incomplete, as we are PASSING BY VALUE
    //Within function block, they are swapped
    //However, outside function block, they are 
    //NOT swapped.

}

void solution(int &a, int &b){
      int temp = a;
    a = b;
    b = temp;

    cout << "\na: " << a << " b: " << b;
}
int main(){
 int a = 10, b = 20;

    incorrect_solution2(a, b); 
    cout << endl;
    cout << "a: " << a << " b: " << b;
    // can be seen that the initialized values of a and b are returned.


    int c = 30, d = 40;
    solution(c, d);
    cout << "\nc: " << c << " d: " << d << endl;
    // can be seen that the initialized values of c and d are ALTERED.

    return 0;
}