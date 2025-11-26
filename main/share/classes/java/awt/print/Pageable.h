#ifndef _java_awt_print_Pageable_h_
#define _java_awt_print_Pageable_h_
//$ interface java.awt.print.Pageable
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("UNKNOWN_NUMBER_OF_PAGES")
#undef UNKNOWN_NUMBER_OF_PAGES

namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Printable;
		}
	}
}

namespace java {
	namespace awt {
		namespace print {

class $export Pageable : public ::java::lang::Object {
	$interface(Pageable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getNumberOfPages() {return 0;}
	virtual ::java::awt::print::PageFormat* getPageFormat(int32_t pageIndex) {return nullptr;}
	virtual ::java::awt::print::Printable* getPrintable(int32_t pageIndex) {return nullptr;}
	static const int32_t UNKNOWN_NUMBER_OF_PAGES = (-1);
};

		} // print
	} // awt
} // java

#pragma pop_macro("UNKNOWN_NUMBER_OF_PAGES")

#endif // _java_awt_print_Pageable_h_