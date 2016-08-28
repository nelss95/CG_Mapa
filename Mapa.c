#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#ifndef max
	#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif

#ifndef min
	#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif
void plot();
void plotV();
void init();
void bresenham2();
void printGuana();
void printAlajuela();
void printHeredia();
void printPunta();
void printSanJo();
void printLimon();
void printCar();

struct vertice {
	int X;
	int Y;
};

struct bordes {
	int Xmin;
	int Ymin;
	int Xmax;
	int Ymax;
};

int puntosYGuana [23] {1029-33,1029-50,1029-69,102}

struct bordes bordesGuana[23];
struct bordes bordesAlajuela[16];
struct bordes bordesPuntaGolfo[6];
struct bordes bordesPunta[35];
struct bordes bordesHeredia[11];
struct bordes bordesCartago[8];
struct bordes bordesLimon[16];
struct bordes bordesSJ[23];

struct vertice verticesGuana[24];
struct vertice verticesAlajuela[16];
struct vertice verticesPuntaGolfo[6];
struct vertice verticesPunta[35];
struct vertice verticesHeredia[11];
struct vertice verticesCartago[8];
struct vertice verticesLimon[16];
struct vertice verticesSJ[17];


int main(int argc, char** argv)
{

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1028,1028);
  glutCreateWindow("Progra 0");
  glClear(GL_COLOR_BUFFER_BIT);
  gluOrtho2D(-0.5, 1028 +0.5, -0.5, 1028 + 0.5);
	glColor3f (1.0f, 1.0f, 1.0f);
  glutDisplayFunc(init);
  glutMainLoop();



	verticesGuana[0].X = 154;
	verticesGuana[0].Y = 1029-33;
	verticesGuana[1].X = 169;
	verticesGuana[1].Y = 1029-33;
	verticesGuana[2].X = 182;
	verticesGuana[2].Y =1029-50;
	verticesGuana[3].X = 249;
	verticesGuana[3].Y =1029-69;
	verticesGuana[4].X =196;
	verticesGuana[4].Y =1029-109;
	verticesGuana[5].X =240;
	verticesGuana[5].Y =1029-142;
	verticesGuana[6].X =298;
	verticesGuana[6].Y =1029-160;
	verticesGuana[7].X =320;
	verticesGuana[7].Y =1029-195;
	verticesGuana[8].X =256;
	verticesGuana[8].Y =1029-214;
	verticesGuana[9].X =354;
	verticesGuana[9].Y =1029-251;
	verticesGuana[10].X =331;
	verticesGuana[10].Y =1029-259;
	verticesGuana[11].X =333;
	verticesGuana[11].Y =1029-283;
	verticesGuana[12].X =322;
	verticesGuana[12].Y =1029-301;
	verticesGuana[13].X =381;
	verticesGuana[13].Y =1029-290;
	verticesGuana[14].X =241;
	verticesGuana[14].Y =1029-268;
	verticesGuana[15].X =257;
	verticesGuana[15].Y =1029-328;
	verticesGuana[16].X =240;
	verticesGuana[16].Y =1029-393;
	verticesGuana[17].X =142;
	verticesGuana[17].Y =1029-354;
	verticesGuana[18].X =94;
	verticesGuana[18].Y =1029-242;
	verticesGuana[19].X =153;
	verticesGuana[19].Y =1029-178;
	verticesGuana[20].X =139;
	verticesGuana[20].Y =1029-139;
	verticesGuana[21].X =79;
	verticesGuana[21].Y =1029-112;
	verticesGuana[22].X =136;
	verticesGuana[22].Y =1029-97;
	verticesGuana[23].X =154;
	verticesGuana[23].Y =1029-33;


	verticesAlajuela[0].X =249;
	verticesAlajuela[0].Y =1029-69;
	verticesAlajuela[1].X =196;
	verticesAlajuela[1].Y =1029-109;
	verticesAlajuela[2].X =240;
	verticesAlajuela[2].Y =1029-142;
	verticesAlajuela[3].X =298;
	verticesAlajuela[3].Y =1029-160;
	verticesAlajuela[4].X =320;
	verticesAlajuela[4].Y =1029-195;
	verticesAlajuela[5].X =256;
	verticesAlajuela[5].Y =1029-214;
	verticesAlajuela[6].X =354;
	verticesAlajuela[6].Y =1029-251;
	verticesAlajuela[7].X =406;
	verticesAlajuela[7].Y =1029-331;
	verticesAlajuela[8].X =387;
	verticesAlajuela[8].Y =1029-347;
	verticesAlajuela[9].X =406;
	verticesAlajuela[9].Y =1029-372;
	verticesAlajuela[10].X =437;
	verticesAlajuela[10].Y =1029-344;
	verticesAlajuela[11].X =492;
	verticesAlajuela[11].Y =1029-339;
	verticesAlajuela[12].X =506;
	verticesAlajuela[12].Y =1029-143;
	verticesAlajuela[13].X =381;
	verticesAlajuela[13].Y =1029-67;
	verticesAlajuela[14].X =328;
	verticesAlajuela[14].Y =1029-98;
	verticesAlajuela[15].X =249;
	verticesAlajuela[15].Y =1029-69;


	verticesPuntaGolfo[0].X =257;
	verticesPuntaGolfo[0].Y =1029-328;
	verticesPuntaGolfo[1].X =240;
	verticesPuntaGolfo[1].Y =1029-393;;
	verticesPuntaGolfo[2].X =276;
	verticesPuntaGolfo[2].Y =1029-438;
	verticesPuntaGolfo[3].X =333;
	verticesPuntaGolfo[3].Y =1029-376;
	verticesPuntaGolfo[4].X =310;
	verticesPuntaGolfo[4].Y =1029-342;
	verticesPuntaGolfo[5].X =257;
	verticesPuntaGolfo[5].Y =1029-328;

	verticesPunta[0].X =354;
	verticesPunta[0].Y =1029-251;
	verticesPunta[1].X =406;
	verticesPunta[1].Y =1029-331;
	verticesPunta[2].X =387;
	verticesPunta[2].Y =1029-347;
	verticesPunta[3].X =406;
	verticesPunta[3].Y =1029-372;
	verticesPunta[4].X =411;
	verticesPunta[4].Y =1029-392;
	verticesPunta[5].X =400;
	verticesPunta[5].Y =1029-403;
	verticesPunta[6].X =419;
	verticesPunta[6].Y =1029-437;
	verticesPunta[7].X =450;
	verticesPunta[7].Y =1029-420;
	verticesPunta[8].X =503;
	verticesPunta[8].Y =1029-421;
	verticesPunta[9].X =660;
	verticesPunta[9].Y =1029-553;
	verticesPunta[10].X =673;
	verticesPunta[10].Y =1029-479;
	verticesPunta[11].X =790;
	verticesPunta[11].Y =1029-543;
	verticesPunta[12].X =846;
	verticesPunta[12].Y =1029-583;
	verticesPunta[13].X =802;
	verticesPunta[13].Y =1029-634;
	verticesPunta[14].X =826;
	verticesPunta[14].Y =1029-665;
	verticesPunta[15].X =817;
	verticesPunta[15].Y =1029-706;
	verticesPunta[16].X =777;
	verticesPunta[16].Y =1029-733;
	verticesPunta[17].X =825;
	verticesPunta[17].Y =1029-801;
	verticesPunta[18].X =746;
	verticesPunta[18].Y =1029-728;
	verticesPunta[19].X =741;
	verticesPunta[19].Y =1029-663;
	verticesPunta[20].X =681;
	verticesPunta[20].Y =1029-639;
	verticesPunta[21].X =679;
	verticesPunta[21].Y =1029-672;
	verticesPunta[22].X =715;
	verticesPunta[22].Y =1029-698;
	verticesPunta[23].X =710;
	verticesPunta[23].Y =1029-730;
	verticesPunta[24].X =635;
	verticesPunta[24].Y =1029-708;
	verticesPunta[25].X =600;
	verticesPunta[25].Y =1029-656;
	verticesPunta[26].X =637;
	verticesPunta[26].Y =1029-613;
	verticesPunta[27].X =550;
	verticesPunta[27].Y =1029-500;
	verticesPunta[28].X =397;
	verticesPunta[28].Y =1029-436;
	verticesPunta[29].X =354;
	verticesPunta[29].Y =1029-338;
	verticesPunta[30].X =281;
	verticesPunta[30].Y =1029-290;
	verticesPunta[31].X =322;
	verticesPunta[31].Y =1029-301;
	verticesPunta[32].X =333;
	verticesPunta[32].Y =1029-283;
	verticesPunta[33].X =331;
	verticesPunta[33].Y =1029-259;
	verticesPunta[34].X =354;
	verticesPunta[34].Y =1029-251;

	verticesHeredia[0].X=492;
	verticesHeredia[0].Y=1029-339;
	verticesHeredia[1].X=506;
	verticesHeredia[1].Y=1029-143;
	verticesHeredia[2].X=544;
	verticesHeredia[2].Y=1029-137;
	verticesHeredia[3].X=565;
	verticesHeredia[3].Y=1029-154;
	verticesHeredia[4].X=603;
	verticesHeredia[4].Y=1029-140;
	verticesHeredia[5].X=609;
	verticesHeredia[5].Y=1029-165;
	verticesHeredia[6].X=581;
	verticesHeredia[6].Y=1029-174;
	verticesHeredia[7].X=564;
	verticesHeredia[7].Y=1029-294;
	verticesHeredia[8].X=526;
	verticesHeredia[8].Y=1029-292;
	verticesHeredia[9].X=538;
	verticesHeredia[9].Y=1029-323;
	verticesHeredia[10].X=492;
	verticesHeredia[10].Y=1029-339;

	verticesCartago[0].X=564;
	verticesCartago[0].Y=1029-294;
	verticesCartago[1].X=645;
	verticesCartago[1].Y=1029-338;
	verticesCartago[2].X=699;
	verticesCartago[2].Y=1029-334;
	verticesCartago[3].X=699;
	verticesCartago[3].Y=1029-377;
	verticesCartago[4].X=661;
	verticesCartago[4].Y=1029-452;
	verticesCartago[5].X=528;
	verticesCartago[5].Y=1029-384;
	verticesCartago[6].X=569;
	verticesCartago[6].Y=1029-331;
	verticesCartago[7].X=564;
	verticesCartago[7].Y=1029-294;

	verticesLimon[0].X=673;
	verticesLimon[0].Y=1029-479;
	verticesLimon[1].X=661;
	verticesLimon[1].Y=1029-452;
	verticesLimon[2].X=699;
	verticesLimon[2].Y=1029-377;
	verticesLimon[3].X=699;
	verticesLimon[3].Y=1029-334;
	verticesLimon[4].X=645;
	verticesLimon[4].Y=1029-338;
	verticesLimon[5].X=564;
	verticesLimon[5].Y=1029-294;
	verticesLimon[6].X=581;
	verticesLimon[6].Y=1029-174;
	verticesLimon[7].X=609;
	verticesLimon[7].Y=1029-165;
	verticesLimon[8].X=603;
	verticesLimon[8].Y=1029-140;
	verticesLimon[9].X=623;
	verticesLimon[9].Y=1029-106;
	verticesLimon[10].X=822;
	verticesLimon[10].Y=1029-395;
	verticesLimon[11].X=891;
	verticesLimon[11].Y=1029-435;
	verticesLimon[12].X=870;
	verticesLimon[12].Y=1029-452;
	verticesLimon[13].X=824;
	verticesLimon[13].Y=1029-425;
	verticesLimon[14].X=498;
	verticesLimon[14].Y=1029-548;
	verticesLimon[15].X=673;
	verticesLimon[15].Y=1029-479;

	verticesSJ[0].X=406;
	verticesSJ[0].Y=1029-372;
	verticesSJ[1].X=437;
	verticesSJ[1].Y=1029-344;
	verticesSJ[2].X=492;
	verticesSJ[2].Y=1029-339;
	verticesSJ[3].X=538;
	verticesSJ[3].Y=1029-323;
	verticesSJ[4].X=526;
	verticesSJ[4].Y=1029-292;
	verticesSJ[5].X=564;
	verticesSJ[5].Y=1029-294;
	verticesSJ[6].X=569;
	verticesSJ[6].Y=1029-331;
	verticesSJ[7].X=338;
	verticesSJ[7].Y=1029-384;
	verticesSJ[8].X=661;
	verticesSJ[8].Y=1029-452;
	verticesSJ[9].X=673;
	verticesSJ[9].Y=1029-479;
	verticesSJ[10].X=660;
	verticesSJ[10].Y=1029-553;
	verticesSJ[11].X=503;
	verticesSJ[11].Y=1029-421;
	verticesSJ[12].X=450;
	verticesSJ[12].Y=1029-420;
	verticesSJ[13].X=419;
	verticesSJ[13].Y=1029-437;
	verticesSJ[14].X=400;
	verticesSJ[14].Y=1029-403;
	verticesSJ[15].X=411;
	verticesSJ[15].Y=1029-392;
	verticesSJ[16].X=406;
	verticesSJ[16].Y=1029-372;



}


