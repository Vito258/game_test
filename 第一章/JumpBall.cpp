#include "JumpBall.h"

void JumpBall::game_start()
{
	int i, j;
	int x = 5;
	int y = 10;

	// ��������x,y ������ٶȿ��Ʊ���ʹС��б�ŵ���
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
		// ���Ʊ߿�
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
		// ���С���Ƿ��������±߽�
		if (x <= top || x >= bottom) {
			velocity_x = -velocity_x;
			std::cout << "\a";       // ����ʱ��������Ч��
		}

		// ���С���Ƿ��������ұ߽�
		if (y <= left || y >= right) {
			velocity_y = -velocity_y;
			std::cout << "\a";       // ����ʱ��������Ч��
		}

		// ʹ��Sleep ���������ӳ�
		// Sleep(10);
		// ʹ�ÿ�ѭ�������ӳ�
		for (volatile int delay = 0; delay < 100000000; ++delay);
	}
}
