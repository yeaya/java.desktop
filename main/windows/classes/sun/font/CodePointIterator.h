#ifndef _sun_font_CodePointIterator_h_
#define _sun_font_CodePointIterator_h_
//$ class sun.font.CodePointIterator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DONE")
#undef DONE

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
	}
}

namespace sun {
	namespace font {

class CodePointIterator : public ::java::lang::Object {
	$class(CodePointIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CodePointIterator();
	void init$();
	virtual int32_t charIndex() {return 0;}
	static ::sun::font::CodePointIterator* create($chars* text);
	static ::sun::font::CodePointIterator* create($chars* text, int32_t start, int32_t limit);
	static ::sun::font::CodePointIterator* create(::java::lang::CharSequence* text);
	static ::sun::font::CodePointIterator* create(::java::text::CharacterIterator* iter);
	virtual int32_t next() {return 0;}
	virtual int32_t prev() {return 0;}
	virtual void setToLimit() {}
	virtual void setToStart() {}
	static const int32_t DONE = (-1);
};

	} // font
} // sun

#pragma pop_macro("DONE")

#endif // _sun_font_CodePointIterator_h_