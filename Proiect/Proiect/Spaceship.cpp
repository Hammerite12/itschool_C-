#include "spaceship.h"

Spaceship::Spaceship() {
	image = LoadTexture("Graphics/spaceship.png");		//functia trimite poza navei spatiale catre atributul "image"
	position.x = (GetScreenWidth() - image.width)/2;
	position.y = GetScreenHeight() - image.height;
	lastFireTime = 0.0;
}

Spaceship::~Spaceship() {
	UnloadTexture(image);								//functia sterge poza navei spatiale pentru a elibera memoria calculatorului
}

//metoda care va desena nava spatiala pe ecran:
void Spaceship::Draw() {
	DrawTextureV(image, position, WHITE);
}

//metoda care va misca nava spatiala spre stanga:
void Spaceship::MoveLeft() {
	position.x -= 7;
	if (position.x < 0) {
		position.x = 0;
	}
}

//metoda care va misca nava spatiala spre dreapta:
void Spaceship::MoveRight() {
	position.x += 7;
	if (position.x > GetScreenWidth() - image.width) {
		position.x = GetScreenWidth() - image.width;
	}
}

//metoda care va lansa razele laser din nava spatiala:
void Spaceship::FireLaser() {
	if (GetTime() - lastFireTime >= 0.35) {
		lasers.push_back(Laser({ position.x + image.width / 2 - 2, position.y }, -6));
		lastFireTime = GetTime();
	}
}