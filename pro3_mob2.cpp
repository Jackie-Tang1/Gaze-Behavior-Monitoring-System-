#include"systemc.h"
#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

SC_MODULE(repacket2){
  sc_in<int> re_packet2;
  sc_in<int> re_packet5;
  sc_in<int> re_packet8;
  sc_in<int> re_packet11;
  sc_in<int> re_packet14;
  sc_out<bool> control1;
  sc_out<bool> control2;
  sc_out<bool> control3;
  sc_out<bool> control4;
  sc_out<bool> control5;

  int i = 0;
  bool j = false;
  int i1 = 0;
  bool j1 = false;
  int i2 = 0;
  bool j2 = false;
  int i3 = 0;
  bool j3 = false;
  int i4 = 0;
  bool j4 = false;

  void prc_repacket1(){
    i += 1;
    if(i>7999){
      j = true;
      control1.write(j);
    }
    else{
      j = j;
      control1.write(j);
    }
  }

  void prc_repacket2(){
    i1 += 1;
    if(i1>7){
      j1 = true;
      control2.write(j1);
    }
    else{
      j1 = j1;
      control2.write(j1);
    }
  }

  void prc_repacket3(){
    i2 += 1;
    if(i2>7){
      j2 = true;
      control3.write(j2);
    }
    else{
      j2 = j2;
      control3.write(j2);
    }
  }
  void prc_repacket4(){
    i3 += 1;
    if(i3>7){
      j3 = true;
      control4.write(j3);
    }
    else{
      j3 = j3;
      control4.write(j3);
    }
  }

  void prc_repacket5(){
    i4 += 1;
    if(i4>7){
      j4 = true;
      control5.write(j4);
    }
    else{
      j4 = j4;
      control5.write(j4);
    }
  }

  SC_CTOR(repacket2){
    SC_METHOD(prc_repacket1);
    sensitive << re_packet2;
    SC_METHOD(prc_repacket2);
    sensitive << re_packet5;
    SC_METHOD(prc_repacket3);
    sensitive << re_packet8;
    SC_METHOD(prc_repacket4);
    sensitive << re_packet11;
    SC_METHOD(prc_repacket5);
    sensitive << re_packet14;
  }

};
                                                                                                                                                         

SC_MODULE(timer2){
  sc_out<int> t;
  sc_in<bool> clock;

  int t1 = 0;

  void prc_timer(){
    t.write(t1);
    t1 = t1 + 1;
  }

  SC_CTOR(timer2){
    SC_METHOD(prc_timer);
    sensitive << clock.pos();
  }
};

SC_MODULE(sensor2){
  sc_in<bool> clock;
  sc_out<int> x;
  sc_out<int> y;
  sc_in<int> time2;

  int x1;
  int y1;

  void prc_sensor(){

    ifstream infile;
    infile.open("/home/home2/g003/test/data.txt");

    if(!infile.is_open())
        cout << "open file failure" <<endl;

    while(!infile.eof())
    {
    if(time2.read()>=20000){
       infile >> x1 >> y1;

       x.write(x1);
       y.write(y1);
}
    else{
     x.write(0);
       y.write(0);
 }
       wait();
    }
  }

  SC_CTOR(sensor2){
    SC_THREAD(prc_sensor);
    sensitive << clock.pos();
  }
};

SC_MODULE(conver2){
  sc_in<int> time_in;
  sc_in<int> x_in;
  sc_in<int> y_in;
  sc_in<bool> clock;
  sc_in<bool> ctr1;
  sc_in<bool> ctr2;
  sc_in<bool> ctr3;
  sc_in<bool> ctr4;
  sc_in<bool> ctr5;
  sc_out<int> flag;

  int time;
  int x,y;
  int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,x9,y9,x10,y10,x11,y11,x12,y12,x13,y13,x14,y14;

  void prc_conver(){
    time = time_in.read();
    x = x_in.read();
    y = y_in.read();
    if(time >= 15000 & time < 17500 & ctr1.read()==true){
      x1 = 50;
      y1 = 20;
      x2 = 400;
      y2 = 320;
      x3 = 50;
      y3 = 370;
      x4 = 450;
      y4 = 1000;
      x5 = 470;
      y5 = 20;
      x6 = 600;
      y6 = 900;
      x7 = 670;
      y7 = 40;
      x8 = 950;
      y8 = 550;
      x9 = 680;
      y9 = 700;
      x10 = 1000;
      y10 = 1000;

      if(x>=x1 & x<=x2 & y>=y1 & y<=y2){
        flag.write(1);
      }
      else if(x>=x3 & x<=x4 & y>=y3 & y<=y4){
        flag.write(2);
      }
      else if(x>=x5 & x<=x6 & y>=y5 & y<=y6){
        flag.write(3);
      }
      else if(x>=x7 & x<=x8 & y>=y7 & y<=y8){
        flag.write(4);
      }
      else if(x>=x9 & x<=x10 & y>=y9 & y<=y10){
        flag.write(5);
      }
      else{
        flag.write(0);
      }
    }
    else if(time >= 17500 & time < 20000 & ctr2.read()==true){
      x1 = 10;
      y1 = 10;
      x2 = 150;
      y2 = 700;
      x3 = 300;
      y3 = 10;
      x4 = 980;
      y4 = 250;
      x5 = 300;
      y5 = 270;
      x6 = 980;
      y6 = 700;
      x7 = 10;
      y7 = 740;
      x8 = 950;
      y8 = 1000;

      if(x>=x1 & x<=x2 & y>=y1 & y<=y2){
        flag.write(1);
      }
      else if(x>=x3 & x<=x4 & y>=y3 & y<=y4){
        flag.write(2);
      }
      else if(x>=x5 & x<=x6 & y>=y5 & y<=y6){
        flag.write(3);
      }
      else if(x>=x7 & x<=x8 & y>=y7 & y<=y8){
        flag.write(4);
      }
      else{
        flag.write(0);
      }

    }
    else if(time >= 20000 & time < 22500 & ctr3.read()==true){
      x1 = 10;
      y1 = 10;
      x2 = 260;
      y2 = 900;
      x3 = 270;
      y3 = 10;
      x4 = 520;
      y4 = 1000;
      x5 = 570;
      y5 = 20;
      x6 = 700;
      y6 = 950;
      x7 = 730;
      y7 = 10;
      x8 = 950;
      y8 = 950;

      if(x>=x1 & x<=x2 & y>=y1 & y<=y2){
        flag.write(1);
      }
      else if(x>=x3 & x<=x4 & y>=y3 & y<=y4){
        flag.write(2);
      }
      else if(x>=x5 & x<=x6 & y>=y5 & y<=y6){
        flag.write(3);
      }
      else if(x>=x7 & x<=x8 & y>=y7 & y<=y8){
        flag.write(4);
      }
      else{
        flag.write(0);
      }

    }
    else if(time >= 22500 & time < 25000 & ctr4.read()==true){
      x1 = 10;
      y1 = 10;
      x2 = 160;
      y2 = 1000;
      x3 = 170;
      y3 = 10;
      x4 = 220;
      y4 = 1000;
      x5 = 230;
      y5 = 10;
      x6 = 380;
      y6 = 1000;
      x7 = 390;
      y7 = 10;
      x8 = 540;
      y8 = 1000;
      x9 = 550;
      y9 = 10;
      x10 = 700;
      y10 = 1000;
      x11 = 710;
      y11 = 10;
      x12 = 860;
      y12 = 1000;
      x13 = 870;
      y13 = 10;
      x14 = 1010;
      y14 = 1000;

      if(x>=x1 & x<=x2 & y>=y1 & y<=y2){
        flag.write(1);
      }
      else if(x>=x3 & x<=x4 & y>=y3 & y<=y4){
        flag.write(2);
      }
      else if(x>=x5 & x<=x6 & y>=y5 & y<=y6){
        flag.write(3);
      }
      else if(x>=x7 & x<=x8 & y>=y7 & y<=y8){
        flag.write(4);
      }
      else if(x>=x9 & x<=x10 & y>=y9 & y<=y10){
        flag.write(5);
      }
      else if(x>=x11 & x<=x12 & y>=y11 & y<=y12){
        flag.write(6);
      }
      else if(x>=x13 & x<=x14 & y>=y13 & y<=y14){
        flag.write(7);
      }
      else{
        flag.write(0);
      }

    }
    else if(time > 25000  & ctr5.read()==true){
      x1 = 10;
      y1 = 10;
      x2 = 1000;
      y2 = 160;
      x3 = 10;
      y3 = 170;
      x4 = 1000;
      y4 = 220;
      x5 = 10;
      y5 = 230;
      x6 = 1000;
      y6 = 380;
      x7 = 100;
      y7 = 390;
      x8 = 1000;
      y8 = 540;
      x9 = 10;
      y9 = 550;
      x10 = 1000;
      y10 = 700;
      x11 = 10;
      y11 = 710;
      x12 = 1000;
      y12 = 860;
      x13 = 10;
      y13 = 870;
      x14 = 1000;
      y14 = 1010;

      if(x>=x1 & x<=x2 & y>=y1 & y<=y2){
        flag.write(1);
      }
      else if(x>=x3 & x<=x4 & y>=y3 & y<=y4){
        flag.write(2);
      }
      else if(x>=x5 & x<=x6 & y>=y5 & y<=y6){
        flag.write(3);
      }
      else if(x>=x7 & x<=x8 & y>=y7 & y<=y8){
        flag.write(4);
      }
      else if(x>=x9 & x<=x10 & y>=y9 & y<=y10){
        flag.write(5);
      }
      else if(x>=x11 & x<=x12 & y>=y11 & y<=y12){
        flag.write(6);
      }
      else if(x>=x13 & x<=x14 & y>=y13 & y<=y14){
        flag.write(7);
      }
      else{
        flag.write(0);
      }

    }
   else{
       flag.write(0);
    }
  }

  SC_CTOR(conver2){
    SC_METHOD(prc_conver);
    sensitive << clock.pos();
  }
};

SC_MODULE(compress2){
  sc_in<int> flag_in;
  sc_out<int> tuple;

  int flag1;
  int a = 1;

  void prc_compress(){
    flag1 = flag_in.read();
    if(flag1!=0){
      tuple.write(a);
      a += 1;
    }
    else{
      tuple.write(0);
    }
  }

  SC_CTOR(compress2){
    SC_METHOD(prc_compress);
    sensitive << flag_in;
  }
};

SC_MODULE(counter2){
  sc_in<int> tuple_in;
  sc_out<int> packet;
  sc_in<bool> clock;

  int i = 0;
  int k = 0;
  void prc_counter(){
    i = tuple_in.read();

    if (i > 20 & k==0){
      packet.write(1);
      k = k + 1;
    }
    else if (i > 40 & k==1){
      packet.write(2);
      k = k + 1;
    }
    else if (i > 60 & k==2){
      packet.write(3);
      k = k + 1;
    }
    else if (i > 80 & k==3){
      packet.write(4);
      k = k + 1;
    }
    else{
      packet.write(0);
    }
//cout <<sc_time_stamp()<<"mobile2"<<tuple_in<<"      "<<packet<<endl;
  }

  SC_CTOR(counter2){
    SC_METHOD(prc_counter);
    sensitive <<clock.pos();
  }
};
