#ifndef _sun_print_RasterPrinterJob_h_
#define _sun_print_RasterPrinterJob_h_
//$ class sun.print.RasterPrinterJob
//$ extends java.awt.print.PrinterJob

#include <java/awt/print/PrinterJob.h>
#include <java/lang/Array.h>

#pragma push_macro("DPI")
#undef DPI
#pragma push_macro("FILE")
#undef FILE
#pragma push_macro("FORCE_PDL")
#undef FORCE_PDL
#pragma push_macro("FORCE_PIPE_PROP")
#undef FORCE_PIPE_PROP
#pragma push_macro("FORCE_RASTER")
#undef FORCE_RASTER
#pragma push_macro("MAX_BAND_SIZE")
#undef MAX_BAND_SIZE
#pragma push_macro("MAX_UNKNOWN_PAGES")
#undef MAX_UNKNOWN_PAGES
#pragma push_macro("PD_ALLPAGES")
#undef PD_ALLPAGES
#pragma push_macro("PD_NOSELECTION")
#undef PD_NOSELECTION
#pragma push_macro("PD_PAGENUMS")
#undef PD_PAGENUMS
#pragma push_macro("PD_SELECTION")
#undef PD_SELECTION
#pragma push_macro("PRINTER")
#undef PRINTER
#pragma push_macro("SHAPE_TEXT_PROP")
#undef SHAPE_TEXT_PROP
#pragma push_macro("STREAM")
#undef STREAM

namespace java {
	namespace awt {
		class Graphics2D;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
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
		}
	}
}
namespace java {
	namespace io {
		class FilePermission;
	}
}
namespace java {
	namespace util {
		class ArrayList;
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
			class Attribute;
			class PrintRequestAttributeSet;
		}
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class DialogOwner;
				class Media;
				class MediaPrintableArea;
				class MediaSize;
				class PageRanges;
				class PrinterResolution;
				class Sides;
			}
		}
	}
}
namespace sun {
	namespace print {
		class PeekGraphics;
		class PrinterGraphicsConfig;
	}
}

