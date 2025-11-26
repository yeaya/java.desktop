#ifndef _java_awt_print_Book$BookPage_h_
#define _java_awt_print_Book$BookPage_h_
//$ class java.awt.print.Book$BookPage
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace print {
			class Book;
			class PageFormat;
			class Printable;
		}
	}
}

namespace java {
	namespace awt {
		namespace print {

class Book$BookPage : public ::java::lang::Object {
	$class(Book$BookPage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Book$BookPage();
	void init$(::java::awt::print::Book* this$0, ::java::awt::print::Printable* painter, ::java::awt::print::PageFormat* format);
	virtual ::java::awt::print::PageFormat* getPageFormat();
	virtual ::java::awt::print::Printable* getPrintable();
	::java::awt::print::Book* this$0 = nullptr;
	::java::awt::print::PageFormat* mFormat = nullptr;
	::java::awt::print::Printable* mPainter = nullptr;
};

		} // print
	} // awt
} // java

#endif // _java_awt_print_Book$BookPage_h_