void printGuana() {
	bresenham2(154,1029-33,169,1029-33);
	bresenham2(169,1029-33,182,1029-50);
	bresenham2(182,1029-50,249,1029-69);
	bresenham2(249,1029-69,196,1029-109);
	bresenham2(196,1029-109,240,1029-142);
	bresenham2(240,1029-142,298,1029-160);
	bresenham2(298,1029-160,320,1029-195);
	bresenham2(320,1029-195,256,1029-214);
	bresenham2(256,1029-214,354,1029-251);
	bresenham2(354,1029-251,331,1029-259);
	bresenham2(331,1029-259,333,1029-283);
	bresenham2(333,1029-283,322,1029-301);
	bresenham2(322,1029-301,281,1029-290);
	bresenham2(281,1029-290,241,1029-268);
	bresenham2(241,1029-268,257,1029-328);
	bresenham2(257,1029-328,240,1029-393);
	bresenham2(240,1029-393,142,1029-354);
	bresenham2(142,1029-354,94,1029-242);
	bresenham2(94,1029-242,153,1029-178);
	bresenham2(153,1029-178,139,1029-139);
	bresenham2(139,1029-139,79,1029-112);
	bresenham2(79,1029-112,136,1029-97);
	bresenham2(136,1029-97,154,1029-33);
}
void printAlajuela() {
	bresenham2(249,1029-69,196,1029-109);
	bresenham2(196,1029-109,240,1029-142);
	bresenham2(240,1029-142,298,1029-160);
	bresenham2(298,1029-160,320,1029-195);
	bresenham2(320,1029-195,256,1029-214);
	bresenham2(256,1029-214,354,1029-251);
	bresenham2(354,1029-251,406,1029-331);
	bresenham2(406,1029-331,387,1029-347);
	bresenham2(387,1029-347,406,1029-372);
	bresenham2(406,1029-372,437,1029-344);
	bresenham2(437,1029-344,492,1029-339);
	bresenham2(492,1029-339,506,1029-143);
	bresenham2(506,1029-143,381,1029-67);
	bresenham2(381,1029-67,328,1029-98);
	bresenham2(328,1029-98,249,1029-69);


}

