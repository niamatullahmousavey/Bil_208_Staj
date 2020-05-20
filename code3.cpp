#include <glut.h>
void processSpecialKeys(int key, int x, int y) {
switch(key) {
 		case GLUT_KEY_F1:
  red = 1.0;
  green = 0.0;
  blue = 0.0;
  break;
 		case GLUT_KEY_F2:
  red = 0.0;
  green = 1.0;  
  blue = 0.0;
  break;
 		case GLUT_KEY_F3:
  red = 0.0;  
  green = 0.0;
  blue = 1.0; break;
 }
}
int main(int argc, char **argv) {
	// инициализация
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(320,320);
	glutCreateWindow("Урок 4");
        // регистрация
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);

	// наши новые функции
	glutKeyboardFunc(processNormalKeys);
	glutSpecialFunc(processSpecialKeys);
 
	// основной цикл
	glutMainLoop();
	return 1;
}
