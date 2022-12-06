/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawFace(int x, int y);
	void DrawPoo(int x, int y);
	void DrawGameOver(int x, int y);
	void DrawTitleScreen(int x, int y);
	int ClampScreenX(int x, int widht);
	int ClampScreenY(int y, int height);
	bool IsCollision(int x0, int y0, int width0, int height0, int x1, int y1, int widht1, int height1);

	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	int face_x = 400;
	int face_y = 300;
	int facewidth = 20;
	int faceheight = 20;
	int poo1_x = 300;
	int poo1_y = 150;
	int poo1vx = 5;
	int poo1vy = 5;
	int poo2_x = 100;
	int poo2_y = 500;
	int poo2vx = 5;
	int poo2vy = 5;
	int poo3_x = 600;
	int poo3_y = 400;
	int poo3vx = 5;
	int poo3vy = 5;
	int poo_height = 24;
	int poo_width = 24;

	bool is_collision1 = false;
	bool is_collision2 = false;
	bool is_collision3 = false;
	bool is_game_started = false;
	bool is_game_over = false;

	/********************************/
};