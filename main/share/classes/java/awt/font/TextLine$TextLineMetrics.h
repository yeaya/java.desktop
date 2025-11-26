#ifndef _java_awt_font_TextLine$TextLineMetrics_h_
#define _java_awt_font_TextLine$TextLineMetrics_h_
//$ class java.awt.font.TextLine$TextLineMetrics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace font {

class TextLine$TextLineMetrics : public ::java::lang::Object {
	$class(TextLine$TextLineMetrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextLine$TextLineMetrics();
	void init$(float ascent, float descent, float leading, float advance);
	float ascent = 0.0;
	float descent = 0.0;
	float leading = 0.0;
	float advance = 0.0;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_TextLine$TextLineMetrics_h_