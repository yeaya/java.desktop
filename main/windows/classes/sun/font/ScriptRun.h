#ifndef _sun_font_ScriptRun_h_
#define _sun_font_ScriptRun_h_
//$ class sun.font.ScriptRun
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DONE")
#undef DONE
#pragma push_macro("LEAD_LIMIT")
#undef LEAD_LIMIT
#pragma push_macro("LEAD_START")
#undef LEAD_START
#pragma push_macro("LEAD_SURROGATE_SHIFT")
#undef LEAD_SURROGATE_SHIFT
#pragma push_macro("SURROGATE_OFFSET")
#undef SURROGATE_OFFSET
#pragma push_macro("SURROGATE_START")
#undef SURROGATE_START
#pragma push_macro("TAIL_LIMIT")
#undef TAIL_LIMIT
#pragma push_macro("TAIL_START")
#undef TAIL_START

namespace sun {
	namespace font {

class ScriptRun : public ::java::lang::Object {
	$class(ScriptRun, 0, ::java::lang::Object)
public:
	ScriptRun();
	void init$();
	void init$($chars* chars, int32_t start, int32_t count);
	static int32_t getPairIndex(int32_t ch);
	int32_t getScriptCode();
	int32_t getScriptLimit();
	int32_t getScriptStart();
	static int8_t highBit(int32_t n);
	void init($chars* chars, int32_t start, int32_t count);
	bool next();
	int32_t nextCodePoint();
	void pushback(int32_t ch);
	static bool sameScript(int32_t scriptOne, int32_t scriptTwo);
	$chars* text = nullptr;
	int32_t textStart = 0;
	int32_t textLimit = 0;
	int32_t scriptStart = 0;
	int32_t scriptLimit = 0;
	int32_t scriptCode = 0;
	$ints* stack = nullptr;
	int32_t parenSP = 0;
	static const int32_t SURROGATE_START = 0x00010000;
	static const int32_t LEAD_START = 0x0000D800;
	static const int32_t LEAD_LIMIT = 0x0000DC00;
	static const int32_t TAIL_START = 0x0000DC00;
	static const int32_t TAIL_LIMIT = 0x0000E000;
	static const int32_t LEAD_SURROGATE_SHIFT = 10;
	static const int32_t SURROGATE_OFFSET = 0xFCA02400; // SURROGATE_START - (LEAD_START << LEAD_SURROGATE_SHIFT) - TAIL_START
	static const int32_t DONE = (-1);
	static $ints* pairedChars;
	static int32_t pairedCharPower;
	static int32_t pairedCharExtra;
};

	} // font
} // sun

#pragma pop_macro("DONE")
#pragma pop_macro("LEAD_LIMIT")
#pragma pop_macro("LEAD_START")
#pragma pop_macro("LEAD_SURROGATE_SHIFT")
#pragma pop_macro("SURROGATE_OFFSET")
#pragma pop_macro("SURROGATE_START")
#pragma pop_macro("TAIL_LIMIT")
#pragma pop_macro("TAIL_START")

#endif // _sun_font_ScriptRun_h_