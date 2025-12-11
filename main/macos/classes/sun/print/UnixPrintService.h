#ifndef _sun_print_UnixPrintService_h_
#define _sun_print_UnixPrintService_h_
//$ class sun.print.UnixPrintService
//$ extends javax.print.PrintService
//$ implements sun.print.AttributeUpdater,sun.print.SunPrinterJobService

#include <java/lang/Array.h>
#include <javax/print/PrintService.h>
#include <sun/print/AttributeUpdater.h>
#include <sun/print/SunPrinterJobService.h>

#pragma push_macro("MAXCOPIES")
#undef MAXCOPIES

namespace javax {
	namespace print {
		class DocFlavor;
		class DocPrintJob;
		class ServiceUIFactory;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class Attribute;
			class AttributeSet;
			class PrintServiceAttribute;
			class PrintServiceAttributeSet;
		}
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class Copies;
				class MediaPrintableArea;
				class MediaSizeName;
				class PrinterIsAcceptingJobs;
				class PrinterName;
				class PrinterState;
				class PrinterStateReasons;
				class QueuedJobCount;
			}
		}
	}
}
namespace javax {
	namespace print {
		namespace event {
			class PrintServiceAttributeListener;
		}
	}
}
namespace sun {
	namespace print {
		class ServiceNotifier;
	}
}

namespace sun {
	namespace print {

class UnixPrintService : public ::javax::print::PrintService, public ::sun::print::AttributeUpdater, public ::sun::print::SunPrinterJobService {
	$class(UnixPrintService, 0, ::javax::print::PrintService, ::sun::print::AttributeUpdater, ::sun::print::SunPrinterJobService)
public:
	UnixPrintService();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* name);
	virtual void addPrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) override;
	virtual ::javax::print::DocPrintJob* createPrintJob() override;
	virtual bool equals(Object$* obj) override;
	static $StringArray* filterPrinterNamesAIX($StringArray* posPrinters);
	::javax::print::attribute::PrintServiceAttributeSet* getAIXServiceAttributes();
	$Array<::javax::print::attribute::standard::MediaPrintableArea>* getAllPrintableAreas();
	virtual ::javax::print::attribute::PrintServiceAttribute* getAttribute($Class* category) override;
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getAttributes() override;
	::javax::print::attribute::PrintServiceAttributeSet* getBSDServiceAttributes();
	virtual $Object* getDefaultAttributeValue($Class* category) override;
	::javax::print::attribute::PrintServiceAttributeSet* getDynamicAttributes();
	virtual $String* getName() override;
	::javax::print::attribute::standard::PrinterIsAcceptingJobs* getPrinterIsAcceptingJobs();
	::javax::print::attribute::standard::PrinterIsAcceptingJobs* getPrinterIsAcceptingJobsAIX();
	::javax::print::attribute::standard::PrinterIsAcceptingJobs* getPrinterIsAcceptingJobsBSD();
	::javax::print::attribute::standard::PrinterName* getPrinterName();
	::javax::print::attribute::standard::PrinterState* getPrinterState();
	::javax::print::attribute::standard::PrinterStateReasons* getPrinterStateReasons();
	::javax::print::attribute::standard::QueuedJobCount* getQueuedJobCount();
	::javax::print::attribute::standard::QueuedJobCount* getQueuedJobCountAIX();
	::javax::print::attribute::standard::QueuedJobCount* getQueuedJobCountBSD();
	virtual ::javax::print::ServiceUIFactory* getServiceUIFactory() override;
	virtual $ClassArray* getSupportedAttributeCategories() override;
	virtual $Object* getSupportedAttributeValues($Class* category, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual $Array<::javax::print::DocFlavor>* getSupportedDocFlavors() override;
	virtual ::javax::print::attribute::AttributeSet* getUnsupportedAttributes(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getUpdatedAttributes() override;
	virtual int32_t hashCode() override;
	void initSupportedDocFlavors();
	virtual void invalidateService();
	virtual bool isAttributeCategorySupported($Class* category) override;
	virtual bool isAttributeValueSupported(::javax::print::attribute::Attribute* attr, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	bool isAutoSense(::javax::print::DocFlavor* flavor);
	virtual bool isDocFlavorSupported(::javax::print::DocFlavor* flavor) override;
	bool isServiceFormattedFlavor(::javax::print::DocFlavor* flavor);
	bool isSupportedCopies(::javax::print::attribute::standard::Copies* copies);
	bool isSupportedMedia(::javax::print::attribute::standard::MediaSizeName* msn);
	virtual void removePrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) override;
	virtual $String* toString() override;
	virtual bool usesClass($Class* c) override;
	virtual void wakeNotifier();
	static bool $assertionsDisabled;
	static $String* encoding;
	static ::javax::print::DocFlavor* textByteFlavor;
	static $Array<::javax::print::DocFlavor>* supportedDocFlavors;
	static $Array<::javax::print::DocFlavor>* supportedDocFlavorsInit;
	static $Array<::javax::print::DocFlavor>* supportedHostDocFlavors;
	$StringArray* lpcStatusCom = nullptr;
	$StringArray* lpcQueueCom = nullptr;
	static $ClassArray* serviceAttrCats;
	static $ClassArray* otherAttrCats;
	static int32_t MAXCOPIES;
	static $Array<::javax::print::attribute::standard::MediaSizeName>* mediaSizes;
	$String* printer = nullptr;
	::javax::print::attribute::standard::PrinterName* name = nullptr;
	bool isInvalid = false;
	::javax::print::attribute::PrintServiceAttributeSet* lastSet = nullptr;
	::sun::print::ServiceNotifier* notifier = nullptr;
	static $Array<::javax::print::attribute::standard::MediaPrintableArea>* mpas;
};

	} // print
} // sun

#pragma pop_macro("MAXCOPIES")

#endif // _sun_print_UnixPrintService_h_