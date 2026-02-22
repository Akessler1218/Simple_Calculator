#include <iostream>
#include <cmath>
using namespace std;

int addition(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
int subtraction(int num1, int num2){
    int difference = num1 - num2;
    return difference;
}
int multiplication(int num1, int num2){
    int product = num1 * num2;
    return product;
}
double division(int num1, int num2){
    double quotient = num1 / num2;
    return quotient;
}

int main(){
    int num1;
    int num2;
    double result;
    cout << "Input numbers and operator" << endl;
    char op;
    cin >> num1; cin >> op; cin >> num2;
    switch(op){
        case '+':
            result = addition(num1, num2);
            break;
        case '-':
            result = subtraction(num1, num2);
            break;
        case '*':
            result = multiplication(num1, num2);
            break;
        case '/':
            result = division(num1, num2);
            break;
    }
    cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;
}