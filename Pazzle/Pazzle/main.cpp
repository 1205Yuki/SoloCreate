#include <DxLib.h>
#include "Application.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR LpCmdLine, _In_ int nCmdShow)
{
	Application* App = Application::SInstance();

	if (App->Init()==false)
	{
		return -1;
	}
	App->Run();
	App->Fin();

	return 0;
}