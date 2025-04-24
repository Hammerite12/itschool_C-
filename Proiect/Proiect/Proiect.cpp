#include <raylib.h>
#include "Game.h"

int main()
{
    Color grey = { 29, 29, 27, 255 };
    Color yellow = { 243, 216, 63, 255 };
    int offset = 50;
    int window_width = 750;
    int window_height = 700;

    InitWindow(window_width + offset, window_height + 2 * offset, "C++ Space Invaders");

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);                                  //fontul textului din joc
    Texture2D spaceshipImage = LoadTexture("Graphics/spaceship.png");

    SetTargetFPS(60);                                                                       //viteza la care va rula jocul

    Game game;
    
    while(WindowShouldClose() == false) {       //fereastra va rula jocul atata timp cat utilizatorul nu va apasa pe Esc sau pe X
        game.HandleInput();
        game.Update();
        BeginDrawing();                                                             //functia care creaza fundalul negru al jocului
        ClearBackground(grey);                                                      //functia care inlocuieste fundalul negru cu un fundal gri
        DrawRectangleRoundedLinesEx({ 10, 10, 780, 780 }, 0.18, 20, 2, yellow);     //functia care creaza marginea jocului
        DrawLineEx({ 25, 730 }, { 775, 730 }, 3, yellow);                           //functia care separa elementele jocului de tabela scorului

        if (game.run) {
            DrawTextEx(font, "LEVEL 01", { 570, 740 }, 34, 2, yellow);
        }
        else {
            DrawTextEx(font, "GAME OVER", { 570, 740 }, 34, 2, yellow);
        }

        float x = 50.0;
        for (int i = 0; i < game.lives; i++) {
            DrawTextureV(spaceshipImage, { x, 745 }, WHITE);
            x += 50;
        }

        game.Draw();
        EndDrawing();                                                               //functia care opreste crearea fundalului negru
    }

    CloseWindow();
}
