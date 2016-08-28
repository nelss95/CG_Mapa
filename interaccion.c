/*
 * GL01Hello.cpp: Test OpenGL C/C++ Setup
 */
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
#include <stdio.h>

void plot();
void init();
void mouse();


void keyBoard(unsigned char key, int x, int y){
  printf("%d\n", key);
  if(key == 'r'){ 
    glClearColor (1.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
  }
  else if(key == 'g'){ 
    glClearColor (0.0, 1.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    plot(100,100);
  }
  else if(key == 'b'){ 
    glClearColor (0.0, 0.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    plot(100,100);
  }
  else if(key == 'n'){ 
    glClearColor (0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    plot(100,100);
  }
  
}

int main(int argc, char** argv) 
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(500,500);
  glutCreateWindow("Progra 1");
  glClear(GL_COLOR_BUFFER_BIT);
  gluOrtho2D(-0.5, 500 +0.5, -0.5, 500 + 0.5);
  glutMouseFunc(mouse); //llama la función mouse cuando hay acciones con el mouse
  glutKeyboardFunc(keyBoard);
  glutDisplayFunc(init);
  glutMainLoop();
}




void drawSquare(int x, int y) {
  //y = 250-y;
  //x = x-250;
  y = 500-y;
 
  glPointSize(10);
  glColor3f(1.0f, 0.0f, 0.0f);
  glBegin(GL_POINTS);
  glVertex2f(x , y);
  glEnd();
  glutSwapBuffers();
  //glFlush();
}



void mouse(int bin, int state , int x , int y) {
  if(bin == GLUT_LEFT_BUTTON && state == GLUT_DOWN) plot(x,500-y);

}

void init(){

  plot(50, 50);

  glFlush();
}



void plot(int x, int y) {
  printf("%d %d\n", x, y);
  glColor3f (1.0f, 1.0f, 1.0f);
  glBegin(GL_POINTS);
  glVertex2i(x,y);
  glEnd();
  glutSwapBuffers();
}





/*#include <GL/glut.h>
#include <GL/gl.h>
#include <stdio.h>

void display (void){
  glClear(GL_COLOR_BUFFER_BIT);
  //glColor3f(1.0,1.0,1.0);
  glFlush();
 
}
 
void plot(int x, int y) {
   glColor3f (0.0f, 0.0f, 0.0f);
   glBegin(GL_POINTS);
   glVertex2i(x,y);
   glEnd();
}
 
void drawSquare(int x, int y) {
  //y = 250-y;
  //x = x-250;
  y = 500-y;
 
  glPointSize(10);
  glColor3f(1.0f, 0.0f, 0.0f);
  glBegin(GL_POINTS);
  glVertex2f(x , y);
  glEnd();
  glutSwapBuffers();
  //glFlush();
}
 
 
 
 
 
void mouse(int bin, int state , int x , int y) {
  if(bin == GLUT_LEFT_BUTTON && state == GLUT_DOWN) drawSquare(x,y);
  printf("%d %d\n", x, y);
}
 
 
void init (void)
{
  /* select clearing (background) color *
  glClearColor (1.0, 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT);
 
  glViewport( 0,0, 500, 500 );
  glMatrixMode( GL_PROJECTION );
  glOrtho( 0.0, 500.0, 0.0, 500.0, 1.0, -1.0 );
 
  /* initialize viewing values *
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}
 
/*Main*
 
int main (int argc,char** argv){
  glutInit(&argc,argv);
  glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE );
  glutInitWindowSize(500,500);
  /*Set the posotion of window*
  glutInitWindowPosition(0,0);
  glutCreateWindow("Progra 1");
  glutDisplayFunc(display);
  glutMouseFunc(mouse);
  init();
  plot(50,50);
  glutMainLoop();
 
 
}

*/