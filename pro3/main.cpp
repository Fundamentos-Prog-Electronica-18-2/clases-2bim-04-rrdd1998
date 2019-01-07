
#include <iostream>
using namespace std;

int main()
{
    int valores2[3][3] = {{10,11,12},{110,111,112},{210,211,212}}; // 3 filas y 3 columnas

    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            if(i<j){
                cout << valores2[i][j] << "\t";
            }
        }
        cout << endl;
    }
}
