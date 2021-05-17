#include<stdio.h>
#include<glut.h>
#include <stdlib.h>
float i=0.0;
int j=1;
float m=0.0;
int t=0;
static GLfloat spin = 0.0;
static GLfloat ii =1000,jj=0,k=-1600; 
static float fq,fw,fe,ba,bb,bc;
static  GLfloat wa=0,wb=0,wc=0;
void *currentfont;


void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,char *string)    //To write the string in the parameter list
{
	    char *c;
	glRasterPos3f(x,y,z);
 
	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,0.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}
}



void starter()												// to draw the starting screen
{    
	setFont(GLUT_BITMAP_HELVETICA_18);
    
	glColor3f(1.0,1.0,1.0);
	drawstring(20.0,435.0,1.0,"*  * G R A P H I C A L   I L L U S T R A T I O N   OF   M O V I N G    T R A I N*  *");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(210.0,365.0,1.0,"SUBMITTED   BY");				
	
	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,340.0,1.0," AVINASH H R                     4JN16CS015");
	
	glColor3f(0.0,1.0,1.0);
	drawstring(180.0,320.0,1.0," CHIRANTHAN K S             4JN16CS021");
	
	glColor3f(1.0,1.0,1.0);
	drawstring(190.0,260.0,1.0,"UNDER THE GUIDANCE OF");
	
	glColor3f(0.0,1.0,1.0);
	drawstring(70.0,230.0,1.0," Mr SAYYED JOHAR ");

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(0.0,1.0,1.0);
	drawstring(200.0,230.0,1.0,"             B.E., M.Tech.");		
	
	glColor3f(0.0,1.0,1.0);
	drawstring(70.0,215.0,1.0,"  Asst.Prof, Dept of CS&E");

	glColor3f(0.0,1.0,1.0);
	drawstring(70.0,200.0,1.0,"  JNNCE, SHIVAMOGGA");

	setFont(GLUT_BITMAP_HELVETICA_18);

	glColor3f(0.0,1.0,1.0);
	drawstring(280.0,230.0,1.0,"              Mrs SUSHMA R B");
	
	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(0.0,1.0,1.0);
	drawstring(430.0,230.0,1.0,"                   B.E.,M.Tech");		
	
	glColor3f(0.0,1.0,1.0);
	drawstring(285.0,215.0,1.0,"                 Asst.Prof, Dept of CS&E");

	glColor3f(0.0,1.0,1.0);
	drawstring(285.0,200.0,1.0,"                 JNNCE,SHIVAMOGGA");

    glFlush();
}
void draw_pixel(GLint cx,GLint cy) 
{ 
    glColor3f(0.0,0.0,0.0); 
    glBegin(GL_POINTS); 
	 glVertex2i(cx,cy); 
    glEnd(); 
} 
void draw_pixel1(GLint cx,GLint cy) 
{ 
    glColor3f(0.1,0.1,0.1); 
    glBegin(GL_POINTS); 
	 glVertex2i(cx,cy); 
    glEnd(); 
} 
void draw_pixel2(GLint cx,GLint cy) 
{ 
    glColor3f(1.0,1.0,1.0); 
    glBegin(GL_POINTS); 
	 glVertex2i(cx,cy); 
    glEnd(); 
}
void draw_pixel3(GLint cx,GLint cy) 
{ 
    glColor3f(1.0,1.0,0.0); 
    glBegin(GL_POINTS); 
	 glVertex2i(cx,cy); 
    glEnd(); 
} 

void draw_pixel4(GLint cx,GLint cy) 
{ 
    glColor3f(1.0,1.0,0.0); 
    glBegin(GL_POINTS); 
	 glVertex2i(cx,cy); 
    glEnd(); 
}
  
