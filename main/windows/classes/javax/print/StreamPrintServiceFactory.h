#ifndef _javax_print_StreamPrintServiceFactory_h_
#define _javax_print_StreamPrintServiceFactory_h_
//$ class javax.print.StreamPrintServiceFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace print {
		class DocFlavor;
		class StreamPrintService;
		class StreamPrintServiceFactory$Services;
	}
}

namespace javax {
	namespace print {

class $export StreamPrintServiceFactory : public ::java::lang::Object {
	$class(StreamPrintServiceFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamPrintServiceFactory();
	void init$();
	static ::java::util::ArrayList* getAllFactories();
	static ::java::util::ArrayList* getFactories(::javax::print::DocFlavor* flavor, $String* outType);
	static ::java::util::ArrayList* getListOfFactories();
	virtual $String* getOutputFormat() {return nullptr;}
	virtual ::javax::print::StreamPrintService* getPrintService(::java::io::OutputStream* out) {return nullptr;}
	static ::javax::print::StreamPrintServiceFactory$Services* getServices();
	virtual $Array<::javax::print::DocFlavor>* getSupportedDocFlavors() {return nullptr;}
	static ::java::util::ArrayList* initListOfFactories();
	static bool isMember(::javax::print::DocFlavor* flavor, $Array<::javax::print::DocFlavor>* flavors);
	static $Array<::javax::print::StreamPrintServiceFactory>* lookupStreamPrintServiceFactories(::javax::print::DocFlavor* flavor, $String* outputMimeType);
};

	} // print
} // javax

#endif // _javax_print_StreamPrintServiceFactory_h_