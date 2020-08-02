#include"systemc.h"
#include"pro3_net.cpp"

 SC_MODULE(server){
  sc_out<int> tr_pack1;
  sc_out<int> tr_pack2;
  sc_out<int> tr_pack3;
  sc_out<int> tr_pack4;
  sc_out<int> tr_pack5;
  sc_out<int> tr_pack6;
  sc_out<int> tr_pack7;
  sc_out<int> tr_pack8;
  sc_out<int> tr_pack9;
  sc_out<int> tr_pack10;
  sc_out<int> tr_pack11;
  sc_out<int> tr_pack12;
  sc_out<int> tr_pack13;
  sc_out<int> tr_pack14;
  sc_out<int> tr_pack15;
  sc_in<bool> clk5;
 // sc_in<bool> clk4;
  sc_signal<int> time1;
  sc_in<int> packet11;
  sc_in<int> packet21;
  sc_in<int> packet31;

  timer4* timer41;
  network1* net11;
  network* n1;

  SC_CTOR(server){
   timer41 = new timer4("timer4");
   net11 = new network1("network1");
   n1 = new network("network");

   timer41->clock(clk5);
   timer41->t(time1);

   n1->packet1(packet11);
   n1->packet2(packet21);
   n1->packet3(packet31);
   n1->clock(clk5);

   net11->clock(clk5);
   net11->time(time1);
   net11->tr_packet1(tr_pack1);
   net11->tr_packet2(tr_pack2);
   net11->tr_packet3(tr_pack3);
   net11->tr_packet4(tr_pack4);
   net11->tr_packet5(tr_pack5);
   net11->tr_packet6(tr_pack6);
   net11->tr_packet7(tr_pack7);
   net11->tr_packet8(tr_pack8);
   net11->tr_packet9(tr_pack9);
   net11->tr_packet10(tr_pack10);
   net11->tr_packet11(tr_pack11);
   net11->tr_packet12(tr_pack12);
   net11->tr_packet13(tr_pack13);
   net11->tr_packet14(tr_pack14);
   net11->tr_packet15(tr_pack15);

   }
};
