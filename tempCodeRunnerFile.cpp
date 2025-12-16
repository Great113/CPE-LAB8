#include<iostream>
#include<string>
using namespace std;

int main(){
 string c;
 int x;
 cout << "Enter your age: ";
 cin >> x;
 if(x<=25){
    int y;
    cout <<"Enter your height: ";
    cin >> y;
    if(y<100){
        c = "Chopper";
    if(y<180 && y>=100){
        c = "Usopp";
    }
    if(y>180){
        int q;
        cout <<"Enter your bounty: ";
        cin >> q;
        if(q<=1100000000){
            c = "Sanji";
        }
        if(q>1100000000){
            c = "Zoro";
        }

    }
    }
if(x<=60 && x>25){
    int j;
    cin >> j;
    if(j<= 500000000){
     c = "Franky";
    }
    if(j> 500000000){
        c = "Jinbe";
    }
if(x>60){
    c = "Brook";
}    
}
 }
 cout << c;
}