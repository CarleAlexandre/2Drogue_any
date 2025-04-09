#include <raylib.h>

int main(void) {
	Camera2D camera = {0};
	InitAudioDevice();
	InitWindow(800, 800, "Chaos Dungeon");

	SetTargetFPS(120);

	while (!WindowShouldClose()) {

		BeginDrawing(); {
			ClearBackground(BLACK);
			BeginMode2D(camera); {
			} EndMode2D();
			DrawFPS(10, 10);
		} EndDrawing();
	}
	CloseWindow();
	CloseAudioDevice();
}
