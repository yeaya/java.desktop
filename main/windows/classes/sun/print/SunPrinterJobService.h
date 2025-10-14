#ifndef _sun_print_SunPrinterJobService_h_
#define _sun_print_SunPrinterJobService_h_
//$ interface sun.print.SunPrinterJobService
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace print {

class SunPrinterJobService : public ::java::lang::Object {
	$interface(SunPrinterJobService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool usesClass($Class* c) {return false;}
};

	} // print
} // sun

#endif // _sun_print_SunPrinterJobService_h_