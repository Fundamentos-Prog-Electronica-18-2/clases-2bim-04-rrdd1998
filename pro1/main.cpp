#include <iostream>

using namespace std;

int main()
{
    int valores[4];
    int valores2[2][3]; // 2 filas
                        // 3 columnas
    valores2[0][0] = 10;
    valores2[0][1] = 11;
    valores2[0][2] = 12;

    valores2[1][0] = 110;
    valores2[1][1] = 111;
    valores2[1][2] = 112;


    for(int i=0; i<2;i++){
        for(int j=0; j<3;j++){
         cout << valores2[i][j] << endl;
        }

      }
    }


}
