#ifndef _sun_print_PSPrinterJob$EPSPrinter_h_
#define _sun_print_PSPrinterJob$EPSPrinter_h_
//$ class sun.print.PSPrinterJob$EPSPrinter
//$ extends java.awt.print.Pageable

#include <java/awt/print/Pageable.h>

namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Printable;
		}
	}
}
namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace sun {
	namespace print {
		class PSPrinterJob;
	}
}

namespace sun {
	namespace print {

class PSPrinterJob$EPSPrinter : public ::java::awt::print::Pageable {
	$class(PSPrinterJob$EPSPrinter, $NO_CLASS_INIT, ::java::awt::print::Pageable)
public:
	PSPrinterJob$EPSPrinter();
	void init$(::java::awt::print::Printable* printable, $String* title, ::java::io::PrintStream* stream, int32_t x, int32_t y, int32_t wid, int32_t hgt);
	virtual int32_t getNumberOfPages() override;
	virtual ::java::awt::print::PageFormat* getPageFormat(int32_t pgIndex) override;
	virtual ::java::awt::print::Printable* getPrintable(int32_t pgIndex) override;
	virtual void print();
	::java::awt::print::PageFormat* pf = nullptr;
	::sun::print::PSPrinterJob* job = nullptr;
	int32_t llx = 0;
	int32_t lly = 0;
	int32_t urx = 0;
	int32_t ury = 0;
	::java::awt::print::Printable* printable = nullptr;
	::java::io::PrintStream* stream = nullptr;
	$String* epsTitle = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PSPrinterJob$EPSPrinter_h_