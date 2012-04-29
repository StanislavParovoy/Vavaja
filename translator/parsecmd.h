#pragma once

#include "misc.h"
#include "regs.h"
#include "memory.h"
#include "../params/defines.h"

void cmdMov(Args &args,Regs &regs,Regs &regsFloat,int &cur,unsigned char *bcode,int &cline);
				// ��������� ������� mov
void cmdTwoRegs(Args &args,Regs &regs,Regs &regsFloat,int &cur,unsigned char *bcode,int &cline,OpType startCode);
				// ��������� ������ � ����� ����������� (add, sub, cmp)
void cmdOneRegs(Args &args,Regs &regs,Regs &regsFloat,int &cur,unsigned char *bcode,int &cline,OpType startCode);
				// ��������� ������ � ����� ���������� (mul, div)
void cmdJmp(Args &args,Regs &regs,Regs &regsFloat,int &cur,unsigned char *bcode,int &cline,OpType startCode);
				// ��������� ������ ������ (jmp, je, jg, jl, jne)
