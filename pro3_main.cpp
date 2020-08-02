#include"systemc.h"
#include"pro3_net.h"
#include"pro3_mob1.h"
#include"pro3_mob2.h"
#include"pro3_mob3.h"
int sc_main(int argc, char*argv[]){
    sc_clock clk ("my_clock",10,SC_MS);
    //sc_clock clk2 ("my_clock1",10,SC_US);
    sc_signal<int> p1;
    sc_signal<int> p2;
    sc_signal<int> p3;
    sc_signal<int> r1;
    sc_signal<int> r2;
    sc_signal<int> r3;
    sc_signal<int> r4;
    sc_signal<int> r5;
    sc_signal<int> r6;
    sc_signal<int> r7;
    sc_signal<int> r8;
    sc_signal<int> r9;
    sc_signal<int> r10;
    sc_signal<int> r11;
    sc_signal<int> r12;
    sc_signal<int> r13;
    sc_signal<int> r14;
    sc_signal<int> r15;

    mobile1 mob1("mobile1");
    mobile2 mob2("mobile2");
    mobile3 mob3("mobile3");
    server ser1("server1");

    mob1.clk1(clk);
    mob1.packet1(p1);
    mob1.packet_in1(r1);
    mob1.packet_in4(r4);
    mob1.packet_in7(r7);
    mob1.packet_in10(r10);
    mob1.packet_in13(r13);

    mob2.clk2(clk);
    mob2.packet2(p2);
    mob2.packet_in2(r2);
    mob2.packet_in5(r5);
    mob2.packet_in8(r8);
    mob2.packet_in11(r11);
    mob2.packet_in14(r14);
 
    mob3.clk3(clk);
    mob3.packet3(p3);
    mob3.packet_in3(r3);
    mob3.packet_in6(r6);
    mob3.packet_in9(r9);
    mob3.packet_in12(r12);
    mob3.packet_in15(r15);

    ser1.packet11(p1);
    ser1.packet21(p2);
    ser1.packet31(p3);
    ser1.clk5(clk);
    ser1.tr_pack1(r1);
    ser1.tr_pack2(r2);
    ser1.tr_pack3(r3);
    ser1.tr_pack4(r4);
    ser1.tr_pack5(r5);
    ser1.tr_pack6(r6);
    ser1.tr_pack7(r7);
    ser1.tr_pack8(r8);
    ser1.tr_pack9(r9);
    ser1.tr_pack10(r10);
    ser1.tr_pack11(r11);
    ser1.tr_pack12(r12);
    ser1.tr_pack13(r13);
    ser1.tr_pack14(r14);
    ser1.tr_pack15(r15);

   sc_start(270000,SC_MS);
   return 0;
}

