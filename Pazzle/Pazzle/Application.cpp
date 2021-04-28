#include "Application.h"
#include <DxLib.h>

bool Application::Init()
{
	SetGraphMode(800,600, 32);
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return false;
	}
	SetWindowText("1916039_”óŒû—MŽ÷");
	SetDrawScreen(DX_SCREEN_BACK);
	return true;
}

void Application::Run()
{
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClsDrawScreen();

		ScreenFlip();
	}
}

void Application::Fin()
{
	
}
