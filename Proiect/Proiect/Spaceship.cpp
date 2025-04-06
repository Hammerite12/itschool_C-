#include "spaceship.h"

Spaceship::Spaceship() {
	image = LoadTexture("Graphics/spaceship.png");		//functia trimite poza navei spatiale catre atributul "image"
	position.x = (GetScreenWidth() - image.width)/2;
	position.y = GetScreenHeight() - image.height;
}

Spaceship::~Spaceship() {
	UnloadTexture(image);								//functia sterge poza navei spatiale pentru a elibera memoria calculatorului
}

void Spaceship::Draw() {
	DrawTextureV(image, position, WHITE);				//functia care deseneaza nava spatiala
}

void Spaceship::MoveLeft() {
	position.x -= 7;
	if (position.x < 0) {
		position.x = 0;
	}
}

void Spaceship::MoveRight() {
	position.x += 7;
	if (position.x > GetScreenWidth() - image.width) {
		position.x = GetScreenWidth() - image.width;
	}
}