void printPunta() {
	bresenham2(257,1029-328,240,1029-393);
	bresenham2(240,1029-393,276,1029-438);
	bresenham2(276,1029-438,333,1029-376);
	bresenham2(333,1029-376,310,1029-342);
	bresenham2(310,1029-342,257,1029-328);

	bresenham2(354,1029-251,406,1029-331);
	bresenham2(406,1029-331,387,1029-347);
	bresenham2(387,1029-347,406,1029-372);
	bresenham2(406,1029-372,411,1029-392);
	bresenham2(411,1029-392,400,1029-403);
	bresenham2(400,1029-403,419,1029-437);
	bresenham2(419,1029-437,450,1029-420);
	bresenham2(450,1029-420,503,1029-421);
	bresenham2(503,1029-421,660,1029-553);
	bresenham2(660,1029-553,673,1029-479);
	bresenham2(673,1029-479,790,1029-543);
	bresenham2(790,1029-543,846,1029-583);
	bresenham2(846,1029-583,802,1029-634);
	bresenham2(802,1029-634,826,1029-665);
	bresenham2(826,1029-665,817,1029-706);
	bresenham2(817,1029-706,777,1029-733);
	bresenham2(777,1029-733,825,1029-801);
	bresenham2(825,1029-801,746,1029-728);
	bresenham2(746,1029-728,741,1029-663);
	bresenham2(741,1029-663,681,1029-639);
	bresenham2(681,1029-639,679,1029-672);
	bresenham2(679,1029-672,715,1029-695);
	bresenham2(715,1029-695,710,1029-730);
	bresenham2(710,1029-730,635,1029-708);
	bresenham2(635,1029-708,600,1029-656);
	bresenham2(600,1029-656,637,1029-613);
	bresenham2(637,1029-613,550,1029-500);
	bresenham2(550,1029-500,397,1029-436);
	bresenham2(397,1029-436,354,1029-338);
	bresenham2(354,1029-338,281,1029-290);
	bresenham2(281,1029-290,322,1029-301);
	bresenham2(322,1029-301,333,1029-283);
	bresenham2(333,1029-283,331,1029-259);
	bresenham2(331,1029-259,354,1029-251);

}

