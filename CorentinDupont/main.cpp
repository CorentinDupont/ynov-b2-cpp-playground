#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void hr_2_InputAndOutput();
void hr_3_BasicDataType();
void hr_4_ConditionalStatement();
void hr_5_ForLoop();
void hr_6_Function();
int max_of_four(int a, int b, int c, int d);

int main() {
    hr_6_Function();
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

void hr_4_ConditionalStatement(){
    int n;
    cin >> n;
    if(n == 1){
        cout << "one" << endl;
    }else if(n == 2){
        cout << "two" << endl;
    }else if(n == 3){
        cout << "three" << endl;
    }else if(n == 4){
        cout << "four" << endl;
    }else if(n == 5){
        cout << "five" << endl;
    }else if(n == 6){
        cout << "six" << endl;
    }else if(n == 7){
        cout << "seven" << endl;
    }else if(n == 8){
        cout << "eight" << endl;
    }else if(n == 9){
        cout << "nine" << endl;
    }else if(n > 9){
        cout << "Greater than 9" << endl;
    }
}

void hr_5_ForLoop() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int n = a; n <= b; n++) {
        if (n == 1) {
            cout << "one" << endl;
        } else if (n == 2) {
            cout << "two" << endl;
        } else if (n == 3) {
            cout << "three" << endl;
        } else if (n == 4) {
            cout << "four" << endl;
        } else if (n == 5) {
            cout << "five" << endl;
        } else if (n == 6) {
            cout << "six" << endl;
        } else if (n == 7) {
            cout << "seven" << endl;
        } else if (n == 8) {
            cout << "eight" << endl;
        } else if (n == 9) {
            cout << "nine" << endl;
        } else if (n > 9) {
            if (n % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
}

void hr_6_Function(){
    max_of_four(1, 2, 5, 3);
}

int max_of_four(int a, int b, int c, int d){
    int theFour[4] = {a, b, c, d};

    int i = 0;
    int max = a;
    while(i < 4){
        if(theFour[i]>max){
            max = theFour[i];
        }
        i++;
    }

    cout << max << endl;
}
