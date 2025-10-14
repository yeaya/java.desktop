#ifndef _sun_print_PrintServiceLookupProvider_h_
#define _sun_print_PrintServiceLookupProvider_h_
//$ class sun.print.PrintServiceLookupProvider
//$ extends javax.print.PrintServiceLookup

#include <java/lang/Array.h>
#include <javax/print/PrintServiceLookup.h>

namespace javax {
	namespace print {
		class DocFlavor;
		class MultiDocPrintService;
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class AttributeSet;
			class PrintServiceAttributeSet;
		}
	}
}

namespace sun {
	namespace print {

class PrintServiceLookupProvider : public ::javax::print::PrintServiceLookup {
	$class(PrintServiceLookupProvider, 0, ::javax::print::PrintServiceLookup)
public:
	PrintServiceLookupProvider();
	void init$();
	$StringArray* getAllPrinterNames();
	virtual ::javax::print::PrintService* getDefaultPrintService() override;
	$String* getDefaultPrinterName();
	virtual $Array<::javax::print::MultiDocPrintService>* getMultiDocPrintServices($Array<::javax::print::DocFlavor>* flavors, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual ::javax::print::PrintService* getPrintServiceByName($String* name);
	virtual $Array<::javax::print::PrintService>* getPrintServices() override;
	virtual $Array<::javax::print::PrintService>* getPrintServices(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	static ::sun::print::PrintServiceLookupProvider* getWin32PrintLUS();
	void invalidateServices();
	virtual bool matchingService(::javax::print::PrintService* service, ::javax::print::attribute::PrintServiceAttributeSet* serviceSet);
	void notifyLocalPrinterChange();
	void notifyRemotePrinterChange();
	void refreshServices();
	::javax::print::PrintService* defaultPrintService = nullptr;
	$Array<::javax::print::PrintService>* printServices = nullptr;
	static ::sun::print::PrintServiceLookupProvider* win32PrintLUS;
};

	} // print
} // sun

#endif // _sun_print_PrintServiceLookupProvider_h_