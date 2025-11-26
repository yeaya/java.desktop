#ifndef _javax_print_PrintServiceLookup$Services_h_
#define _javax_print_PrintServiceLookup$Services_h_
//$ class javax.print.PrintServiceLookup$Services
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace javax {
	namespace print {

class $export PrintServiceLookup$Services : public ::java::lang::Object {
	$class(PrintServiceLookup$Services, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PrintServiceLookup$Services();
	void init$();
	::java::util::ArrayList* listOfLookupServices = nullptr;
	::java::util::ArrayList* registeredServices = nullptr;
};

	} // print
} // javax

#endif // _javax_print_PrintServiceLookup$Services_h_