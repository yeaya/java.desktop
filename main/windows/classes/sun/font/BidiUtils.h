#ifndef _sun_font_BidiUtils_h_
#define _sun_font_BidiUtils_h_
//$ class sun.font.BidiUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUMLEVELS")
#undef NUMLEVELS

namespace java {
	namespace text {
		class Bidi;
	}
}

namespace sun {
	namespace font {

class BidiUtils : public ::java::lang::Object {
	$class(BidiUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BidiUtils();
	void init$();
	static $ints* computeContiguousOrder($ints* values, int32_t start, int32_t limit);
	static $ints* createContiguousOrder($ints* values);
	static $ints* createInverseMap($ints* values);
	static $ints* createNormalizedMap($ints* values, $bytes* levels, int32_t start, int32_t limit);
	static $ints* createVisualToLogicalMap($bytes* levels);
	static void getLevels(::java::text::Bidi* bidi, $bytes* levels, int32_t start);
	static $bytes* getLevels(::java::text::Bidi* bidi);
	static void reorderVisually($bytes* levels, $ObjectArray* objects);
	static const char16_t NUMLEVELS = 62;
};

	} // font
} // sun

#pragma pop_macro("NUMLEVELS")

#endif // _sun_font_BidiUtils_h_