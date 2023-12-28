#include<GL/freeglut_std.h>
#include<bits/stdc++.h>
 float baseSize = 5.0f; // ????
float height = 10.0f; // ????
 void drawGTP() {
    // ????
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f); // ???????
    for (int i = 0; i < 4; i++) {
        float angle = i * 2 *3.14 / 4; // ???????
        float x = baseSize * cos(angle);
        float y = baseSize * sin(angle);
        glVertex3f(x, y, 0.0f); // ?????0
    }
    glEnd();
     // ????
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 0.0f, 1.0f); // ???????
    for (int i = 0; i < 5; i++) {
        float angle = i * 2 * M_PI / 4; // ???????
        float x = baseSize * cos(angle);
        float y = baseSize * sin(angle);
        glVertex3f(x, y, height);
        glVertex3f(x, y, 0.0f);
    }
    glEnd();
}
 void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
     gluLookAt(0.0f, 0.0f, 20.0f,  // ????
              0.0f, 0.0f, 0.0f,   // ???????
              0.0f, 1.0f, 0.0f);  // ????????
     glRotatef(30.0f, 1.0f, 0.0f, 0.0f); // ?x???30?
    glRotatef(45.0f, 0.0f, 1.0f, 0.0f); // ?y???45?
     drawGTP();
     glFlush();
    glutSwapBuffers();
}
 void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (float)width / height, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
}
 int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("GTP Viewer");
     glEnable(GL_DEPTH_TEST);
     glutDisplayFunc(display);
    glutReshapeFunc(reshape);
     glutMainLoop();
     return 0;
}
