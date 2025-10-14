#ifndef _java_awt_font_TextLine$Function_h_
#define _java_awt_font_TextLine$Function_h_
//$ class java.awt.font.TextLine$Function
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class TextLine$Function : public ::java::lang::Object {
	$class(TextLine$Function, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextLine$Function();
	void init$();
	virtual float computeFunction(::java::awt::font::TextLine* line, int32_t componentIndex, int32_t indexInArray) {return 0.0;}
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_TextLine$Function_h_