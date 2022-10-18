#include <iostream>

int main(){
    int matrizA[3][3],matrizB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<"Ingrese los valores de la matriz en la posicion ["<<i+1<<"]["<<j+1<<"]";
            std::cin>>matrizA[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizB[i][j]=matrizA[j][i];
        }
    }
    std::cout<<"\nMatriz A\n";

    for (int i = 0; i < 3; i++)
    {
            for (int j = 0; j < 3; i++)
            {
                std::cout<<matrizA[i][j]<<" ";
            }
            std::cout<<"\n";
    }
    std::cout<<"\nMatriz B\n";

    for (int i = 0; i < 3; i++)
    {
            for (int j = 0; j < 3; i++)
            {
                std::cout<<matrizB[i][j]<<" ";
            }
            std::cout<<"\n";
    }
    system("Pause");
    return 0;
}