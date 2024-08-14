#include "JumpBall.h"

void JumpBall::game_start()
{
	int i, j;
	int x = 5;
	int y = 10;

	// 定义两个x,y 方向的速度控制变量使小球斜着弹跳
	int velocity_x = 1, velocity_y = 1;

	int left = 0;
	int right = 20;
	int top = 0;
	int bottom = 10;

	while (true)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		system("cls");
		// 绘制边框
		for (i = left; i <= right; i++) {
			std::cout << "-";
		}
		std::cout << std::endl;

		for (i = top + 1; i < bottom; i++) {
			std::cout << "|";
			for (j = left + 1; j < right; j++) {
				if (i == x && j == y) {
					std::cout << "O";
				}
				else {
					std::cout << " ";
				}
			}
			std::cout << "|" << std::endl;
		}

		for (i = left; i <= right; i++) {
			std::cout << "-";
		}
		std::cout << std::endl;
		// 检测小球是否碰到上下边界
		if (x <= top || x >= bottom) {
			velocity_x = -velocity_x;
			std::cout << "\a";       // 碰壁时加入响铃效果
		}

		// 检测小球是否碰到左右边界
		if (y <= left || y >= right) {
			velocity_y = -velocity_y;
			std::cout << "\a";       // 碰壁时加入响铃效果
		}

		// 使用Sleep 函数引入延迟
		// Sleep(10);
		// 使用空循环引入延迟
		for (volatile int delay = 0; delay < 100000000; ++delay);
	}
}
