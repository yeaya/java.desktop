#ifndef _sun_font_TextRecord_h_
#define _sun_font_TextRecord_h_
//$ class sun.font.TextRecord
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace font {

class TextRecord : public ::java::lang::Object {
	$class(TextRecord, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextRecord();
	void init$();
	void init($chars* text, int32_t start, int32_t limit, int32_t min, int32_t max);
	$chars* text = nullptr;
	int32_t start = 0;
	int32_t limit = 0;
	int32_t min = 0;
	int32_t max = 0;
};

	} // font
} // sun

#endif // _sun_font_TextRecord_h_