#pragma once
#include <iostream>
#include <windows.h>
#include <cstdlib>
class JumpBall
{
public:
	void game_start();
	// 绘制边框的方法
	void draw_frame(int left, int right, int top, int bottom);
};

