#ifndef _java_awt_print_Book_h_
#define _java_awt_print_Book_h_
//$ class java.awt.print.Book
//$ extends java.awt.print.Pageable

#include <java/awt/print/Pageable.h>

namespace java {
	namespace awt {
		namespace print {
			class Book$BookPage;
			class PageFormat;
			class Printable;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace awt {
		namespace print {

class $import Book : public ::java::awt::print::Pageable {
	$class(Book, $NO_CLASS_INIT, ::java::awt::print::Pageable)
public:
	Book();
	void init$();
	virtual void append(::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* page);
	virtual void append(::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* page, int32_t numPages);
	virtual int32_t getNumberOfPages() override;
	::java::awt::print::Book$BookPage* getPage(int32_t pageIndex);
	virtual ::java::awt::print::PageFormat* getPageFormat(int32_t pageIndex) override;
	virtual ::java::awt::print::Printable* getPrintable(int32_t pageIndex) override;
	virtual void setPage(int32_t pageIndex, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* page);
	::java::util::Vector* mPages = nullptr;
};

		} // print
	} // awt
} // java

#endif // _java_awt_print_Book_h_