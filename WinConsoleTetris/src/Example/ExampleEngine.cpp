#include "../Interfaces/IDraw.h"
#include "../Interfaces/IHandleInputs.h"
#include "../Interfaces/IGame.h"

class ExampleEngine
{
public:
	ExampleEngine(IHandleInputs& inputHandler, IDraw& graphic, IGame& game);
	~ExampleEngine();

	void Run();

private:
	IHandleInputs* inputHandler;
	IDraw* graphic;
	IGame* game;
};

ExampleEngine::ExampleEngine(IHandleInputs& inputHandler, IDraw& graphic, IGame& game)
{
	this->inputHandler = &inputHandler;
	this->graphic = &graphic;
	this->game = &game;
}

ExampleEngine::~ExampleEngine()
{
	delete inputHandler;
	delete graphic;
	delete game;
}

void ExampleEngine::Run()
{
	while (!game->isGameExit())
	{
		inputHandler->Update();
		IInput* input = inputHandler->GetInputs();

		game->SetInputs(input);
		game->Update();
		IFrame* frame = game->GetFrame();

		graphic->SetFrame(frame);
		graphic->Draw();
	}
}
