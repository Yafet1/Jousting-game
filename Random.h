#ifndef _RANDOM_H_
#define _RANDOM_H_


class Random {
public:
  Random(int low, int high); //constructor
  int get(void) const;
private:
  int low;
  int diff;
  static void seed(void);
  static int seedcount;
};
#endif
