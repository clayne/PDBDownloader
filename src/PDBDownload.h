#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdint.h>

void PEHeaderReader(char* PEFileName, char* url);
void FileDownloader(char* PdbName, char* url);
