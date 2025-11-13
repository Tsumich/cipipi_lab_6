#include <iostream>
#include <stdio.h>
#include <cmath>

//fabs(a-b) <= eps

using namespace std;

int main()
{
    double sum, a = 0.1, b = 1, h = 0.1, x, y, eps = 1e-4;
    int i = 0; // ñ÷åò÷èê
    double ai;
    x =  a;
    fact = 1
    y = (1+2*x*x)*exp(x*x);
    i =0;
    ai = (2*i+1)*pow(x,2*i) / fact;
    s =+ ai;
    //îáåğíóòü ıòî â öèêë
    while(fabs(ai) >= eps) {
        i++;
        fact*=i;
        ai = (a*i+1)
    }
    return 0;
}

int ex_1() {
    int a, b;
    cout << "Enter a number";
    ñin >> a;
    cout << "Enter b number";
    ñin >> b;
    if (a > 0 && b % 2 == 0 ) {
        cout << "yes";
        return 0;
    } else {
        cout << "no";
        return 0;
    }
}

int ex_2() {
    int a;
    cout << "Enter a number (a <= 9999)";
    ñin >> a;
}

int ex_3(){
    int a, b, c;
    cout << "Enter a number";
    ñin >> a;
    cout << "Enter b number";
    ñin >> b;
    cout << "Enter c number";
    ñin >> c;
    if (a > 30000 || b > 30000 || c > 30000) {
        cout << "Invalid value";
        return -1;
    }
    if(a == b && b == c ) {
        cout << "YES";
        return 0;
    }else {
        cout << "NO";
        return -1;
    }
}

int ex_4() {
    for(i = 0; i <= 500; i++){
        if( i % 5 == 0 ) cout << "fuzz";
        else if(i % 7 == 0 ) cout << "buzz";
        else if (i % 7 == 0 && i % 5 == 0) cout << "fuzzbuzz";
        else cout << i;
    }
}

int ex_5() {
    double y, x;
    for (i = -2; i <= 2; i+=0.5) {
        if (i == -2) {
            printf("-----------");
            printf("  x  |  y  ");
            printf("-----------");
        }
        y = -2.4 * pow(i, 2) + 5 * i - 3;
        printf("  %f  |  %f  ", i, y);
    }
    return 0;
}

int ex_6(){
    return 0;
}

int ex_9(){
    return 0;
}
