#include <iostream>
#include <raylib.h>
#include "Game.h"

int main()
{
    Color grey = { 29, 29, 27, 255 };
    int window_width = 750;
    int window_height = 700;

    InitWindow(window_width, window_height, "C++ Space Invaders");
    SetTargetFPS(60);                                                   //viteza la care va rula jocul

    Game game;
    
    while(WindowShouldClose() == false) {                               //fereastra va rula jocul atata timp cat utilizatorul nu va apasa pe Esc sau pe X

        game.HandleInput();

        BeginDrawing();                                                 //functia creaza fundalul negru al jocului
        ClearBackground(grey);                                          //functia inlocuieste fundalul negru cu un fundal gri
        game.Draw();

        EndDrawing();                                                   //functia opreste crearea fundalului negru
    }

    CloseWindow();
}
