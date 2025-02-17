#include <GL/gl.h>
#include<stdio.h>
#include<math.h>
#include <GL/glut.h>
#include<string.h>
#include<windows.h>


float  tx = 10, bx = 10, mx=10 ,rx = 10, sx = 10, hx = 0;
float birdX = 50;
float birdY = 400;
float birdSpeed = 0.7;

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

float shift = 0; // a variable used to move the clouds right and left
void init(void)
{
    glClearColor(0, 0.9, 0.9, 0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 500, 0, 500);
}


// Green Bushes
void Bushes()
{
    // 1st Bushes
    glColor3ub(0, 128, 0);
    circle(20, 30, 20, 180);
    circle(20, 30, 40, 210);
    circle(20, 30, 60, 180);


    // 2nd Bushes
    glColor3ub(154, 205, 50);
    circle(20, 30, 430, 180);
    circle(20, 30, 450, 210);
    circle(20, 30, 470, 180);


    // 3rd Bushes
    glColor3ub(0, 128, 0);
    circle(20, 30, 490, 180);
    circle(20, 30, 510, 210);
}





//brids
void bird()
{
    // Draw the first bird
    glColor3ub(0, 0, 0); // Black color

    // Body
    glBegin(GL_POLYGON);
    glVertex2d(birdX, birdY);
    glVertex2d(birdX + 10, birdY + 20);
    glVertex2d(birdX + 30, birdY + 15);
    glVertex2d(birdX + 10, birdY + 5);
    glEnd();

    // Wings
    glBegin(GL_TRIANGLES);
    glVertex2d(birdX + 10, birdY + 10);
    glVertex2d(birdX - 5, birdY + 15);
    glVertex2d(birdX - 5, birdY + 5);

    glVertex2d(birdX + 10, birdY + 10);
    glVertex2d(birdX + 25, birdY + 15);
    glVertex2d(birdX + 25, birdY + 5);
    glEnd();


    // Draw the second bird
    glColor3ub(0, 0, 0); // Black color

    // Body
    glBegin(GL_POLYGON);
    glVertex2d(birdX + 50, birdY - 20); // Adjust the Y position to be lower
    glVertex2d(birdX + 60, birdY);
    glVertex2d(birdX + 80, birdY - 5);
    glVertex2d(birdX + 60, birdY - 15);
    glEnd();

    // Wings
    glBegin(GL_TRIANGLES);
    glVertex2d(birdX + 60, birdY - 10);
    glVertex2d(birdX + 45, birdY - 5);
    glVertex2d(birdX + 45, birdY - 15);

    glVertex2d(birdX + 60, birdY - 10);
    glVertex2d(birdX + 75, birdY - 5);
    glVertex2d(birdX + 75, birdY - 15);
    glEnd();


    // Draw the third bird
    glColor3ub(0, 0, 0); // Black color

    // Body
    glBegin(GL_POLYGON);
    glVertex2d(birdX + 100, birdY + 10); // Adjust the Y position to be higher
    glVertex2d(birdX + 110, birdY + 30);
    glVertex2d(birdX + 130, birdY + 25);
    glVertex2d(birdX + 110, birdY + 15);
    glEnd();

    // Wings
    glBegin(GL_TRIANGLES);
    glVertex2d(birdX + 110, birdY + 20);
    glVertex2d(birdX + 95, birdY + 25);
    glVertex2d(birdX + 95, birdY + 15);

    glVertex2d(birdX + 110, birdY + 20);
    glVertex2d(birdX + 125, birdY + 25);
    glVertex2d(birdX + 125, birdY + 15);
    glEnd();
}




