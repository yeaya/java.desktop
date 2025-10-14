#ifndef _javax_print_PrintServiceLookup_h_
#define _javax_print_PrintServiceLookup_h_
//$ class javax.print.PrintServiceLookup
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace print {
		class DocFlavor;
		class MultiDocPrintService;
		class PrintService;
		class PrintServiceLookup$Services;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace print {

class $import PrintServiceLookup : public ::java::lang::Object {
	$class(PrintServiceLookup, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PrintServiceLookup();
	void init$();
	static ::java::util::ArrayList* getAllLookupServices();
	virtual ::javax::print::PrintService* getDefaultPrintService() {return nullptr;}
	static ::java::util::ArrayList* getListOfLookupServices();
	virtual $Array<::javax::print::MultiDocPrintService>* getMultiDocPrintServices($Array<::javax::print::DocFlavor>* flavors, ::javax::print::attribute::AttributeSet* attributes) {return nullptr;}
	static ::java::util::ArrayList* getMultiDocServices($Array<::javax::print::DocFlavor>* flavors, ::javax::print::attribute::AttributeSet* attributes);
	virtual $Array<::javax::print::PrintService>* getPrintServices(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) {return nullptr;}
	virtual $Array<::javax::print::PrintService>* getPrintServices() {return nullptr;}
	static ::java::util::ArrayList* getRegisteredServices();
	static ::java::util::ArrayList* getServices(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes);
	static ::javax::print::PrintServiceLookup$Services* getServicesForContext();
	static ::java::util::ArrayList* initListOfLookupServices();
	static ::java::util::ArrayList* initRegisteredServices();
	static ::javax::print::PrintService* lookupDefaultPrintService();
	static $Array<::javax::print::MultiDocPrintService>* lookupMultiDocPrintServices($Array<::javax::print::DocFlavor>* flavors, ::javax::print::attribute::AttributeSet* attributes);
	static $Array<::javax::print::PrintService>* lookupPrintServices(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes);
	static bool registerService(::javax::print::PrintService* service);
	static bool registerServiceProvider(::javax::print::PrintServiceLookup* sp);
};

	} // print
} // javax

#endif // _javax_print_PrintServiceLookup_h_