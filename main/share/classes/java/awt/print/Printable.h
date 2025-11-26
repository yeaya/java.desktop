#ifndef _java_awt_print_Printable_h_
#define _java_awt_print_Printable_h_
//$ interface java.awt.print.Printable
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NO_SUCH_PAGE")
#undef NO_SUCH_PAGE
#pragma push_macro("PAGE_EXISTS")
#undef PAGE_EXISTS

namespace java {
	namespace awt {
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
	namespace awt {
		namespace print {

class $export Printable : public ::java::lang::Object {
	$interface(Printable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t print(::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex) {return 0;}
	static const int32_t PAGE_EXISTS = 0;
	static const int32_t NO_SUCH_PAGE = 1;
};

		} // print
	} // awt
} // java

#pragma pop_macro("NO_SUCH_PAGE")
#pragma pop_macro("PAGE_EXISTS")

#endif // _java_awt_print_Printable_h_