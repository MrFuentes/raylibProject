#include <raylib.h>

int main() {
    int screenWidth = 1920;
    int screenHeight = 1080;

    InitWindow(screenWidth, screenHeight, "Test Window");

    while(!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground((Color){255,255,255,255});
        EndDrawing();
    }

    return 0;
};
