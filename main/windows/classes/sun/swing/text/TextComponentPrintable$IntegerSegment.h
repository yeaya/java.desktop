#ifndef _sun_swing_text_TextComponentPrintable$IntegerSegment_h_
#define _sun_swing_text_TextComponentPrintable$IntegerSegment_h_
//$ class sun.swing.text.TextComponentPrintable$IntegerSegment
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace sun {
	namespace swing {
		namespace text {

class TextComponentPrintable$IntegerSegment : public ::java::lang::Comparable {
	$class(TextComponentPrintable$IntegerSegment, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	TextComponentPrintable$IntegerSegment();
	void init$(int32_t start, int32_t end);
	virtual int32_t compareTo(::sun::swing::text::TextComponentPrintable$IntegerSegment* object);
	virtual int32_t compareTo(Object$* object) override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	int32_t start = 0;
	int32_t end = 0;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$IntegerSegment_h_