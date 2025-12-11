#ifndef _sun_print_CUPSPrinter_h_
#define _sun_print_CUPSPrinter_h_
//$ class sun.print.CUPSPrinter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PRINTER_DPI")
#undef PRINTER_DPI

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class MediaPrintableArea;
				class MediaSizeName;
				class MediaTray;
			}
		}
	}
}
namespace sun {
	namespace print {
		class CustomMediaSizeName;
	}
}

namespace sun {
	namespace print {

class CUPSPrinter : public ::java::lang::Object {
	$class(CUPSPrinter, 0, ::java::lang::Object)
public:
	CUPSPrinter();
	void init$($String* printerName);
	static bool canConnect($String* server, int32_t port);
	static $StringArray* getAllPrinters();
	static $String* getCupsDefaultPrinter();
	static int32_t getCupsPort();
	static $String* getCupsServer();
	virtual $Array<::sun::print::CustomMediaSizeName>* getCustomMediaSizeNames();
	virtual int32_t getDefaultMediaIndex();
	static $StringArray* getDefaultPrinter();
	static $StringArray* getMedia($String* printer);
	virtual $Array<::javax::print::attribute::standard::MediaPrintableArea>* getMediaPrintableArea();
	virtual $Array<::javax::print::attribute::standard::MediaSizeName>* getMediaSizeNames();
	virtual $Array<::javax::print::attribute::standard::MediaTray>* getMediaTrays();
	static $floats* getPageSizes($String* printer);
	static int32_t getPort();
	virtual $ints* getRawResolutions();
	static void getResolutions($String* printer, ::java::util::ArrayList* resolutionList);
	static $String* getServer();
	static bool initIDs();
	void initMedia();
	static bool isCupsRunning();
	static bool $assertionsDisabled;
	static $String* debugPrefix;
	static double PRINTER_DPI;
	bool initialized = false;
	$Array<::javax::print::attribute::standard::MediaPrintableArea>* cupsMediaPrintables = nullptr;
	$Array<::javax::print::attribute::standard::MediaSizeName>* cupsMediaSNames = nullptr;
	$Array<::sun::print::CustomMediaSizeName>* cupsCustomMediaSNames = nullptr;
	$Array<::javax::print::attribute::standard::MediaTray>* cupsMediaTrays = nullptr;
	int32_t nPageSizes = 0;
	int32_t nTrays = 0;
	$StringArray* media = nullptr;
	$floats* pageSizes = nullptr;
	$ints* resolutionsArray = nullptr;
	$String* printer = nullptr;
	static bool libFound;
	static $String* cupsServer;
	static int32_t cupsPort;
};

	} // print
} // sun

#pragma pop_macro("PRINTER_DPI")

#endif // _sun_print_CUPSPrinter_h_