#ifndef _sun_print_PrintServiceLookupProvider_h_
#define _sun_print_PrintServiceLookupProvider_h_
//$ class sun.print.PrintServiceLookupProvider
//$ extends javax.print.PrintServiceLookup
//$ implements sun.print.BackgroundServiceLookup,java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <javax/print/PrintServiceLookup.h>
#include <sun/print/BackgroundServiceLookup.h>

#pragma push_macro("BSD_LPD")
#undef BSD_LPD
#pragma push_macro("BSD_LPD_NG")
#undef BSD_LPD_NG
#pragma push_macro("DEFAULT_MINREFRESH")
#undef DEFAULT_MINREFRESH
#pragma push_macro("UNINITIALIZED")
#undef UNINITIALIZED

namespace java {
	namespace util {
		class ArrayList;
		class Vector;
	}
}
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
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class PrinterName;
			}
		}
	}
}
namespace sun {
	namespace print {
		class BackgroundLookupListener;
	}
}

namespace sun {
	namespace print {

class PrintServiceLookupProvider : public ::javax::print::PrintServiceLookup, public ::sun::print::BackgroundServiceLookup, public ::java::lang::Runnable {
	$class(PrintServiceLookupProvider, 0, ::javax::print::PrintServiceLookup, ::sun::print::BackgroundServiceLookup, ::java::lang::Runnable)
public:
	PrintServiceLookupProvider();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	int32_t addPrintServiceToList(::java::util::ArrayList* printerList, ::javax::print::PrintService* ps);
	bool checkPrinterName($String* s);
	$Array<::javax::print::PrintService>* copyOf($Array<::javax::print::PrintService>* inArr);
	static $StringArray* execCmd($String* command);
	$StringArray* getAllPrinterNamesAIX();
	$StringArray* getAllPrinterNamesBSD();
	$StringArray* getAllPrinterNamesSysV();
	static int32_t getBSDCommandIndex();
	virtual ::javax::print::PrintService* getDefaultPrintService() override;
	$String* getDefaultPrinterNameAIX();
	$String* getDefaultPrinterNameBSD();
	static $String* getDefaultPrinterNameSysV();
	virtual $Array<::javax::print::MultiDocPrintService>* getMultiDocPrintServices($Array<::javax::print::DocFlavor>* flavors, ::javax::print::attribute::AttributeSet* attributes) override;
	::javax::print::PrintService* getNamedPrinterNameAIX($String* name);
	::javax::print::PrintService* getNamedPrinterNameBSD($String* name);
	::javax::print::PrintService* getNamedPrinterNameSysV($String* name);
	virtual $Array<::javax::print::PrintService>* getPrintServices() override;
	$Array<::javax::print::PrintService>* getPrintServices(::javax::print::attribute::PrintServiceAttributeSet* serviceSet);
	virtual $Array<::javax::print::PrintService>* getPrintServices(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	$String* getPrinterDestName(::javax::print::PrintService* ps);
	::javax::print::PrintService* getServiceByName(::javax::print::attribute::standard::PrinterName* nameAttr);
	virtual void getServicesInbackground(::sun::print::BackgroundLookupListener* listener) override;
	static bool isAIX();
	static bool isBSD();
	static bool isLinux();
	static bool isMac();
	bool matchesAttributes(::javax::print::PrintService* service, ::javax::print::attribute::PrintServiceAttributeSet* attributes);
	virtual void refreshServices();
	virtual void run() override;
	virtual $String* toString() override;
	$String* defaultPrinter = nullptr;
	::javax::print::PrintService* defaultPrintService = nullptr;
	$Array<::javax::print::PrintService>* printServices = nullptr;
	::java::util::Vector* lookupListeners = nullptr;
	static $String* debugPrefix;
	static bool pollServices;
	static const int32_t DEFAULT_MINREFRESH = 120;
	static int32_t minRefreshTime;
	static $String* osname;
	$StringArray* lpNameComAix = nullptr;
	static const int32_t aix_lsallq = 0;
	static const int32_t aix_lpstat_p = 1;
	static const int32_t aix_lpstat_d = 2;
	static const int32_t aix_lpstat_v = 3;
	static int32_t aix_defaultPrinterEnumeration;
	static const int32_t UNINITIALIZED = (-1);
	static const int32_t BSD_LPD = 0;
	static const int32_t BSD_LPD_NG = 1;
	static int32_t cmdIndex;
	$StringArray* lpcFirstCom = nullptr;
	$StringArray* lpcAllCom = nullptr;
	$StringArray* lpcNameCom = nullptr;
};

	} // print
} // sun

#pragma pop_macro("BSD_LPD")
#pragma pop_macro("BSD_LPD_NG")
#pragma pop_macro("DEFAULT_MINREFRESH")
#pragma pop_macro("UNINITIALIZED")

#endif // _sun_print_PrintServiceLookupProvider_h_