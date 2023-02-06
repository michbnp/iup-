#include <iostream>

using namespace std;

int weth = 30;     // ширина игрового пол€
int height = 30;   //  высота игрового пол€ 
int x, y, appX, appY, result;     // координаты змеи, €блок и счЄт

enum Eways
{
	null = 0, top, right, left, down
};                                                                 // все возможные варианты перемещени€ храним в перечислени€х (enumiration)
Eways ways;

bool YouLost;           

void start() {             // что происходит при загрузки
	YouLost = false;      //по умолчанию мы не проиграли
	result = 0;            // по умолчанию результата нет
	ways = null;          // по умолчанию не двигаетс€
	x = weth / 2;
	y = height / 2;   // ставим по центру карты по умолчанию

}

void Create() {    // отрисовывает карту и предметы на ней
	system("cls");    // очищает терминал во врем€ каждого вызова функции

	for (int i = 0; i < weth; i++)
	{
		cout << "*";
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < weth; j++) {           // тут создаетс€ поле. оно будет готово в будущем......
			
		}
	}

	for (int i = 0; i < weth; i++) 
	{                                          
		cout << "*";
	}
}

void get() {      // получает информацию от пользовател€   

}

void BackEnd() {      // вс€ логика будет здесь

}

int main() {
	start();
	while (!YouLost)    // пока не проиграли вызываем функции
	{
		Create();
		get();
		BackEnd();

	}
}