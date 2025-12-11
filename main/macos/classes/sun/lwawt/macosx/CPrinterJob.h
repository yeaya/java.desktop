#ifndef _sun_lwawt_macosx_CPrinterJob_h_
#define _sun_lwawt_macosx_CPrinterJob_h_
//$ class sun.lwawt.macosx.CPrinterJob
//$ extends sun.print.RasterPrinterJob

#include <java/lang/Array.h>
#include <sun/print/RasterPrinterJob.h>

namespace java {
	namespace awt {
		class Font;
		class Graphics;
		class Graphics2D;
		class SecondaryLoop;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Pageable;
			class Paper;
			class Printable;
			class PrinterJob;
		}
	}
}
namespace javax {
	namespace print {
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class Media;
				class MediaPrintableArea;
				class MediaSize;
			}
		}
	}
}
namespace sun {
	namespace print {
		class PeekGraphics;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterJob : public ::sun::print::RasterPrinterJob {
	$class(CPrinterJob, $HAS_FINALIZE, ::sun::print::RasterPrinterJob)
public:
	CPrinterJob();
	using ::sun::print::RasterPrinterJob::defaultPage;
	using ::sun::print::RasterPrinterJob::getPageFormat;
	void init$();
	static void _safePrintLoop(int64_t target, int64_t arg);
	virtual void abortDoc() override;
	static bool access$002(::sun::lwawt::macosx::CPrinterJob* x0, bool x1);
	static void access$100(::sun::lwawt::macosx::CPrinterJob* x0, ::java::awt::Graphics2D* x1, ::java::awt::geom::Rectangle2D* x2);
	static ::java::awt::print::Pageable* access$200(::sun::lwawt::macosx::CPrinterJob* x0);
	static ::sun::print::PeekGraphics* access$300(::sun::lwawt::macosx::CPrinterJob* x0, ::java::awt::Graphics2D* x1, ::java::awt::print::PrinterJob* x2);
	static void access$400(::sun::lwawt::macosx::CPrinterJob* x0, ::java::awt::Graphics2D* x1, ::java::awt::geom::Rectangle2D* x2);
	bool cancelCheck();
	virtual void cancelDoc() override;
	void completePrintLoop();
	::sun::print::PeekGraphics* createFirstPassGraphics(::java::awt::print::PrinterJob* printerJob, ::java::awt::print::PageFormat* page);
	int64_t createNSPrintInfo();
	virtual ::java::awt::print::PageFormat* defaultPage(::java::awt::print::PageFormat* page) override;
	static void detachPrintLoop(int64_t target, int64_t arg);
	void dispose(int64_t printInfo);
	virtual void endDoc() override;
	virtual void endPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index) override;
	virtual void finalize() override;
	::javax::print::attribute::standard::MediaSize* getDefaultMediaSize(::java::awt::print::PageFormat* page);
	void getDefaultPage(::java::awt::print::PageFormat* page);
	virtual ::javax::print::attribute::standard::MediaPrintableArea* getDefaultPrintableArea(::java::awt::print::PageFormat* page, double w, double h) override;
	$String* getDestinationFile();
	virtual ::javax::print::attribute::standard::MediaSize* getMediaSize(::javax::print::attribute::standard::Media* media, ::javax::print::PrintService* service, ::java::awt::print::PageFormat* page) override;
	int64_t getNSPrintInfo();
	::java::awt::print::PageFormat* getPageFormat(int32_t pageIndex);
	::java::awt::geom::Rectangle2D* getPageFormatArea(::java::awt::print::PageFormat* page);
	$ObjectArray* getPageformatPrintablePeekgraphics(int32_t pageIndex);
	virtual double getPhysicalPageHeight(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPageWidth(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableHeight(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableWidth(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableX(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableY(::java::awt::print::Paper* p) override;
	::java::awt::print::Printable* getPrintable(int32_t pageIndex);
	$String* getPrinterName();
	$String* getPrinterTray();
	virtual double getXRes() override;
	virtual double getYRes() override;
	bool jobSetup(::java::awt::print::Pageable* doc, bool allowPrintToFile);
	static void lambda$detachPrintLoop$0(int64_t target, int64_t arg);
	using ::sun::print::RasterPrinterJob::pageDialog;
	virtual ::java::awt::print::PageFormat* pageDialog(::java::awt::print::PageFormat* page) override;
	bool pageSetup(::java::awt::print::PageFormat* page, ::java::awt::print::Printable* painter);
	using ::sun::print::RasterPrinterJob::print;
	virtual void print(::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	::java::awt::geom::Rectangle2D* printAndGetPageFormatArea(::java::awt::print::Printable* printable, ::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex);
	virtual void printBand($bytes* data, int32_t x, int32_t y, int32_t width, int32_t height) override;
	using ::sun::print::RasterPrinterJob::printDialog;
	virtual bool printDialog() override;
	bool printLoop(bool waitUntilDone, int32_t firstPage, int32_t lastPage);
	void printToPathGraphics(::sun::print::PeekGraphics* graphics, ::java::awt::print::PrinterJob* printerJob, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* page, int32_t pageIndex, int64_t context);
	virtual void setAttributes(::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	void setCopiesAttribute(int32_t copies);
	void setDestinationFile($String* dest);
	void setPageRangeAttribute(int32_t from, int32_t to, bool isRangeSet);
	void setPrintToFile(bool printToFile);
	void setPrinterServiceFromNative($String* printerName);
	virtual void startDoc() override;
	void startPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index);
	virtual void startPage(::java::awt::print::PageFormat* arg0, ::java::awt::print::Printable* arg1, int32_t arg2, bool arg3) override;
	virtual void validatePaper(::java::awt::print::Paper* origPaper, ::java::awt::print::Paper* newPaper) override;
	static $String* sShouldNotReachHere;
	$volatile(::java::awt::SecondaryLoop*) printingLoop = nullptr;
	bool noDefaultPrinter = false;
	static ::java::awt::Font* defaultFont;
	$String* tray = nullptr;
	int64_t fNSPrintInfo = 0;
	$Object* fNSPrintInfoLock = nullptr;
	$volatile(bool) onEventThread = false;
	bool isPrintToFile = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterJob_h_