#include <raylib.h>
#include <utility>
using namespace std;
int main() {
    SetTargetFPS(120);
    double x=100, y=100;
    pair<double,double> velocity = { 5, -1 }; 
    InitWindow(1024, 768, "MyGame");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        velocity.second += 0.1;
        x += velocity.first;
        y += velocity.second;
        if (x > GetScreenWidth() || x < 0) {
            velocity.first *= -1;
        }
        if (y > GetScreenHeight() || y < 0) {
            velocity.second *= -1;
        }
        DrawCircle(x, y, 10, GREEN);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}