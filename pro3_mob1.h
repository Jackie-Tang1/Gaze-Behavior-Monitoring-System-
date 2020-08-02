#include"systemc.h"
#include"pro3_mob1.cpp"

SC_MODULE(mobile1){
    sc_in<bool> clk1;
    sc_in<int> packet_in1;
    sc_in<int> packet_in4;
    sc_in<int> packet_in7;
    sc_in<int> packet_in10;
    sc_in<int> packet_in13;

    sc_signal<bool> ctr11;
    sc_signal<bool> ctr21;
    sc_signal<bool> ctr31;
    sc_signal<bool> ctr41;
    sc_signal<bool> ctr51;
    sc_signal<int> x1;
    sc_signal<int> y1;
    sc_signal<int> flag1;
    sc_signal<int> tuple1;
    sc_out<int> packet1;
    sc_signal<int> time1;

    timer1* timer11;
    repacket1* re11;
    sensor1* sensor11;
    conver1* conver11;
    compress1* compress11;
    counter1* counter11;

    SC_CTOR(mobile1){
      timer11 = new timer1("timer1");
      sensor11 = new sensor1("sensor1");
      conver11 = new conver1("conver1");
      compress11 = new compress1("compress1");
      counter11 = new counter1("counter1");
      re11 = new repacket1("repacket1");

      timer11->t(time1);
      timer11->clock(clk1);

      re11->re_packet1(packet_in1);
      re11->re_packet4(packet_in4);
      re11->re_packet7(packet_in7);
      re11->re_packet10(packet_in10);
      re11->re_packet13(packet_in13);
      re11->control1(ctr11);
      re11->control2(ctr21);
      re11->control3(ctr31);
      re11->control4(ctr41);
      re11->control5(ctr51);

      sensor11->clock(clk1);
      sensor11->x(x1);
      sensor11->y(y1);
      sensor11->time1_1(time1);

      conver11->time_in(time1);
      conver11->x_in(x1);
      conver11->y_in(y1);
      conver11->clock(clk1);
      conver11->flag(flag1);
      conver11->ctr1(ctr11);
      conver11->ctr2(ctr21);
      conver11->ctr3(ctr31);
      conver11->ctr4(ctr41);
      conver11->ctr5(ctr51);

      compress11->flag_in(flag1);
      compress11->tuple(tuple1);

      counter11->tuple_in(tuple1);
      counter11->packet(packet1);
      counter11->clock(clk1);
    }

};

