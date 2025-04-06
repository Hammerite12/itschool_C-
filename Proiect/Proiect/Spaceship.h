#pragma once
#include <raylib.h>

class Spaceship {
private:
	Texture2D image;		//imaginea 2D a navei spatiale
	Vector2 position;		//pozitia navei spatiale

public:
	Spaceship();
	~Spaceship();

	void Draw();
	void MoveLeft();
	void MoveRight();
	void FireLaser();
};