��//0.���ÿ���̨�������������
����//system��"mode con:cols=100 lines=20000"����
����//1.�ı���������̨����ɫ
����//�� system��"color 0A"����
����//����color�����0�Ǳ���ɫ���ţ�A��ǰ��ɫ���š�����ɫ�������£�
����//0=��ɫ
����//1=��ɫ
����//2=��ɫ
����//3=����ɫ
����//4=��ɫ
����//5=��ɫ
����//6=��ɫ
����//7=��ɫ
����//8=��ɫ
����//9=����ɫ
����//A=����ɫ
����//B=��ǳ��ɫ
��//��C=����ɫ
��//��D=����ɫ
��//��E=����ɫ
��//��F=����ɫ
����//2.�ı���һ�����������������ͱ�������ɫ
����//����SetConsoleTextAttribute��������
����//White on Black:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����FOREGROUND_INTENSITY |
����//FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE����
����//Red on Black:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����FOREGROUND_INTENSITY |
����//FOREGROUND_RED����
����//Green on Black:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����FOREGROUND_INTENSITY |
����//FOREGROUND_GREEN����
����//Yellow on Black:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����FOREGROUND_INTENSITY |
����//FOREGROUND_RED | FOREGROUND_GREEN����
����//Blue on Black:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����FOREGROUND_INTENSITY |
����//FOREGROUND_BLUE����
����//Magenta on Black:
��//��SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����FOREGROUND_INTENSITY |
����//FOREGROUND_RED | FOREGROUND_BLUE����
����//Cyan on Black:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����FOREGROUND_INTENSITY |
����//FOREGROUND_GREEN | FOREGROUND_BLUE����
����//Black on Gray:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����BACKGROUND_INTENSITY |
����//BACKGROUND_INTENSITY����
����//Black on White:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����BACKGROUND_INTENSITY |
����//FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE����
����//Red on White:
����//SetConsoleTextAttribute��GetStdHandle��STD_OUTPUT_HANDLE����BACKGROUND_INTENSITY |
����//FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE |
����//FOREGROUND_RED����
����//�ȵȡ�
��//����Ҫ����ͷ�ļ���
��//��windows.h
����//����ԭ�ͣ�
����//BOOL SetConsoleTextAttribute�� HANDLE hConsoleOutput, WORD wAttributes ����
����//wAttributes ��ȡֵ�����Ӧ���£�
����//Attribute Meaning
����//FOREGROUND_BLUE Text color contains blue.
����//FOREGROUND_GREEN Text color contains green.
����//FOREGROUND_RED Text color contains red.
����//FOREGROUND_INTENSITY Text color is intensified.
����//BACKGROUND_BLUE Background color contains blue.
����//BACKGROUND_GREEN Background color contains green.
����//BACKGROUND_RED Background color contains red.
����//BACKGROUND_INTENSITY Background color is intensified.
����//COMMON_LVB_LEADING_BYTE Leading byte.
����//COMMON_LVB_TRAILING_BYTE Trailing byte.
����//COMMON_LVB_GRID_HORIZONTAL Top horizontal.
����//COMMON_LVB_GRID_LVERTICAL Left vertical.
����//COMMON_LVB_GRID_RVERTICAL Right vertical.
����//COMMON_LVB_REVERSE_VIDEO Reverse foreground and background attributes.
����//COMMON_LVB_UNDERSCORE Underscore.
#include <stdio.h>
#include <Windows.h>
int main() 
{	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);	
	printf("����仰��ɫ��ɺ�ɫ\n");
	printf("����仰��ɫ��ɺ�ɫ\n");
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);	
	printf("����仰��ɫ��ɻ�ɫ\n");}