void plotpixels(GLint h,GLint k,GLint x,GLint y) 
{ 
    draw_pixel(x+h,y+k); 
    draw_pixel(-x+h,y+k); 
    draw_pixel(x+h,-y+k); 
    draw_pixel(-x+h,-y+k); 
    draw_pixel(y+h,x+k); 
    draw_pixel(-y+h,x+k); 
    draw_pixel(y+h,-x+k); 
    draw_pixel(-y+h,-x+k); 
} 
void plotpixels1(GLint h,GLint k,GLint x,GLint y) 
{ 
    draw_pixel1(x+h,y+k); 
    draw_pixel1(-x+h,y+k); 
    draw_pixel1(x+h,-y+k); 
    draw_pixel1(-x+h,-y+k); 
    draw_pixel1(y+h,x+k); 
    draw_pixel1(-y+h,x+k); 
    draw_pixel1(y+h,-x+k); 
    draw_pixel1(-y+h,-x+k); 
} 
void plotpixels2(GLint h,GLint k,GLint x,GLint y) 
{ 
    draw_pixel2(x+h,y+k); 
    draw_pixel2(-x+h,y+k); 
    draw_pixel2(x+h,-y+k); 
    draw_pixel2(-x+h,-y+k); 
    draw_pixel2(y+h,x+k); 
    draw_pixel2(-y+h,x+k); 
    draw_pixel2(y+h,-x+k); 
    draw_pixel2(-y+h,-x+k); 
} 
void plotpixels3(GLint h,GLint k,GLint x,GLint y) 
{ 
    draw_pixel3(x+h,y+k); 
    draw_pixel3(-x+h,y+k); 
    draw_pixel3(x+h,-y+k); 
    draw_pixel3(-x+h,-y+k); 
    draw_pixel3(y+h,x+k); 
    draw_pixel3(-y+h,x+k); 
    draw_pixel3(y+h,-x+k); 
    draw_pixel3(-y+h,-x+k); 
} 
  void plotpixels4(GLint h,GLint k,GLint x,GLint y) 
{ 
    draw_pixel4(x+h,y+k); 
    draw_pixel4(-x+h,y+k); 
    draw_pixel4(x+h,-y+k); 
    draw_pixel4(-x+h,-y+k); 
    draw_pixel4(y+h,x+k); 
    draw_pixel4(-y+h,x+k); 
    draw_pixel4(y+h,-x+k); 
    draw_pixel4(-y+h,-x+k); 
}
void circle_draw(GLint h,GLint k,GLint r) 
{ 
    GLint d=1-r,x=0,y=r; 
    while(y>x) 
    { 
        plotpixels(h,k,x,y); 
        if(d<0) d+=2*x+3; 
        else
        { 
            d+=2*(x-y)+5; 
            --y; 
        } 
        ++x; 
    } 
    plotpixels(h,k,x,y); 
}
void circle_draw1(GLint h,GLint k,GLint r) 
{ 
    GLint d=1-r,x=0,y=r; 
    while(y>x) 
    { 
        plotpixels1(h,k,x,y); 
        if(d<0) d+=2*x+3; 
        else
        { 
            d+=2*(x-y)+5; 
            --y; 
        } 
        ++x; 
    } 
    plotpixels1(h,k,x,y); 
}
void circle_draw2(GLint h,GLint k,GLint r) 
{ 
    GLint d=1-r,x=0,y=r; 
    while(y>x) 
    { 
        plotpixels2(h,k,x,y); 
        if(d<0) d+=2*x+3; 
        else
        { 
            d+=2*(x-y)+5; 
            --y; 
        } 
        ++x; 
    } 
    plotpixels2(h,k,x,y); 
}
 void Cylinder_draw() 
{ 
    GLint xc=100,yc=100,r=15; 
    GLfloat i,n=40; 
    for(i=0;i<n;i+=1) 
        circle_draw1(xc+i,yc,r); 
}
void Cylinder_draw1() 
{ 
    GLint xc=120,yc=90,r=4; 
    GLfloat i,n=40; 
    for(i=0;i<n;i+=1) 
        circle_draw1(xc,yc+i,r); 
}
void window_draw()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
		glVertex2i(100,100);
		glVertex2i(100,110);
		glVertex2i(150,110);
		glVertex2i(150,100);
	glEnd();
}
void cube1()
{
	glBegin(GL_POLYGON);
		glColor3f(0.05,0.05,0.05);
	
		glVertex2i(150,85.5); 
		glVertex2i(190,85.5); 
		glVertex2i(190,140); 
		glVertex2i(150,140); 
    glEnd(); 
}