namespace sun {
	namespace print {

class RasterPrinterJob : public ::java::awt::print::PrinterJob {
	$class(RasterPrinterJob, 0, ::java::awt::print::PrinterJob)
public:
	RasterPrinterJob();
	using ::java::awt::print::PrinterJob::defaultPage;
	void init$();
	virtual void abortDoc() {}
	::java::awt::print::PageFormat* attributeToPageFormat(::javax::print::PrintService* service, ::javax::print::attribute::PrintRequestAttributeSet* attSet);
	virtual void cancel() override;
	virtual void cancelDoc();
	virtual bool checkAllowedToPrintToFile();
	void clearParentWindowID();
	virtual ::java::awt::Graphics2D* createPathGraphics(::sun::print::PeekGraphics* graphics, ::java::awt::print::PrinterJob* printerJob, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex);
	virtual ::sun::print::PeekGraphics* createPeekGraphics(::java::awt::Graphics2D* graphics, ::java::awt::print::PrinterJob* printerJob);
	virtual void debug_println($String* str);
	virtual ::java::awt::print::PageFormat* defaultPage(::java::awt::print::PageFormat* page) override;
	virtual void endDoc() {}
	virtual void endPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index) {}
	virtual int32_t getCollatedCopies();
	virtual int32_t getCopies() override;
	virtual int32_t getCopiesInt();
	virtual ::javax::print::attribute::standard::MediaPrintableArea* getDefaultPrintableArea(::java::awt::print::PageFormat* page, double w, double h);
	virtual int32_t getFirstPage();
	int32_t getFromPageAttrib();
	virtual $String* getJobName() override;
	virtual $String* getJobNameInt();
	virtual int32_t getLastPage();
	int32_t getMaxPageAttrib();
	virtual ::javax::print::attribute::standard::MediaSize* getMediaSize(::javax::print::attribute::standard::Media* media, ::javax::print::PrintService* service, ::java::awt::print::PageFormat* page);
	int32_t getMinPageAttrib();
	virtual int32_t getNoncollatedCopies();
	virtual ::java::awt::print::PageFormat* getPageFormatFromAttributes();
	virtual ::java::awt::print::Pageable* getPageable();
	int64_t getParentWindowID();
	virtual double getPhysicalPageHeight(::java::awt::print::Paper* p) {return 0.0;}
	virtual double getPhysicalPageWidth(::java::awt::print::Paper* p) {return 0.0;}
	virtual double getPhysicalPrintableHeight(::java::awt::print::Paper* p) {return 0.0;}
	virtual double getPhysicalPrintableWidth(::java::awt::print::Paper* p) {return 0.0;}
	virtual double getPhysicalPrintableX(::java::awt::print::Paper* p) {return 0.0;}
	virtual double getPhysicalPrintableY(::java::awt::print::Paper* p) {return 0.0;}
	virtual ::javax::print::PrintService* getPrintService() override;
	virtual ::sun::print::PrinterGraphicsConfig* getPrinterGraphicsConfig();
	int32_t getSelectAttrib();
	int32_t getToPageAttrib();
	virtual $String* getUserName() override;
	virtual $String* getUserNameInt();
	virtual double getXRes() {return 0.0;}
	virtual double getYRes() {return 0.0;}
	virtual void initPrinter();
	virtual void initPrinterGraphics(::java::awt::Graphics2D* g, ::java::awt::geom::Rectangle2D* clip);
	virtual bool isCancelled() override;
	virtual bool isCollated();
	virtual bool isSupportedValue(::javax::print::attribute::Attribute* attrval, ::javax::print::attribute::PrintRequestAttributeSet* attrset);
	static ::javax::print::PrintService* lookupDefaultPrintService();
	virtual ::java::awt::print::PageFormat* pageDialog(::java::awt::print::PageFormat* page) override;
	virtual ::java::awt::print::PageFormat* pageDialog(::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	virtual void print() override;
	virtual void print(::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	virtual void printBand($bytes* data, int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual bool printDialog(::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	virtual bool printDialog() override;
	virtual int32_t printPage(::java::awt::print::Pageable* document, int32_t pageIndex);
	virtual $String* removeControlChars($String* s);
	virtual void saveState(::java::awt::geom::AffineTransform* at, ::java::awt::Shape* clip, ::java::awt::geom::Rectangle2D* region, double sx, double sy);
	virtual void setAttributes(::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual void setCollated(bool collate);
	virtual void setCopies(int32_t copies) override;
	virtual void setGraphicsConfigInfo(::java::awt::geom::AffineTransform* at, double pw, double ph);
	virtual void setJobName($String* jobName) override;
	virtual void setPageRange(int32_t firstPage, int32_t lastPage);
	virtual void setPageable(::java::awt::print::Pageable* document) override;
	void setParentWindowID(::javax::print::attribute::PrintRequestAttributeSet* attrs);
	virtual void setPrintService(::javax::print::PrintService* service) override;
	virtual void setPrintable(::java::awt::print::Printable* painter) override;
	virtual void setPrintable(::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* format) override;
	virtual void setXYRes(double x, double y);
	virtual void spoolToService(::javax::print::PrintService* psvc, ::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual void startDoc() {}
	virtual void startPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index, bool paperChanged) {}
	void throwPrintToFile();
	virtual void updateAttributesWithPageFormat(::javax::print::PrintService* service, ::java::awt::print::PageFormat* page, ::javax::print::attribute::PrintRequestAttributeSet* pageAttributes);
	virtual void updatePageAttributes(::javax::print::PrintService* service, ::java::awt::print::PageFormat* page);
	virtual void validateDestination($String* dest);
	virtual ::java::awt::print::PageFormat* validatePage(::java::awt::print::PageFormat* page) override;
	virtual void validatePaper(::java::awt::print::Paper* origPaper, ::java::awt::print::Paper* newPaper);
	static const int32_t PRINTER = 0;
	static const int32_t FILE = 1;
	static const int32_t STREAM = 2;
	static const int32_t MAX_UNKNOWN_PAGES = 9999;
	static const int32_t PD_ALLPAGES = 0;
	static const int32_t PD_SELECTION = 1;
	static const int32_t PD_PAGENUMS = 2;
	static const int32_t PD_NOSELECTION = 4;
	static const int32_t MAX_BAND_SIZE = (1024 * 1024 * 4);
	static float DPI;
	static $String* FORCE_PIPE_PROP;
	static $String* FORCE_RASTER;
	static $String* FORCE_PDL;
	static $String* SHAPE_TEXT_PROP;
	static bool forcePDL;
	static bool forceRaster;
	static bool shapeTextProp;
	int32_t cachedBandWidth = 0;
	int32_t cachedBandHeight = 0;
	::java::awt::image::BufferedImage* cachedBand = nullptr;
	int32_t mNumCopies = 0;
	bool mCollate = false;
	int32_t mFirstPage = 0;
	int32_t mLastPage = 0;
	::java::awt::print::Paper* previousPaper = nullptr;
	::java::awt::print::Pageable* mDocument = nullptr;
	$String* mDocName = nullptr;
	bool performingPrinting = false;
	bool userCancelled = false;
	::java::io::FilePermission* printToFilePermission = nullptr;
	::java::util::ArrayList* redrawList = nullptr;
	int32_t copiesAttr = 0;
	$String* jobNameAttr = nullptr;
	$String* userNameAttr = nullptr;
	::javax::print::attribute::standard::PageRanges* pageRangesAttr = nullptr;
	::javax::print::attribute::standard::PrinterResolution* printerResAttr = nullptr;
	::javax::print::attribute::standard::Sides* sidesAttr = nullptr;
	$String* destinationAttr = nullptr;
	bool noJobSheet = false;
	int32_t mDestType = 0;
	$String* mDestination = nullptr;
	bool collateAttReq = false;
	bool landscapeRotates270 = false;
	::javax::print::attribute::PrintRequestAttributeSet* attributes = nullptr;
	::javax::print::PrintService* myService = nullptr;
	static bool debugPrint;
	int32_t deviceWidth = 0;
	int32_t deviceHeight = 0;
	::java::awt::geom::AffineTransform* defaultDeviceTransform = nullptr;
	::sun::print::PrinterGraphicsConfig* pgConfig = nullptr;
	::javax::print::attribute::standard::DialogOwner* onTop = nullptr;
	int64_t parentWindowID = 0;
};

	} // print
} // sun

#pragma pop_macro("DPI")
#pragma pop_macro("FILE")
#pragma pop_macro("FORCE_PDL")
#pragma pop_macro("FORCE_PIPE_PROP")
#pragma pop_macro("FORCE_RASTER")
#pragma pop_macro("MAX_BAND_SIZE")
#pragma pop_macro("MAX_UNKNOWN_PAGES")
#pragma pop_macro("PD_ALLPAGES")
#pragma pop_macro("PD_NOSELECTION")
#pragma pop_macro("PD_PAGENUMS")
#pragma pop_macro("PD_SELECTION")
#pragma pop_macro("PRINTER")
#pragma pop_macro("SHAPE_TEXT_PROP")
#pragma pop_macro("STREAM")

#endif // _sun_print_RasterPrinterJob_h_