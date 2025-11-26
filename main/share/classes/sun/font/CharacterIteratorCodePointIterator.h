#ifndef _sun_font_CharacterIteratorCodePointIterator_h_
#define _sun_font_CharacterIteratorCodePointIterator_h_
//$ class sun.font.CharacterIteratorCodePointIterator
//$ extends sun.font.CodePointIterator

#include <sun/font/CodePointIterator.h>

namespace java {
	namespace text {
		class CharacterIterator;
	}
}

namespace sun {
	namespace font {

class CharacterIteratorCodePointIterator : public ::sun::font::CodePointIterator {
	$class(CharacterIteratorCodePointIterator, $NO_CLASS_INIT, ::sun::font::CodePointIterator)
public:
	CharacterIteratorCodePointIterator();
	void init$(::java::text::CharacterIterator* iter);
	virtual int32_t charIndex() override;
	virtual int32_t next() override;
	virtual int32_t prev() override;
	virtual void setToLimit() override;
	virtual void setToStart() override;
	::java::text::CharacterIterator* iter = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CharacterIteratorCodePointIterator_h_