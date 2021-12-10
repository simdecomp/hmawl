#include "game/unknown.h"
void func_8002F340() { 
  func_801a820c(&lbl_803490fc);
  lbl_803490fc = 0;
  func_801a820c(&lbl_803490f8);
  lbl_803490f8 = 0;
  func_801a820c(&lbl_803490f4);
  lbl_803490f4 = 0;
  func_801a820c(&lbl_803490f0);
  lbl_803490f0 = 0;
}

void func_8002F2DC(u32* param) {
    func_8000FEE8(lbl_80349218);
    func_801A81D0(&lbl_803490f0,"char_com_eye.tam");
    func_801A81D0(&lbl_803490f4,"char_com_mouth.tam");
    func_801A81D0(&lbl_803490f8,"chanm1_com_eye.tam");
    func_801A81D0(&lbl_803490fc,"chanm1_com_mouth.tam");
}
void func_8002F39C(struct unknown_8002F39C *param_1,u32 param_2)
{
  param_1->unk10 = param_2;
  param_1->unk0 = 19;
  param_1->unk4 = 15;
  param_1->unkC = 0;
  param_1->unk8 = 0xffffffff;
  param_1->unk34 = 0;
  func_8002F3E8(param_1,0);
}
