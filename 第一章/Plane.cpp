#include "Plane.h"


void Plane::game_start()
{
	int i, j;

	// 定义飞机距离顶部的长度
	int x = 5;
	// 定义飞机距离左边的长度
	int y = 10;
	// 检查输入
	char input;
	// 飞机是否处于开火状态
	bool isfire = false;
    
	// 定义靶子的位置
	int y_target = 5;
	bool isKilled = false;
	while (1) {
		system("cls");
		if (!isKilled) {
			for (j = 0; j < y_target; j++) {
				std::cout << " ";
			}
			std::cout << "×" << std::endl;
			/*y_target++;*/
		}
		if (!isfire) {
			// 输出飞机上面的空行
			for (i = 0; i < x; i++) {
				std::cout << "\n";
			}
		}
		else {
			for (i = 0; i < x; i++) {   
				for (j = 0; j < y; j++) {
					std::cout << " ";
				}
				std::cout << "|" << std::endl;
			}
			if (y == y_target) {
				isKilled = true;
			}
			isfire = false;
		}

		// 输出飞机左边的空格,下面用于绘制一个复杂一些的飞机图案
		for (j = 0; j < y; j++) {
			std::cout << " ";
		}
		std::cout << "*" << std::endl;

		for (j = 0; j < y - 2; j++) {
			std::cout << " ";
		}
		std::cout << "*****" << std::endl;

		for (j = 0; j < y - 1; j++) {
			std::cout << " ";
		}
		std::cout << "* *" << std::endl;

		std::cout << "\n";

		// 使用scanf 判断输入控制飞机移动
		// scanf_s("%c", &input);
		// 使用c++中的cin
		// std::cin >> input;
		// 使用getch 函数,不需要再输入回车
		if (_kbhit()) {
			input = _getch();

			switch (input)
			{
			case 'w':
				x--;
				break;
			case 'a':
				y--;
				break;
			case 's':
				x++;
				break;
			case 'd':
				y++;
				break;
			case ' ':
				isfire = true;
				break;
			default:
				break;
			}
		}

		if (isKilled) {
			std::cout << "击中目标！" << std::endl;
		}
	}
	
}
