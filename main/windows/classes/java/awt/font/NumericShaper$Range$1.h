#ifndef _java_awt_font_NumericShaper$Range$1_h_
#define _java_awt_font_NumericShaper$Range$1_h_
//$ class java.awt.font.NumericShaper$Range$1
//$ extends java.awt.font.NumericShaper$Range

#include <java/awt/font/NumericShaper$Range.h>

namespace java {
	namespace awt {
		namespace font {

class NumericShaper$Range$1 : public ::java::awt::font::NumericShaper$Range {
	$class(NumericShaper$Range$1, $NO_CLASS_INIT, ::java::awt::font::NumericShaper$Range)
public:
	NumericShaper$Range$1();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t base, int32_t start, int32_t end);
	virtual char16_t getNumericBase() override;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_NumericShaper$Range$1_h_