void draw_circle(GLint,GLint,GLint);
void draw_circle1(GLint,GLint,GLint);
void draw_bird();

void car()
{
	glBegin(GL_POLYGON);
	glColor3f(1,0,0);
		glVertex2f(650,300);
	glVertex2f(750,300);
		glVertex2f(750,370);
		glVertex2f(650,370);
		glEnd();
		glBegin(GL_POLYGON);
	glColor3f(1,0,0);
		glVertex2f(710,300);
	glVertex2f(790,300);
		glVertex2f(790,330);
		glVertex2f(710,330);
		glEnd();
		circle_draw(680,300,8);
		circle_draw(770,300,8);
}

		

void draw_object()
{
	int l;
	if(t==0){
	glBegin(GL_POLYGON);
			glColor3f(0,0.6,0.8);
			glVertex2f(0,700);
			glVertex2f(1100,700);
			glColor3f(1.0,1.0,1.0);
			glVertex2f(1100,400);
			glVertex2f(0,400);
		glEnd();
	}

//sun


	for(l=0;l<=35;l++)
	{
		glColor3f(0.0,1.0,1.0);
		draw_circle1(100,625,l);
	}






	//Mud
	glColor3f(1.0,1.0,0);

		glBegin(GL_POLYGON);
			glVertex2f(0,450);
			glVertex2f(1100,450);
			glVertex2f(1100,0);
			glVertex2f(0,0);
		glEnd(); 

		 

	
}
void hills()
{
	{
		int i=80;
	glColor3f(0.0,1.0,0.0);
		glBegin(GL_POLYGON);
			glVertex2f(0,90*2.5+i);
	
			glVertex2f(20*2.5,95*2.5+i);
			glVertex2f(22*2.5,100*2.5+i);
			glVertex2f(25*2.5,105*2.5+i);
			glVertex2f(27*2.5,110*2.5+i);
			glVertex2f(30*2.5,115*2.5+i);
			glVertex2f(32*2.5,120*2.5+i);
			glVertex2f(34*2.5,125*2.5+i);
			glVertex2f(37*2.5,130*2.5+i);
			glVertex2f(40*2.5,135*2.5+i);
			glVertex2f(43*2.5,140*2.5+i);
			glVertex2f(45*2.5,145*2.5+i);
			glVertex2f(48*2.5,150*2.5+i); 
			glVertex2f(52*2.5,155*2.5+i);
			glVertex2f(56*2.5,160*2.5+i);
			glVertex2f(60*2.5,163*2.5+i);
			glVertex2f(68*2.5,166*2.5+i);
			glVertex2f(75*2.5,163*2.5+i);
			glVertex2f(80*2.5,158*2.5+i);
			glVertex2f(85*2.5,152*2.5+i);
			glVertex2f(90*2.5,143*2.5+i);
			glVertex2f(97*2.5,135*2.5+i);
			glVertex2f(100*2.5,127*2.5+i);
			glVertex2f(105*2.5,117*2.5+i);
			glVertex2f(110*2.5,110*2.5+i);
			glVertex2f(115*2.5,104*2.5+i);
			glVertex2f(120*2.5,95*2.5+i);
			glVertex2f(125*2.5,90*2.5+i);
		glEnd();
	glColor3f(0.0,1.0,0.0);
		glBegin(GL_POLYGON);
            glVertex2f(113*2.5,95*2.5+i);
			glVertex2f(125*2.5,115*2.5+i);
			glVertex2f(128*2.5,120*2.5+i);
			glVertex2f(133*2.5,125*2.5+i);
			glVertex2f(137*2.5,130*2.5+i);
			glVertex2f(140*2.5,135*2.5+i);
			glVertex2f(145*2.5,140*2.5+i);
			glVertex2f(150*2.5,145*2.5+i);
			glVertex2f(154*2.5,150*2.5+i);
			glVertex2f(156*2.5,155*2.5+i);
			glVertex2f(165*2.5,160*2.5+i);
			glVertex2f(170*2.5,160*2.5+i);
			glVertex2f(175*2.5,157*2.5+i);
			glVertex2f(180*2.5,150*2.5+i);
			glVertex2f(186*2.5,140*2.5+i);
			glVertex2f(193*2.5,130*2.5+i);
			glVertex2f(197*2.5,123*2.5+i);
			glVertex2f(204*2.5,115*2.5+i);
			glVertex2f(207*2.5,110*2.5+i);
			glVertex2f(212*2.5,105*2.5+i);
			glVertex2f(217*2.5,100*2.5+i);
			glVertex2f(125*2.5,90*2.5+i);
		glEnd();
	}
}
void sky()
{
	int l;
	glBegin(GL_POLYGON);
			glColor3f(0,0.6,0.8);
			glVertex2f(0,700);
			glVertex2f(1100,700);
			glColor3f(1.0,1.0,1.0);
			glVertex2f(1100,0);
			glVertex2f(0,0);
		glEnd();
		for(l=0;l<=20;l++)
		{
			glColor3f(1.0,1.0,1.0);
			draw_circle(160+250+m,625,l);
		}

	
		for(l=0;l<=35;l++)
		{
			glColor3f(1.0,1.0,1.0);
			draw_circle(200+250+m,625,l);
			draw_circle(225+250+m,625,l);
		}
	
		for(l=0;l<=20;l++)
		{
			glColor3f(1.0,1.0,1.0);
			draw_circle(265+250+m,625,l);
		}

		//////////////////////////////////////////////////////////////////////////////////////////////////
		//cloud2
		
		for(l=0;l<=20;l++)
		{
			glColor3f(1.0,1.0,1.0);
			draw_circle(360+280+m,615,l);
		}

		for(l=0;l<=35;l++)
		{
			glColor3f(1.0,1.0,1.0);
			draw_circle(400+280+m,615,l);
			draw_circle(425+280+m,615,l);
			draw_circle(460+280+m,615,l);
		}
	
		for(l=0;l<=20;l++)
		{
			glColor3f(1.0,1.0,1.0);
			draw_circle(490+280+m,615,l);
		}
}
void sand()
{
	glBegin(GL_POLYGON);
			glColor3f(0.6,0.4,0.0);
			glVertex2f(0,350);
			glVertex2f(1100,350);
			
			glVertex2f(1100,0);
			glVertex2f(0,0);
		glEnd();
}	
void draw_object1()
{
	sky();
	hills();
	sand();

}
void tree()
{
		glBegin(GL_POLYGON);
		glColor3f(0.5,0.3,0.0);
			glVertex3f(50,450.0,0.0);
           	glVertex3f(55,450.0,0.0);
           	glVertex3f(55,400.0,0.0);
	  		glVertex3f(50,400.0,0.0);
		glEnd();
		glColor3f(0.0,0.8,0.0);
		glBegin(GL_POLYGON);
			glVertex3f(20,450.0,0.0);
			glVertex3f(53,600.0,0.0);
			glVertex3f(80,450.0,0.0);
        glEnd();  
		glBegin(GL_POLYGON);
			glVertex3f(-1.5,23.5,0.0);
			glVertex3f(0.0,28.0,0.0);
			glVertex3f(1.5,23.5,0.0);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex3f(-2.0,20.0,0.0);
            glVertex3f(0.0,28.0,0.0);
            glVertex3f(2.0,20.0,0.0);
		glEnd();
}

