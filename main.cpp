#include <iostream>
#include <cstdlib>
using namespace std;
int domino(){
int a;
int b;
int c;
int d;
int temp;
int temp1;
cin >> a >> b >> c >> d;
if (b>a){
    temp=a;
    a=b;
    b=temp;
}
if (d>c){
    temp=c;
    c=d;
    d=temp;

}
if (c>a){
    temp=a;
    temp1=b;
    a=c;
    b=d;
    c=temp;
    d=temp1;
}
if (c==a && d>b){
    temp=b;
    b=d;
    d=temp;
}
cout << a << b << c << d;
}
int searching(){
int a;
int b;
int S;
int D;
cin >> S >> D;
if (D>S){
    cout << "GRESKA";
    exit (EXIT_SUCCESS);
}
if ((S+D)%2!=0){
    exit (EXIT_SUCCESS);
}

a=(S+D)/2;
b=S-a;
cout << a << endl << b << endl;
}
int change(){

     int V;
     int P;
     cin >> P >> V;
     if (V<P){
        cout << "Nemate dovoljno novca.";
        exit (EXIT_SUCCESS);
     }
     if (P==0){
        cout << "Ovaj predmet je besplatan";
        exit (EXIT_SUCCESS);
     }
     int R=V-P;
     int M=0;
     while (R!=0){
        if (R%5==0 && R%2!=0){
           R=R-5;
           M++;
        }
        if (R%2==0 && R%5!=0){
            R=R-2;
            M++;
        }
        else{
            R=R-1;
            M++;

        }

        }
        cout << M;


       return 0;

}
int main()
{
    cout << "Ukucati 1, 2 ili 3. 1. Kusur 2. Domine 3. Otkrivanje" << endl;
    int answer;
    cin >> answer;
    if (answer!=1 && answer!=2 && answer!=3){
        cout << "Greska";
        exit (EXIT_FAILURE);
    }
    if (answer==1){
        change();
    }
    if (answer==2){
        domino();
    }
    if (answer==3){
        searching();
    }
    return 0;
}
