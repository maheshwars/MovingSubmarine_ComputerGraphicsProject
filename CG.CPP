#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>

float x=300,y=160,x1=450,y1=200,r=20;
float pi=0.0174532925;

void main(){
int b=0,po=0,ro=0,no=0,to=0,lo=0,a=0,go=0;
float co=0;
int m,ye;

  int gdriver=DETECT, gmode;
  initgraph(&gdriver,&gmode,"C:\\TURBOC3\\bgi");

setfillstyle(1,1);
rectangle(60,50,590,440);
floodfill(61,51,15);
settextstyle(3,0,4);
outtextxy(120,80,"Computer Graphics Project");

delay(5000);
cleardevice();
int f[50],g[50];
  for(int s=0; s<50;s++)
{  f[s]=(rand()%(639))+1;
   g[s]=(rand()%(100))+1;  
}

while(!kbhit()){

//stars
setcolor(14);
for(int s =0;s<50;s++)
{
  circle(f[s],g[s],1);
}

  setcolor(15);
//waves
for(int f=0;f<500;f++){
arc((20+f*40)-b*5,110,180,360,20);
}



//clouds
arc(10+b*3,50,80,270,10);
   ellipse(35+b*3,40,30,180,25,10);
   ellipse(45+b*3,60,160,340,35,20);
   ellipse(80+b*3,40,15,160,30,10);
   ellipse(89+b*3,60,-130,20,25,10);
   ellipse(115+b*3,50,-90,120,20,12);
   setfillstyle(1,8);
   floodfill(40+b*3,50,15);

   //moon
setcolor(15);
setfillstyle(1,15);
circle(200+b/3,50,30);
floodfill(200+b/3,21,15);

 //submarine code
//submarine boundary
 //left arc
  setcolor(15);
  arc(x-145,y+170,90,-90,80);
  //bottom line
  line(x-150,y+250,x,y+250);
  //bottom arc
  arc(x+37,y+236,200,-20,40);
  //bottom line
  line(x+75,y+250,x+170,y+250);
  //top left arc
  arc(x-110,y+90,90,180,40);
  //line after arc
  line(x-110,y+50,x-53,y+50);
  //top arc
  arc(x+45,y+118,85,145,120);
  //line after arc
  line(x+120,y+30,x+170,y+30);
  //front rightmost arc
  arc(x+170,y+140,-90,90,110);

  //top pipe
  arc(x+50,y-22,-90,0,20);
  line(x+70,y-20,x+80.4,y-100);
  arc(x+120,y-100,90,180,40);
  arc(x+120,y-130,-90,90,10);
  line(x+120,y+30,x+110,y-110);
  arc(x+120,y-110,90,200,10);


//alien code

 //alien-1
  setfillstyle(1,10);
  arc(x1-163,y1+60,-40,220,r+8) ;
  ellipse(x1-163,y1+59,210,-30,26,r+14);
  floodfill(x1-163,y1+59,15);

//smile
arc(x1-143,y1+63,210,270,15);

//antina

    line(x1-182,y1+20,x1-174,y1+33);
     line(x1-187,y1+24,x1-180,y1+36);
    circle(x1-184,y1+22,4);


    line(x1-152,y1+33,x1-145,y1+21);
    line(x1-158,y1+33,x1-151,y1+21);
    circle(x1-148,y1+20,4);

    floodfill(x1-184,y1+22,15);
    floodfill(x1-148,y1+20,15);
    floodfill(x1-183,y1+28,15);
    floodfill(x1-154,y1+30,15);
//eye1
circle(x1-143,y1+60,7);
circle(x1-143+4,y1+60,3);

setfillstyle(1,0);
floodfill(x1-143+4,y1+60,15);
 m=lo;
 ye=lo;
  if(lo%2==0){
     m=7;
     ye=0;
  }
   else{
     m=0;
     ye=7;
  }

  line(x1-143-7+ye,y1+60-7+m,x1-143+7-ye,y1+60-7+m);
  line(x1-143-7+ye,y1+60+7-m,x1-143+7-ye,y1+60+7-m);
  setfillstyle(1,15);
  floodfill(x1-143,y1+60,15);
  setcolor(2);
  circle(x1-143+4,y1+60,3);
  setcolor(15);
  setfillstyle(1,2);
  floodfill(x1-143,y1+60-6,15);
  floodfill(x1-143,y1+60+6,15);
  circle(x1-143+4,y1+60,3);


//lower body
  line(x1-167,y1+93,x1-167,y1+105);
  line(x1-161,y1+93,x1-161,y1+105);
  arc(x1-164,y1+110,100,190,8);
  line(x1-172,y1+110,x1-173,y1+116);
  line(x1-154,y1+110,x1-153,y1+116);
  arc(x1-161,y1+110,-10,90,7);
  arc(x1-163,y1+115,-180,0,10);
  setfillstyle(1,10);
  floodfill(x1-165,y1+93,15);
  floodfill(x1-162,y1+112,15);
 //arms

 arc(x1-155,y1+97,-100,-20,10);
 arc(x1-155,y1+97,-100,-20,13);
 ellipse(x1-142,y1+100,0,360,5,3.5);
 setfillstyle(1,10);
floodfill(x1-142-1,y1+100,15);
 floodfill(x1-155+6,y1+97+10,15);
  //legs1

  line(x1-155,y1+115,x1-150+2*cos(-(b*40))+7,y1+128-2*sin(-(b*40)));//
  line(x1-157,y1+124,x1-150+2*cos(-(b*40)),y1+128-2*sin(-(b*40)));
  line(x1-150+2*cos(-(b*40)),y1+128-2*sin(-(b*40)),x-20+5*cos(-(b*70)),y+195-5*sin(-(b*70)));
  line(x1-150+2*cos(-(b*40))+7,y1+128-2*sin(-(b*40)),x-20+5*cos(-(b*70))+7,y+195-5*sin(-(b*70)));
  ellipse(x-16+5*cos(-b*70),y+195-5*sin(-b*70),0,360,6,3);
  setfillstyle(1,10);
  floodfill(x-16+5*cos(-b*70),y+195-5*sin(-b*70),15);
  floodfill(x1-148,y1+128,15);
  floodfill(x-8+2*cos(-b*70),y+184-2*sin(-b*70),15);

//alien-2
  setfillstyle(1,10);
  arc(x1-89,y1+16,-10,190,r+7);
  ellipse(x1-89,y1+13,190,-10,27,r+26);
  floodfill(x1-89,y1+16,15);

 //smile 2

  arc(x1-67,y1+27,210,260,15);
  //antina 2

    line(x1-106,y1-18,x1-100,y1-8);
    line(x1-112,y1-16,x1-106,y1-7);
    circle(x1-111,y1-20,4.3);


    line(x1-81,y1-11,x1-74,y1-24);
    line(x1-75,y1-9,x1-69,y1-20);
    circle(x1-71,y1-23,4);

    floodfill(x1-111,y1-20,15);
    floodfill(x1-71,y1-23,15);
    floodfill(x1-105,y1-9,15);
    floodfill(x1-75,y1-12,15);

//lens
ellipse(x1-50,y1+21,0,360,6,10);
setfillstyle(2,7);
floodfill(x1-50,y1+21,15);

  //eye2

circle(x1-71,y1+21,7);
circle(x1-71+4,y1+21,3);


setfillstyle(1,0);
floodfill(x1-71+4,y1+21,15);


  line(x1-71-7+ye,y1+21-7+m,x1-71+7-ye,y1+21-7+m);
  line(x1-71-7+ye,y1+21+7-m,x1-71+7-ye,y1+21+7-m);
  setfillstyle(1,15);
  floodfill(x1-71,y1+21,15);
  setcolor(2);
  circle(x1-71+4,y1+21,3);
  setcolor(15);
  setfillstyle(1,2);
  floodfill(x1-71,y1+21-6,15);
  floodfill(x1-71,y1+21+6,15);
  circle(x1-71+4,y1+21,3);


  //lower body
  line(x+57,y+98,x+57,y+107);
  line(x+65,y+98,x+65,y+107);
  ellipse(x+61,y+125,0,180,8,20);
  arc(x+61,y+125,-180,0,7);
  setfillstyle(1,10);
  floodfill(x1-80,y1+21,15);
  floodfill(x+59,y+125,15);
  floodfill(x+59,y+100,15);
//arms
  ellipse(x1-85,y1+55,-90,0,30,15);
  ellipse(x1-85,y1+55,-90,0,33,18);
  ellipse(x1-87,y1+50,-90,0,30,14);
  ellipse(x1-87,y1+50,-85,0,33,17);
  ellipse(x1-57,y1+50,0,360,4,6);
  floodfill(x1-57-1,y1+50,15);
  ellipse(x1-53,y1+52,0,360,4,6);
 floodfill(x1-53+2,y1+52,15);
 floodfill(x1-85+10,y1+64,15);
 floodfill(x1-85+10,y1+64+7,15);


//legs2
 setcolor(15);

  line(x1-82,y1+80,x+70+2*cos(-(b*80))+7,y+132-2*sin(-(b*80)));//
  line(x1-82,y1+89,x+70+2*cos(-(b*80)),y+132-2*sin(-(b*80)));
  line(x+70+2*cos(-(b*80)),y+132-2*sin(-(b*80)),x+60+5*cos(-(b*70)),y+167-5*sin(-(b*70)));
  line(x+70+2*cos(-(b*80))+7,y+132-2*sin(-(b*80)),x+60+5*cos(-(b*70))+7,y+167-5*sin(-(b*70)));
  ellipse(x+64+5*cos(-b*70),y+167-5*sin(-b*70),0,360,6,3);
  floodfill(x+64+5*cos(-b*70),y+167-5*sin(-b*70),15);
  floodfill(x1-79,y1+88,15);




  //pipe
  line(x1-51,y1+50,x1-51,y1-150);
  line(x1-47,y1+55,x1-47,y1-150);
  //handle
  line(x1-60,y1+43,x1-41,y1+57);
  line(x1-60,y1+53,x1-45,y1+63);
  setfillstyle(1,7);
  circle(x1-41,y1+61,4);
  floodfill(x1-46,y1+57,15);
 setfillstyle(1,8);
  floodfill(x1-41,y1+61,15);

  //
  arc(x1-20,y1-138.8,92,160,30);
  arc(x1-21,y1-138.8,91,160,32.1);
  line(x1-23,y1-169,x1-23,y1-170);



  //main steering
  rectangle(x+190,y+160,x+194,y+247);
  rectangle(x+180,y+150,x+205,y+160);
  line(x+170,y+130,x+180,y+150);
  line(x+173,y+130,x+183,y+150);
  line(x+182,y+130,x+192,y+150);
  line(x+185,y+130,x+195,y+150);
  circle(x+171,y+126,5);
  circle(x+183,y+126,5);
  setfillstyle(1,4);
  floodfill(x+171,y+126,15);
  floodfill(x+183,y+126,15);
  setfillstyle(1,7);
  floodfill(x+186,y+136,15);
  floodfill(x+175,y+136,15);
  floodfill(x+192,y+200,15);//rec
  floodfill(x+190,y+155,15);//rec

  //alien -3
  setfillstyle(1,10);
  arc(x1,y1+46,-40,220,r+8);
  ellipse(x1,y1+45,205,-28,26,r+14);
  floodfill(x1,y1+46,15);
//smile

arc(x1+19.5,y1+51,210,270,15);


 //antina 3

    line(x1+13,y1+11,x1+8,y1+18);
    line(x1+18,y1+13,x1+12.5,y1+20);
    circle(x1+17.5,y1+10,4);


    line(x1-12,y1+11,x1-5,y1+18);
    line(x1-17,y1+13,x1-10,y1+20);
    circle(x1-17,y1+10,4);

    floodfill(x1+17,y1+10,15);
    floodfill(x1-17,y1+10,15);
    floodfill(x1+13,y1+17,15);
    floodfill(x1-9,y1+17,15);




//eye3

    circle(x1+20,y1+46,7);
    circle(x1+20+4,y1+46,3);

    setfillstyle(1,0);
    floodfill(x1+20+4,y1+46,15);


  line(x1+20-7+ye,y1+46-7+m,x1+20+7-ye,y1+46-7+m);
  line(x1+20-7+ye,y1+46+7-m,x1+20+7-ye,y1+46+7-m);
  setfillstyle(1,15);
  floodfill(x1+20,y1+46,15);
  setcolor(2);
  circle(x1+20+4,y1+46,3);
  setcolor(15);
  setfillstyle(1,2);
  floodfill(x1+20,y1+46-6,15);
  floodfill(x1+20,y1+46+6,15);
  circle(x1+20+4,y1+46,3);

  //lightentering
  line(x1+20,y1+30,x1+95,y1+20);
  line(x1+20,y1+60,x1+117,y1+50);
  setfillstyle(10,YELLOW);
  floodfill(x1+30,y1+35,15);




 //lowerbody
   line(x1-4,y1+80,x1-4,y1+85);
   line(x1+3,y1+80,x1+3,y1+85);
   ellipse(x1-1,y1+105,0,180,8,20);
   arc(x1-1,y1+105,-180,0,7);
   setfillstyle(1,10);
   floodfill(x1-2,y1+82,15);
   floodfill(x1-2,y1+105,15);
 //arms
 arc(x1+8,y1+81,-100,-20,10);
 arc(x1+8,y1+81,-100,-20,13);
 ellipse(x1+8,y1+80,-100,-30,25,15);
 floodfill(x1+8+5,y1+91,15);
 ellipse(x1+8,y1+80,-100,-30,28,18);
floodfill(x1+13,y1+91+5,15);
floodfill(x1+28,y1+92,15);


//legs3

 line(x+155,y+142,x+160+2*cos(-(b*40))+7,y+150-2*sin(-(b*40)));//
 line(x+155,y+148,x+160+2*cos(-(b*40)),y+150-2*sin(-(b*40)));
 line(x+160+2*cos(-(b*40)),y+150-2*sin(-(b*40)),x+150+5*cos(-(b*70)),y+180-5*sin(-(b*70)));
 line(x+160+2*cos(-(b*40))+7,y+150-2*sin(-(b*40)),x+150+5*cos(-(b*70))+7,y+180-5*sin(-(b*70)));
 ellipse(x+154+5*cos(-b*70),y+180-5*sin(-b*70),0,360,6,3);
 setfillstyle(1,10);
 floodfill(x+162,y+150,15);
 floodfill(x+154+5*cos(-b*70),y+180-5*sin(-b*70),15);



//moving parts
  setfillstyle(1,8);
  //left gear_1
  circle(x-170,y+170,40);
  circle(x-170,y+170,35);
  circle(x-170,y+170,15);
  floodfill(x-170,y+170+37,15);
  floodfill(x-170,y+170+5,15);


   int t=0;
   //outer heads

  for(int i=0;i<18;i++){
   arc(x-170,y+170,(0+t*10)+b*5+1,(10+t*10)+b*5-1,48);
  line(x-170+(40*cos(((0+t*10)+b*5)*pi)),y+170 - (40*sin(((0+t*10)+b*5)*pi)),x-170+((48)*cos(((0+t*10)+b*5+1)*pi)),y+170-(48*sin(((0+t*10)+b*5+1)*pi)));
  line(x-170+(40*cos(((10+t*10)+b*5)*pi)),y+170 - (40*sin(((10+t*10)+b*5)*pi)),x-170+((48)*cos(((10+t*10)+b*5-1)*pi)),y+170-(48*sin(((10+t*10)+b*5-1)*pi)));
 // floodfill(x-170+(43*cos(((0+t*10)+b+5)*pi)),y+170-(43*sin(((0+t*10)+b+5)*pi)),15);
  t=t+2;


  }
//rod
  rectangle(x-150-50-43,y+170-2,x-150+20,y+170+2);


  //gear2
  circle(x-100,y+195,20);
  circle(x-100,y+195,12);
  circle(x-100,y+195,7);
  floodfill(x-100+14,y+195,15);
  setfillstyle(1,15);
  floodfill(x-100+2,y+195,15);
  int u=0;
  for(int j=0;j<8;j++){
  arc(x-100,y+195,(0+u*22)-b*6+5-3,(22+u*22)-b*6-5-3,28);
  line(x-100+(20*cos(((0+u*22)-b*6-3)*pi)),y+195-(20*sin(((0+u*22)-b*6-3)*pi)),x-100+((28)*cos(((0+u*22)-b*6+5-3)*pi)),y+195-(28*sin(((0+u*22)-b*6+5-3)*pi)));
  line(x-100+(20*cos(((22+u*22)-b*6-3)*pi)),y+195-(20*sin(((22+u*22)-b*6-3)*pi)),x-100+((28)*cos(((22+u*22)-b*6-5-3)*pi)),y+195-(28*sin(((22+u*22)-b*6-5-3)*pi)));

  u=u+2;
  }

 //gear3
  circle(x-15,y+195,20);
  circle(x-15,y+195,17);
  circle(x-15,y+195,5);
  setfillstyle(1,7);
  floodfill(x-15+19,y+195,15);
  floodfill(x-15,y+195,15);
  int v=0;
  for(int k=0;k<8;k++){
  arc(x-15,y+195,(0+v*22)-b*6+4+5,(22+v*22)-b*6-4+5,28);
  line(x-15+(20*cos(((0+v*22)-b*6+5)*pi)),y+195-(20*sin(((0+v*22)-b*6+5)*pi)),x-15+((28)*cos(((0+v*22)-b*6+4+5)*pi)),y+195-(28*sin(((0+v*22)-b*6+4+5)*pi)));
  line(x-15+(20*cos(((22+v*22)-b*6+5)*pi)),y+195-(20*sin(((22+v*22)-b*6+5)*pi)),x-15+((28)*cos(((22+v*22)-b*6-4+5)*pi)),y+195-(28*sin(((22+v*22)-b*6-4+5)*pi)));

 
  v=v+2;
  }
  setfillstyle(1,7);
  rectangle(x-17,y+193,x-13,y+250);
  floodfill(x-15,y+240,15);
  floodfill(x-15,y+202,15);
 arc(x1-142,y1+110,0,90,10);//handle
 arc(x1-142,y1+110,0,90,14);//handle
 rectangle(x1-132,y1+110,x1-128,y1+180);
 arc(x1-122,y1+177,-180,-85,6);
 arc(x1-122,y1+177,-180,-65,10);



  //gear 4
  circle(x+35,y+217,24);
  circle(x+35,y+217,10);
  circle(x+35,y+217,5);
  setfillstyle(9,7);
  floodfill(x+35+20,y+217,15);
  setfillstyle(1,7);
  floodfill(x+35+7,y+217,15);
  setfillstyle(1,15);
  floodfill(x+35+3,y+217,15);
  int w=0;
  for(int l=0;l<8;l++){
  arc(x+35,y+217,(0+w*22)+b*6+5-2,(22+w*22)+b*6-5-2,32);
  line(x+35+(24*cos(((0+w*22)+b*6-2)*pi)),y+217-(24*sin(((0+w*22)+b*6-2)*pi)),x+35+((32)*cos(((0+w*22)+b*6+5-2)*pi)),y+217-(32*sin(((0+w*22)+b*6+5-2)*pi)));
  line(x+35+(24*cos(((22*w+22)+b*6-2)*pi)),y+217-(24*sin(((22+w*22)+b*6-2)*pi)),x+35+((32)*cos(((22+w*22)+b*6-5-2)*pi)),y+217-(32*sin(((22+w*22)+b*6-5-2)*pi)));

  w=w+2;
  }

  //gear 5
  circle(x+60,y+167,20);
  circle(x+60,y+167,5);
  circle(x+60,y+167,17);
  setfillstyle(1,8);
  floodfill(x+60+19,y+167,15);
  int z=0;
  for(int m=0;m<8;m++){
  arc(x+60,y+167,(0+z*22)-b*6,(22+z*22)-b*6,28);
  line(x+60+(20*cos(((0+z*22)-b*6)*pi)),y+167-(20*sin(((0+z*22)-b*6)*pi)),x+60+((28)*cos(((0+z*22)-b*6)*pi)),y+167-(28*sin(((0+z*22)-b*6)*pi)));
  line(x+60+(20*cos(((22+z*22)-b*6)*pi)),y+167-(20*sin(((22+z*22)-b*6)*pi)),x+60+((28)*cos(((22+z*22)-b*6)*pi)),y+167-(28*sin(((22+z*22)-b*6)*pi)));

  z=z+2;
  }
   //ladder
  rectangle(180,205,240,210);  //==
  rectangle(180,215,240,220);  //==
  rectangle(205,210,210,215);  //.
  rectangle(195,230,198,320); // |
  rectangle(215,230,218,320); //  |
  rectangle(198,240,215,243); // =
  rectangle(198,253,215,258); // =
  rectangle(198,268,215,271); // =
  rectangle(198,281,215,284); // =
  rectangle(198,294,215,297); // =
  rectangle(198,307,215,310); // =




  //steering 1
  setfillstyle(1,7);
  rectangle(x+80,y+245,x+120,y+250);
  floodfill(x+90,y+247,15);
  rectangle(x+85,y+240,x+115,y+245);
  floodfill(x+90,y+243,15);
  rectangle(x+90,y+237,x+110,y+240);
  floodfill(x+99,y+238,15);
  rectangle(x+97,y+120,x+102,y+237);
  floodfill(x+99,y+130,15);
  circle(x+99,y+115,6);
  setfillstyle(1,4);
  floodfill(x+99,y+115,15);

 // gear 6
 circle(x+150,y+180,20);
 circle(x+150,y+180,5);
 circle(x+150,y+180,17);
 setfillstyle(1,8);
 floodfill(x+150+19,y+180,15);
  a=0;
 for(int n=0;n<8;n++){
 arc(x+150,y+180,(0+a*22)-b*6,(22+a*22)-b*6,28);
 line(x+150+(20*cos(((0+a*22)-b*6)*pi)),y+180-(20*sin(((0+a*22)-b*6)*pi)),x+150+((28)*cos(((0+a*22)-b*6)*pi)),y+180-(28*sin(((0+a*22)-b*6)*pi)));
 line(x+150+(20*cos(((22+a*22)-b*6)*pi)),y+180-(20*sin(((22+a*22)-b*6)*pi)),x+150+((28)*cos(((22+a*22)-b*6)*pi)),y+180-(28*sin(((22+a*22)-b*6)*pi)));
 
 a=a+2;
 }
 rectangle(x+148,y+180,x+152,y+250);
 setfillstyle(1,7);
 floodfill(x+149,y+240,15);

  //gear2 to gear 3
  line(x-100,y+195+12,x-27,y+195+12);
  line(x-100+10,y+195+8,x-30,y+195+8);
  line(x-100+10,y+195+8-16,x-30,y+195+8-16);
  line(x-100,y+195-12,x-27,y+195-12);
   setfillstyle(1,8);
   floodfill(x-100+20,y+195+10,15);
   floodfill(x-100+20,y+195-10,15);
//gear 5 to gear6
  line(x+60,y+187,x+150,y+200);
  line(x+60,y+147,x+150,y+160);
  line(x+69,y+184,x+138,y+194);
  line(x+75,y+153,x+138,y+162);



    po=b;
    ro=b;
    co=b;
    no=b;
    to=b;
    lo=b;
    a=b;
    go=b;
  if(ro%3==0){
     ro=0;
     po=0;
     co=0;
     no=0;
     to=0;
     lo=0;
     a=0;
     go=0;

  }else{
     ro=12;
     po=1;
     co=5;
     no=-2;
     to=24;
     lo=-11;
     a=-5;
     go=-200;


  }

    //trapezium
   line(x-170+40+9,y+170-18+po,x-170+40+9,y+170+18+po);
   line(x-170+40,y+170-12+po,x-170+40,y+170+12+po);
   line(x-170+40,y+170-12+po,x-170+40+9,y+170-18+po);
   line(x-170+40,y+170+12+po,x-170+40+9,y+170+18+po);
   //end of turbine
   line(x-170+40+9,y+170-3+po,x-170+40+9+5,y+170-3+po);
   line(x-170+40+9,y+170+3+po,x-170+40+9+5,y+170+3+po);
   line(x-170+40+9+5,y+170-3+po,x-170+40+9+5,y+170+3+po);




  //rotar
  arc(x-260,y+185+po,130,340,20); //down
  arc(x-260,y+156+po,20,230,20); //up
  line(x-242,y+148+po,x-242,y+195+po);//vertical connecting line
  rectangle(x-235,y+168+no,x-230,y+177+no);
  rectangle(x-235,y+163+co,x-230,y+168+co);
  line(x-273,y+170+po,x-241,y+170+po); //mid line

  //ROTATING PART

  arc(x-260,y+210+ro,75,105,70-ro);
  arc(x-260,y+215+ro,75,105,70-ro);
  arc(x-275,y+145+ro,130,220,5);
  arc(x-245,y+146+to,-20,90,4);
  setfillstyle(1,7);
  floodfill(x-260,y+140,15);
  setfillstyle(1,8);
  floodfill(x-260,y+167,15);
  floodfill(x-260,y+200,15);


   //SMOG

  circle(x-290+a,y+154+a,3.5);
  circle(x-285+go+a,y+170+a,4);
  circle(x-290+lo,y+185,4);


  //TORCH
  line(x+170+110-5,y+140-30,x+170+110+1,y+140-29);
  arc(x+170,y+140,-15,15,115);
  line(x+170+110-5,y+140+30,x+170+110+1,y+140+29);
  //light
  line(x+170+110+2,y+140-25,x+170+180,y+140-60);
  line(x+170+110+2,y+140+25,x+170+180,y+140+60);




  //torchlight
  setfillstyle(11,14);
  floodfill(635,280,15);
  //subbg
  setfillstyle(8,8);
  floodfill(500,200,15);
  floodfill(500,400,15);
  floodfill(180,250,15);
  floodfill(180,400,15);
  floodfill(320,420,15);
  floodfill(x+155,y+240,15);
  floodfill(x+145,y+240,15);


  floodfill(410,100,15);//dinotop
  floodfill(395,100,15);


//bg color
  setfillstyle(1,1); //blue water
  floodfill(5,475,15);
  floodfill(635,180,15);




   if(40+b*3>100 && 40+b*3<150 ||40+b*3>400 && 40+b*3<450)
   { 
   setcolor(YELLOW);
   line(40+b*3,50,40+b*3-30,80);
   line(40+b*3-30,80,40+b*3-20,120);
   line(40+b*3-20,120,40+b*3+10,170);
   //
sound(500);
delay(20);
 line(40+b*3+20,70,40+b*3+30,100);
   line(40+b*3+30,100,40+b*3-20,150);
   line(40+b*3-20,150,40+b*3+10,200);
//
   line(40+b*3+50,60,40+b*3+10,100);
   line(40+b*3+10,100,40+b*3+30,150);
   line(40+b*3+30,150,40+b*3+10,180);
   //
   line(40+b*3+90,60,40+b*3+120,120);
   line(40+b*3+120,120,40+b*3+40,160);
   line(40+b*3+40,160,40+b*3+50,180);
   line(40+b*3+50,180,40+b*3+20,210);

   }
nosound();


 //seat1
  setcolor(15);
  line(x1-175,y1+110,x1-175,y1+125);
  line(x1-174,y1+125,x1-150,y1+125);
  line(x1-178,y1+110,x1-178,y1+128);
  line(x1-177,y1+128,x1-150,y1+128);
  line(x1-178,y1+110,x1-175,y1+110);
  line(x1-150,y1+125,x1-150,y1+128);

//seat 2
  line(x1-104,y1+98,x1-75,y1+98);
  line(x1-100,y1+94,x1-75,y1+94);
  line(x1-100,y1+75,x1-100,y1+94);
  line(x1-104,y1+75,x1-104,y1+97);
  line(x1-100,y1+75,x1-104,y1+75);
  line(x1-75,y1+94,x1-75,y1+98);


  //seat 3
  line(x1-15,y1+110,x1+10,y1+110);
  line(x1-18,y1+113,x1+10,y1+113);
  line(x1-15,y1+90,x1-15,y1+110);
  line(x1-18,y1+90,x1-18,y1+113);
  line(x1-18,y1+90,x1-15,y1+90);
  line(x1+10,y1+110,x1+10,y1+113);



  b=b+2;

  delay(100);
  cleardevice();
  }

rectangle(60,50,580,200);
floodfill(61,51,15);
settextstyle(3,0,7);
outtextxy(100,100,"...THANK YOU...");
delay(2000);
  getch();
  closegraph();


}
