#include <iostream>
using namespace std;

void gotoxy(int x, int y)
{
    printf("\033[%d;%df", y, x);
    fflush(stdout);
}

int main()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    gotoxy(10, 10);
    cout << "texto 1\n";
    gotoxy(5, 3);
    cout << "texto 2\n";
    gotoxy(8, 4);
    cout << "texto 3\n";
    return 1;
}