void printSanJo(){
	bresenham2(406,1029-372,437,1029-344);
	bresenham2(437,1029-344,492,1029-339);
	bresenham2(492,1029-339,538,1029-323);
	bresenham2(538,1029-323,526,1029-292);
	bresenham2(526,1029-292,564,1029-294);
	bresenham2(564,1029-294,569,1029-331);
	bresenham2(569,1029-331,538,1029-384);
	bresenham2(538,1029-384,661,1029-452);
	bresenham2(661,1029-452,673,1029-479);
	bresenham2(673,1029-479,660,1029-553);
	bresenham2(660,1029-553,673,1029-479);
	bresenham2(673,1029-479,660,1029-553);
	bresenham2(660,1029-553,503,1029-421);
	bresenham2(503,1029-421,450,1029-420);
	bresenham2(450,1029-420,419,1029-437);
	bresenham2(419,1029-437,400,1029-403);
	bresenham2(400,1029-403,411,1029-392);
	bresenham2(411,1029-392,406,1029-372);

}

void printHeredia() {
	bresenham2(492,1029-339,506,1029-143);
	bresenham2(506,1029-143,544,1029-137);
	bresenham2(544,1029-137,565,1029-164);
	bresenham2(565,1029-164,603,1029-140);
	bresenham2(603,1029-140,609,1029-165);
	bresenham2(609,1029-165,581,1029-174);
	bresenham2(581,1029-174,564,1029-294);
	bresenham2(564,1029-294,526,1029-292);
	bresenham2(526,1029-292,538,1029-323);
	bresenham2(538,1029-323,492,1029-339);
}

