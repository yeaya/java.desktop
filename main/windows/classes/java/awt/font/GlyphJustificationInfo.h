#ifndef _java_awt_font_GlyphJustificationInfo_h_
#define _java_awt_font_GlyphJustificationInfo_h_
//$ class java.awt.font.GlyphJustificationInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PRIORITY_INTERCHAR")
#undef PRIORITY_INTERCHAR
#pragma push_macro("PRIORITY_KASHIDA")
#undef PRIORITY_KASHIDA
#pragma push_macro("PRIORITY_NONE")
#undef PRIORITY_NONE
#pragma push_macro("PRIORITY_WHITESPACE")
#undef PRIORITY_WHITESPACE

namespace java {
	namespace awt {
		namespace font {

class $export GlyphJustificationInfo : public ::java::lang::Object {
	$class(GlyphJustificationInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphJustificationInfo();
	void init$(float weight, bool growAbsorb, int32_t growPriority, float growLeftLimit, float growRightLimit, bool shrinkAbsorb, int32_t shrinkPriority, float shrinkLeftLimit, float shrinkRightLimit);
	static bool priorityIsValid(int32_t priority);
	static const int32_t PRIORITY_KASHIDA = 0;
	static const int32_t PRIORITY_WHITESPACE = 1;
	static const int32_t PRIORITY_INTERCHAR = 2;
	static const int32_t PRIORITY_NONE = 3;
	float weight = 0.0;
	int32_t growPriority = 0;
	bool growAbsorb = false;
	float growLeftLimit = 0.0;
	float growRightLimit = 0.0;
	int32_t shrinkPriority = 0;
	bool shrinkAbsorb = false;
	float shrinkLeftLimit = 0.0;
	float shrinkRightLimit = 0.0;
};

		} // font
	} // awt
} // java

#pragma pop_macro("PRIORITY_INTERCHAR")
#pragma pop_macro("PRIORITY_KASHIDA")
#pragma pop_macro("PRIORITY_NONE")
#pragma pop_macro("PRIORITY_WHITESPACE")

#endif // _java_awt_font_GlyphJustificationInfo_h_