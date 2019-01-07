#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int valores2[3][3] = {{10,11,12},{110,111,112},{210,211,212}}; // 3 filas y 3 columnas
    double resultados[3][3];

    cout << "arreglo de valores"<< endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
                cout << valores2[i][j] << "\t";
            }
             cout << endl;
    }

   cout << "arreglo de resultados" << endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            resultados [i][j]= pow(valores2[i][j],2);
        }
    }

     for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cout << resultados[i][j]<< "\t";
        }
        cout << endl;
    }
}
