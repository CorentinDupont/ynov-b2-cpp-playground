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
void hr_7_Pointer();
void hr_7_update(int *a,int *b);
void hr_8_ArrayIntroduction(int n);
void hr_9_VariableSizedArray();

int main() {
    hr_9_VariableSizedArray();
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

void hr_7_Pointer(){
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    hr_7_update(pa, pb);
    printf("%d\n%d", a, b);
}

void hr_7_update(int *a,int *b) {
    // Complete this function
    int aTemp = *a;
    *a = *a + *b;
    *b = abs(aTemp - *b);
}

void hr_8_ArrayIntroduction(int n){
    if(n >= 1 && n <= 1000){
        int someIntegers[n];
        cout << "standard order" << endl;
        for (int i=0; i<n; i++){
            someIntegers[i] = rand() % 100 + 1;
            cout << someIntegers[i] << endl;
        }

        cout << "reverse order" << endl;
        for(int j=n; j>=0; j--){
            cout << someIntegers[j] << endl;
        }
    }
}

void hr_9_VariableSizedArray(){
    //Generate array with random integer wich will correspond to the size of other arrays
    int beginRandomSize = rand() % 100 + 1;
    int *randomSizeArray = new int[beginRandomSize]; //Première façon de faire un tableau à taille variable.
    for(int i=0 ; i<beginRandomSize ; i++){
        randomSizeArray[i] = rand() % 10 + 1;
    }

    //Création des vecteurs, correspondant à des tableaux de tailles variables.
    for(int i=0 ; i<beginRandomSize ; i++){
        cout << "création du vecteur " << i+1 << " de taille " << randomSizeArray[i] << endl;
        vector<int> aVector(randomSizeArray[i]);
        for(int j=0; j<randomSizeArray[i]; j++){
            aVector[j] = rand() % 100 + 1;
            cout << aVector[j] << " ";
        }
        cout << endl;
    }

    delete [] randomSizeArray;//Besoin de le supprimer après utilisation
}