void printCar(/* arguments */) {
		bresenham2(564,1029-294,645,1029-338);
		bresenham2(645,1029-338,699,1029-334);
		bresenham2(699,1029-334,699,1029-377);
		bresenham2(699,1029-377,661,1029-452);
		bresenham2(661,1029-452,538,1029-384);
		bresenham2(538,1029-384,569,1029-331);
		bresenham2(569,1029-331,564,1029-294);
}

void printLimon() {
	bresenham2(673,1029-479,661,1029-452);
	bresenham2(661,1029-452,699,1029-377);
	bresenham2(699,1029-377,699,1029-334);
	bresenham2(699,1029-334,645,1029-338);
	bresenham2(645,1029-338,564,1029-294);
	bresenham2(564,1029-294,581,1029-174);
	bresenham2(581,1029-174,609,1029-165);
	bresenham2(609,1029-165,603,1029-140);
	bresenham2(603,1029-140,623,1029-106);
	bresenham2(623,1029-106,822,1029-395);
	bresenham2(822,1029-395,891,1029-435);
	bresenham2(891,1029-435,870,1029-452);
	bresenham2(870,1029-452,824,1029-425);
	bresenham2(824,1029-425,798,1029-548);
	bresenham2(798,1029-548,673,1029-479);
}
void init(){
  //int i, k;
  //generarLineas(pantalla.NumLineas,pantalla.resolucion);
  //MostrarTabla(NumLineas);
  //test();
	    //printf("bresenham(%d, %d, %d, %d); \n", listaLinea[i].x0, listaLinea[i].y0, listaLinea[i].x1, listaLinea[i].y1);
	 printGuana();
	 printAlajuela();
	 printPunta();
	 printSanJo();
	 printHeredia();
	 printLimon();
	 printCar();
   glFlush();
}


