#ifndef COUNTER_H
#define COUNTER_H

class Counter{
   int value;
   void incr();
   void decr();
   void display_val();
  public:
   Counter();
   Counter(int num);
   void set_counter();
   bool work();
};

#endif // COUNTER_H