// Front Road
void road()
{
    glColor3ub(0, 128, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(500, 0);
    glVertex2d(500, 75);
    glVertex2d(0, 75);
    glEnd();


    // car road
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(500, 0);
    glVertex2d(500, 55);
    glVertex2d(0, 55);
    glEnd();


    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(500, 0);
    glVertex2d(500, 50);
    glVertex2d(0, 50);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(15, 20);
    glVertex2d(50, 20);
    glVertex2d(50, 30);
    glVertex2d(15, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(65, 20);
    glVertex2d(100, 20);
    glVertex2d(100, 30);
    glVertex2d(65, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(115, 20);
    glVertex2d(150, 20);
    glVertex2d(150, 30);
    glVertex2d(115, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(165, 20);
    glVertex2d(200, 20);
    glVertex2d(200, 30);
    glVertex2d(165, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(215, 20);
    glVertex2d(250, 20);
    glVertex2d(250, 30);
    glVertex2d(215, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(265, 20);
    glVertex2d(300, 20);
    glVertex2d(300, 30);
    glVertex2d(265, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(315, 20);
    glVertex2d(350, 20);
    glVertex2d(350, 30);
    glVertex2d(315, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(365, 20);
    glVertex2d(400, 20);
    glVertex2d(400, 30);
    glVertex2d(365, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(415, 20);
    glVertex2d(450, 20);
    glVertex2d(450, 30);
    glVertex2d(415, 30);
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(465, 20);
    glVertex2d(500, 20);
    glVertex2d(500, 30);
    glVertex2d(465, 30);
    glEnd();


}


void sun()
{
    glColor3ub(255, 255, 0);
    circle(20, 30, 450, 450);
}
void tree()
{
    // back tree
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(75, 180);
    glVertex2d(85, 180);
    glVertex2d(85, 350);
    glVertex2d(75, 350);
    glEnd();


    glColor3ub(0, 128, 0);


    circle(30, 40, 85, 370);
    circle(20, 30, 90, 340);
    circle(20, 30, 65, 395);


    // forward tree
    glColor3ub(0, 100, 0);
    circle(40, 50, 45, 360);
    glColor3ub(0, 100, 0);
    circle(30, 30, 60, 330);
    circle(20, 30, 30, 300);
    circle(20, 30, 60, 300);


    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(40, 180);
    glVertex2d(50, 180);
    glVertex2d(50, 296);
    glVertex2d(60, 320);
    glVertex2d(55, 326);
    glVertex2d(50, 300);
    glVertex2d(50, 350);
    glVertex2d(45, 350);
    glVertex2d(45, 310);
    glEnd();


}
void little_tree()
{
    // 2nd tree
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(65, 60);
    glVertex2d(75, 60);
    glVertex2d(75, 100);
    glVertex2d(65, 100);
    glEnd();


    glColor3ub(0, 100, 0);
    circle(15, 20, 65, 110);
    circle(15, 20, 75, 110);
    circle(15, 20, 70, 130);


    // 1st tree
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(0, 60);
    glVertex2d(10, 60);
    glVertex2d(10, 100);
    glVertex2d(0, 100);
    glEnd();


    glColor3ub(0, 100, 0);
    circle(15, 20, 0, 110);
    circle(15, 20, 10, 110);
    circle(15, 20, 5, 130);


    // 3rd tree
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(125, 60);
    glVertex2d(135, 60);
    glVertex2d(135, 100);
    glVertex2d(125, 100);
    glEnd();


    glColor3ub(0, 100, 0);
    circle(15, 20, 125, 110);
    circle(15, 20, 135, 110);
    circle(15, 20, 130, 130);


    // 4th tree
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(190, 60);
    glVertex2d(200, 60);
    glVertex2d(200, 100);
    glVertex2d(190, 100);
    glEnd();


    glColor3ub(0, 100, 0);
    circle(15, 20, 190, 110);
    circle(15, 20, 200, 110);
    circle(15, 20, 195, 130);


    // tree 5
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(300, 60);
    glVertex2d(310, 60);
    glVertex2d(310, 100);
    glVertex2d(300, 100);
    glEnd();


    glColor3ub(0, 100, 0);
    circle(15, 20, 300, 110);
    circle(15, 20, 310, 110);
    circle(15, 20, 305, 130);




    // tree 6
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(365, 60);
    glVertex2d(375, 60);
    glVertex2d(375, 100);
    glVertex2d(365, 100);
    glEnd();


    glColor3ub(0, 100, 0);
    circle(15, 20, 365, 110);
    circle(15, 20, 375, 110);
    circle(15, 20, 370, 130);


    // tree 7
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(425, 60);
    glVertex2d(435, 60);
    glVertex2d(435, 100);
    glVertex2d(425, 100);
    glEnd();


    glColor3ub(0, 100, 0);
    circle(15, 20, 425, 110);
    circle(15, 20, 435, 110);
    circle(15, 20, 430, 130);


    // tree 8
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(490, 60);
    glVertex2d(500, 60);
    glVertex2d(500, 100);
    glVertex2d(490, 100);
    glEnd();


    glColor3ub(0, 100, 0);
    circle(15, 20, 490, 110);
    circle(15, 20, 500, 110);
    circle(15, 20, 495, 130);
}


void clouds()
{
    glPushMatrix();
    glTranslatef(rx, 0, 0);
    // 1st cloud
    glColor3ub(255, 255, 255);
    circle(20, 30, 460, 460);
    circle(15, 20, 445, 460);
    circle(15, 20, 475, 460);

    // 2nd cloud
    circle(20, 30, 390, 420);
    circle(15, 20, 405, 420);
    circle(15, 20, 375, 420);


    glPopMatrix();
    rx += .5;
    if (rx > 0)
        rx = -500;
    glutPostRedisplay();
}

void car() {
    glPushMatrix();
    glTranslatef(tx, 0, 0);
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(410, 40);
    glVertex2d(490, 40);
    glVertex2d(485, 70);
    glVertex2d(410, 70);
    glEnd();


    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(420, 70);
    glVertex2d(475, 70);
    glVertex2d(465, 100);
    glVertex2d(430, 100);
    glEnd();


    // car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(425, 70);
    glVertex2d(445, 70);
    glVertex2d(445, 90);
    glVertex2d(430, 90);
    glEnd();


    // car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(450, 70);
    glVertex2d(470, 70);
    glVertex2d(465, 90);
    glVertex2d(450, 90);
    glEnd();


    // car wheel
    glColor3ub(0, 0, 0);
    circle(10, 14, 435, 40);
    circle(10, 14, 465, 40);

    glColor3ub(245, 245, 245);
    circle(6, 10, 435, 40);
    circle(6, 10, 465, 40);


    glPopMatrix();
    tx += .9;
    if (tx > 0)
        tx = -500;
    glutPostRedisplay();
}


void truck() {
    glPushMatrix();
    glTranslatef(bx, 0, 0);
    glColor3ub(220, 20, 60);
    glBegin(GL_POLYGON);
    glVertex2d(450, 40);
    glVertex2d(505, 40);
    glVertex2d(505, 110);
    glVertex2d(450, 110);
    glEnd();


    glColor3ub(220, 20, 60);
    glBegin(GL_POLYGON);
    glVertex2d(505, 40);
    glVertex2d(535, 40);
    glVertex2d(535, 70);
    glVertex2d(505, 70);
    glEnd();


    glColor3ub(220, 20, 60);
    glBegin(GL_POLYGON);
    glVertex2d(505, 70);
    glVertex2d(525, 70);
    glVertex2d(515, 90);
    glVertex2d(505, 90);
    glEnd();
    // window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(505, 70);
    glVertex2d(520, 70);
    glVertex2d(515, 85);
    glVertex2d(505, 85);
    glEnd();
    // wheels
    glColor3ub(0, 0, 0);
    circle(10, 14, 460, 40);
    circle(10, 14, 510, 40);


    glColor3ub(245, 245, 245);
    circle(6, 10, 460, 40);
    circle(6, 10, 510, 40);


    glPopMatrix();
    bx += .7;
    if (bx > 0)
        bx = -510;
    glutPostRedisplay();
}


void matr() {
    glPushMatrix();
    glTranslatef(mx, 0, 0);

    // Define scaling factor
    float scale_factor = 1.2;

    // Draw the car polygons with scaled coordinates
    glColor3ub(100, 100, 240);
    glBegin(GL_POLYGON);
    glVertex2d(410 * scale_factor, 40 * scale_factor);
    glVertex2d(490 * scale_factor, 40 * scale_factor);
    glVertex2d(485 * scale_factor, 70 * scale_factor);
    glVertex2d(410 * scale_factor, 70 * scale_factor);
    glEnd();

    glColor3ub(100, 100, 240);
    glBegin(GL_POLYGON);
    glVertex2d(420 * scale_factor, 70 * scale_factor);
    glVertex2d(475 * scale_factor, 70 * scale_factor);
    glVertex2d(465 * scale_factor, 100 * scale_factor);
    glVertex2d(430 * scale_factor, 100 * scale_factor);
    glEnd();

    // car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(425 * scale_factor, 70 * scale_factor);
    glVertex2d(445 * scale_factor, 70 * scale_factor);
    glVertex2d(445 * scale_factor, 90 * scale_factor);
    glVertex2d(430 * scale_factor, 90 * scale_factor);
    glEnd();

    // car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(450 * scale_factor, 70 * scale_factor);
    glVertex2d(470 * scale_factor, 70 * scale_factor);
    glVertex2d(465 * scale_factor, 90 * scale_factor);
    glVertex2d(450 * scale_factor, 90 * scale_factor);
    glEnd();

    // car wheel
    glColor3ub(0, 0, 0);
    circle(10 * scale_factor, 14 * scale_factor, 435 * scale_factor, 40 * scale_factor);
    circle(10 * scale_factor, 14 * scale_factor, 465 * scale_factor, 40 * scale_factor);

    glColor3ub(245, 245, 245);
    circle(6 * scale_factor, 10 * scale_factor, 435 * scale_factor, 40 * scale_factor);
    circle(6 * scale_factor, 10 * scale_factor, 465 * scale_factor, 40 * scale_factor);

    glPopMatrix();
    mx += .5;
    if (mx > 0)
        mx = -515;
    glutPostRedisplay();
}




void flower() {
    glColor3ub(255, 0, 0);
    circle(3, 5, 450, 210);
    circle(3, 5, 455, 205);
    circle(3, 5, 455, 215);
    circle(3, 5, 460, 210);
    glColor3ub(255, 215, 0);
    circle(3, 5, 455, 210);


    glColor3ub(255, 0, 0);
    circle(3, 5, 440, 195);
    circle(3, 5, 440, 185);
    circle(3, 5, 435, 190);
    circle(3, 5, 445, 190);
    glColor3ub(255, 215, 0);
    circle(3, 5, 440, 190);


    glColor3ub(255, 0, 0);
    circle(3, 5, 470, 195);
    circle(3, 5, 470, 185);
    circle(3, 5, 465, 190);
    circle(3, 5, 475, 190);
    glColor3ub(255, 215, 0);
    circle(3, 5, 470, 190);


    // left side flower


    glColor3ub(255, 0, 0);
    circle(3, 5, 30, 205);
    circle(3, 5, 30, 195);
    circle(3, 5, 25, 200);
    circle(3, 5, 35, 200);
    glColor3ub(255, 215, 0);
    circle(3, 5, 30, 200);




    glColor3ub(255, 215, 0);
    circle(3, 5, 10, 215);
    circle(3, 5, 10, 205);
    circle(3, 5, 5, 210);
    circle(3, 5, 15, 210);
    glColor3ub(255, 0, 0);
    circle(3, 5, 10, 210);
}


void roadLight()
{
    // left
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(80, 50);
    glVertex2d(85, 50);
    glVertex2d(85, 180);
    glVertex2d(80, 180);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2d(65, 150);
    glVertex2d(100, 150);
    glVertex2d(100, 155);
    glVertex2d(65, 155);
    glEnd();


    glColor3ub(255, 255, 255);
    circle(10, 15, 83, 180);

    // right
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(420, 50);
    glVertex2d(425, 50);
    glVertex2d(425, 180);
    glVertex2d(420, 180);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(405, 150);
    glVertex2d(440, 150);
    glVertex2d(440, 155);
    glVertex2d(405, 155);
    glEnd();

    glColor3ub(255, 255, 255);
    circle(10, 15, 423, 180);


}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    //Sky Color
    glColor3ub(30, 144, 255);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(500, 0);
    glVertex2d(500, 500);
    glVertex2d(0, 500);
    glEnd();


    // Bushes
    Bushes();


    //Ground Color
    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(500, 0);
    glVertex2d(500, 180);
    glVertex2d(0, 180);
    glEnd();


    // little tree
    little_tree();
    road();
    // sun
    sun();
    // clouds
    clouds();
   // tree
    tree();
    // road light
    roadLight();
    // truck
    truck();
    // car
    car();
    // flower
    flower();

     matr();

     // Birds
    birdX += birdSpeed;
    if (birdX > 500)
        birdX = 0;
    bird();

    glFlush();
    glutSwapBuffers();

    glFlush();
    glutSwapBuffers();
}
/* function to make the user able to deal with the system */
void key(int key, int x, int y) {
    switch (key)
    {
    case GLUT_KEY_LEFT:
        shift--;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        shift++;
        glutPostRedisplay();
        break;


    default:
        break;
    }
}

    int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Moving cars project");
    init();
    glutDisplayFunc(display);
    glutSpecialFunc(key);
    glutMainLoop();
    return 0;
}















