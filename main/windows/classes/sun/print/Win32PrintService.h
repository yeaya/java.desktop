#ifndef _sun_print_Win32PrintService_h_
#define _sun_print_Win32PrintService_h_
//$ class sun.print.Win32PrintService
//$ extends javax.print.PrintService
//$ implements sun.print.AttributeUpdater,sun.print.SunPrinterJobService

#include <java/lang/Array.h>
#include <javax/print/PrintService.h>
#include <sun/print/AttributeUpdater.h>
#include <sun/print/SunPrinterJobService.h>

#pragma push_macro("DEVCAP_COLLATE")
#undef DEVCAP_COLLATE
#pragma push_macro("DEVCAP_COLOR")
#undef DEVCAP_COLOR
#pragma push_macro("DEVCAP_DUPLEX")
#undef DEVCAP_DUPLEX
#pragma push_macro("DEVCAP_POSTSCRIPT")
#undef DEVCAP_POSTSCRIPT
#pragma push_macro("DEVCAP_QUALITY")
#undef DEVCAP_QUALITY
#pragma push_macro("DMCOLLATE_TRUE")
#undef DMCOLLATE_TRUE
#pragma push_macro("DMCOLOR_COLOR")
#undef DMCOLOR_COLOR
#pragma push_macro("DMCOLOR_MONOCHROME")
#undef DMCOLOR_MONOCHROME
#pragma push_macro("DMDUP_HORIZONTAL")
#undef DMDUP_HORIZONTAL
#pragma push_macro("DMDUP_VERTICAL")
#undef DMDUP_VERTICAL
#pragma push_macro("DMORIENT_LANDSCAPE")
#undef DMORIENT_LANDSCAPE
#pragma push_macro("DMPAPER_A2")
#undef DMPAPER_A2
#pragma push_macro("DMPAPER_A6")
#undef DMPAPER_A6
#pragma push_macro("DMPAPER_B6_JIS")
#undef DMPAPER_B6_JIS
#pragma push_macro("DMRES_HIGH")
#undef DMRES_HIGH
#pragma push_macro("DMRES_MEDIUM")
#undef DMRES_MEDIUM
#pragma push_macro("DM_PAPERSIZE")
#undef DM_PAPERSIZE
#pragma push_macro("DM_PRINTQUALITY")
#undef DM_PRINTQUALITY
#pragma push_macro("DM_YRESOLUTION")
#undef DM_YRESOLUTION

namespace java {
	namespace util {
		class ArrayList;
		class HashMap;
	}
}
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
				class MediaSize;
				class MediaSizeName;
				class MediaTray;
				class PrinterIsAcceptingJobs;
				class PrinterName;
				class PrinterResolution;
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
		class DocumentPropertiesUI;
		class ServiceNotifier;
		class Win32PrintService$Win32DocumentPropertiesUI;
		class Win32PrintService$Win32ServiceUIFactory;
	}
}

