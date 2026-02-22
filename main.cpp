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
double division(double num1, double num2){
    double quotient = num1 / num2;
    return quotient;
}

int main(){
    double num1;
    double num2;
    char op;
    double result;
    cout << "Enter q for operator to quit" << endl;
    while (op != 'q'){
    cout << "Input numbers and operator" << endl;
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
            result = division((double)num1, (double)num2);
            break;
    }
    if (op == 'q')
        cout << "quitting program" << endl;
    else
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
}
    return 0;
}