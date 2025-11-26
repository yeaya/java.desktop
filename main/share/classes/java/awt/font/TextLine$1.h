#ifndef _java_awt_font_TextLine$1_h_
#define _java_awt_font_TextLine$1_h_
//$ class java.awt.font.TextLine$1
//$ extends java.awt.font.TextLine$Function

#include <java/awt/font/TextLine$Function.h>

namespace java {
	namespace awt {
		namespace font {
			class TextLine;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class TextLine$1 : public ::java::awt::font::TextLine$Function {
	$class(TextLine$1, $NO_CLASS_INIT, ::java::awt::font::TextLine$Function)
public:
	TextLine$1();
	void init$();
	virtual float computeFunction(::java::awt::font::TextLine* line, int32_t componentIndex, int32_t indexInArray) override;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_TextLine$1_h_