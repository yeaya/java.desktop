#ifndef _javax_print_Doc_h_
#define _javax_print_Doc_h_
//$ interface javax.print.Doc
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace javax {
	namespace print {
		class DocFlavor;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class DocAttributeSet;
		}
	}
}

namespace javax {
	namespace print {

class $import Doc : public ::java::lang::Object {
	$interface(Doc, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::print::attribute::DocAttributeSet* getAttributes() {return nullptr;}
	virtual ::javax::print::DocFlavor* getDocFlavor() {return nullptr;}
	virtual $Object* getPrintData() {return nullptr;}
	virtual ::java::io::Reader* getReaderForText() {return nullptr;}
	virtual ::java::io::InputStream* getStreamForBytes() {return nullptr;}
};

	} // print
} // javax

#endif // _javax_print_Doc_h_