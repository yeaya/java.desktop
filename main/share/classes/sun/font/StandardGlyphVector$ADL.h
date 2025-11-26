#ifndef _sun_font_StandardGlyphVector$ADL_h_
#define _sun_font_StandardGlyphVector$ADL_h_
//$ class sun.font.StandardGlyphVector$ADL
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace sun {
	namespace font {

class StandardGlyphVector$ADL : public ::java::lang::Object {
	$class(StandardGlyphVector$ADL, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StandardGlyphVector$ADL();
	void init$();
	virtual $String* toString() override;
	virtual ::java::lang::StringBuffer* toStringBuffer(::java::lang::StringBuffer* result);
	float ascentX = 0.0;
	float ascentY = 0.0;
	float descentX = 0.0;
	float descentY = 0.0;
	float leadingX = 0.0;
	float leadingY = 0.0;
};

	} // font
} // sun

#endif // _sun_font_StandardGlyphVector$ADL_h_