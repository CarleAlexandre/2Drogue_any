#include <raylib.h>

#define WORLD_SIZE 4000000

typedef enum {
	type_building,
	type_light,
	type_effect,
	type_text,
	type_monster,
	type_player,
}	entity_type_enum;

typedef struct {
	entity_type_enum	type;
	Vector2			position;
	BoundingBox		bound;
}	entity;

typedef struct {
	int	tiles[WORLD_SIZE];
	entity	*entities;
}	world;

int main(void) {
	Camera2D	camera = {0};
	entity		player = {0};
	//world		world = {0};

	InitAudioDevice();
	InitWindow(800, 800, "Chaos Dungeon");

	camera.offset = (Vector2){400, 400};
	camera.rotation = 0.0f;
	camera.target = (Vector2){0, 0};
	camera.zoom = 1.0f;

	SetTargetFPS(120);

	while (!WindowShouldClose()) {

		if (IsKeyPressed(KEY_A)) {
			player.position.x -= 10;
		}
		if (IsKeyPressed(KEY_W)) {
			player.position.y -= 10;
		}
		if (IsKeyPressed(KEY_D)) {
			player.position.x += 10;
		}
		if (IsKeyPressed(KEY_S)) {
			player.position.y += 10;
		}

		BeginDrawing(); {

		ClearBackground(BLACK);

		BeginMode2D(camera); {
		DrawRectangle(-1000, -1000, 2000, 2000, GREEN);


		DrawRectangle(player.position.x - 6, player.position.y - 6, 11, 11, RED);

		} EndMode2D();

		DrawFPS(10, 10);

		} EndDrawing();
	}
	CloseWindow();
	CloseAudioDevice();
}
