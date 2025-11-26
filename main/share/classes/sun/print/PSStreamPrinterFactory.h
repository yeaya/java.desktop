#ifndef _sun_print_PSStreamPrinterFactory_h_
#define _sun_print_PSStreamPrinterFactory_h_
//$ class sun.print.PSStreamPrinterFactory
//$ extends javax.print.StreamPrintServiceFactory

#include <java/lang/Array.h>
#include <javax/print/StreamPrintServiceFactory.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace javax {
	namespace print {
		class DocFlavor;
		class StreamPrintService;
	}
}

namespace sun {
	namespace print {

class PSStreamPrinterFactory : public ::javax::print::StreamPrintServiceFactory {
	$class(PSStreamPrinterFactory, 0, ::javax::print::StreamPrintServiceFactory)
public:
	PSStreamPrinterFactory();
	void init$();
	static $Array<::javax::print::DocFlavor>* getFlavors();
	virtual $String* getOutputFormat() override;
	virtual ::javax::print::StreamPrintService* getPrintService(::java::io::OutputStream* out) override;
	virtual $Array<::javax::print::DocFlavor>* getSupportedDocFlavors() override;
	static $String* psMimeType;
	static $Array<::javax::print::DocFlavor>* supportedDocFlavors;
};

	} // print
} // sun

#endif // _sun_print_PSStreamPrinterFactory_h_