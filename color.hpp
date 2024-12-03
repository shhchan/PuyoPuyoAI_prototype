#ifndef COLOR_HPP
#define COLOR_HPP

enum Color {
	EMPTY = 40,		// 黒
	RED = 41,		// 赤
	BLUE = 44,		// 青
	YELLOW = 43,		// 黄
	GREEN = 42,		// 緑
	PURPLE = 45,		// 紫
	WASTED = 100,	// おじゃま
	COLOR_MAX = 8			// 色の数をカウント
};

void put_color(Color);

#endif