#ifndef _javax_swing_text_GlyphView$JustificationInfo_h_
#define _javax_swing_text_GlyphView$JustificationInfo_h_
//$ class javax.swing.text.GlyphView$JustificationInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class BitSet;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import GlyphView$JustificationInfo : public ::java::lang::Object {
	$class(GlyphView$JustificationInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphView$JustificationInfo();
	void init$(int32_t start, int32_t end, int32_t leadingSpaces, int32_t contentSpaces, int32_t trailingSpaces, bool hasTab, ::java::util::BitSet* spaceMap);
	int32_t start = 0;
	int32_t end = 0;
	int32_t leadingSpaces = 0;
	int32_t contentSpaces = 0;
	int32_t trailingSpaces = 0;
	bool hasTab = false;
	::java::util::BitSet* spaceMap = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GlyphView$JustificationInfo_h_