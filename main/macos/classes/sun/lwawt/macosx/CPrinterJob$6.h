#ifndef _sun_lwawt_macosx_CPrinterJob$6_h_
#define _sun_lwawt_macosx_CPrinterJob$6_h_
//$ class sun.lwawt.macosx.CPrinterJob$6
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
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
			class PageFormat;
			class Printable;
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPrinterJob;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterJob$6 : public ::java::lang::Runnable {
	$class(CPrinterJob$6, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CPrinterJob$6();
	void init$(::sun::lwawt::macosx::CPrinterJob* this$0, $Array<::java::awt::geom::Rectangle2D>* val$ret, ::java::awt::print::Printable* val$printable, ::java::awt::Graphics* val$graphics, ::java::awt::print::PageFormat* val$pageFormat, int32_t val$pageIndex);
	virtual void run() override;
	::sun::lwawt::macosx::CPrinterJob* this$0 = nullptr;
	int32_t val$pageIndex = 0;
	::java::awt::print::PageFormat* val$pageFormat = nullptr;
	::java::awt::Graphics* val$graphics = nullptr;
	::java::awt::print::Printable* val$printable = nullptr;
	$Array<::java::awt::geom::Rectangle2D>* val$ret = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterJob$6_h_