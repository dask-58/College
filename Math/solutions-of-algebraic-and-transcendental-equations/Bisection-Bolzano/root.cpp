#include <iostream>
using namespace std;

const double delta = 0.00001;


double function(double x){
    // say function is
    return x * x * x - x - 1;
}

void root(double a, double b){
    if(function(a) * function(b) >= 0){
        cout << "Invalid Choice for a and b\n";
        return;
    }
    double c = a;
    while((b - a) >= delta){
        c = a + (b - a) / 2;

        if(function(c) == 0.0){
            cout << "Root is : " << c;
            return;
        }
        if(function(a) * function(c) < 0){
            b = c;
        }else if(function(b) * function(c) < 0){
            a = c;
        }
    }
    cout << "Root is : " << c << '\n';
}

int main(){
    double a, b;
    cout << "Enter initial values for a and b : \n";
    cin >> a >> b;
    root(a, b);
    return 0;
}