#include "Block.h"

Block::Block(Vector2 position) {
	this->position = position;
}

//metoda care va desena blocurile obstacolelor pe ecran:
void Block::Draw() {
	DrawRectangle(position.x, position.y, 3, 3, { 243, 216, 63, 255 });		
}