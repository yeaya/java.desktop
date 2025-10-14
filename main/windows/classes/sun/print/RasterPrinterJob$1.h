#ifndef _sun_print_RasterPrinterJob$1_h_
#define _sun_print_RasterPrinterJob$1_h_
//$ class sun.print.RasterPrinterJob$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace sun {
	namespace print {
		class RasterPrinterJob;
	}
}

namespace sun {
	namespace print {

class RasterPrinterJob$1 : public ::java::security::PrivilegedAction {
	$class(RasterPrinterJob$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RasterPrinterJob$1();
	void init$(::sun::print::RasterPrinterJob* this$0, ::java::awt::GraphicsConfiguration* val$gc);
	virtual $Object* run() override;
	::sun::print::RasterPrinterJob* this$0 = nullptr;
	::java::awt::GraphicsConfiguration* val$gc = nullptr;
};

	} // print
} // sun

#endif // _sun_print_RasterPrinterJob$1_h_