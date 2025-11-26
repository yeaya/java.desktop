#ifndef _sun_print_PSPrinterJob$GState_h_
#define _sun_print_PSPrinterJob$GState_h_
//$ class sun.print.PSPrinterJob$GState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace sun {
	namespace print {
		class PSPrinterJob;
	}
}

namespace sun {
	namespace print {

class PSPrinterJob$GState : public ::java::lang::Object {
	$class(PSPrinterJob$GState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PSPrinterJob$GState();
	void init$(::sun::print::PSPrinterJob* this$0);
	void init$(::sun::print::PSPrinterJob* this$0, ::sun::print::PSPrinterJob$GState* copyGState);
	virtual bool canSetClip(::java::awt::Shape* clip);
	virtual void emitPSClip(::java::awt::Shape* clip);
	virtual void emitPSColor(::java::awt::Color* color);
	virtual void emitPSFont(int32_t psFontIndex, float fontSize);
	virtual void emitTransform(::java::awt::geom::AffineTransform* transform);
	::sun::print::PSPrinterJob* this$0 = nullptr;
	::java::awt::Color* mColor = nullptr;
	::java::awt::Shape* mClip = nullptr;
	::java::awt::Font* mFont = nullptr;
	::java::awt::geom::AffineTransform* mTransform = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PSPrinterJob$GState_h_