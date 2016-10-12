#include <iostream>

using namespace std;

int row,fil,i,j;

int main()
{
    cout <<"Ingrese el numero de filas "<<endl;
    cin >>fil;
    cout <<"Ingrese el numero de columnas "<<endl;
    cin >>row;
    int matriz1[fil][row];
    for  (i=0;i<=fil-1;i++)
    {
        for  (j=0;j<=row-1;j++)
        {
            cout <<"Ingrese la posicion "<<"("<<i<<")"<<"("<<j<<")"<<" de la matriz 1"<<endl;
            cin >>matriz1[i][j];
        }
    }

    int matriz2[fil][row];
    for  (i=0;i<=fil-1;i++)
    {
        for  (j=0;j<=row-1;j++)
        {
            cout <<"Ingrese la posicion "<<"("<<i<<")"<<"("<<j<<")"<<" de la matriz 2"<<endl;
            cin >>matriz2[i][j];
        }
    }

    cout << "A continuacion se sumaran las matrices ingresadas "<<endl;
    int matriz3[fil][row];
    for  (i=0;i<=fil-1;i++)
    {
        for  (j=0;j<=row-1;j++)
        {
            matriz3[i][j]= matriz1[i][j]+matriz2[i][j];
            cout << "Valor posicion "<<"("<<i<<")"<<"("<<j<<"): "<<matriz3[i][j]<<endl;
        }
    }
    cout << "Gracias por usar este programa "<<endl;

    return  0;
}
