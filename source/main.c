#include <raylib.h>

int main(void) {
	Camera2D camera = {0};
	Vector2 player = {0};
	InitAudioDevice();
	InitWindow(800, 800, "Chaos Dungeon");

	camera.offset = (Vector2){400, 400};
	camera.rotation = 0.0f;
	camera.target = (Vector2){0, 0};
	camera.zoom = 1.0f;

	SetTargetFPS(120);

	while (!WindowShouldClose()) {

		if (IsKeyPressed(KEY_A)) {
			player.x -= 10;
		}
		if (IsKeyPressed(KEY_W)) {
			player.y -= 10;
		}
		if (IsKeyPressed(KEY_D)) {
			player.x += 10;
		}
		if (IsKeyPressed(KEY_S)) {
			player.y += 10;
		}

		BeginDrawing(); {
			ClearBackground(BLACK);
			BeginMode2D(camera); {
				DrawRectangle(player.x - 6, player.y - 6, 11, 11, RED);
			} EndMode2D();
			DrawFPS(10, 10);
		} EndDrawing();
	}
	CloseWindow();
	CloseAudioDevice();
}
