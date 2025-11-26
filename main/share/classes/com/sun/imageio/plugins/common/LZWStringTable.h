#ifndef _com_sun_imageio_plugins_common_LZWStringTable_h_
#define _com_sun_imageio_plugins_common_LZWStringTable_h_
//$ class com.sun.imageio.plugins.common.LZWStringTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HASHSIZE")
#undef HASHSIZE
#pragma push_macro("HASHSTEP")
#undef HASHSTEP
#pragma push_macro("HASH_FREE")
#undef HASH_FREE
#pragma push_macro("MAXBITS")
#undef MAXBITS
#pragma push_macro("MAXSTR")
#undef MAXSTR
#pragma push_macro("NEXT_FIRST")
#undef NEXT_FIRST
#pragma push_macro("RES_CODES")
#undef RES_CODES

namespace java {
	namespace io {
		class PrintStream;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class LZWStringTable : public ::java::lang::Object {
	$class(LZWStringTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LZWStringTable();
	void init$();
	virtual int32_t addCharString(int16_t index, int8_t b);
	virtual void clearTable(int32_t codesize);
	virtual void dump(::java::io::PrintStream* out);
	virtual int32_t expandCode($bytes* buf, int32_t offset, int16_t code, int32_t skipHead);
	virtual int16_t findCharString(int16_t index, int8_t b);
	static int32_t hash(int16_t index, int8_t lastbyte);
	static const int32_t RES_CODES = 2;
	static const int16_t HASH_FREE = (int16_t)0x0000FFFF;
	static const int16_t NEXT_FIRST = (int16_t)0x0000FFFF;
	static const int32_t MAXBITS = 12;
	static const int32_t MAXSTR = (1 << MAXBITS);
	static const int16_t HASHSIZE = 9973;
	static const int16_t HASHSTEP = 2039;
	$bytes* strChr = nullptr;
	$shorts* strNxt = nullptr;
	$shorts* strHsh = nullptr;
	int16_t numStrings = 0;
	$ints* strLen = nullptr;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("HASHSIZE")
#pragma pop_macro("HASHSTEP")
#pragma pop_macro("HASH_FREE")
#pragma pop_macro("MAXBITS")
#pragma pop_macro("MAXSTR")
#pragma pop_macro("NEXT_FIRST")
#pragma pop_macro("RES_CODES")

#endif // _com_sun_imageio_plugins_common_LZWStringTable_h_