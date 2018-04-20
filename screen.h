// This file is to set the color for the display sound bar
#define ESC 0x1B
#define BAR "\u2590"
#define UNICODE //compiling conditional
typedef enum FGCOLORS {BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
void clearScreen(void);
void gotoxy(int, int);
void bar(int, double);
void setColor(int);
