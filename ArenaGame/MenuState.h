#ifndef MENUSTATE_H_
#define MENUSTATE_H_

#include "State.h"
#include <array>

class MenuButton{
public:
	MenuButton(const char*, int, State*, SDL_Rect, SDL_Color, Game* g);

	void execute(Game* g);
	void draw(Game* g, int);
	void clean();
private:
	State* nextState;
	int buttonID;
	SDL_Texture * texture;
	SDL_Rect position;
	SDL_Rect outerBorder;
};

class MenuState : public State{
public:
	void init(Game* g);
	void clean();
	void handleEvent(Game* g);
	void draw(Game* g);
	void update(Game* g, double d);

	void setTextColour(SDL_Color);
	SDL_Color getTextColour();
	void setBackgroundImage(SDL_Texture*);
	void addButton(MenuButton);
	void addTextObect(const char*, SDL_Rect);
	MenuState();
private:
	int selectedButton;

	MENU_COMMANDS menuInput;
	SDL_Texture * background;
	SDL_Color menuTextCol;
	std::vector<MenuButton> buttons;
	std::vector<MenuButton>::iterator it;
};
#endif /* defined (_MENUSTATE_H_)*/