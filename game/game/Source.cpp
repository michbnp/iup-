#include <iostream>
#include <conio.h>

using namespace std;
bool youlost;
const int width = 30;
const int height = 30;
int x, y, fruitX, fruitY, score;
enum eDir { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDir dora;

void setup() {
    youlost = false;
    dora = STOP;
    x = width / 2 - 1;
    y = height / 2 - 1 ;
    fruitX = rand() % width;
    fruitX = rand() % height;
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
        switch (_getch ())
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
        case 'esc':
            youlost = true;
           
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
}

int main() {
    setup();
    while (!youlost) 
        create();
        Input();
        Logic();
    


return 0;
}