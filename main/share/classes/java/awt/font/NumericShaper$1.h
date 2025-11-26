#ifndef _java_awt_font_NumericShaper$1_h_
#define _java_awt_font_NumericShaper$1_h_
//$ class java.awt.font.NumericShaper$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace awt {
		namespace font {
			class NumericShaper;
			class NumericShaper$Range;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class NumericShaper$1 : public ::java::util::Comparator {
	$class(NumericShaper$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	NumericShaper$1();
	void init$(::java::awt::font::NumericShaper* this$0);
	virtual int32_t compare(::java::awt::font::NumericShaper$Range* s1, ::java::awt::font::NumericShaper$Range* s2);
	virtual int32_t compare(Object$* s1, Object$* s2) override;
	::java::awt::font::NumericShaper* this$0 = nullptr;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_NumericShaper$1_h_