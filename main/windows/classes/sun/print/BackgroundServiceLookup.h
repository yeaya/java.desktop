#ifndef _sun_print_BackgroundServiceLookup_h_
#define _sun_print_BackgroundServiceLookup_h_
//$ interface sun.print.BackgroundServiceLookup
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace print {
		class BackgroundLookupListener;
	}
}

namespace sun {
	namespace print {

class BackgroundServiceLookup : public ::java::lang::Object {
	$interface(BackgroundServiceLookup, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void getServicesInbackground(::sun::print::BackgroundLookupListener* listener) {}
};

	} // print
} // sun

#endif // _sun_print_BackgroundServiceLookup_h_