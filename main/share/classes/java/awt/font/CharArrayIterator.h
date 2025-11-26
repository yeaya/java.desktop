#ifndef _java_awt_font_CharArrayIterator_h_
#define _java_awt_font_CharArrayIterator_h_
//$ class java.awt.font.CharArrayIterator
//$ extends java.text.CharacterIterator

#include <java/lang/Array.h>
#include <java/text/CharacterIterator.h>

namespace java {
	namespace awt {
		namespace font {

class CharArrayIterator : public ::java::text::CharacterIterator {
	$class(CharArrayIterator, $NO_CLASS_INIT, ::java::text::CharacterIterator)
public:
	CharArrayIterator();
	void init$($chars* chars);
	void init$($chars* chars, int32_t begin);
	virtual $Object* clone() override;
	virtual char16_t current() override;
	virtual char16_t first() override;
	virtual int32_t getBeginIndex() override;
	virtual int32_t getEndIndex() override;
	virtual int32_t getIndex() override;
	virtual char16_t last() override;
	virtual char16_t next() override;
	virtual char16_t previous() override;
	virtual void reset($chars* chars);
	virtual void reset($chars* chars, int32_t begin);
	virtual char16_t setIndex(int32_t position) override;
	$chars* chars = nullptr;
	int32_t pos = 0;
	int32_t begin = 0;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_CharArrayIterator_h_