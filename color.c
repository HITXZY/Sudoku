　//0.设置控制台输出行数和列数
　　//system（"mode con:cols=100 lines=20000"）；
　　//1.改变整个控制台的颜色
　　//用 system（"color 0A"）；
　　//其中color后面的0是背景色代号，A是前景色代号。各颜色代码如下：
　　//0=黑色
　　//1=蓝色
　　//2=绿色
　　//3=湖蓝色
　　//4=红色
　　//5=紫色
　　//6=黄色
　　//7=白色
　　//8=灰色
　　//9=淡蓝色
　　//A=淡绿色
　　//B=淡浅绿色
　//　C=淡红色
　//　D=淡紫色
　//　E=淡黄色
　//　F=亮白色
　　//2.改变下一个输出或者输入字体和背景的颜色
　　//采用SetConsoleTextAttribute函数，如
　　//White on Black:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），FOREGROUND_INTENSITY |
　　//FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE）；
　　//Red on Black:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），FOREGROUND_INTENSITY |
　　//FOREGROUND_RED）；
　　//Green on Black:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），FOREGROUND_INTENSITY |
　　//FOREGROUND_GREEN）；
　　//Yellow on Black:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），FOREGROUND_INTENSITY |
　　//FOREGROUND_RED | FOREGROUND_GREEN）；
　　//Blue on Black:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），FOREGROUND_INTENSITY |
　　//FOREGROUND_BLUE）；
　　//Magenta on Black:
　//　SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），FOREGROUND_INTENSITY |
　　//FOREGROUND_RED | FOREGROUND_BLUE）；
　　//Cyan on Black:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），FOREGROUND_INTENSITY |
　　//FOREGROUND_GREEN | FOREGROUND_BLUE）；
　　//Black on Gray:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），BACKGROUND_INTENSITY |
　　//BACKGROUND_INTENSITY）；
　　//Black on White:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），BACKGROUND_INTENSITY |
　　//FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE）；
　　//Red on White:
　　//SetConsoleTextAttribute（GetStdHandle（STD_OUTPUT_HANDLE），BACKGROUND_INTENSITY |
　　//FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE |
　　//FOREGROUND_RED）；
　　//等等。
　//　需要引入头文件：
　//　windows.h
　　//函数原型：
　　//BOOL SetConsoleTextAttribute（ HANDLE hConsoleOutput, WORD wAttributes ）；
　　//wAttributes 的取值含义对应如下：
　　//Attribute Meaning
　　//FOREGROUND_BLUE Text color contains blue.
　　//FOREGROUND_GREEN Text color contains green.
　　//FOREGROUND_RED Text color contains red.
　　//FOREGROUND_INTENSITY Text color is intensified.
　　//BACKGROUND_BLUE Background color contains blue.
　　//BACKGROUND_GREEN Background color contains green.
　　//BACKGROUND_RED Background color contains red.
　　//BACKGROUND_INTENSITY Background color is intensified.
　　//COMMON_LVB_LEADING_BYTE Leading byte.
　　//COMMON_LVB_TRAILING_BYTE Trailing byte.
　　//COMMON_LVB_GRID_HORIZONTAL Top horizontal.
　　//COMMON_LVB_GRID_LVERTICAL Left vertical.
　　//COMMON_LVB_GRID_RVERTICAL Right vertical.
　　//COMMON_LVB_REVERSE_VIDEO Reverse foreground and background attributes.
　　//COMMON_LVB_UNDERSCORE Underscore.
#include <stdio.h>
#include <Windows.h>
int main() 
{	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);	
	printf("把这句话颜色变成红色\n");
	printf("把这句话颜色变成红色\n");
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);	
	printf("把这句话颜色变成黄色\n");}

