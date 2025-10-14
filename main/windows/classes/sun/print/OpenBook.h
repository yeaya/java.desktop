#ifndef _sun_print_OpenBook_h_
#define _sun_print_OpenBook_h_
//$ class sun.print.OpenBook
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

namespace sun {
	namespace print {

class OpenBook : public ::java::awt::print::Pageable {
	$class(OpenBook, $NO_CLASS_INIT, ::java::awt::print::Pageable)
public:
	OpenBook();
	void init$(::java::awt::print::PageFormat* format, ::java::awt::print::Printable* painter);
	virtual int32_t getNumberOfPages() override;
	virtual ::java::awt::print::PageFormat* getPageFormat(int32_t pageIndex) override;
	virtual ::java::awt::print::Printable* getPrintable(int32_t pageIndex) override;
	::java::awt::print::PageFormat* mFormat = nullptr;
	::java::awt::print::Printable* mPainter = nullptr;
};

	} // print
} // sun

#endif // _sun_print_OpenBook_h_