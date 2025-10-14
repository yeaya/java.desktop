#ifndef _sun_print_RasterPrinterJob$4_h_
#define _sun_print_RasterPrinterJob$4_h_
//$ class sun.print.RasterPrinterJob$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace print {
		class RasterPrinterJob;
	}
}

namespace sun {
	namespace print {

class RasterPrinterJob$4 : public ::java::security::PrivilegedAction {
	$class(RasterPrinterJob$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RasterPrinterJob$4();
	void init$(::sun::print::RasterPrinterJob* this$0);
	virtual $Object* run() override;
	::sun::print::RasterPrinterJob* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_RasterPrinterJob$4_h_