#ifndef _sun_font_CharSequenceCodePointIterator_h_
#define _sun_font_CharSequenceCodePointIterator_h_
//$ class sun.font.CharSequenceCodePointIterator
//$ extends sun.font.CodePointIterator

#include <sun/font/CodePointIterator.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace sun {
	namespace font {

class CharSequenceCodePointIterator : public ::sun::font::CodePointIterator {
	$class(CharSequenceCodePointIterator, $NO_CLASS_INIT, ::sun::font::CodePointIterator)
public:
	CharSequenceCodePointIterator();
	void init$(::java::lang::CharSequence* text);
	virtual int32_t charIndex() override;
	virtual int32_t next() override;
	virtual int32_t prev() override;
	virtual void setToLimit() override;
	virtual void setToStart() override;
	::java::lang::CharSequence* text = nullptr;
	int32_t index = 0;
};

	} // font
} // sun

#endif // _sun_font_CharSequenceCodePointIterator_h_