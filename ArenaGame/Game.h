#ifndef GAME_H_
#define GAME_H_

#include "GameObject.h"
#include <vector>

class Game{
public:
	Game();
	~Game();

	std::vector<GameObject> gameObjects;
private:

};


#endif /* defined  (_GAME_H_) */_