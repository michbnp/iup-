#include <iostream>
#include <conio.h>

using namespace std;
bool youlost;
const int width = 30;
const int height = 10;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, RIGHT, LEFT, UP, DOWN };
eDirection dora;

void setup() {
    youlost = false;
    dora = STOP;
    x = width / 2 - 1;
    y = height / 2 - 1;
    fruitX = rand() % width;
    fruitX = rand() % height;
    score = 0;
}
void create() {
    system("cls");
    for (int i = 0; i < width + 1; i++)
        cout << "*";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1)
                cout << "*";

            if (i == y && j == x)
                cout << "8";

            else if (i == fruitY && j == fruitX)
                cout << "G";
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width + 1; i++)
        cout << "*";
    cout << endl;


}
void enter() {
    if (_kbhit()) {
        switch (_getch())
        {
        case 'w':
            dora = UP;
            break;
        case 's':
            dora = DOWN;
            break;
        case 'd':
            dora = RIGHT;
            break;
        case 'a':
            dora = LEFT;
        case 'e':
            youlost = true;

        }
    }
}

void qq() {
    switch (dora)
    {
    case LEFT:
        x--;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }
}

int main() {
    setup();
    while (!youlost) {
        create();
        enter();
        qq();
    }
        return 0; 
}

// разобраться с ебучим left
