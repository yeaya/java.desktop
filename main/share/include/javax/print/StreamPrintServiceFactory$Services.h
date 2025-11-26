#ifndef _javax_print_StreamPrintServiceFactory$Services_h_
#define _javax_print_StreamPrintServiceFactory$Services_h_
//$ class javax.print.StreamPrintServiceFactory$Services
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace javax {
	namespace print {

class $import StreamPrintServiceFactory$Services : public ::java::lang::Object {
	$class(StreamPrintServiceFactory$Services, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamPrintServiceFactory$Services();
	void init$();
	::java::util::ArrayList* listOfFactories = nullptr;
};

	} // print
} // javax

#endif // _javax_print_StreamPrintServiceFactory$Services_h_