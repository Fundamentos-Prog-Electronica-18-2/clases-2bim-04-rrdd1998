#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int valores2[3][3] = {{7,2,9},{6,3,5},{8,10,4}}; // 3 filas y 3 columnas
    double resultado[3][3];

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
            if(((valores2[i][j]%2 )==0 )) {
               resultado[i][j]= pow(valores2[i][j],2);

        }else{
            resultado[i][j]=valores2[i][j];
            }
        }
    }



     for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cout << resultado[i][j]<< "\t";
        }
        cout << endl;
    }
}
