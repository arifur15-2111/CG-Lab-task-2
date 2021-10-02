#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (1.0, 1.0, 1.0);


	glBegin(GL_QUADS);
	glColor3f (0.0, 0.0, 0.0);

	glVertex3f(0.05f, 0.05f, 0.0f);
	glVertex3f(0.283f, 0.05f, 0.0f);
	glVertex3f(0.283f, 0.35f, 0.0f);
	glVertex3f(0.05f, 0.35f, 0.0f);

	glColor3f (255,255,0);

    glVertex3f(0.283f, 0.05f, 0.0f);
	glVertex3f(0.516f, 0.05f, 0.0f);
	glVertex3f(0.516f, 0.35f, 0.0f);
	glVertex3f(0.283f, 0.35f, 0.0f);

    glColor3f (255,0,0);

    glVertex3f(0.516f, 0.05f, 0.0f);
	glVertex3f(0.749f, 0.05f, 0.0f);
	glVertex3f(0.749f, 0.35f, 0.0f);
	glVertex3f(0.516f, 0.35f, 0.0f);



	glEnd();
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.5, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    system("COLOR 7");
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
