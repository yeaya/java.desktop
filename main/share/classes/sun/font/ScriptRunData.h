#ifndef _sun_font_ScriptRunData_h_
#define _sun_font_ScriptRunData_h_
//$ class sun.font.ScriptRunData
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHAR_LIMIT")
#undef CHAR_LIMIT
#pragma push_macro("CHAR_START")
#undef CHAR_START

namespace sun {
	namespace font {

class ScriptRunData : public ::java::lang::Object {
	$class(ScriptRunData, 0, ::java::lang::Object)
public:
	ScriptRunData();
	void init$();
	static int32_t getScript(int32_t cp);
	static const int32_t CHAR_START = 0;
	static const int32_t CHAR_LIMIT = 0x00110000;
	static int32_t cache;
	static $ints* data;
	static const int32_t dataPower = 1024; // 1 << 10
	static int32_t dataExtra;
};

	} // font
} // sun

#pragma pop_macro("CHAR_LIMIT")
#pragma pop_macro("CHAR_START")

#endif // _sun_font_ScriptRunData_h_