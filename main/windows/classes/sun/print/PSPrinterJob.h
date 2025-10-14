#ifndef _sun_print_PSPrinterJob_h_
#define _sun_print_PSPrinterJob_h_
//$ class sun.print.PSPrinterJob
//$ extends sun.print.RasterPrinterJob

#include <java/lang/Array.h>
#include <sun/print/RasterPrinterJob.h>

#pragma push_macro("ADOBE_PS_STR")
#undef ADOBE_PS_STR
#pragma push_macro("BLUE_MASK")
#undef BLUE_MASK
#pragma push_macro("BLUE_SHIFT")
#undef BLUE_SHIFT
#pragma push_macro("CLOSEPATH_STR")
#undef CLOSEPATH_STR
#pragma push_macro("COPIES")
#undef COPIES
#pragma push_macro("CURVETO_STR")
#undef CURVETO_STR
#pragma push_macro("EOF_COMMENT")
#undef EOF_COMMENT
#pragma push_macro("EVEN_ODD_CLIP_STR")
#undef EVEN_ODD_CLIP_STR
#pragma push_macro("EVEN_ODD_FILL_STR")
#undef EVEN_ODD_FILL_STR
#pragma push_macro("FILL_EVEN_ODD")
#undef FILL_EVEN_ODD
#pragma push_macro("FILL_WINDING")
#undef FILL_WINDING
#pragma push_macro("GREEN_MASK")
#undef GREEN_MASK
#pragma push_macro("GREEN_SHIFT")
#undef GREEN_SHIFT
#pragma push_macro("GRESTORE_STR")
#undef GRESTORE_STR
#pragma push_macro("GSAVE_STR")
#undef GSAVE_STR
#pragma push_macro("HINIBBLE_MASK")
#undef HINIBBLE_MASK
#pragma push_macro("HINIBBLE_SHIFT")
#undef HINIBBLE_SHIFT
#pragma push_macro("IMAGE_RESTORE")
#undef IMAGE_RESTORE
#pragma push_macro("IMAGE_SAVE")
#undef IMAGE_SAVE
#pragma push_macro("IMAGE_STR")
#undef IMAGE_STR
#pragma push_macro("LINETO_STR")
#undef LINETO_STR
#pragma push_macro("LOWNIBBLE_MASK")
#undef LOWNIBBLE_MASK
#pragma push_macro("MAX_PSSTR")
#undef MAX_PSSTR
#pragma push_macro("MOVETO_STR")
#undef MOVETO_STR
#pragma push_macro("NEWPATH_STR")
#undef NEWPATH_STR
#pragma push_macro("PAGE_COMMENT")
#undef PAGE_COMMENT
#pragma push_macro("PAGE_RESTORE")
#undef PAGE_RESTORE
#pragma push_macro("PAGE_SAVE")
#undef PAGE_SAVE
#pragma push_macro("PS_XRES")
#undef PS_XRES
#pragma push_macro("PS_YRES")
#undef PS_YRES
#pragma push_macro("READIMAGEPROC")
#undef READIMAGEPROC
#pragma push_macro("RED_MASK")
#undef RED_MASK
#pragma push_macro("RED_SHIFT")
#undef RED_SHIFT
#pragma push_macro("SETGRAY_STR")
#undef SETGRAY_STR
#pragma push_macro("SETRGBCOLOR_STR")
#undef SETRGBCOLOR_STR
#pragma push_macro("SHOWPAGE")
#undef SHOWPAGE
#pragma push_macro("WINDING_CLIP_STR")
#undef WINDING_CLIP_STR
#pragma push_macro("WINDING_FILL_STR")
#undef WINDING_FILL_STR

