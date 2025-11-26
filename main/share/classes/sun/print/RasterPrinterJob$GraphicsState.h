#ifndef _sun_print_RasterPrinterJob$GraphicsState_h_
#define _sun_print_RasterPrinterJob$GraphicsState_h_
//$ class sun.print.RasterPrinterJob$GraphicsState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}
namespace sun {
	namespace print {
		class RasterPrinterJob;
	}
}

namespace sun {
	namespace print {

class RasterPrinterJob$GraphicsState : public ::java::lang::Object {
	$class(RasterPrinterJob$GraphicsState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RasterPrinterJob$GraphicsState();
	void init$(::sun::print::RasterPrinterJob* this$0);
	::sun::print::RasterPrinterJob* this$0 = nullptr;
	::java::awt::geom::Rectangle2D* region = nullptr;
	::java::awt::Shape* theClip = nullptr;
	::java::awt::geom::AffineTransform* theTransform = nullptr;
	double sx = 0.0;
	double sy = 0.0;
};

	} // print
} // sun

#endif // _sun_print_RasterPrinterJob$GraphicsState_h_