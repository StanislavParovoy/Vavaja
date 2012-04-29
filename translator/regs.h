#pragma once

#include <string>
#include <map>

typedef std::map<std::string,unsigned> Regs;

bool isRegister(std::string &str, Regs &regs);	// ��������, �������� �� ���������
void initRegs(Regs &regs);						// �������������� ��������� ����� ��������� �������
void initRegsFloat(Regs &regs);					// �������������� ��������� ����� ��������� �������
