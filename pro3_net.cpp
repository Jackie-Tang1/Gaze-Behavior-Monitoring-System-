#include "systemc.h"

#include <stdlib.h>

SC_MODULE(timer4){
   sc_out<int> t;
   sc_in<bool> clock;

   int t1 = 0;

   void prc_timer(){
     t.write(t1);
     t1 = t1 + 1;
   }

   SC_CTOR(timer4){
     SC_METHOD(prc_timer);
     sensitive << clock.pos();
   }
 };

SC_MODULE(network1){
   sc_in<bool> clock;
   sc_in<int> time;
   sc_out<int> tr_packet1;
   sc_out<int> tr_packet2;
   sc_out<int> tr_packet3;
   sc_out<int> tr_packet4;
   sc_out<int> tr_packet5;
   sc_out<int> tr_packet6;
   sc_out<int> tr_packet7;
   sc_out<int> tr_packet8;
   sc_out<int> tr_packet9;
   sc_out<int> tr_packet10;
   sc_out<int> tr_packet11;
   sc_out<int> tr_packet12;
   sc_out<int> tr_packet13;
   sc_out<int> tr_packet14;
   sc_out<int> tr_packet15;

   bool free=true;
   int i = 1;
   int j = 1;
   int k = 1;
   int i1 = 1;
   int j1 = 1;
   int k1 = 1;
   int i2 = 1;
   int j2 = 1;
   int k2 = 1;
   int i3 = 1;
   int j3 = 1;
   int k3 = 1;
   int i4 = 1;
   int j4 = 1;
   int k4 = 1;

  void prc_trpacket1(){
    while(1){
    if(free==true){
    if (time.read()> 14500){
      if(i < 9){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile1_i1 packet " << i << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet1.write(i);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile1_i1 packet" << i << " is transmist over"<<endl;
        free = true;
        i +=1;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
       else if(i >=9 & i < 17){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile2_i1 packet " << j << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet3.write(k);
         cout <<sc_time_stamp()<<endl;
        cout << "mobile2_i1 packet" << j << " is transmist over"<<endl;
        free = true;
        i +=1;
        j +=1;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else if(i >=17 & i < 25){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile3_i1 packet " << k << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet3.write(k);
         cout <<sc_time_stamp()<<endl;
        cout << "mobile3_i1 packet" << k << " is transmist over"<<endl;
        free = true;
        i +=1;
        k +=1;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
    else{
      wait();
     }
}
    }
   else{
     wait(30,SC_MS);
   }
  wait();
}
}

void prc_trpacket2(){
  while(1){
  if(free==true){
  if (time.read()> 17000){
    if(i1 < 9){
      cout <<sc_time_stamp()<<endl;
      cout << "mobile1_i2 packet " << i1 << " is transmistting"<<endl;
      free = false;
      wait(100,SC_MS);
      tr_packet4.write(i1);
      cout <<sc_time_stamp()<<endl;
      cout << "mobile1_i2 packet" << i1 << " is transmist over"<<endl;
      free = true;
      i1 +=1;
     // cout <<sc_time_stamp()<<endl;
      cout << "waiting time Delta pending"<<endl;
      wait(50,SC_MS);
    }
    else if(i1 >=9 & i1 < 17){
      cout <<sc_time_stamp()<<endl;
      cout << "mobile2_i2 packet " << j1 << " is transmistting"<<endl;
      free = false;
      wait(100,SC_MS);
      tr_packet5.write(j1);
      cout <<sc_time_stamp()<<endl;
      cout << "mobile2_i2 packet" << j1 << " is transmist over"<<endl;
      free = true;
      i1 +=1;
      j1 +=1;
      //cout <<sc_time_stamp()<<endl;
      cout << "waiting time Delta pending"<<endl;
      wait(50,SC_MS);
    }
    else if(i1 >=17 & i1 < 25){
      cout <<sc_time_stamp()<<endl;
      cout << "mobile3_i2 packet " << k1 << " is transmistting"<<endl;
      free = false;
      wait(100,SC_MS);
      tr_packet6.write(k1);
      cout <<sc_time_stamp()<<endl;
      cout << "mobile3_i2 packet" << k1 << " is transmist over"<<endl;
      free = true;
      i1 +=1;
      k1 +=1;
     // cout <<sc_time_stamp()<<endl;
      cout << "waiting time Delta pending"<<endl;
      wait(50,SC_MS);
    }
   else{
     wait();
 }
}
  }
 else{
   wait(30,SC_MS);
}
  wait();
}
}

void prc_trpacket3(){
  while(1){
  if(free==true){
  if (time.read()> 19500){
    if(i2 < 9){
      cout <<sc_time_stamp()<<endl;
      cout << "mobile1_i3 packet " << i2 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet7.write(i2);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile1_i3 packet" << i2 << " is transmist over"<<endl;
        free = true;
        i2 +=1;
        //cout <<sc_time_stamp()<<endl;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else if(i2 >=9 & i2 < 17){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile2_i3 packet " << j2 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet8.write(j2);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile2_i3 packet" << j2 << " is transmist over"<<endl;
        free = true;
        i2 +=1;
        j2 +=1;
       // cout <<sc_time_stamp()<<endl;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else if(i2 >=17 & i2 < 25){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile3_i3 packet " << k2 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet9.write(k2);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile3_i3 packet" << k2 << " is transmist over"<<endl;
        free = true;
        i2 +=1;
        k2 +=1;
        //cout <<sc_time_stamp()<<endl;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else{
        wait();
      }
}
    }
   else{
     wait(50,SC_MS);
}
    wait();
  }
 }

void prc_trpacket4(){
    while(1){
    if(free==true){
    if (time.read()>22000){
      if(i3 < 9){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile1_i4 packet " << i3 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet10.write(i3);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile1_i4 packet" << i3 << " is transmist over"<<endl;
        free = true;
        i3 +=1;
        //cout <<sc_time_stamp()<<endl;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else if(i3 >=9 & i3 < 17){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile2_i4 packet " << j3 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet11.write(j3);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile2_i4 packet" << j3 << " is transmist over"<<endl;
        free = true;
        i3 +=1;
        j3 +=1;
       // cout <<sc_time_stamp()<<endl;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else if(i3 >=17 & i3 < 25){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile3_i4 packet " << k3 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet12.write(k3);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile3_i4 packet" << k << " is transmist over"<<endl;
        free = true;
        i3 +=1;
        k3 +=1;
        cout <<sc_time_stamp()<<endl;
       // cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else{
        wait();
      }
}
    }
   else{
     wait(30,SC_MS);
}
    wait();
  }
 }

void prc_trpacket5(){
    while(1){
    if(free==true){
    if (time.read()> 24500){
      if(i4 < 9){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile1_i5 packet " << i4 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet13.write(i4);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile1_i5 packet" << i4 << " is transmist over"<<endl;
        free = true;
        i4 +=1;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else if(i4 >=9 & i4 < 17){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile2_i5 packet " << j4 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet14.write(j4);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile2_i5 packet" << j4 << " is transmist over"<<endl;
        free = true;
        i4 +=1;
        j4 +=1;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else if(i4 >=17 & i4 < 25){
        cout <<sc_time_stamp()<<endl;
        cout << "mobile3_i5 packet " << k4 << " is transmistting"<<endl;
        free = false;
        wait(100,SC_MS);
        tr_packet15.write(k4);
        cout <<sc_time_stamp()<<endl;
        cout << "mobile3_i5 packet" << k4 << " is transmist over"<<endl;
        free = true;
        i4 +=1;
        k4 +=1;
        cout << "waiting time Delta pending"<<endl;
        wait(50,SC_MS);
      }
      else{
        wait();
      }
}
    }
   else{
     wait(30,SC_MS);
  }
    wait();
  }
 }

 SC_CTOR(network1){
   SC_THREAD(prc_trpacket1);
   sensitive<<clock.pos();
   SC_THREAD(prc_trpacket2);
   sensitive<<clock.pos();
   SC_THREAD(prc_trpacket3);
   sensitive<<clock.pos();
   SC_THREAD(prc_trpacket4);
   sensitive<<clock.pos();
   SC_THREAD(prc_trpacket5);
   sensitive<<clock.pos();
  }
};

SC_MODULE(network){
  sc_in<int> packet1;
  sc_in<int> packet2;
  sc_in<int> packet3;
  sc_in<bool> clock;


  sc_event request1;
  sc_event ctr1;
  sc_event begin1;
  sc_event end1;
  sc_event request2;
  sc_event request3;


  sc_event ctr2;
  sc_event ctr3;


  sc_event begin2;
  sc_event begin3;


  sc_event end2;
  sc_event end3;

  bool free=true;

  void prc_mobile1(){
    while(1){
     if(packet1.read()>0){
      wait();
      if(free==true){
      request1.notify();
      cout <<"    "<<endl;
      cout << sc_time_stamp() << "Mobile 1 ask for transmission"<<endl;
      wait(ctr1);
      cout << sc_time_stamp() << "Mobile 1 It's Ok to transimit"<<endl;
      begin1.notify();
      cout << sc_time_stamp() << "Mobile 1 begin sending"<<endl;
      wait(8,SC_MS);
      end1.notify();
      cout << sc_time_stamp() << "Mobile 1 end sending"<<endl;
      wait();
 }
     else{
     wait(30,SC_MS);
  }
    }
  else{
    wait();
    }
    wait();
}
  }

  void prc_mobile2(){

    while(1){
     if(packet2.read()>0){
      wait();
      wait(5,SC_MS);
     if(free==true){
      request2.notify();
      cout <<"    "<<endl;
      cout << sc_time_stamp() << "Mobile 2 ask for transmission"<<endl;
      wait(ctr2);
      cout << sc_time_stamp() << "Mobile 2 It's Ok to transimit"<<endl;
      begin2.notify();
      cout << sc_time_stamp() << "Mobile 2 begin sending"<<endl;
      wait(8,SC_MS);
      end2.notify();
      cout << sc_time_stamp() << "Mobile 2 end sending"<<endl;
      wait();
   }
    else{
     wait(30,SC_MS);
     request2.notify();
      cout <<"    "<<endl;
      cout << sc_time_stamp() << "Mobile 2 ask for transmission"<<endl;
      wait(ctr2);
      cout << sc_time_stamp() << "Mobile 2 It's Ok to transimit"<<endl;
      begin2.notify();
      cout << sc_time_stamp() << "Mobile 2 begin sending"<<endl;
      wait(8,SC_MS);
      end2.notify();
      cout << sc_time_stamp() << "Mobile 2 end sending"<<endl;
      wait();
  }
    }
   else{
    wait();
   }
    wait();
}
  }

  void prc_mobile3(){

    while(1){
     if(packet3.read()>0)
     {
      wait();
      wait();
      wait();
     if(free==true){
      request3.notify();
      cout <<"    "<<endl;
      cout << sc_time_stamp() << "Mobile 3 ask for transmission"<<endl;
      wait(ctr3);
      cout << sc_time_stamp() << "Mobile 3 It's Ok to transimit"<<endl;
      begin3.notify();
      cout << sc_time_stamp() << "Mobile 3 begin sending"<<endl;
      wait(8,SC_MS);
      end3.notify();
      cout << sc_time_stamp() << "Mobile 3 end sending"<<endl;
      wait();
    }
    else{
     wait(30,SC_MS);
   }
}
   else{
    wait();
}
    wait();
}
  }

  void prc_server1(){
    while(1){
      wait(request1);
      ctr1.notify();
      wait(begin1);
      free = false;
      cout << sc_time_stamp() << "Mobile 1 sending received"<<endl;
      wait(end1);
      free = true;
      cout << sc_time_stamp() << "Mobile 1 fully transmit the packet"<<endl;
    }
  }

  void prc_server2(){
    while(1){
      wait(request2);
      ctr2.notify();
      wait(begin2);
      free = false;
      cout << sc_time_stamp() << "Mobile 2 sending received"<<endl;
      wait(end2);
      free = true;
      cout << sc_time_stamp() << "Mobile 2 fully transmit the packet"<<endl;
    }
  }

  void prc_server3(){
    while(1){
      wait(request3);
      ctr3.notify();
      wait(begin3);
      free = false;
      cout << sc_time_stamp() << "Mobile 3 sending received"<<endl;
      wait(end3);
      free = true;
      cout << sc_time_stamp() << "Mobile 3 fully transmit the packet"<<endl;
    }
  }

  SC_CTOR(network){
    SC_THREAD(prc_mobile1);
    sensitive<<clock.pos()<<packet1;
    SC_THREAD(prc_mobile2);
    sensitive<<clock.pos()<<packet2;
    SC_THREAD(prc_mobile3);
    sensitive<<clock.pos()<<packet3;
    SC_THREAD(prc_server1);
    sensitive<<clock.pos();
    SC_THREAD(prc_server2);
    sensitive<<clock.pos();
    SC_THREAD(prc_server3);
    sensitive<<clock.pos();
  }
};