void scenery()
{
	glBegin(GL_POLYGON);
		glColor3f(1.0,0.67,0.35);
        glVertex3f(0.0,700.0,0.0);
		glVertex3f(0.0,400.0,0.0);
		glColor3f(0.980,0.990,0.470);
		glVertex3f(1100.0,400.0,0.0);
		glVertex3f(1100.0,700.0,0.0);
    glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.560,1.0,0.120);
        glVertex3f(0.0,200.0,0.0);
		glColor3f(0.560,1.0,0.120);
        glVertex3f(1100.0,200.0,0.0);
		glColor3f(0.0,0.450,0.0);
        glVertex3f(1100.0,0.0,0.0);
		glColor3f(0.0,0.450,0.0);
		glVertex3f(0.0,0.0,0.0);
	glEnd();

glPushMatrix();
glTranslated(10,0,0);
tree();
glTranslated(100,0,0);
tree();
glTranslated(200,0,0);
tree();
glTranslated(300,0,0);
tree();
glTranslated(400,0,0);
tree();
glTranslated(500,0,0);
tree();
glTranslated(600,0,0);
tree();
glTranslated(700,0,0);
tree();
glTranslated(550,0,0);
tree();
glPopMatrix();


}
void road()
{
	glColor3f(0.470,0.470,0.470);
    	glBegin(GL_POLYGON);
		glVertex3f(0.0,200.0,0.0);
        	glVertex3f(1100,200.0,0.0);
        	glVertex3f(1100.0,400.0,0.0);
		glVertex3f(0.0,400.0,0.0);
    	glEnd();
	glColor3f(1.0,1.0,1.0);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(3,0x00fF);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);

		glVertex3f(0.0,300.0,0.0);
		glVertex3f(1100.0,300.0,0.0);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
}

