#pragma once

#include <string>
#include <iostream>
#include "regs.h"
#include "misc.h"

bool isMemory(std::string &str);	// ��������, �������� ������� (� �������� % �� ������)
void putByte(const unsigned char byte,unsigned char *addr,int &cur);
									// ����� �������� ���� �� ��������� ������, ����������� cur �� 1
void putNum(std::string num,unsigned char *addr,int &cur);
									// ����� �������� ����� ����� �� ��������� ������
void putFloat(std::string num,unsigned char *addr,int &cur);
									// ����� �������� ������� ����� �� ��������� ������
void putReg(std::string reg,Regs &regs,unsigned char *addr,int &cur);
									// ����� ������� ������� �� ��������� ������
void printBcode(unsigned char *bcode, size_t len);
									// ������� ���������� ������� ����-����� �� �����
