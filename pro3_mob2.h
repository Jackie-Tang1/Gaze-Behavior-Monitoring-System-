#include"systemc.h"
#include"pro3_mob2.cpp"

SC_MODULE(mobile2){
    sc_in<bool> clk2;

    sc_in<int> packet_in2;
    sc_in<int> packet_in5;
    sc_in<int> packet_in8;
    sc_in<int> packet_in11;
    sc_in<int> packet_in14;
    
    sc_signal<bool> ctr11;
    sc_signal<bool> ctr21;
    sc_signal<bool> ctr31;
    sc_signal<bool> ctr41;
    sc_signal<bool> ctr51;
    sc_signal<int> x1;
    sc_signal<int> y1;
    sc_signal<int> flag1;
    sc_signal<int> tuple1;
    sc_out<int> packet2;
    sc_signal<int> time1;

    timer2* timer21;
    repacket2* re21;
    sensor2* sensor21;
    conver2* conver21;
    compress2* compress21;
    counter2* counter21;

    SC_CTOR(mobile2){
      timer21 = new timer2("timer2");
      sensor21 = new sensor2("sensor2");
      conver21 = new conver2("conver2");
      compress21 = new compress2("compress2");
      counter21 = new counter2("counter2");
      re21 = new repacket2("repacket2");

      timer21->t(time1);
      timer21->clock(clk2);

      re21->re_packet2(packet_in2);
      re21->re_packet5(packet_in5);
      re21->re_packet8(packet_in8);
      re21->re_packet11(packet_in11);
      re21->re_packet14(packet_in14);
      re21->control1(ctr11);
      re21->control2(ctr21);
      re21->control3(ctr31);
      re21->control4(ctr41);
      re21->control5(ctr51);

      sensor21->clock(clk2);
      sensor21->x(x1);
      sensor21->y(y1);
      sensor21->time2(time1);


      conver21->time_in(time1);
      conver21->x_in(x1);
      conver21->y_in(y1);
      conver21->clock(clk2);
      conver21->flag(flag1);
      conver21->ctr1(ctr11);
      conver21->ctr2(ctr21);
      conver21->ctr3(ctr31);
      conver21->ctr4(ctr41);
      conver21->ctr5(ctr51);

      compress21->flag_in(flag1);
      compress21->tuple(tuple1);

      counter21->tuple_in(tuple1);
      counter21->packet(packet2);
      counter21->clock(clk2);
    }

};

