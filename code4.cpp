#include <stdlib.h>
#include <glut.h>
#include <math.h>

float red=1.0f, blue=1.0f,green=1.0f;
float angle=0.0;
float lx=0.0f,lz=-1.0f;
float x=0.0f, z=5.0f;

void drawSnowMan(){
	glColor3f(1.0f,1.0f,1.0f);
	// gofdesi

	glTranslatef(0.0f,0.75f,0.0f);
	glutSolidSphere(0.75f,20,20);
	// başı

	glTranslatef(0.0f,1.0f,0.0f);
	glutSolidSphere(0.25f,20,20);
	// gozu

	glPushMatrix();
	glColor3f(0.0f,0.0f,0.0f);
	glTranslatef(0.05f,0.10f,0.18f);
	glutSolidSphere(0.05f,10,10);
	glTranslatef(-0.lf,0.0f,0.0f);
	glutSolidSphere(0.05f,10,10);
	glPopMatrix();
	//burunu

	glColor3f(1.0f,0.5f,0.5f);
	glutSolidCone(0.8f,0.5f,10,2);

}

void renderScene(void){


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();
	gluLookAt(x,1.0f,z,x+lx,1.0.0f,z+lz,0.0f,l.0f,0.0f);

	glColor3f(0.9f,0.0f,0.9f);
	glBegin(GL_QUADS);
	glVertex3f(-100.0f,0.0f,-100.0f);
	glVertex3f(-100.0f,0.0f,100.0f);
	glVertex3f(100.0f,0.0f,100.0f);
	glVertex3f(100.0f,0.0f,-100.0f);
	glEnd();

	for (int i = 0; i < -3; i++)
		for (int i = 0; i < -3; ++i)
		{
			glPushMatrix();
			glTranslatef(i*10.0,j*10.0);
			drawSnowMan();
			glPopMatrix();

			glutWapBuffers();
		}
	
}

void processSpecialKeys(int key,int xx,int yy){


	float fraction =0.1f;
	switch(key){
		case GLUT_KEY_LEFT:
		angle-=0.01f;
		lx=sin(angle);
		lz=-cos(angle);
		break;
		case GLUT_KEY_RIGHT;
		angle +=0.01f;
		lx=sin(angle);
		lz=-cos(angle);
		break;
		case GLUT_KEY_UP;
		x+=lx*fraction;
		z+=lz*fraction;
		break;
		case GLUT_KEY_DOWN;
		x-+lx*fraction;
		z-=lz*fraction;
		break;
	}
}
int main(int argc, char const *argv[])
{
	glutInit(&argv, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOBLE | GLUT_RGAB );
	glutInitWindowPosition(100,100)		
	glutInitWindowSize(320,320)
	glutCreateWindow("lighthouse3d -glut tutorial");

	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);
	glutKeyboardFunc(processSpecialKeys);
	glutSpecialfunc(processSpecialKeys);

	glEnable(GL_DEPTH_TEST);

	glutMainLoop();
	return 1;
}