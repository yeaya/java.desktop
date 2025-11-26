#ifndef _java_awt_font_LineMetrics_h_
#define _java_awt_font_LineMetrics_h_
//$ class java.awt.font.LineMetrics
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace font {

class $import LineMetrics : public ::java::lang::Object {
	$class(LineMetrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LineMetrics();
	void init$();
	virtual float getAscent() {return 0.0;}
	virtual int32_t getBaselineIndex() {return 0;}
	virtual $floats* getBaselineOffsets() {return nullptr;}
	virtual float getDescent() {return 0.0;}
	virtual float getHeight() {return 0.0;}
	virtual float getLeading() {return 0.0;}
	virtual int32_t getNumChars() {return 0;}
	virtual float getStrikethroughOffset() {return 0.0;}
	virtual float getStrikethroughThickness() {return 0.0;}
	virtual float getUnderlineOffset() {return 0.0;}
	virtual float getUnderlineThickness() {return 0.0;}
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_LineMetrics_h_