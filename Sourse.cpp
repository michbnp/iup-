#include <iostream>
#include <conio.h>

using namespace std;
bool youlost;
const int width = 30;
const int height = 20;
int x, y, fruitX, fruitY, score;
int heightf = height - 1, widthf = width - 1;
enum eDirection { STOP = 0, qqq, LEFT, RIGHT, UP, DOWN };
eDirection dora;

void setup() {
    youlost = false;
    dora = STOP;
    x = width / 2 - 1;
    y = height / 2 - 1;
    fruitX = rand() % widthf;
    fruitY = rand() % heightf;
    score = 0;
}
void create() {
    system("cls");
    for (int i = 0; i < width + 1; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1)
                cout << "#";

            if (i == y && j == x)
                cout << "8";

            else if (i == fruitY && j == fruitX)
                cout << "A";
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width + 1; i++)
        cout << "#";
    cout << endl;


}
void Input() {
    if (_kbhit()) {
        switch (_getch())
        {
        case ' ':
            youlost = true;
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
        
        }
    }
}

void Logic() {
    switch (dora)
    {
    case LEFT:
        x--;
        break;
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

    if (x > width || x < 0 || y > height || y < 0) {
        youlost = true;
    }

    if (x == fruitX && y == fruitY) {
        score = score + 5;
        fruitX = rand() % widthf;
        fruitY = rand() % heightf;
    }
    cout << score;
}

int main() {
    setup();
    while (!youlost) {
        create();
        Input();
        Logic();
    }


    return 0;
}