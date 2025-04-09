all:

	g++ source/main.c -o game -lraylib -lopengl32 -lgdi32 -lwinmm
