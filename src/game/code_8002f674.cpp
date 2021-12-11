#include "game/unknown.h"
void func_8002F674(struct unknown_8002F674* s,u8 c)
{
  if ((s->int0x34 ^ c) != 0 && s->int0x4 >= 58) {
    func_8017E00C(0,&s->int0x24);
  }
  s->int0x34 = c;
}
