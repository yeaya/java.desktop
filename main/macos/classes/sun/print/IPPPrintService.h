#ifndef _sun_print_IPPPrintService_h_
#define _sun_print_IPPPrintService_h_
//$ class sun.print.IPPPrintService
//$ extends javax.print.PrintService
//$ implements sun.print.SunPrinterJobService

#include <java/lang/Array.h>
#include <javax/print/PrintService.h>
#include <sun/print/SunPrinterJobService.h>

#pragma push_macro("FORCE_PIPE_PROP")
#undef FORCE_PIPE_PROP
#pragma push_macro("GRPTAG_END_ATTRIBUTES")
#undef GRPTAG_END_ATTRIBUTES
#pragma push_macro("GRPTAG_JOB_ATTRIBUTES")
#undef GRPTAG_JOB_ATTRIBUTES
#pragma push_macro("GRPTAG_OP_ATTRIBUTES")
#undef GRPTAG_OP_ATTRIBUTES
#pragma push_macro("GRPTAG_PRINTER_ATTRIBUTES")
#undef GRPTAG_PRINTER_ATTRIBUTES
#pragma push_macro("MAXCOPIES")
#undef MAXCOPIES
#pragma push_macro("MAX_ATTRIBUTE_LENGTH")
#undef MAX_ATTRIBUTE_LENGTH
#pragma push_macro("OP_CUPS_GET_DEFAULT")
#undef OP_CUPS_GET_DEFAULT
#pragma push_macro("OP_CUPS_GET_PRINTERS")
#undef OP_CUPS_GET_PRINTERS
#pragma push_macro("OP_GET_ATTRIBUTES")
#undef OP_GET_ATTRIBUTES
#pragma push_macro("STATUSCODE_SUCCESS")
#undef STATUSCODE_SUCCESS

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace net {
		class HttpURLConnection;
		class URI;
		class URL;
	}
}
namespace java {
	namespace util {
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
				class Media;
				class MediaSizeName;
				class MediaTray;
				class PrinterResolution;
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
		class AttributeClass;
		class CUPSPrinter;
		class CustomMediaSizeName;
		class ServiceNotifier;
	}
}