namespace java {
	namespace awt {
		class Color;
		class Font;
		class FontMetrics;
		class Graphics;
		class Graphics2D;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Paper;
			class Printable;
			class PrinterJob;
		}
	}
}
namespace java {
	namespace io {
		class File;
		class PrintStream;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Properties;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}
namespace sun {
	namespace awt {
		class CharsetString;
	}
}
namespace sun {
	namespace print {
		class PSPrinterJob$EPSPrinter;
		class PSPrinterJob$GState;
		class PeekGraphics;
	}
}

namespace sun {
	namespace print {

class PSPrinterJob : public ::sun::print::RasterPrinterJob {
	$class(PSPrinterJob, 0, ::sun::print::RasterPrinterJob)
public:
	PSPrinterJob();
	using ::sun::print::RasterPrinterJob::defaultPage;
	void init$();
	virtual void abortDoc() override;
	$bytes* ascii85Encode($bytes* inArr);
	virtual void beginPath();
	virtual void bezierTo(float control1x, float control1y, float control2x, float control2y, float endX, float endY);
	virtual void closeSubpath();
	virtual void convertToPSPath(::java::awt::geom::PathIterator* pathIter);
	virtual ::java::awt::Graphics2D* createPathGraphics(::sun::print::PeekGraphics* peekGraphics, ::java::awt::print::PrinterJob* printerJob, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex) override;
	virtual void deviceFill(::java::awt::geom::PathIterator* pathIter, ::java::awt::Color* color, ::java::awt::geom::AffineTransform* tx, ::java::awt::Shape* clip);
	virtual void drawImageBGR($bytes* bgrData, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight, int32_t srcBitMapWidth, int32_t srcBitMapHeight);
	virtual void endDoc() override;
	virtual void endPage(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter, int32_t index) override;
	static $String* escapeParens($String* str);
	virtual void fillPath();
	virtual int32_t getCollatedCopies() override;
	$String* getCoordPrep();
	::sun::print::PSPrinterJob$GState* getGState();
	virtual int32_t getNoncollatedCopies() override;
	$ints* getPSFontIndexArray(::java::awt::Font* font, $Array<::sun::awt::CharsetString>* charSet);
	virtual float getPenX();
	virtual float getPenY();
	virtual double getPhysicalPageHeight(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPageWidth(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableHeight(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableWidth(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableX(::java::awt::print::Paper* p) override;
	virtual double getPhysicalPrintableY(::java::awt::print::Paper* p) override;
	virtual double getXRes() override;
	virtual double getYRes() override;
	void grestore();
	void gsave();
	static ::java::util::Properties* initProps();
	static void initStatic();
	bool isOuterGState();
	virtual void lineTo(float x, float y);
	$String* makeCharsetName($String* name, $chars* chs);
	virtual void moveTo(float x, float y);
	virtual int32_t platformFontCount(::java::awt::Font* font, $String* str);
	void prepDrawing();
	virtual void printBand($bytes* bgrData, int32_t x, int32_t y, int32_t width, int32_t height) override;
	using ::sun::print::RasterPrinterJob::printDialog;
	virtual bool printDialog() override;
	$StringArray* printExecCmd($String* printer, $String* options, bool noJobSheet, $String* jobTitle, int32_t copies, $String* spoolFile);
	$bytes* rlEncode($bytes* inArr);
	virtual void selectClipPath();
	virtual void setAttributes(::javax::print::attribute::PrintRequestAttributeSet* attributes) override;
	virtual void setClip(::java::awt::Shape* clip);
	virtual void setColor(::java::awt::Color* color);
	virtual void setFillMode(int32_t fillRule);
	virtual bool setFont(::java::awt::Font* font);
	virtual void setTransform(::java::awt::geom::AffineTransform* transform);
	virtual void setXYRes(double x, double y) override;
	virtual void startDoc() override;
	virtual void startPage(::java::awt::print::PageFormat* pageFormat, ::java::awt::print::Printable* painter, int32_t index, bool paperChanged) override;
	static int32_t swapBGRtoRGB($bytes* image, int32_t index, $bytes* dest);
	virtual bool textOut(::java::awt::Graphics* g, $String* str, float x, float y, ::java::awt::Font* mLastFont, ::java::awt::font::FontRenderContext* frc, float width);
	virtual $String* trunc(float f);
	static const int32_t FILL_EVEN_ODD = 1;
	static const int32_t FILL_WINDING = 2;
	static const int32_t MAX_PSSTR = (1024 * 64 - 1);
	static const int32_t RED_MASK = 0x00FF0000;
	static const int32_t GREEN_MASK = 0x0000FF00;
	static const int32_t BLUE_MASK = 255;
	static const int32_t RED_SHIFT = 16;
	static const int32_t GREEN_SHIFT = 8;
	static const int32_t BLUE_SHIFT = 0;
	static const int32_t LOWNIBBLE_MASK = 15;
	static const int32_t HINIBBLE_MASK = 240;
	static const int32_t HINIBBLE_SHIFT = 4;
	static $bytes* hexDigits;
	static const int32_t PS_XRES = 300;
	static const int32_t PS_YRES = 300;
	static $String* ADOBE_PS_STR;
	static $String* EOF_COMMENT;
	static $String* PAGE_COMMENT;
	static $String* READIMAGEPROC;
	static $String* COPIES;
	static $String* PAGE_SAVE;
	static $String* PAGE_RESTORE;
	static $String* SHOWPAGE;
	static $String* IMAGE_SAVE;
	static $String* IMAGE_STR;
	static $String* IMAGE_RESTORE;
	static $String* SetFontName;
	static $String* DrawStringName;
	static $String* EVEN_ODD_FILL_STR;
	static $String* WINDING_FILL_STR;
	static $String* EVEN_ODD_CLIP_STR;
	static $String* WINDING_CLIP_STR;
	static $String* MOVETO_STR;
	static $String* LINETO_STR;
	static $String* CURVETO_STR;
	static $String* GRESTORE_STR;
	static $String* GSAVE_STR;
	static $String* NEWPATH_STR;
	static $String* CLOSEPATH_STR;
	static $String* SETRGBCOLOR_STR;
	static $String* SETGRAY_STR;
	int32_t mDestType = 0;
	$String* mDestination = nullptr;
	bool mNoJobSheet = false;
	$String* mOptions = nullptr;
	::java::awt::Font* mLastFont = nullptr;
	::java::awt::Color* mLastColor = nullptr;
	::java::awt::Shape* mLastClip = nullptr;
	::java::awt::geom::AffineTransform* mLastTransform = nullptr;
	double xres = 0.0;
	double yres = 0.0;
	::sun::print::PSPrinterJob$EPSPrinter* epsPrinter = nullptr;
	::java::awt::FontMetrics* mCurMetrics = nullptr;
	::java::io::PrintStream* mPSStream = nullptr;
	::java::io::File* spoolFile = nullptr;
	$String* mFillOpStr = nullptr;
	$String* mClipOpStr = nullptr;
	::java::util::ArrayList* mGStateStack = nullptr;
	float mPenX = 0.0;
	float mPenY = 0.0;
	float mStartPathX = 0.0;
	float mStartPathY = 0.0;
	static ::java::util::Properties* mFontProps;
	static bool isMac;
};

	} // print
} // sun

#pragma pop_macro("ADOBE_PS_STR")
#pragma pop_macro("BLUE_MASK")
#pragma pop_macro("BLUE_SHIFT")
#pragma pop_macro("CLOSEPATH_STR")
#pragma pop_macro("COPIES")
#pragma pop_macro("CURVETO_STR")
#pragma pop_macro("EOF_COMMENT")
#pragma pop_macro("EVEN_ODD_CLIP_STR")
#pragma pop_macro("EVEN_ODD_FILL_STR")
#pragma pop_macro("FILL_EVEN_ODD")
#pragma pop_macro("FILL_WINDING")
#pragma pop_macro("GREEN_MASK")
#pragma pop_macro("GREEN_SHIFT")
#pragma pop_macro("GRESTORE_STR")
#pragma pop_macro("GSAVE_STR")
#pragma pop_macro("HINIBBLE_MASK")
#pragma pop_macro("HINIBBLE_SHIFT")
#pragma pop_macro("IMAGE_RESTORE")
#pragma pop_macro("IMAGE_SAVE")
#pragma pop_macro("IMAGE_STR")
#pragma pop_macro("LINETO_STR")
#pragma pop_macro("LOWNIBBLE_MASK")
#pragma pop_macro("MAX_PSSTR")
#pragma pop_macro("MOVETO_STR")
#pragma pop_macro("NEWPATH_STR")
#pragma pop_macro("PAGE_COMMENT")
#pragma pop_macro("PAGE_RESTORE")
#pragma pop_macro("PAGE_SAVE")
#pragma pop_macro("PS_XRES")
#pragma pop_macro("PS_YRES")
#pragma pop_macro("READIMAGEPROC")
#pragma pop_macro("RED_MASK")
#pragma pop_macro("RED_SHIFT")
#pragma pop_macro("SETGRAY_STR")
#pragma pop_macro("SETRGBCOLOR_STR")
#pragma pop_macro("SHOWPAGE")
#pragma pop_macro("WINDING_CLIP_STR")
#pragma pop_macro("WINDING_FILL_STR")

#endif // _sun_print_PSPrinterJob_h_