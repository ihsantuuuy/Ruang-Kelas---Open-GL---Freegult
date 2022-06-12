#include <gl/freeglut.h>
#include <math.h>

const double PI= 3.141592653589793;
int i;


void lingkaran(int jari2,int jumlah_titik,int x_tengah,int y_tengah){
 glBegin(GL_POLYGON);
 for(i=0; i<=360;i++){
  float sudut=i*(2*PI/jumlah_titik);
  float x=x_tengah+jari2*cos(sudut);
  float y=y_tengah+jari2*sin(sudut);
  glVertex2f(x,y);
 }
 glEnd();
}


void segitiga(int x1,int y1,int x2,int y2,int x3,int y3){
 glBegin(GL_POLYGON);
 glVertex2i(x1,y1);
 glVertex2i(x2,y2);
 glVertex2i(x3,y3);
 glEnd();
}
 
void garis(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
 glBegin(GL_POLYGON);
 glVertex2i(x1,y1);
 glVertex2i(x2,y2);
 glVertex2i(x3,y3);
 glVertex2i(x4,y4);
 glEnd();
}

void garisawe(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
 glBegin(GL_POLYGON);
 glVertex2i(x1,y1);
 glVertex2i(x2,y2);
 glVertex2i(x3,y3);
 glVertex2i(x4,y4);
 glEnd();
}

void persegi(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
    glBegin(GL_POLYGON);
 glVertex2i(x1,y1);
 glVertex2i(x2,y2);
 glVertex2i(x3,y3);
 glVertex2i(x4,y4);
 glEnd();
}