void bresenham2(int x0, int y0,int x1, int y1) {
      int d, Delta_E, Delta_NE, Delta_S, Delta_SE, Delta_SO, Delta_O, Delta_NO, Delta_N,xp, yp;
      int difX = fabs((x0 - x1));
      int dify = fabs((y0 - y1));

      if (difX >= dify) {
				if ((x0 > x1 && y0 > y1)|| (x0 < x1 && y0 > y1)){
					int var = x0;
					x0 = x1;
					x1 = var;
					var = y0;
					y0 = y1;
					y1 = var;
				}
				xp = x0; yp = y0;
				plot(xp, yp);
        if (x0 < x1 && y0 <= y1) {
          //Cuadrante 1
          //printf("cuadrante1 x = %d y Y = %d\n", xp,yp);
					Delta_NE = 2*(y1-y0) - 2*(x1-x0);
					Delta_E = 2*(y1-y0);
          d = 2*(y1-y0) - (x1-x0);
          while (xp <= x1) {
            //printf("1");
            if (d <= 0) {
              xp++;
              d+= Delta_E;
            } else {
              xp++; yp++;
              d += Delta_NE;
            }
            plot(xp, yp);
          }
        ////////////////////
      } else if (x0 > x1 && y0 <= y1) {
          //cuadrante4
          //printf("cuadrante4 x = %d y Y = %d\n", xp,yp);
					Delta_NO = -2*(y1-y0) - 2*(x1-x0);
				  Delta_O = -2*(y1-y0);
          d = -2*(y1-y0)-(x1-x0);
          while (xp >= x1) {
            //printf("4");
            if (d >= 0) {
              xp--;
              d+= Delta_O;
            } else {
              xp--; yp++;
              d += Delta_NO;
            }
            plot(xp, yp);
          }
          /////////////////
      }
      } else if (difX < dify) {
				if ((x0 >= x1 && y0 > y1)||(x0 < x1 && y0 > y1)){
					int var = x0;
					x0 = x1;
					x1 = var;
					var = y0;
					y0 = y1;
					y1 = var;
				}
				xp = x0; yp = y0;
				plot(xp, yp);
        if (x0 <= x1 && y0 < y1) {
          //Cuadrante 2
          //printf("cuadrante2 x = %d y Y = %d\n", xp,yp);
					Delta_NE = 2*(y1-y0) - 2*(x1-x0);
					Delta_N = -2*(x1-x0);
          d = (y1-y0) - 2*(x1-x0);
          while (yp <= y1) {
            //printf("2");
            if (d >= 0) {
              yp++;
              d+= Delta_N;
            } else {
              xp++; yp++;
              d += Delta_NE;
            }
            plot(xp, yp);
          }
          ////
        } else if (x0 > x1 && y0 < y1) {
          //cuadrante3
          //printf("cuadrante3 x = %d y Y = %d\n", xp,yp);
					Delta_NO = -2*(y1-y0) - 2*(x1-x0);
					Delta_N = -2*(x1-x0);
          d = - (y1-y0) - 2*(x1-x0);
          while (yp <= y1) {
            //printf("3");
            if (d <= 0) {
              yp++;
              d+= Delta_N;
            } else {
              xp--; yp++;
              d += Delta_NO;
            }
            plot(xp, yp);
          }
          /////

			}
		}
}
void plot(int x, int y) {

	//glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_POINTS);
	glVertex2i(x,y);
	glEnd();
}

void plotV(int x, int y) {
  return;
}
