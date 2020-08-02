#include"systemc.h"
#include"pro3_mob3.cpp"

SC_MODULE(mobile3){
    sc_in<bool> clk3;
    sc_in<int> packet_in3;
    sc_in<int> packet_in6;
    sc_in<int> packet_in9;
    sc_in<int> packet_in12;
    sc_in<int> packet_in15;

    sc_signal<bool> ctr11;
    sc_signal<bool> ctr21;
    sc_signal<bool> ctr31;
    sc_signal<bool> ctr41;
    sc_signal<bool> ctr51;
    sc_signal<int> x1;
    sc_signal<int> y1;
    sc_signal<int> flag1;
    sc_signal<int> tuple1;
    sc_out<int> packet3;
    sc_signal<int> time1;

    timer3* timer31;
    sensor3* sensor31;
    conver3* conver31;
    compress3* compress31;
    counter3* counter31;
    repacket3* re31;

    SC_CTOR(mobile3){
      timer31 = new timer3("timer3");
      sensor31 = new sensor3("sensor3");
      conver31 = new conver3("conver3");
      compress31 = new compress3("compress3");
      counter31 = new counter3("counter3");
      re31 = new repacket3("repacket3");

      timer31->t(time1);
      timer31->clock(clk3);

      sensor31->clock(clk3);
      sensor31->x(x1);
      sensor31->y(y1);
      sensor31->time3(time1);

      re31->re_packet3(packet_in3);
      re31->re_packet6(packet_in6);
      re31->re_packet9(packet_in9);
      re31->re_packet12(packet_in12);
      re31->re_packet15(packet_in15);
      re31->control1(ctr11);
      re31->control2(ctr21);
      re31->control3(ctr31);
      re31->control4(ctr41);
      re31->control5(ctr51);

      conver31->time_in(time1);
      conver31->x_in(x1);
      conver31->y_in(y1);
      conver31->clock(clk3);
      conver31->flag(flag1);
      conver31->ctr1(ctr11);
      conver31->ctr2(ctr21);
      conver31->ctr3(ctr31);
      conver31->ctr4(ctr41);
      conver31->ctr5(ctr51);

      compress31->flag_in(flag1);
      compress31->tuple(tuple1);

      counter31->tuple_in(tuple1);
      counter31->packet(packet3);
      counter31->clock(clk3);

    }

};

