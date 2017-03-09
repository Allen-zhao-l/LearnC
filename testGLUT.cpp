/*************************************************************************
	> File Name: testGLUT.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月09日 星期四 14时30分42秒
 ************************************************************************/

#include<iostream>
#include<GL/glut.h>
#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700
void onDisplay(void);
void onUpdate(void);
void onKeyboard(unsigned char,int,int);
using namespace std;

int main(int argc,char * argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowPosition(WINDOW_X_POS,WINDOW_Y_POS);
    glutInitWindowSize(WIDTH,HEIGHT);
    glutCreateWindow("Solar System");

    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);

    glutMainLoop();

    return 0;
}
