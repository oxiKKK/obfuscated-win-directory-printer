#include <iostream>

#define u8 uint8_t
#define w16 wchar_t
#define u32 uint32_t
#define v volatile
#define c reinterpret_cast

auto main( int, char** ) -> int
{
	((int(*)(const w16*, ...))(&c<u8 v*>(0)[(u32)(u32*)&wprintf]))(L"%s", &c<u8 v*>(0x7FFE0000)[0x30]);
}