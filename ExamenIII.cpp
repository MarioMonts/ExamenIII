


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <clocale>

using namespace std;


int main()
{

    const int ROWS = 3;
    const int COLUMNS = 4;
    int attempts = 9;
    int sum = 0;

    //Creacion de la Matriz
    char board[ROWS][COLUMNS] = { {'2', '3', '1', '4',},
                                       {'9', '8', '7', '9',},
                                       {'3', '2', '1', '5',}};


    //Mostrar valores dentro de la Matriz

    cout << "\n---MATRIZ EXAMEN---\n";
    for (int i = 0; i < ROWS; i++)
    {

        for (int j = 0; j < COLUMNS; j++)
        {
            cout << board[i][j];

        }

        cout << endl;

    }


    // Calcular la suma de los valores en las posiciones que son Pares

    for (int i = 0; i < ROWS; i++)
    {

        for (int j = 0; j < COLUMNS; j++)
        {
            if (board[i][j] % 2 == 0)
            {

                sum == board[i][j];
                
            }

        }

        cout << "El resultado es: " << sum << endl;

    }

}
