#ifndef _sun_awt_windows_WPrinterJob_h_
#define _sun_awt_windows_WPrinterJob_h_
//$ class sun.awt.windows.WPrinterJob
//$ extends sun.print.RasterPrinterJob
//$ implements sun.java2d.DisposerTarget

#include <java/lang/Array.h>
#include <sun/java2d/DisposerTarget.h>
#include <sun/print/RasterPrinterJob.h>

#pragma push_macro("DMCOLLATE_FALSE")
#undef DMCOLLATE_FALSE
#pragma push_macro("DMCOLLATE_TRUE")
#undef DMCOLLATE_TRUE
#pragma push_macro("DMCOLOR_COLOR")
#undef DMCOLOR_COLOR
#pragma push_macro("DMCOLOR_MONOCHROME")
#undef DMCOLOR_MONOCHROME
#pragma push_macro("DMDUP_HORIZONTAL")
#undef DMDUP_HORIZONTAL
#pragma push_macro("DMDUP_SIMPLEX")
#undef DMDUP_SIMPLEX
#pragma push_macro("DMDUP_VERTICAL")
#undef DMDUP_VERTICAL
#pragma push_macro("DMORIENT_LANDSCAPE")
#undef DMORIENT_LANDSCAPE
#pragma push_macro("DMORIENT_PORTRAIT")
#undef DMORIENT_PORTRAIT
#pragma push_macro("DMRES_DRAFT")
#undef DMRES_DRAFT
#pragma push_macro("DMRES_HIGH")
#undef DMRES_HIGH
#pragma push_macro("DMRES_LOW")
#undef DMRES_LOW
#pragma push_macro("DMRES_MEDIUM")
#undef DMRES_MEDIUM
#pragma push_macro("DM_COLLATE")
#undef DM_COLLATE
#pragma push_macro("DM_COLOR")
#undef DM_COLOR
#pragma push_macro("DM_COPIES")
#undef DM_COPIES
#pragma push_macro("DM_DEFAULTSOURCE")
#undef DM_DEFAULTSOURCE
#pragma push_macro("DM_DUPLEX")
#undef DM_DUPLEX
#pragma push_macro("DM_ORIENTATION")
#undef DM_ORIENTATION
#pragma push_macro("DM_PAPERSIZE")
#undef DM_PAPERSIZE
#pragma push_macro("DM_PRINTQUALITY")
#undef DM_PRINTQUALITY
#pragma push_macro("DM_YRESOLUTION")
#undef DM_YRESOLUTION
#pragma push_macro("MAX_UNKNOWN_PAGES")
#undef MAX_UNKNOWN_PAGES
#pragma push_macro("MAX_WCOLOR")
#undef MAX_WCOLOR
#pragma push_macro("PD_COLLATE")
#undef PD_COLLATE
#pragma push_macro("PD_PRINTTOFILE")
#undef PD_PRINTTOFILE
#pragma push_macro("POLYFILL_ALTERNATE")
#undef POLYFILL_ALTERNATE
#pragma push_macro("POLYFILL_WINDING")
#undef POLYFILL_WINDING
#pragma push_macro("PS_ENDCAP_FLAT")
#undef PS_ENDCAP_FLAT
#pragma push_macro("PS_ENDCAP_ROUND")
#undef PS_ENDCAP_ROUND
#pragma push_macro("PS_ENDCAP_SQUARE")
#undef PS_ENDCAP_SQUARE
#pragma push_macro("PS_JOIN_BEVEL")
#undef PS_JOIN_BEVEL
#pragma push_macro("PS_JOIN_MITER")
#undef PS_JOIN_MITER
#pragma push_macro("PS_JOIN_ROUND")
#undef PS_JOIN_ROUND
#pragma push_macro("SET_COLLATED")
#undef SET_COLLATED
#pragma push_macro("SET_COLOR")
#undef SET_COLOR
#pragma push_macro("SET_DUP_HORIZONTAL")
#undef SET_DUP_HORIZONTAL
#pragma push_macro("SET_DUP_VERTICAL")
#undef SET_DUP_VERTICAL
#pragma push_macro("SET_ORIENTATION")
#undef SET_ORIENTATION
#pragma push_macro("SET_RES_HIGH")
#undef SET_RES_HIGH
#pragma push_macro("SET_RES_LOW")
#undef SET_RES_LOW

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class IndexColorModel;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
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
			class Attribute;
			class PrintRequestAttributeSet;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WPrinterJob$DevModeValues;
			class WPrinterJob$HandleRecord;
		}
	}
}
namespace sun {
	namespace print {
		class PeekGraphics;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WPrinterJob : public ::sun::print::RasterPrinterJob, public ::sun::java2d::DisposerTarget {
	$class(WPrinterJob, 0, ::sun::print::RasterPrinterJob, ::sun::java2d::DisposerTarget)
public:
	WPrinterJob();
	using ::sun::print::RasterPrinterJob::defaultPage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	bool _startDoc($String* dest, $String* jobName);
	virtual void abortDoc() override;
	void addPaperSize(::javax::print::attribute::PrintRequestAttributeSet* aset, int32_t dmIndex, int32_t width, int32_t length);
	void beginPath();
	void beginPath(int64_t printDC);
	void closeFigure();
	void closeFigure(int64_t printDC);
	virtual ::java::awt::Graphics2D* createPathGraphics(::sun::print::PeekGraphics* peekGraphics, ::java::awt::print::PrinterJob* printerJob, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex) override;
	virtual ::java::awt::print::PageFormat* defaultPage(::java::awt::print::PageFormat* page) override;
	static void deleteDC(int64_t dc, int64_t devmode, int64_t devnames);
	void deviceEndPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index);
	void deviceStartPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index, bool paperChanged);
	bool displayNativeDialog();
	void drawDIBImage($bytes* image, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight, int32_t sampleBitsPerPixel, ::java::awt::image::IndexColorModel* icm);
	void drawDIBImage(int64_t printDC, $bytes* image, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight, int32_t bitCount, $bytes* bmiColors);
	void drawImage3ByteBGR($bytes* image, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight);
	virtual void endDoc() override;
	virtual void endPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index) override;
	void endPath();
	void endPath(int64_t printDC);
	void fillPath();
	void fillPath(int64_t printDC);
	void fillRect(float x, float y, float width, float height, ::java::awt::Color* color);
	void fillRect(int64_t printDC, float x, float y, float width, float height, int32_t red, int32_t green, int32_t blue);
	void frameRect(float x, float y, float width, float height);
	void frameRect(int64_t printDC, float x, float y, float width, float height);
	int32_t getCollateAttrib();
	virtual int32_t getCollatedCopies() override;
	int32_t getColorAttrib();
	int32_t getCopiesAttrib();
	void getDefaultPage(::java::awt::print::PageFormat* page);
	bool getDestAttrib();
	int64_t getDevMode();
	void getDevModeValues(::javax::print::attribute::PrintRequestAttributeSet* aset, ::sun::awt::windows::WPrinterJob$DevModeValues* info);
	int64_t getDevNames();
	virtual $Object* getDisposerReferent() override;
	int32_t getGDIAdvance($String* text);
	int32_t getGDIAdvance(int64_t printDC, $String* text);
	int32_t getMediaTrayAttrib();
	$String* getNativePrintService();
	virtual int32_t getNoncollatedCopies() override;
	int32_t getOrientAttrib();
	int32_t getPenX();
	int32_t getPenX(int64_t printDC);
	int32_t getPenY();
	int32_t getPenY(int64_t printDC);
	virtual double getPhysicalPageHeight(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPageWidth(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableHeight(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableWidth(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableX(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableY(::java::awt::print::Paper* p) override;
	int64_t getPrintDC();
	virtual ::javax::print::PrintService* getPrintService() override;
	bool getPrintToFileEnabled();
	$String* getPrinterAttrib();
	int32_t getQualityAttrib();
	int32_t getSidesAttrib();
	$ints* getWin32MediaAttrib();
	void getWorldTransform($doubles* transform);
	void getWorldTransform(int64_t printDC, $doubles* transform);
	virtual double getXRes() override;
	virtual double getYRes() override;
	void glyphsOut($ints* glyphs, float x, float y, $floats* positions);
	void initAttributeMembers();
	static void initIDs();
	virtual void initPrinter() override;
	void invalidateCachedState();
	virtual bool isCollated() override;
	bool jobSetup(::java::awt::print::Pageable* doc, bool allowPrintToFile);
	void lineTo(float x, float y);
	void lineTo(int64_t printDC, float x, float y);
	void moveTo(float x, float y);
	void moveTo(int64_t printDC, float x, float y);
	using ::sun::print::RasterPrinterJob::pageDialog;
	virtual ::java::awt::print::PageFormat* pageDialog(::java::awt::print::PageFormat* page) override;
	void polyBezierTo(float control1x, float control1y, float control2x, float control2y, float endX, float endY);
	void polyBezierTo(int64_t printDC, float control1x, float control1y, float control2x, float control2y, float endX, float endY);
	virtual void printBand($bytes* data, int32_t x, int32_t y, int32_t width, int32_t height) override;
	using ::sun::print::RasterPrinterJob::printDialog;
	virtual bool printDialog() override;
	virtual $String* removeControlChars($String* str) override;
	void restoreTransform();
	void scale(double scaleX, double scaleY);
	void scale(int64_t printDC, double scaleX, double scaleY);
	void scaleTransform(float scale);
	void selectClipPath();
	void selectClipPath(int64_t printDC);
	void selectPen(float width, ::java::awt::Color* color);
	void selectPen(int64_t printDC, float width, int32_t red, int32_t green, int32_t blue);
	void selectSolidBrush(::java::awt::Color* color);
	void selectSolidBrush(int64_t printDC, int32_t red, int32_t green, int32_t blue);
	bool selectStylePen(int32_t cap, int32_t join, float width, ::java::awt::Color* color);
	bool selectStylePen(int64_t printDC, int64_t cap, int64_t join, float width, int32_t red, int32_t green, int32_t blue);
	int32_t setAdvancedGraphicsMode();
	int32_t setAdvancedGraphicsMode(int64_t printDC);
	virtual void setAttributes(::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	void setCollateAttrib(::javax::print::attribute::Attribute* attr);
	void setCollateAttrib(::javax::print::attribute::Attribute* attr, ::javax::print::attribute::PrintRequestAttributeSet* set);
	void setColorAttrib(::javax::print::attribute::Attribute* attr);
	void setColorAttrib(::javax::print::attribute::Attribute* attr, ::javax::print::attribute::PrintRequestAttributeSet* set);
	virtual void setCopies(int32_t copies) override;
	void setDevMode(int64_t mPrintHDevMode);
	void setDevNames(int64_t mPrintHDevNames);
	bool setFont($String* family, float size, int32_t style, int32_t rotation, float awScale);
	bool setFont(int64_t printDC, $String* familyName, float fontSize, bool bold, bool italic, int32_t rotation, float awScale);
	void setGraphicsMode(int32_t mode);
	void setGraphicsMode(int64_t printDC, int32_t mode);
	void setJobAttributes(::javax::print::attribute::PrintRequestAttributeSet* attributes, int32_t fields, int32_t values, int16_t copies, int16_t dmPaperSize, int16_t dmPaperWidth, int16_t dmPaperLength, int16_t dmDefaultSource, int16_t xRes, int16_t yRes);
	void setMediaTrayAttrib(::javax::print::attribute::Attribute* attr);
	void setMediaTrayAttrib(int32_t dmBinID);
	void setNativeAttributes(int32_t flags, int32_t fields, int32_t values);
	void setNativeCopies(int32_t copies);
	void setNativePrintService($String* name);
	void setNativePrintServiceIfNeeded($String* name);
	void setOrientAttrib(::javax::print::attribute::Attribute* attr, ::javax::print::attribute::PrintRequestAttributeSet* set);
	void setPolyFillMode(int32_t fillRule);
	void setPolyFillMode(int64_t printDC, int32_t fillRule);
	void setPrintDC(int64_t mPrintDC);
	virtual void setPrintService(::javax::print::PrintService* service) override;
	void setPrinterNameAttrib($String* printerName);
	void setQualityAttrib(::javax::print::attribute::Attribute* attr);
	void setQualityAttrib(::javax::print::attribute::Attribute* attr, ::javax::print::attribute::PrintRequestAttributeSet* set);
	void setRangeCopiesAttribute(int32_t from, int32_t to, bool isRangeSet, int32_t copies);
	void setResolutionAttrib(::javax::print::attribute::Attribute* attr);
	void setResolutionDPI(int32_t xres, int32_t yres);
	void setSidesAttrib(::javax::print::attribute::Attribute* attr);
	void setSidesAttrib(::javax::print::attribute::Attribute* attr, ::javax::print::attribute::PrintRequestAttributeSet* set);
	void setTextColor(::java::awt::Color* color);
	void setTextColor(int64_t printDC, int32_t red, int32_t green, int32_t blue);
	void setWin32MediaAttrib(::javax::print::attribute::Attribute* attr);
	void setWin32MediaAttrib(int32_t dmIndex, int32_t width, int32_t length);
	void setWorldTransform($doubles* transform);
	void setWorldTransform(int64_t printDC, $doubles* transform);
	bool showDocProperties(int64_t hWnd, ::javax::print::attribute::PrintRequestAttributeSet* aset, int32_t dmFields, int16_t copies, int16_t collate, int16_t color, int16_t duplex, int16_t orient, int16_t paper, int16_t bin, int16_t xres_quality, int16_t yres);
	::javax::print::attribute::PrintRequestAttributeSet* showDocumentProperties(::java::awt::Window* owner, ::javax::print::PrintService* service, ::javax::print::attribute::PrintRequestAttributeSet* aset);
	virtual void startDoc() override;
	virtual void startPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index, bool paperChanged) override;
	void textOut($String* str, float x, float y, $floats* positions);
	void textOut(int64_t printDC, $String* text, int32_t strlen, bool glyphs, float x, float y, $floats* positions);
	virtual $String* toString() override;
	virtual void validatePaper(::java::awt::print::Paper* origPaper, ::java::awt::print::Paper* newPaper) override;
	static bool $assertionsDisabled;
	static const int64_t PS_ENDCAP_ROUND = 0;
	static const int64_t PS_ENDCAP_SQUARE = 256;
	static const int64_t PS_ENDCAP_FLAT = 512;
	static const int64_t PS_JOIN_ROUND = 0;
	static const int64_t PS_JOIN_BEVEL = 4096;
	static const int64_t PS_JOIN_MITER = 8192;
	static const int32_t POLYFILL_ALTERNATE = 1;
	static const int32_t POLYFILL_WINDING = 2;
	static const int32_t MAX_WCOLOR = 255;
	static const int32_t SET_DUP_VERTICAL = 16;
	static const int32_t SET_DUP_HORIZONTAL = 32;
	static const int32_t SET_RES_HIGH = 64;
	static const int32_t SET_RES_LOW = 128;
	static const int32_t SET_COLOR = 512;
	static const int32_t SET_ORIENTATION = 16384;
	static const int32_t SET_COLLATED = 32768;
	static const int32_t PD_COLLATE = 16;
	static const int32_t PD_PRINTTOFILE = 32;
	static const int32_t DM_ORIENTATION = 1;
	static const int32_t DM_PAPERSIZE = 2;
	static const int32_t DM_COPIES = 256;
	static const int32_t DM_DEFAULTSOURCE = 512;
	static const int32_t DM_PRINTQUALITY = 1024;
	static const int32_t DM_COLOR = 2048;
	static const int32_t DM_DUPLEX = 4096;
	static const int32_t DM_YRESOLUTION = 8192;
	static const int32_t DM_COLLATE = 32768;
	static const int16_t DMCOLLATE_FALSE = 0;
	static const int16_t DMCOLLATE_TRUE = 1;
	static const int16_t DMORIENT_PORTRAIT = 1;
	static const int16_t DMORIENT_LANDSCAPE = 2;
	static const int16_t DMCOLOR_MONOCHROME = 1;
	static const int16_t DMCOLOR_COLOR = 2;
	static const int16_t DMRES_DRAFT = (-1);
	static const int16_t DMRES_LOW = (-2);
	static const int16_t DMRES_MEDIUM = (-3);
	static const int16_t DMRES_HIGH = (-4);
	static const int16_t DMDUP_SIMPLEX = 1;
	static const int16_t DMDUP_VERTICAL = 2;
	static const int16_t DMDUP_HORIZONTAL = 3;
	static const int32_t MAX_UNKNOWN_PAGES = 9999;
	bool driverDoesMultipleCopies = false;
	bool driverDoesCollation = false;
	bool userRequestedCollation = false;
	bool noDefaultPrinter = false;
	::sun::awt::windows::WPrinterJob$HandleRecord* handleRecord = nullptr;
	int32_t mPrintPaperSize = 0;
	int32_t mPrintXRes = 0;
	int32_t mPrintYRes = 0;
	int32_t mPrintPhysX = 0;
	int32_t mPrintPhysY = 0;
	int32_t mPrintWidth = 0;
	int32_t mPrintHeight = 0;
	int32_t mPageWidth = 0;
	int32_t mPageHeight = 0;
	int32_t mAttSides = 0;
	int32_t mAttChromaticity = 0;
	int32_t mAttXRes = 0;
	int32_t mAttYRes = 0;
	int32_t mAttQuality = 0;
	int32_t mAttCollate = 0;
	int32_t mAttCopies = 0;
	int32_t mAttMediaSizeName = 0;
	int32_t mAttMediaTray = 0;
	$String* mDestination = nullptr;
	::java::awt::Color* mLastColor = nullptr;
	::java::awt::Color* mLastTextColor = nullptr;
	$String* mLastFontFamily = nullptr;
	float mLastFontSize = 0.0;
	int32_t mLastFontStyle = 0;
	int32_t mLastRotation = 0;
	float mLastAwScale = 0.0;
	::java::awt::print::PrinterJob* pjob = nullptr;
	::java::awt::peer::ComponentPeer* dialogOwnerPeer = nullptr;
	int32_t graphicsMode = 0;
	$doubles* worldTransform = nullptr;
	$Object* disposerReferent = nullptr;
	$String* lastNativeService = nullptr;
	bool defaultCopies = false;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("DMCOLLATE_FALSE")
#pragma pop_macro("DMCOLLATE_TRUE")
#pragma pop_macro("DMCOLOR_COLOR")
#pragma pop_macro("DMCOLOR_MONOCHROME")
#pragma pop_macro("DMDUP_HORIZONTAL")
#pragma pop_macro("DMDUP_SIMPLEX")
#pragma pop_macro("DMDUP_VERTICAL")
#pragma pop_macro("DMORIENT_LANDSCAPE")
#pragma pop_macro("DMORIENT_PORTRAIT")
#pragma pop_macro("DMRES_DRAFT")
#pragma pop_macro("DMRES_HIGH")
#pragma pop_macro("DMRES_LOW")
#pragma pop_macro("DMRES_MEDIUM")
#pragma pop_macro("DM_COLLATE")
#pragma pop_macro("DM_COLOR")
#pragma pop_macro("DM_COPIES")
#pragma pop_macro("DM_DEFAULTSOURCE")
#pragma pop_macro("DM_DUPLEX")
#pragma pop_macro("DM_ORIENTATION")
#pragma pop_macro("DM_PAPERSIZE")
#pragma pop_macro("DM_PRINTQUALITY")
#pragma pop_macro("DM_YRESOLUTION")
#pragma pop_macro("MAX_UNKNOWN_PAGES")
#pragma pop_macro("MAX_WCOLOR")
#pragma pop_macro("PD_COLLATE")
#pragma pop_macro("PD_PRINTTOFILE")
#pragma pop_macro("POLYFILL_ALTERNATE")
#pragma pop_macro("POLYFILL_WINDING")
#pragma pop_macro("PS_ENDCAP_FLAT")
#pragma pop_macro("PS_ENDCAP_ROUND")
#pragma pop_macro("PS_ENDCAP_SQUARE")
#pragma pop_macro("PS_JOIN_BEVEL")
#pragma pop_macro("PS_JOIN_MITER")
#pragma pop_macro("PS_JOIN_ROUND")
#pragma pop_macro("SET_COLLATED")
#pragma pop_macro("SET_COLOR")
#pragma pop_macro("SET_DUP_HORIZONTAL")
#pragma pop_macro("SET_DUP_VERTICAL")
#pragma pop_macro("SET_ORIENTATION")
#pragma pop_macro("SET_RES_HIGH")
#pragma pop_macro("SET_RES_LOW")

#endif // _sun_awt_windows_WPrinterJob_h_