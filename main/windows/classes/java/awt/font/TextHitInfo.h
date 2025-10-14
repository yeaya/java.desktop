#ifndef _java_awt_font_TextHitInfo_h_
#define _java_awt_font_TextHitInfo_h_
//$ class java.awt.font.TextHitInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace font {

class $export TextHitInfo : public ::java::lang::Object {
	$class(TextHitInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextHitInfo();
	void init$(int32_t charIndex, bool isLeadingEdge);
	static ::java::awt::font::TextHitInfo* afterOffset(int32_t offset);
	static ::java::awt::font::TextHitInfo* beforeOffset(int32_t offset);
	virtual bool equals(Object$* obj) override;
	bool equals(::java::awt::font::TextHitInfo* hitInfo);
	int32_t getCharIndex();
	int32_t getInsertionIndex();
	::java::awt::font::TextHitInfo* getOffsetHit(int32_t delta);
	::java::awt::font::TextHitInfo* getOtherHit();
	virtual int32_t hashCode() override;
	bool isLeadingEdge();
	static ::java::awt::font::TextHitInfo* leading(int32_t charIndex);
	virtual $String* toString() override;
	static ::java::awt::font::TextHitInfo* trailing(int32_t charIndex);
	int32_t charIndex = 0;
	bool isLeadingEdge$ = false;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_TextHitInfo_h_