void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;
	while(y>x)
	{
		plotpixels2(h,k,x,y);
		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels2(h,k,x,y);
}
void draw_circle1(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;
	while(y>x)
	{
		plotpixels3(h,k,x,y);
		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels4(h,k,x,y);
}
void track()
{
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2i(0,67);
		   glVertex2i(1100,67);
		   glVertex2i(1100,60);
		   glVertex2i(0,60);
		   glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2i(0,100);
		   glVertex2i(1100,100);
		   glVertex2i(1100,105);
		   glVertex2i(0,105);
		   glEnd();

}
void rails()
{
	glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2i(20,65);
glVertex2i(30,65);
glVertex2i(50,100);
glVertex2i(40,100);
		glEnd();
}
void coach()
{
	
	glBegin(GL_POLYGON);
		glColor3f(0.300,0.300,0.3);
		glVertex2i(210,85.5);
			glVertex2i(290,85.5);
			glVertex2i(290,120);
			glVertex2i(210,120);
		   glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(290,120);
			glVertex2i(210,120);
			glVertex2i(220,140);
			glVertex2i(300,140);
		   glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.200,0.20,0.20);
		glVertex2i(290,85.5);
			glVertex2i(290,120);
			glVertex2i(300,140);
			glVertex2i(300,100);
		   glEnd();
		   	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		
			glVertex2i(190,100);
			glVertex2i(210,100);
			glVertex2i(210,110);
			glVertex2i(190,110);
		   glEnd();
		   glBegin(GL_POLYGON);
			   glColor3f(0.0,0.0,0.0);
			glVertex2i(210,120);
			glVertex2i(290,120);
			glVertex2i(250,160);
			glEnd();
		   circle_draw(230,80,1);
		   circle_draw(270,80,1);
 circle_draw(230,80,11);
		   circle_draw(270,80,11);

}
void draw_coach()
{    
	glPushMatrix();
	glTranslated(100,0,0);
	coach();
	glPopMatrix();


}
void draw_coach1()
{    
	glPushMatrix();
	glTranslated(200,0,0);
	coach();
	glPopMatrix();
}
void draw_coach2()
{    
	glPushMatrix();
	glTranslated(300,0,0);
	coach();
	glPopMatrix();
}
void draw_coach3()
{    
	glPushMatrix();
	glTranslated(400,0,0);
	coach();
	glPopMatrix();
}
void draw_coach4()
{    
	glPushMatrix();
	glTranslated(500,0,0);
	coach();
	glPopMatrix();
}
void draw_coach5()
{    
	glPushMatrix();
	glTranslated(600,0,0);
	coach();
	glPopMatrix();
}
void rail6()
{
	glPushMatrix();
	glTranslated(jj+250,0,0);
	rails();
	glPopMatrix();
}
void rail7()
{
	glPushMatrix();
	glTranslated(jj+300,0,0);
	rails();
	glPopMatrix();
}
void rail8()
{
	glPushMatrix();
	glTranslated(jj+350,0,0);
	rails();
	glPopMatrix();
}
void rail9()
{
	glPushMatrix();
	glTranslated(jj+400,0,0);
	rails();
	glPopMatrix();
}
void rail10()
{
	glPushMatrix();
	glTranslated(jj+450,0,0);
	rails();
	glPopMatrix();
}
void rail11()
{
	glPushMatrix();
	glTranslated(jj+500,0,0);
	rails();
	glPopMatrix();
}
void rail12()
{
	glPushMatrix();
	glTranslated(jj+550,0,0);
	rails();
	glPopMatrix();
}
void rail1()
{
	glPushMatrix();
	glTranslated(jj+0,0,0);
	rails();
	glPopMatrix();
}
void rail2()
{
	glPushMatrix();
	glTranslated(jj+50,0,0);
	rails();
	glPopMatrix();
}
void rail3()
{
	glPushMatrix();
	glTranslated(jj+100,0,0);
	rails();
	glPopMatrix();
}
void rail4()
{
	glPushMatrix();
	glTranslated(jj+150,0,0);
	rails();
	glPopMatrix();
}
void rail5()
{
	glPushMatrix();
	glTranslated(jj+200,0,0);
	rails();
	glPopMatrix();
}
void rail13()
{
	glPushMatrix();
	glTranslated(jj+600,0,0);
	rails();
	glPopMatrix();
}
void rail14()
{
	glPushMatrix();
	glTranslated(jj+650,0,0);
	rails();
	glPopMatrix();
}
void rail15()
{
	glPushMatrix();
	glTranslated(jj+700,0,0);
	rails();
	glPopMatrix();
}
void rail16()
{
	glPushMatrix();
	glTranslated(jj+750,0,0);
	rails();
	glPopMatrix();
}
void rail17()
{
	glPushMatrix();
	glTranslated(jj+800,0,0);
	rails();
	glPopMatrix();
}
void rail18()
{
	glPushMatrix();
	glTranslated(jj+850,0,0);
	rails();
	glPopMatrix();
}
void rail19()
{
	glPushMatrix();
	glTranslated(jj+900,0,0);
	rails();
	glPopMatrix();
}
void rail20()
{
	glPushMatrix();
	glTranslated(jj+950,0,0);
	rails();
	glPopMatrix();
}
void rail21()
{
	glPushMatrix();
	glTranslated(jj+1000,0,0);
	rails();
	glPopMatrix();
}
void rail22()
{
	glPushMatrix();
	glTranslated(jj+1050,0,0);
	rails();
	glPopMatrix();
}
void rail23()
{
	glPushMatrix();
	glTranslated(jj+1100,0,0);
	rails();
	glPopMatrix();
}

