#ifndef _javax_print_SimpleDoc_h_
#define _javax_print_SimpleDoc_h_
//$ class javax.print.SimpleDoc
//$ extends javax.print.Doc

#include <javax/print/Doc.h>

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

class $export SimpleDoc : public ::javax::print::Doc {
	$class(SimpleDoc, $NO_CLASS_INIT, ::javax::print::Doc)
public:
	SimpleDoc();
	void init$(Object$* printData, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::DocAttributeSet* attributes);
	virtual ::javax::print::attribute::DocAttributeSet* getAttributes() override;
	virtual ::javax::print::DocFlavor* getDocFlavor() override;
	virtual $Object* getPrintData() override;
	virtual ::java::io::Reader* getReaderForText() override;
	virtual ::java::io::InputStream* getStreamForBytes() override;
	::javax::print::DocFlavor* flavor = nullptr;
	::javax::print::attribute::DocAttributeSet* attributes = nullptr;
	$Object* printData = nullptr;
	::java::io::Reader* reader = nullptr;
	::java::io::InputStream* inStream = nullptr;
};

	} // print
} // javax

#endif // _javax_print_SimpleDoc_h_