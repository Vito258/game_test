#include "Plane.h"


void Plane::game_start()
{
	int i, j;

	// ����ɻ����붥���ĳ���
	int x = 5;
	// ����ɻ�������ߵĳ���
	int y = 10;
	// �������
	char input;
	// �ɻ��Ƿ��ڿ���״̬
	bool isfire = false;
    
	// ������ӵ�λ��
	int y_target = 5;
	bool isKilled = false;
	while (1) {
		system("cls");
		if (!isKilled) {
			for (j = 0; j < y_target; j++) {
				std::cout << " ";
			}
			std::cout << "��" << std::endl;
			/*y_target++;*/
		}
		if (!isfire) {
			// ����ɻ�����Ŀ���
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

		// ����ɻ���ߵĿո�,�������ڻ���һ������һЩ�ķɻ�ͼ��
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

		// ʹ��scanf �ж�������Ʒɻ��ƶ�
		// scanf_s("%c", &input);
		// ʹ��c++�е�cin
		// std::cin >> input;
		// ʹ��getch ����,����Ҫ������س�
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
			std::cout << "����Ŀ�꣡" << std::endl;
		}
	}
	
}
