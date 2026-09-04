#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void desenhar()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);

    glLineWidth(5.0);

    glBegin(GL_LINES);

    glVertex2f(70, 300);
    glVertex2f(150, 300);

    glVertex2f(70, 300);
    glVertex2f(70, 220);

    glVertex2f(70, 220);
    glVertex2f(150, 220);

    glVertex2f(150, 220);
    glVertex2f(150, 140);

    glVertex2f(150, 140);
    glVertex2f(70, 140);

    glVertex2f(190, 140);
    glVertex2f(230, 300);

    glVertex2f(230, 300);
    glVertex2f(270, 140);

    glVertex2f(205, 210);
    glVertex2f(255, 210);

    glVertex2f(310, 140);
    glVertex2f(310, 300);

    glVertex2f(310, 300);
    glVertex2f(380, 300);

    glVertex2f(380, 300);
    glVertex2f(380, 220);

    glVertex2f(380, 220);
    glVertex2f(310, 220);

    glVertex2f(345, 220);
    glVertex2f(395, 140);

    glVertex2f(430, 140);
    glVertex2f(470, 300);

    glVertex2f(470, 300);
    glVertex2f(510, 140);

    glVertex2f(445, 210);
    glVertex2f(495, 210);

    glVertex2f(550, 140);
    glVertex2f(550, 300);

    glVertex2f(630, 140);
    glVertex2f(630, 300);

    glVertex2f(550, 220);
    glVertex2f(630, 220);

    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(800, 400);

    glutInitWindowPosition(100, 100);

    glutCreateWindow("SARAH - Vetores");

    glClearColor(1.0, 1.0, 1.0, 1.0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glOrtho(0, 800, 0, 400, -1, 1);

    glutDisplayFunc(desenhar);

    glutMainLoop();

    return 0;
}
