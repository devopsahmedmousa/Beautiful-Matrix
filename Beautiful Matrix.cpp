

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 0;
   
    for (int i = 1; i <= 5; i++) //rows
    
        for (int j = 1; j <= 5; j++) //columns
        {
            cout << " array\t" <<i <<"\tand\t" <<j << "\telements are? \n";
            cin >> n;
            if (n == 1)
            {
                cout << "number of turns is:\n" << abs(i - 3) + abs(j - 3) << "turns\n";
                exit(0);
            }
            else

                continue;
           
        }
    
                  

      
    return 0;
}

