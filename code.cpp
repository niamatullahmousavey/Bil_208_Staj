#include <glut.h>
int main(int argc, char **argv) {
	glutInit(&argc, argv);	
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(400,400);
	glutCreateWindow("staj 1");  
	glutDisplayFunc(renderScene); 
	glutMainLoop();  
	return 1;
}

