#include <raylib.h>
int main() {
    InitWindow(1024, 768, "MyGame");
    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawCircle(212, 384, 100, RED);
        DrawCircle(712, 384, 20, GREEN);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}