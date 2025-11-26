#ifndef _java_awt_print_PageFormat_h_
#define _java_awt_print_PageFormat_h_
//$ class java.awt.print.PageFormat
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("LANDSCAPE")
#undef LANDSCAPE
#pragma push_macro("PORTRAIT")
#undef PORTRAIT
#pragma push_macro("REVERSE_LANDSCAPE")
#undef REVERSE_LANDSCAPE

namespace java {
	namespace awt {
		namespace print {
			class Paper;
		}
	}
}

namespace java {
	namespace awt {
		namespace print {

class $import PageFormat : public ::java::lang::Cloneable {
	$class(PageFormat, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	PageFormat();
	void init$();
	virtual $Object* clone() override;
	virtual double getHeight();
	virtual double getImageableHeight();
	virtual double getImageableWidth();
	virtual double getImageableX();
	virtual double getImageableY();
	virtual $doubles* getMatrix();
	virtual int32_t getOrientation();
	virtual ::java::awt::print::Paper* getPaper();
	virtual double getWidth();
	virtual void setOrientation(int32_t orientation);
	virtual void setPaper(::java::awt::print::Paper* paper);
	static const int32_t LANDSCAPE = 0;
	static const int32_t PORTRAIT = 1;
	static const int32_t REVERSE_LANDSCAPE = 2;
	::java::awt::print::Paper* mPaper = nullptr;
	int32_t mOrientation = 0;
};

		} // print
	} // awt
} // java

#pragma pop_macro("LANDSCAPE")
#pragma pop_macro("PORTRAIT")
#pragma pop_macro("REVERSE_LANDSCAPE")

#endif // _java_awt_print_PageFormat_h_