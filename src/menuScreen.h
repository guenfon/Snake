#pragma once
#include "gameScreen.h"
#include "uiLayout.h"
#include "gameField.h"
#include <SDL.h>

/**
 * Main menu class.
 */
class MenuScreen : public GameScreen {
public:
	MenuScreen();

	void Enter(GameEvent event);
	GameScreen* HandleInput(SDL_Event *event);
	void Update(uint32_t elapsed, EventBus *eventBus);
	void Render(SDL_Renderer *renderer);

	void Resize();

	void ChangeLayout(UILayout *newLayout);

private:
	UILayout *m_CurrentLayout;
	GameField m_Demo;

	/* layouts crossfading */
	bool m_Fading;
	uint32_t m_FadingTimer;

	UILayout *m_NewLayout;
	bool m_LayoutSwitched;
};