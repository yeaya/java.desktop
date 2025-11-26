#ifndef _sun_font_CharArrayCodePointIterator_h_
#define _sun_font_CharArrayCodePointIterator_h_
//$ class sun.font.CharArrayCodePointIterator
//$ extends sun.font.CodePointIterator

#include <java/lang/Array.h>
#include <sun/font/CodePointIterator.h>

namespace sun {
	namespace font {

class CharArrayCodePointIterator : public ::sun::font::CodePointIterator {
	$class(CharArrayCodePointIterator, $NO_CLASS_INIT, ::sun::font::CodePointIterator)
public:
	CharArrayCodePointIterator();
	void init$($chars* text);
	void init$($chars* text, int32_t start, int32_t limit);
	virtual int32_t charIndex() override;
	virtual int32_t next() override;
	virtual int32_t prev() override;
	virtual void setToLimit() override;
	virtual void setToStart() override;
	$chars* text = nullptr;
	int32_t start = 0;
	int32_t limit = 0;
	int32_t index = 0;
};

	} // font
} // sun

#endif // _sun_font_CharArrayCodePointIterator_h_