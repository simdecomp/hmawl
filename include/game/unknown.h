#include "dolphin/types.h"
u16 func_8002EC64();
u8* lbl_803490E8;
u8* func_8002EC5C();
u8* lbl_803490E4;
u8* func_8002EC54();
u8* lbl_803490E0;
u8* func_8002EC4C();
float FLOAT_8034a14c;
float FLOAT_8034a148;
double func_8002EC24(int param);
void func_8002F3E8(u32* param_1, u32 param_2);
struct unknown_8002F39C {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u8 filler14[0x34-0x14];
    u8 unk34;
};

void func_8002F3E8(struct unknown_8002F39C * param_1, u32 param_2);
u32 lbl_803490fc;
u32 lbl_803490f8;
u32 lbl_803490f4;
u32 lbl_803490f0;
u32 lbl_80349218;
void func_801a820c(u32* param);
u32 func_8000FEE8(u32 param);
void func_801A81D0(u32* param1, const char* param2);
void func_8002F340();
void func_8002F2DC(u32* param);
void func_8002F39C(struct unknown_8002F39C *param_1,u32 param_2);
struct unknown_8002F674 {
    u8 padding0[0x4];
    s32 int0x4;
    u8 padding1[0x1C];
    u32 int0x24;
    u8 padding2[0xC];
    u8 int0x34;
}; //unknown scruct func_8002F674 uses
void func_8017E00C(float param_1,u32 *param_2);
void func_8002F674(struct unknown_8002F674* s,u8 c);
struct unknown_8002F9A8 {
    u32 unk0; // 0x0
    s32 *unk1; // 0x4
    u32 unk2; // 0x8
}; // unknown struct used by func_8002F9A8
void func_8017e03c(u32* in);
void func_8002f9a8(unknown_8002F9A8* unk8002, s32 unkS32);
struct unknown_8002F9E4 {
    u8 padding[0x8];
    u32 unk8;
}; // unknown struct used by func_8002F9E4
void func_8002FA0C(unknown_8002F9E4* arg0, s32 arg1);
void func_8002F9E4(unknown_8002F9E4* arg0, s32 arg1);