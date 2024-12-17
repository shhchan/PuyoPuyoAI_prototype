#ifndef COLOR_HPP
#define COLOR_HPP

enum Color {
	EMPTY, // 黒
	RED, // 赤
	BLUE, // 青
	YELLOW, // 黄
	GREEN, // 緑
	PURPLE, // 紫
	WASTED, // おじゃま
	WALL, // 壁
	COLOR_MAX // 色の数をカウント
};

void put_color(Color);
Color random_color(void);

#endif