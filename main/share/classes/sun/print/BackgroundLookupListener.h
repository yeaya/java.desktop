#ifndef _sun_print_BackgroundLookupListener_h_
#define _sun_print_BackgroundLookupListener_h_
//$ interface sun.print.BackgroundLookupListener
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace print {
		class PrintService;
	}
}

namespace sun {
	namespace print {

class BackgroundLookupListener : public ::java::lang::Object {
	$interface(BackgroundLookupListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void notifyServices($Array<::javax::print::PrintService>* services) {}
};

	} // print
} // sun

#endif // _sun_print_BackgroundLookupListener_h_