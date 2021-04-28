#pragma once
class Application
{
public:
	static Application* SInstance()
	{
		static Application* sInstance;
		return sInstance;
	}

	bool Init();
	void Run();
	void Fin();

private:
	Application()=default;
	Application* operator =(Application*) = delete;
};