namespace sun {
	namespace print {

class Win32PrintService : public ::javax::print::PrintService, public ::sun::print::AttributeUpdater, public ::sun::print::SunPrinterJobService {
	$class(Win32PrintService, 0, ::javax::print::PrintService, ::sun::print::AttributeUpdater, ::sun::print::SunPrinterJobService)
public:
	Win32PrintService();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* name);
	virtual void addPrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) override;
	bool addToUniqueList(::java::util::ArrayList* msnList, ::javax::print::attribute::standard::MediaSizeName* mediaName);
	virtual ::javax::print::DocPrintJob* createPrintJob() override;
	virtual bool equals(Object$* obj) override;
	virtual ::javax::print::attribute::standard::MediaSizeName* findMatchingMediaSizeNameMM(float w, float h);
	virtual ::javax::print::attribute::standard::MediaTray* findMediaTray(int32_t dmBin);
	virtual int32_t findPaperID(::javax::print::attribute::standard::MediaSizeName* msn);
	virtual int32_t findTrayID(::javax::print::attribute::standard::MediaTray* tray);
	virtual ::javax::print::attribute::standard::MediaSizeName* findWin32Media(int32_t dmIndex);
	$ints* getAllMediaIDs($String* printerName, $String* port);
	$StringArray* getAllMediaNames($String* printerName, $String* port);
	$ints* getAllMediaSizes($String* printerName, $String* port);
	$StringArray* getAllMediaTrayNames($String* printerName, $String* port);
	$ints* getAllMediaTrays($String* printerName, $String* port);
	$ints* getAllResolutions($String* printerName, $String* port);
	virtual ::javax::print::attribute::PrintServiceAttribute* getAttribute($Class* category) override;
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getAttributes() override;
	int32_t getCapabilities($String* printerName, $String* port);
	int32_t getCopiesSupported($String* printerName, $String* port);
	virtual $Object* getDefaultAttributeValue($Class* category) override;
	$ints* getDefaultPrinterSettings();
	$ints* getDefaultSettings($String* printerName, $String* port);
	::sun::print::DocumentPropertiesUI* getDocumentPropertiesUI();
	::javax::print::attribute::PrintServiceAttributeSet* getDynamicAttributes();
	int32_t getJobStatus($String* printerName, int32_t type);
	$floats* getMediaPrintableArea($String* printerName, int32_t paperSize);
	$Array<::javax::print::attribute::standard::MediaPrintableArea>* getMediaPrintables(::javax::print::attribute::standard::MediaSizeName* msn);
	$Array<::javax::print::attribute::standard::MediaSize>* getMediaSizes(::java::util::ArrayList* idList, $ints* media, ::java::util::ArrayList* dmPaperNameList);
	$Array<::javax::print::attribute::standard::MediaTray>* getMediaTrays();
	virtual $String* getName() override;
	$String* getPort();
	$Array<::javax::print::attribute::standard::PrinterResolution>* getPrintResolutions();
	int32_t getPrinterCapabilities();
	::javax::print::attribute::standard::PrinterIsAcceptingJobs* getPrinterIsAcceptingJobs();
	::javax::print::attribute::standard::PrinterName* getPrinterName();
	$String* getPrinterPort($String* printerName);
	::javax::print::attribute::standard::PrinterState* getPrinterState();
	::javax::print::attribute::standard::PrinterStateReasons* getPrinterStateReasons();
	::javax::print::attribute::standard::QueuedJobCount* getQueuedJobCount();
	virtual ::javax::print::ServiceUIFactory* getServiceUIFactory() override;
	virtual $ClassArray* getSupportedAttributeCategories() override;
	virtual $Object* getSupportedAttributeValues($Class* category, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual $Array<::javax::print::DocFlavor>* getSupportedDocFlavors() override;
	virtual ::javax::print::attribute::AttributeSet* getUnsupportedAttributes(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getUpdatedAttributes() override;
	virtual int32_t hashCode() override;
	void initMedia();
	virtual void invalidateService();
	virtual bool isAttributeCategorySupported($Class* category) override;
	virtual bool isAttributeValueSupported(::javax::print::attribute::Attribute* attr, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	bool isAutoSense(::javax::print::DocFlavor* flavor);
	virtual bool isDocFlavorSupported(::javax::print::DocFlavor* flavor) override;
	bool isPSDocAttr($Class* category);
	bool isPostScriptFlavor(::javax::print::DocFlavor* flavor);
	bool isSameSize(float w1, float h1, float w2, float h2);
	bool isSupportedCopies(::javax::print::attribute::standard::Copies* copies);
	bool isSupportedMedia(::javax::print::attribute::standard::MediaSizeName* msn);
	bool isSupportedMediaPrintableArea(::javax::print::attribute::standard::MediaPrintableArea* mpa);
	bool isSupportedMediaTray(::javax::print::attribute::standard::MediaTray* msn);
	bool isSupportedResolution(::javax::print::attribute::standard::PrinterResolution* res);
	virtual void removePrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) override;
	virtual $String* toString() override;
	virtual bool usesClass($Class* c) override;
	virtual void wakeNotifier();
	static $Array<::javax::print::attribute::standard::MediaSize>* predefMedia;
	static $Array<::javax::print::DocFlavor>* supportedFlavors;
	static $ClassArray* serviceAttrCats;
	static $ClassArray* otherAttrCats;
	static $Array<::javax::print::attribute::standard::MediaSizeName>* dmPaperToPrintService;
	static $Array<::javax::print::attribute::standard::MediaTray>* dmPaperBinToPrintService;
	static int32_t DM_PAPERSIZE;
	static int32_t DM_PRINTQUALITY;
	static int32_t DM_YRESOLUTION;
	static const int32_t DMRES_MEDIUM = (-3);
	static const int32_t DMRES_HIGH = (-4);
	static const int32_t DMORIENT_LANDSCAPE = 2;
	static const int32_t DMDUP_VERTICAL = 2;
	static const int32_t DMDUP_HORIZONTAL = 3;
	static const int32_t DMCOLLATE_TRUE = 1;
	static const int32_t DMCOLOR_MONOCHROME = 1;
	static const int32_t DMCOLOR_COLOR = 2;
	static const int32_t DMPAPER_A2 = 66;
	static const int32_t DMPAPER_A6 = 70;
	static const int32_t DMPAPER_B6_JIS = 88;
	static const int32_t DEVCAP_COLOR = 1;
	static const int32_t DEVCAP_DUPLEX = 2;
	static const int32_t DEVCAP_COLLATE = 4;
	static const int32_t DEVCAP_QUALITY = 8;
	static const int32_t DEVCAP_POSTSCRIPT = 16;
	$String* printer = nullptr;
	::javax::print::attribute::standard::PrinterName* name = nullptr;
	$String* port = nullptr;
	::javax::print::attribute::PrintServiceAttributeSet* lastSet = nullptr;
	::sun::print::ServiceNotifier* notifier = nullptr;
	$Array<::javax::print::attribute::standard::MediaSizeName>* mediaSizeNames = nullptr;
	$Array<::javax::print::attribute::standard::MediaPrintableArea>* mediaPrintables = nullptr;
	$Array<::javax::print::attribute::standard::MediaTray>* mediaTrays = nullptr;
	$Array<::javax::print::attribute::standard::PrinterResolution>* printRes = nullptr;
	::java::util::HashMap* mpaMap = nullptr;
	int32_t nCopies = 0;
	int32_t prnCaps = 0;
	$ints* defaultSettings = nullptr;
	bool gotTrays = false;
	bool gotCopies = false;
	bool mediaInitialized = false;
	bool mpaListInitialized = false;
	::java::util::ArrayList* idList = nullptr;
	$Array<::javax::print::attribute::standard::MediaSize>* mediaSizes = nullptr;
	bool isInvalid = false;
	::sun::print::Win32PrintService$Win32DocumentPropertiesUI* docPropertiesUI = nullptr;
	::sun::print::Win32PrintService$Win32ServiceUIFactory* uiFactory = nullptr;
};

	} // print
} // sun

#pragma pop_macro("DEVCAP_COLLATE")
#pragma pop_macro("DEVCAP_COLOR")
#pragma pop_macro("DEVCAP_DUPLEX")
#pragma pop_macro("DEVCAP_POSTSCRIPT")
#pragma pop_macro("DEVCAP_QUALITY")
#pragma pop_macro("DMCOLLATE_TRUE")
#pragma pop_macro("DMCOLOR_COLOR")
#pragma pop_macro("DMCOLOR_MONOCHROME")
#pragma pop_macro("DMDUP_HORIZONTAL")
#pragma pop_macro("DMDUP_VERTICAL")
#pragma pop_macro("DMORIENT_LANDSCAPE")
#pragma pop_macro("DMPAPER_A2")
#pragma pop_macro("DMPAPER_A6")
#pragma pop_macro("DMPAPER_B6_JIS")
#pragma pop_macro("DMRES_HIGH")
#pragma pop_macro("DMRES_MEDIUM")
#pragma pop_macro("DM_PAPERSIZE")
#pragma pop_macro("DM_PRINTQUALITY")
#pragma pop_macro("DM_YRESOLUTION")

#endif // _sun_print_Win32PrintService_h_