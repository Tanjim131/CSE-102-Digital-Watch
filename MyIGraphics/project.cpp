#include "iGraphics.h"
#include <stdio.h>
#include <time.h>


void gettime(int t[]) {
	time_t ctime;

   	struct tm * current;

    	time ( &ctime );

	current = localtime ( &ctime );

	t[0] = current->tm_hour;

	t[1] = current->tm_min;

	t[2] = current->tm_sec;

}


int x = 0, y = 0, r = 0;
/*
	function iDraw() is called again and again by the system.

	*/


void iDraw() {

    iClear();
	iSetColor(255, 0, 0);

	iText(100, 100, "24 Hour Format");

    int t[3] = {};

	gettime(t);

    int h1=t[0]/10;
    int h2=t[0]%10;

    int m1=t[1]/10;
    int m2=t[1]%10;

    int s1=t[2]/10;
    int s2=t[2]%10;

    int time=0;

    printf("%d %d %d %d %d %d\n",h1,h2,m1,m2,s1,s2);

    switch(h1)
    {
        case 0:
                iFilledRectangle(75,200,5,50); //segment 4
                iFilledRectangle(78,195,25,5); //segment 5
                iFilledRectangle(100,200,5,50);//segment 6
                iFilledRectangle(75,255,5,50); //segment 1
                iFilledRectangle(100,255,5,50);//segment 3
                iFilledRectangle(78,305,25,5); //segment 2
                break;
        case 1:
                iFilledRectangle(100,200,5,50);//segment 6
                iFilledRectangle(100,255,5,50);//segment 3
                break;
        case 2:
                iFilledRectangle(75,200,5,50); //segment 4
                iFilledRectangle(78,195,25,5); //segment 5
                iFilledRectangle(78,250,25,5); //segment 7
                iFilledRectangle(100,255,5,50); //segment 3
                iFilledRectangle(78,305,25,5); //segment 2
                break;
    }

    x=40;

    switch(h2)
    {
        case 0:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 1:
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 2:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 3:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 4:
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 5:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 6:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 7:
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 8:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 9:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;

    }

    x+=60;

    switch(s2)
    {

        case 0:
            iFilledCircle(160,210,7);
            iFilledCircle(160,280,7);
            break;
        case 2:
            iFilledCircle(160,210,7);
            iFilledCircle(160,280,7);
            break;
        case 4:
            iFilledCircle(160,210,7);
            iFilledCircle(160,280,7);
            break;
        case 6:
            iFilledCircle(160,210,7);
            iFilledCircle(160,280,7);
            break;
        case 8:
            iFilledCircle(160,210,7);
            iFilledCircle(160,280,7);
            break;

    }


    switch(m1)
    {
        case 0:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 1:
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 2:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 3:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 4:
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 5:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
    }

    x+=40;

    switch(m2)
    {
        case 0:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 1:
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 2:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 3:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 4:
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 5:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 6:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 7:
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 8:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 9:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
    }

    x+=60;

    switch(s2)
    {
        case 0:
            iFilledCircle(260,210,7);
            iFilledCircle(260,280,7);
            break;
        case 2:
            iFilledCircle(260,210,7);
            iFilledCircle(260,280,7);
            break;
        case 4:
            iFilledCircle(260,210,7);
            iFilledCircle(260,280,7);
            break;
        case 6:
            iFilledCircle(260,210,7);
            iFilledCircle(260,280,7);
            break;
        case 8:
            iFilledCircle(260,210,7);
            iFilledCircle(260,280,7);
            break;

    }


    switch(s1)
    {
        case 0:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 1:
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 2:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 3:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 4:
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 5:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
    }

    x+=40;

    switch(s2)
    {
        case 0:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 1:
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 2:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 3:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 4:
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                break;
        case 5:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 6:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 7:
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 8:
                iFilledRectangle(75+x,200,5,50); //segment 4
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
        case 9:
                iFilledRectangle(78+x,195,25,5); //segment 5
                iFilledRectangle(78+x,250,25,5); //segment 7
                iFilledRectangle(100+x,200,5,50);//segment 6
                iFilledRectangle(75+x,255,5,50); //segment 1
                iFilledRectangle(100+x,255,5,50);//segment 3
                iFilledRectangle(78+x,305,25,5); //segment 2
                break;
    }

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
	//place your own initialization codes here.
	iInitialize(400, 400, "demo");
	iInitialize(400, 400, "Ball Demo");
	return 0;
}
