#include<iostream>
using namespace std;

int main(){

    cout << ": BASIC PATTERN QUESTION's :" << endl;

    //SOLID SQUARE
    //* * * *
    //* * * *
    //* * * *
    //* * * *
    
    cout << "SOLID SQUARE" << endl;
    for (int i=1;i<=4;i++){
        for (int j=1;j<=4;j++){
            cout << "*" << " ";
        }
        cout << " " << endl;
    }

    //HOLLOW SQUARE
    cout << "HOLLOW SQUARE" << endl;
    for (int i=1;i<=4;i++){
        for (int j=1;j<=4;j++){
                if(i==1 || j==1 || i==4 || j==4){
                    cout << "*" << " ";
                }
                else{
                    cout << " " <<" ";
                }
        }
        cout << "" << endl;
    }

    //ROHMBUS PATTERN
    cout << "ROHMBUS PATTERN" << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=4;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }

    //MIRRORED ROHMBUS PATTERN
    cout << "MIRRIORED ROHMBUS PATTERN" << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=4;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }

    //TRIANGLE
    cout << "TRIANGLE" << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }

    //HOLLOW TRIANGLE
    cout << "HOLLOW TRIANGLE" << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i==4||i==j||j==1){
                cout << "*" << " ";
            }
            else{
                cout << " " << " ";
            }
        }
        cout << "" << endl;
    }

    //INVERTED TRIANGLE
    cout << "INVERTED TRIANGLE" << endl;
    for(int i=4;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << "*" <<" ";
        }
        cout << "" << endl;
    }

    //MIRRORED TRIANGLE
    cout << "MIRRORED TRIANGLE" << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }  

    //MIRRORED ROTATED TRIANGLE
    cout << "MIRRORED ROTATED TRIANGLE" << endl;
    for(int i=4;i>=1;i--){
        for(int j=1;j<=4-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }

    //PYRAMID PATTERN
    cout << "PYRAMID STAR PATTERN" << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        for(int j=2;j<=i;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }

    //INVERTED PYRAMID PATTERN
    cout << "INVERTED PYRAMID PATTERN" << endl;
    for(int i=4;i>=1;i--){
        for(int j=1;j<=4-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        for(int j=2;j<=i;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }

    return 0;
}
