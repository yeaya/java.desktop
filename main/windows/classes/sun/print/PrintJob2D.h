#ifndef _sun_print_PrintJob2D_h_
#define _sun_print_PrintJob2D_h_
//$ class sun.print.PrintJob2D
//$ extends java.awt.PrintJob
//$ implements java.awt.print.Printable,java.lang.Runnable

#include <java/awt/PrintJob.h>
#include <java/awt/print/Printable.h>
#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("DEST_PROP")
#undef DEST_PROP
#pragma push_macro("EXECUTIVE")
#undef EXECUTIVE
#pragma push_macro("FILE")
#undef FILE
#pragma push_macro("FILENAME_PROP")
#undef FILENAME_PROP
#pragma push_macro("JAVAXSIZES")
#undef JAVAXSIZES
#pragma push_macro("LANDSCAPE")
#undef LANDSCAPE
#pragma push_macro("LEGAL")
#undef LEGAL
#pragma push_macro("LENGTHS")
#undef LENGTHS
#pragma push_macro("LETTER")
#undef LETTER
#pragma push_macro("NUMCOPIES_PROP")
#undef NUMCOPIES_PROP
#pragma push_macro("OPTIONS_PROP")
#undef OPTIONS_PROP
#pragma push_macro("ORIENT_PROP")
#undef ORIENT_PROP
#pragma push_macro("PAPERSIZE_PROP")
#undef PAPERSIZE_PROP
#pragma push_macro("PORTRAIT")
#undef PORTRAIT
#pragma push_macro("PRINTER")
#undef PRINTER
#pragma push_macro("PRINTER_PROP")
#undef PRINTER_PROP
#pragma push_macro("SIZES")
#undef SIZES
#pragma push_macro("WIDTHS")
#undef WIDTHS

namespace java {
	namespace awt {
		class Dimension;
		class Frame;
		class Graphics;
		class Graphics2D;
		class JobAttributes;
		class PageAttributes;
		class PageAttributes$MediaType;
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class PrinterJob;
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class Properties;
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
				class MediaSizeName;
			}
		}
	}
}
namespace sun {
	namespace print {
		class PrintJob2D$MessageQ;
	}
}

namespace sun {
	namespace print {

class PrintJob2D : public ::java::awt::PrintJob, public ::java::awt::print::Printable, public ::java::lang::Runnable {
	$class(PrintJob2D, $HAS_FINALIZE, ::java::awt::PrintJob, ::java::awt::print::Printable, ::java::lang::Runnable)
public:
	PrintJob2D();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Frame* frame, $String* doctitle, ::java::util::Properties* props);
	void init$(::java::awt::Frame* frame, $String* doctitle, ::java::awt::JobAttributes* jobAttributes, ::java::awt::PageAttributes* pageAttributes);
	void copyAttributes(::javax::print::PrintService* printServ);
	void debugPrintAttributes(bool ja, bool pa);
	virtual void end() override;
	virtual void finalize() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::Dimension* getPageDimension() override;
	virtual int32_t getPageResolution() override;
	double getPageResolutionInternal();
	static $ints* getSize(::java::awt::PageAttributes$MediaType* mType);
	void initPrintJob2D(::java::awt::Frame* frame, $String* doctitle, ::java::awt::JobAttributes* jobAttributes, ::java::awt::PageAttributes* pageAttributes);
	virtual bool lastPageFirst() override;
	static ::javax::print::attribute::standard::MediaSizeName* mapMedia(::java::awt::PageAttributes$MediaType* mType);
	virtual int32_t print(::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex) override;
	virtual bool printDialog();
	virtual void run() override;
	void startPrinterJobThread();
	void throwPrintToFile();
	virtual $String* toString() override;
	void translateInputProps();
	void translateOutputProps();
	static ::java::awt::PageAttributes$MediaType* unMapMedia(::javax::print::attribute::standard::MediaSizeName* mSize);
	void updateAttributes();
	static $Array<::java::awt::PageAttributes$MediaType>* SIZES;
	static $Array<::javax::print::attribute::standard::MediaSizeName>* JAVAXSIZES;
	static $ints* WIDTHS;
	static $ints* LENGTHS;
	::java::awt::Frame* frame = nullptr;
	$String* docTitle = nullptr;
	::java::awt::JobAttributes* jobAttributes = nullptr;
	::java::awt::PageAttributes* pageAttributes = nullptr;
	::javax::print::attribute::PrintRequestAttributeSet* attributes = nullptr;
	::java::awt::print::PrinterJob* printerJob = nullptr;
	::java::awt::print::PageFormat* pageFormat = nullptr;
	::sun::print::PrintJob2D$MessageQ* graphicsToBeDrawn = nullptr;
	::sun::print::PrintJob2D$MessageQ* graphicsDrawn = nullptr;
	::java::awt::Graphics2D* currentGraphics = nullptr;
	int32_t pageIndex = 0;
	static $String* DEST_PROP;
	static $String* PRINTER;
	static $String* FILE;
	static $String* PRINTER_PROP;
	static $String* FILENAME_PROP;
	static $String* NUMCOPIES_PROP;
	static $String* OPTIONS_PROP;
	static $String* ORIENT_PROP;
	static $String* PORTRAIT;
	static $String* LANDSCAPE;
	static $String* PAPERSIZE_PROP;
	static $String* LETTER;
	static $String* LEGAL;
	static $String* EXECUTIVE;
	static $String* A4;
	::java::util::Properties* props = nullptr;
	$String* options = nullptr;
	$Thread* printerJobThread = nullptr;
};

	} // print
} // sun

#pragma pop_macro("DEST_PROP")
#pragma pop_macro("EXECUTIVE")
#pragma pop_macro("FILE")
#pragma pop_macro("FILENAME_PROP")
#pragma pop_macro("JAVAXSIZES")
#pragma pop_macro("LANDSCAPE")
#pragma pop_macro("LEGAL")
#pragma pop_macro("LENGTHS")
#pragma pop_macro("LETTER")
#pragma pop_macro("NUMCOPIES_PROP")
#pragma pop_macro("OPTIONS_PROP")
#pragma pop_macro("ORIENT_PROP")
#pragma pop_macro("PAPERSIZE_PROP")
#pragma pop_macro("PORTRAIT")
#pragma pop_macro("PRINTER")
#pragma pop_macro("PRINTER_PROP")
#pragma pop_macro("SIZES")
#pragma pop_macro("WIDTHS")

#endif // _sun_print_PrintJob2D_h_