//draw area
void userdraw(){
 static int tick=0;

 //dinding kiri
 glColor3f(0.87, 0.82, 0.73);
 garis(0,0, 100,200, 100,650, 0,650);

 //dinding kanan
 glColor3f(0.87, 0.82, 0.73);
 garis(1200,0, 1100,200, 1100,650, 1200,650);

 //lantai
 glColor3f(0.88, 0.88, 0.88);
 garis(0,0, 100,200, 1100,200, 1200,0);

 //border papan tulis
 glColor3f(0.46, 0.25, 0.02);
 garis(390,290, 390,510, 710,510, 710,290);

 //papan tulis
 glColor3f(0.93, 0.93, 0.92);
 garis(400,300, 400,500, 700,500, 700,300);

 //Tulisan Grafkom
 //Huruf G
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(470,490);
glVertex2f(460,490); 
glVertex2f(460,490); 
glVertex2f(460,475);
glVertex2f(460,475);
glVertex2f(470,475);
glVertex2f(470,475);
glVertex2f(470,483);
glVertex2f(470,483);
glVertex2f(465,483);

//Huruf R
glColor3f(0, 0, 0);
glVertex2f(478,475);
glVertex2f(478,490); 
glVertex2f(478,490);
glVertex2f(485,490); 
glVertex2f(485,490);
glVertex2f(485,483);
glVertex2f(485,483);
glVertex2f(478,483);
glVertex2f(478,483);
glVertex2f(485,475);

//Huruf A
glColor3f(0, 0, 0);
glVertex2f(490,475);
glVertex2f(490,490); 
glVertex2f(490,490); 
glVertex2f(497,490);
glVertex2f(497,490);
glVertex2f(497,475);
glVertex2f(497,483);
glVertex2f(490,483);

//Huruf F
glColor3f(0, 0, 0);
glVertex2f(512,490);
glVertex2f(505,490); 
glVertex2f(505,490); 
glVertex2f(505,475); 
glVertex2f(512,483);
glVertex2f(505,483);

//Huruf K
glColor3f(0, 0, 0);
glVertex2f(518,490);
glVertex2f(518,475); 
glVertex2f(525,490); 
glVertex2f(518,483); 
glVertex2f(518,483); 
glVertex2f(525,475);

//Huruf O
glColor3f(0, 0, 0);
glVertex2f(530,475);
glVertex2f(530,490); 
glVertex2f(530,490); 
glVertex2f(540,490); 
glVertex2f(540,490);
glVertex2f(540,475);
glVertex2f(540,475);
glVertex2f(530,475);

//Huruf M
glColor3f(0, 0, 0);
glVertex2f(545,475);
glVertex2f(545,490); 
glVertex2f(545,490); 
glVertex2f(550,483); 
glVertex2f(550,483);
glVertex2f(555,490);
glVertex2f(555,490);
glVertex2f(555,475);

//Grafik Y
glColor3f(0, 0, 0);
glVertex2f(460,460);
glVertex2f(460,320); 

// Grafik Huruf Y
glColor3f(0, 0, 0);
glVertex2f(460,470);
glVertex2f(450,460); 
glVertex2f(450,470); 
glVertex2f(455,465); 

//Grafik X
glColor3f(0, 0, 0);
glVertex2f(420,340);
glVertex2f(660,340); 

//Grafik Huruf X
glColor3f(0, 0, 0);
glVertex2f(680,345);
glVertex2f(670,335); 
glVertex2f(670,345); 
glVertex2f(680,335); 

//koordinat Z
glColor3f(0, 0, 0);
glVertex2f(650,360);
glVertex2f(660,360); 
glVertex2f(660,360); 
glVertex2f(650,350); 
glVertex2f(650,350); 
glVertex2f(660,350); 

//Koordinat Y
glColor3f(0, 0, 0);
glVertex2f(480,405);
glVertex2f(470,395); 
glVertex2f(470,405); 
glVertex2f(475,400);

//koordinat X
glColor3f(0, 0, 0);
glVertex2f(565,455);
glVertex2f(555,445);
glVertex2f(555,455); 
glVertex2f(565,445);

//Segitiga dipapan tulis
glColor3f(0, 0, 0);
glVertex2f(480,400);
glVertex2f(560,440); 
glVertex2f(560,440);
glVertex2f(640,360);
glVertex2f(640,360);
glVertex2f(480,400);

//border pintu kelas
glColor3f(0.15, 0.08, 0.03);
garis(1125,165, 1125,420, 1185,355, 1185,40);

//figura 1
glColor3f(0.3, 0.14, 0.04);
garis(415,555, 415,625, 485,625, 485,555);//luar
glColor3f(0.99, 0.16, 0.16);
garis(420,560, 420,620, 480,620, 480,560);//dalam
glColor3f(0.31, 0.31, 0.31);
garis(420,560, 430,580, 470,580, 480,560);//badanfoto
lingkaran(15,15, 450,595);//kepala

//figura 2
glColor3f(0.3, 0.14, 0.04);
garis(615,555, 615,625, 685,625, 685,555);//luar
glColor3f(0.99, 0.16, 0.16);
garis(620,560, 620,620, 680,620, 680,560);//dalam
glColor3f(0.31, 0.31, 0.31);
garis(620,560, 630,580, 670,580, 680,560);//badanfoto
lingkaran(15,15, 650,595);//kepala

//kursi dosen
glColor3f(0.3, 0.14, 0.04);
garis(200,260, 200,340, 260,340, 260,260);

//rangka kursi dosen kiri
glColor3f(0.64, 0.3, 0.05);
garis(200,252, 200,340, 207,340, 207,252);

//rangka kursi dosen kanan
glColor3f(0.64, 0.3, 0.05);
garis(253,252, 253,340, 260,340, 260,252);

//permukaan meja dosen
glColor3f(0.94, 0.58, 0.32);
garis(100,220, 140,260, 320,260, 360,220);

//badan meja dosen
glColor3f(0.74, 0.46, 0.26);
garis(100,140, 100,220, 360,220, 360,140);

//Roll layar proyektor
glColor3f(0.9, 0.85, 0.82);
garis(740,580, 740,600, 1060,600, 1060,580);

//border badan layar proyektor 
glColor3f(0, 0, 0);
garis(755,275, 755,585, 1045,585, 1045,275);

//badan layar proyektor
glColor3f(1, 1, 1);
garis(760,280, 760,580, 1040,580, 1040,280);

//Jendela Kelas
glColor3f(0.67, 0.65, 0.64);
garis(0,458, 95,485, 95,281, 0,230); //luar
glColor3f(0.05, 0.51, 0.66);
garis(0,450, 88,476, 88,286, 0,240); //dalam
glColor3f(0.67, 0.65, 0.64);
garis(50,464, 56,468, 56,262, 50,260); //Pembatas

//pintu kelas
glColor3f(0.3, 0.14, 0.02);
garis(1120,165, 1120,420, 1180,355, 1180,40);

//buku
glColor3f(0.8, 0.77, 0.5);
garis(188,238, 200,256, 228,256, 220,238); //cover buku

 //orang
 glColor3f(0.23, 0.23, 0.23);//kaki kiri
 garis(740,200, 740,260, 760,260, 760,200);

 glColor3f(0.23, 0.23, 0.23);//kaki kanan
 garis(780,200, 780,260, 800,260, 800,200);

 glColor3f(0.23, 0.23, 0.23);//badan
 garis(740,260, 740,340, 800,340, 800,260); //badan
 garis(740,340, 755,355, 785,355, 800,340); //leher

lingkaran(25,25, 770,380);//kepala

 glColor3f(0.30, 0.30, 0.30);//tangan 
 garis(800,260, 800,340, 810,340, 810,260);//kanan
 garis(740,340, 680,360, 675,355, 740,330);//kiri

 //kursi mahasiswa1
 //orang
 glColor3f(0.23, 0.23, 0.23);
 garis(900,0, 900,40, 1020,40, 1020,0); //badan
 garis(900,120, 920,140, 1000,140, 1020,120); //leher
 glColor3f(0.23, 0.23, 0.23);//tangan 
 garis(880,20, 880,120, 900,120, 900,20);//kiri
 garis(1020,100, 1020,120, 1040,120, 1040,100);//kanan
 lingkaran(40,40, 960,180);//kepala
 //kursi
 glColor3f(0.82, 0.82, 0.82);
 garis(900,40, 900,120, 1020,120, 1020,40);//kursi
 glColor3f(0, 0, 0);
 garis(910,0, 910,80, 930,80, 930,0);//gagang kursi kiri
 garis(990,0, 990,80, 1010,80, 1010,0);//gagang kursi kanan

 //kursi mahasiswa2
 //orang
 glColor3f(0.23, 0.23, 0.23);
 garis(600,0, 600,40, 720,40, 720,0); //badan
 garis(600,120, 620,140, 700,140, 720,120); //leher
 glColor3f(0.23, 0.23, 0.23);//tangan 
 garis(580,100, 580,120, 600,120, 600,100);//kiri
 garis(720,100, 720,120, 740,120, 740,100);//kanan
 lingkaran(40,40, 660,180);//kepala
 //kursi
 glColor3f(0.82, 0.82, 0.82);
 garis(600,40, 600,120, 720,120, 720,40);//kursi
 glColor3f(0, 0, 0);
 garis(610,0, 610,80, 630,80, 630,0);//gagang kursi kiri
 garis(690,0, 690,80, 710,80, 710,0);//gagang kursi kanan

 //kursi mahasiswa3
 //orang
 glColor3f(0.23, 0.23, 0.23);
 garis(380,0, 380,40, 500,40, 500,0); //badan
 garis(380,120, 400,140, 480,140, 500,120); //leher
 glColor3f(0.23, 0.23, 0.23);//tangan 
 garis(360,100, 360,120, 380,120, 380,100);//kiri
 garis(500,100, 500,200, 520,200, 520,100);//kanan
 lingkaran(40,40, 440,180);//kepala
 //kursi
 glColor3f(0.82, 0.82, 0.82);
 garis(380,40, 380,120, 360,120, 360,40);//kursi
 glColor3f(0, 0, 0);
 garis(390,0, 390,80, 410,80, 410,0);//gagang kursi kiri
 garis(470,0, 470,80, 490,80, 490,0);//gagang kursi kanan

//kursi mahasiswa 4
//orang
 glColor3f(0.23, 0.23, 0.23);
 garis(160,0, 160,40, 280,40, 280,0); //badan
 garis(160,120, 180,140, 260,140, 280,120); //leher
 glColor3f(0.23, 0.23, 0.23);//tangan 
 garis(140,100, 140,120, 160,120, 160,100);//kiri
 garis(280,100, 280,200, 300,200, 300,100);//kanan
 lingkaran(40,40, 220,180);//kepala
//kursi
 glColor3f(0.82, 0.82, 0.82);
 garis(160,40, 160,120, 140,120, 140,40);//kursi
 glColor3f(0, 0, 0);
 garis(170,0, 170,80, 190,80, 190,0);//gagang kursi kiri
 garis(250,0, 250,80, 270,80, 270,0);//gagang kursi kanan
}

void display(void){
 //clear screen
 glClear (GL_COLOR_BUFFER_BIT);
    userdraw();//jalankan Userdraw()
 glutSwapBuffers();
}
int main(int argc, char**argv){
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
 glutInitWindowPosition(100,100);//posisi windownya di(100,100)
 glutInitWindowSize(1200,650);//set ukuran window jadi 640x480
 glutCreateWindow("TA Grafika Komputer");//set judul app
 glClearColor(0.51, 0.51, 0.51,0);//set warna background(r,g,b,a)(range 0-1)
 gluOrtho2D(0,1200,0,650.);//set area menggambar
 glutIdleFunc(display);
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}