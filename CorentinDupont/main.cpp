#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void hr_2_InputAndOutput();

int main() {

    return 0;
}

//Hacker rank exercises
void hr_2_InputAndOutput(){
    int a = 0, b = 0, c = 0;
    int sum;
    bool cinIsFine = false;
    while (!cinIsFine){
        cout << "Veuillez entrer trois nombres entre 0 et 1000 pour en faire l'addition" << endl;
        cin >> a >> b >> c;
        if( a<0 || a>1000 || b<0 || b>1000 || c<0|| c>1000){
            cout << "Un ou plusieurs nombre(s) ne respecte(nt) pas les conditions" << endl;
        }else{
            cinIsFine = true;
        }
    }
    sum = a+b+c;
    cout << sum << endl;
}

void hr_3_BasicDataType(){
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%.2f\n%.5lf", a, b, c, d, e);
}