namespace sun {
	namespace print {

class IPPPrintService : public ::javax::print::PrintService, public ::sun::print::SunPrinterJobService {
	$class(IPPPrintService, 0, ::javax::print::PrintService, ::sun::print::SunPrinterJobService)
public:
	IPPPrintService();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* name, ::java::net::URL* url);
	void init$($String* name, $String* uriStr, bool isCups);
	virtual void addPrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) override;
	virtual ::javax::print::DocPrintJob* createPrintJob() override;
	static void debug_println($String* str);
	virtual bool equals(Object$* obj) override;
	virtual ::sun::print::CustomMediaSizeName* findCustomMedia(::javax::print::attribute::standard::MediaSizeName* media);
	virtual ::javax::print::attribute::PrintServiceAttribute* getAttribute($Class* category) override;
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getAttributes() override;
	virtual $Object* getDefaultAttributeValue($Class* category) override;
	virtual $String* getDest();
	static ::java::net::HttpURLConnection* getIPPConnection(::java::net::URL* url);
	::javax::print::attribute::standard::Media* getIPPMedia($String* mediaName);
	virtual $String* getName() override;
	$Array<::javax::print::attribute::standard::PrinterResolution>* getPrintResolutions();
	virtual ::javax::print::ServiceUIFactory* getServiceUIFactory() override;
	virtual $ClassArray* getSupportedAttributeCategories() override;
	virtual $Object* getSupportedAttributeValues($Class* category, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual $Array<::javax::print::DocFlavor>* getSupportedDocFlavors() override;
	$Array<::javax::print::attribute::standard::Media>* getSupportedMedia();
	virtual ::javax::print::attribute::AttributeSet* getUnsupportedAttributes(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	virtual int32_t hashCode() override;
	void initAttributes();
	virtual bool isAttributeCategorySupported($Class* category) override;
	virtual bool isAttributeValueSupported(::javax::print::attribute::Attribute* attr, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes) override;
	bool isAutoSense(::javax::print::DocFlavor* flavor);
	bool isDestinationSupported(::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* attributes);
	virtual bool isDocFlavorSupported(::javax::print::DocFlavor* flavor) override;
	virtual bool isIPPSupportedImages($String* mimeType);
	virtual bool isPostscript();
	bool isSupportedCopies(::javax::print::attribute::standard::Copies* copies);
	bool isSupportedMedia(::javax::print::attribute::standard::MediaSizeName* msn);
	bool isSupportedMediaTray(::javax::print::attribute::standard::MediaTray* msn);
	bool isSupportedResolution(::javax::print::attribute::standard::PrinterResolution* res);
	void opGetAttributes();
	static $Array<::java::util::HashMap>* readIPPResponse(::java::io::InputStream* inputStream);
	virtual void removePrintServiceAttributeListener(::javax::print::event::PrintServiceAttributeListener* listener) override;
	static $String* toHex(int8_t v);
	virtual $String* toString() override;
	virtual bool usesClass($Class* c) override;
	virtual void wakeNotifier();
	static bool writeIPPRequest(::java::io::OutputStream* os, $String* operCode, $Array<::sun::print::AttributeClass>* attCl);
	static bool debugPrint;
	static $String* debugPrefix;
	static $String* FORCE_PIPE_PROP;
	$String* printer = nullptr;
	::java::net::URI* myURI = nullptr;
	::java::net::URL* myURL = nullptr;
	::sun::print::ServiceNotifier* notifier = nullptr;
	static int32_t MAXCOPIES;
	static int16_t MAX_ATTRIBUTE_LENGTH;
	::sun::print::CUPSPrinter* cps = nullptr;
	::java::net::HttpURLConnection* urlConnection = nullptr;
	$Array<::javax::print::DocFlavor>* supportedDocFlavors = nullptr;
	$ClassArray* supportedCats = nullptr;
	$Array<::javax::print::attribute::standard::MediaTray>* mediaTrays = nullptr;
	$Array<::javax::print::attribute::standard::MediaSizeName>* mediaSizeNames = nullptr;
	$Array<::sun::print::CustomMediaSizeName>* customMediaSizeNames = nullptr;
	int32_t defaultMediaIndex = 0;
	$ints* rawResolutions = nullptr;
	$Array<::javax::print::attribute::standard::PrinterResolution>* printerResolutions = nullptr;
	bool isCupsPrinter = false;
	bool init = false;
	::java::lang::Boolean* isPS = nullptr;
	::java::util::HashMap* getAttMap = nullptr;
	bool pngImagesAdded = false;
	bool gifImagesAdded = false;
	bool jpgImagesAdded = false;
	static const int8_t STATUSCODE_SUCCESS = 0;
	static const int8_t GRPTAG_OP_ATTRIBUTES = 1;
	static const int8_t GRPTAG_JOB_ATTRIBUTES = 2;
	static const int8_t GRPTAG_PRINTER_ATTRIBUTES = 4;
	static const int8_t GRPTAG_END_ATTRIBUTES = 3;
	static $String* OP_GET_ATTRIBUTES;
	static $String* OP_CUPS_GET_DEFAULT;
	static $String* OP_CUPS_GET_PRINTERS;
	static $ObjectArray* printReqAttribDefault;
	static $Array<::java::lang::Object, 2>* serviceAttributes;
	static $Array<::javax::print::DocFlavor>* appPDF;
	static $Array<::javax::print::DocFlavor>* appPostScript;
	static $Array<::javax::print::DocFlavor>* appOctetStream;
	static $Array<::javax::print::DocFlavor>* textPlain;
	static $Array<::javax::print::DocFlavor>* textPlainHost;
	static $Array<::javax::print::DocFlavor>* imageJPG;
	static $Array<::javax::print::DocFlavor>* imageGIF;
	static $Array<::javax::print::DocFlavor>* imagePNG;
	static $Array<::javax::print::DocFlavor>* textHtml;
	static $Array<::javax::print::DocFlavor>* textHtmlHost;
	static $Array<::javax::print::DocFlavor>* appPCL;
	static $ObjectArray* allDocFlavors;
};

	} // print
} // sun

#pragma pop_macro("FORCE_PIPE_PROP")
#pragma pop_macro("GRPTAG_END_ATTRIBUTES")
#pragma pop_macro("GRPTAG_JOB_ATTRIBUTES")
#pragma pop_macro("GRPTAG_OP_ATTRIBUTES")
#pragma pop_macro("GRPTAG_PRINTER_ATTRIBUTES")
#pragma pop_macro("MAXCOPIES")
#pragma pop_macro("MAX_ATTRIBUTE_LENGTH")
#pragma pop_macro("OP_CUPS_GET_DEFAULT")
#pragma pop_macro("OP_CUPS_GET_PRINTERS")
#pragma pop_macro("OP_GET_ATTRIBUTES")
#pragma pop_macro("STATUSCODE_SUCCESS")

#endif // _sun_print_IPPPrintService_h_