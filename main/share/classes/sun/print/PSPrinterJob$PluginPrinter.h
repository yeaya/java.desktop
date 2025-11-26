#ifndef _sun_print_PSPrinterJob$PluginPrinter_h_
#define _sun_print_PSPrinterJob$PluginPrinter_h_
//$ class sun.print.PSPrinterJob$PluginPrinter
//$ extends java.awt.print.Printable

#include <java/awt/print/Printable.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
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
		class PSPrinterJob$EPSPrinter;
	}
}

namespace sun {
	namespace print {

class PSPrinterJob$PluginPrinter : public ::java::awt::print::Printable {
	$class(PSPrinterJob$PluginPrinter, $NO_CLASS_INIT, ::java::awt::print::Printable)
public:
	PSPrinterJob$PluginPrinter();
	void init$(::java::awt::Component* applet, ::java::io::PrintStream* stream, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual int32_t print(::java::awt::Graphics* g, ::java::awt::print::PageFormat* pf, int32_t pgIndex) override;
	virtual void printAll();
	virtual void printPluginApplet();
	virtual void printPluginPSHeader();
	virtual void printPluginPSTrailer();
	::sun::print::PSPrinterJob$EPSPrinter* epsPrinter = nullptr;
	::java::awt::Component* applet = nullptr;
	::java::io::PrintStream* stream = nullptr;
	$String* epsTitle = nullptr;
	int32_t bx = 0;
	int32_t by = 0;
	int32_t bw = 0;
	int32_t bh = 0;
	int32_t width = 0;
	int32_t height = 0;
};

	} // print
} // sun

#endif // _sun_print_PSPrinterJob$PluginPrinter_h_