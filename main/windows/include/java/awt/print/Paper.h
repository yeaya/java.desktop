#ifndef _java_awt_print_Paper_h_
#define _java_awt_print_Paper_h_
//$ class java.awt.print.Paper
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

#pragma push_macro("INCH")
#undef INCH
#pragma push_macro("LETTER_HEIGHT")
#undef LETTER_HEIGHT
#pragma push_macro("LETTER_WIDTH")
#undef LETTER_WIDTH

namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace print {

class $import Paper : public ::java::lang::Cloneable {
	$class(Paper, 0, ::java::lang::Cloneable)
public:
	Paper();
	void init$();
	virtual $Object* clone() override;
	virtual double getHeight();
	virtual double getImageableHeight();
	virtual double getImageableWidth();
	virtual double getImageableX();
	virtual double getImageableY();
	virtual double getWidth();
	virtual void setImageableArea(double x, double y, double width, double height);
	virtual void setSize(double width, double height);
	static const int32_t INCH = 72;
	static double LETTER_WIDTH;
	static double LETTER_HEIGHT;
	double mHeight = 0.0;
	double mWidth = 0.0;
	::java::awt::geom::Rectangle2D* mImageableArea = nullptr;
};

		} // print
	} // awt
} // java

#pragma pop_macro("INCH")
#pragma pop_macro("LETTER_HEIGHT")
#pragma pop_macro("LETTER_WIDTH")

#endif // _java_awt_print_Paper_h_