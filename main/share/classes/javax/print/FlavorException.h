#ifndef _javax_print_FlavorException_h_
#define _javax_print_FlavorException_h_
//$ interface javax.print.FlavorException
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace print {
		class DocFlavor;
	}
}

namespace javax {
	namespace print {

class $export FlavorException : public ::java::lang::Object {
	$interface(FlavorException, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::javax::print::DocFlavor>* getUnsupportedFlavors() {return nullptr;}
};

	} // print
} // javax

#endif // _javax_print_FlavorException_h_