void rail()
{
	rail1();
	rail2();
	rail3();
	rail4();
	rail5();
	rail6();
	rail7();
	rail8();
	rail9();
	rail10();
	rail11();
	rail12();
	rail13();
	rail14();
	rail15();
		rail16();
	rail17();
	rail18();
	rail19();
	rail20();
	rail21();
	rail22();
	rail23();
	

}


void myinit1()
{
 glClearColor(1.0,1.0,1.0,1.0);
 glColor3f(0.0,0.0,1.0);
 glPointSize(4.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
  gluOrtho2D(0.0,1100.0,0.0,700.0);
}


void display1()
{
	if(t==0)
	{
		
          starter();
	}
	if(t==1)
	{
	glClear(GL_COLOR_BUFFER_BIT);
	draw_object();
	track();
	rail();
		glPushMatrix();
		if (ii<-900)
		{
			ii=1100;
		}
		else
			ii=ii-1;
	glTranslated(--ii,0,0);
	Cylinder_draw1();
	Cylinder_draw();
	   cube1();
glColor3f(1.0,1.0,0.0);
circle_draw(160,80,1);
	circle_draw(110,80,1);
	circle_draw(160,80,11);
		circle_draw(110,80,11);
		window_draw();
	coach();
	draw_coach();
	draw_coach1();
	draw_coach2();
	draw_coach3();
	draw_coach4();
	draw_coach5();
	glPopMatrix();
	glFlush();
	}
	if(t==2)
{
   glClear(GL_COLOR_BUFFER_BIT);
	draw_object1();
	track();
	rail();
		glPushMatrix();
		if (ii<-900)
		{
			ii=1100;
		}
		else
			ii=ii-2.5;
	glTranslated(--ii,0,0);
	Cylinder_draw1();
	Cylinder_draw();
	   cube1();
glColor3f(1.0,1.0,0.0);
circle_draw(160,80,1);
	circle_draw(110,80,1);
	circle_draw(160,80,11);
		circle_draw(110,80,11);
		window_draw();
	coach();
	draw_coach();
	draw_coach1();
	draw_coach2();
	draw_coach3();
	draw_coach4();
	draw_coach5();
	glPopMatrix();
	

	glFlush();
}
	
 if(t==3)
{
	glClear(GL_COLOR_BUFFER_BIT);
	scenery();
	road();
	track();
	rail();
	glPushMatrix();
	if (k>1200)
		{
			k=-1600;
		}
		else
			k=k+0.5;
	glTranslated(++k,0,0);
	car();
	glPopMatrix();
		glPushMatrix();
		if (ii<-1600)
		{
			ii=1100;
		}
		else
			ii=ii-.7;
	glTranslated(--ii,0,0);
	Cylinder_draw1();
	Cylinder_draw();
	   cube1();
glColor3f(1.0,1.0,0.0);
circle_draw(160,80,1);
	circle_draw(110,80,1);
	circle_draw(160,80,11);
	circle_draw(110,80,11);
	window_draw();
	coach();
	draw_coach();
	draw_coach1();
	draw_coach2();
	draw_coach3();
	draw_coach4();
	draw_coach5();
	glPopMatrix();
	glFlush();
	
}
 if(i<0) i=1100;
}

	void spinDisplay(void)
{
	
spin = spin *2.0;
if (spin > 360.0)
spin = spin - 360;
glutPostRedisplay();
}
void main_menu(int id)
{
	switch(id)
	{
	case 0: t=0;
	break;
	case 1: t=1;
	break;
	case 2: t=2;
	break;
	case 3: t=3;
	break;
	case 4: exit(0);
	}

}

int main(int argc,char** argv)
{

	
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1100.0,700.0);
	glutInitWindowPosition(0,0);
	glutCreateWindow("THE TRAIN");
	glutDisplayFunc(display1);
    glutIdleFunc(spinDisplay);
	myinit1();
	glutCreateMenu(main_menu);
	glutAddMenuEntry("front page",0);
	glutAddMenuEntry("desert",1);
	glutAddMenuEntry("hill",2);
	glutAddMenuEntry("highway",3);
	glutAddMenuEntry("exit",4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop(); 
	return 0;
}

