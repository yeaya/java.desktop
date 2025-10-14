#ifndef _javax_print_MultiDoc_h_
#define _javax_print_MultiDoc_h_
//$ interface javax.print.MultiDoc
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {
		class Doc;
	}
}

namespace javax {
	namespace print {

class $import MultiDoc : public ::java::lang::Object {
	$interface(MultiDoc, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::print::Doc* getDoc() {return nullptr;}
	virtual ::javax::print::MultiDoc* next() {return nullptr;}
};

	} // print
} // javax

#endif // _javax_print_MultiDoc_h_