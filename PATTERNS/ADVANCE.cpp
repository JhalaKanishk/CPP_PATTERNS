#include<iostream>
using namespace std;

int main(){
     /*
        (BUTTERFLY * PATTERN)
         *             *
         * *         * *
         * * *     * * * 
         * * * * * * * *
         * * * * * * * *
         * * *     * * *
         * *         * *
         *             *

    */
   cout << ": BUTTERFLY PATTERN :" << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        for(int j=1;j<=(4-i)*2;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }
    for(int i=4;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        for(int j=1;j<=(4-i)*2;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << "" << endl;
    }
    cout << " " << endl;

 /*
              *
            * * *
          * * * * *
        * * * * * * *
        * * * * * * *
          * * * * *
            * * *
              *
        */
    cout << ": DIAMOND PATTERN :" << endl;
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
     /*
        (K Shape Character Pattern Program)
        A B C D E F
        A B C D E
        A B C D
        A B C
        A B
        A
        A
        A B
        A B C
        A B C D
        A B C D E
        A B C D E F
        */
    int Alphbet = 65;
    for(int i=4;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout << ((char)(Alphbet+j)) << " ";
        }    
        cout << "" << endl;
    }
    for (int i=0;i<=4;i++){
            for (int j=0;j<=i;j++){
                cout << ((char)(Alphbet+j)) << " ";
            }
        cout << "" << endl;       
    }
    
   
    return 0;
}
