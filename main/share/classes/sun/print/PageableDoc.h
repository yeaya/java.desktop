#ifndef _sun_print_PageableDoc_h_
#define _sun_print_PageableDoc_h_
//$ class sun.print.PageableDoc
//$ extends javax.print.Doc

#include <javax/print/Doc.h>

namespace java {
	namespace awt {
		namespace print {
			class Pageable;
		}
	}
}
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

namespace sun {
	namespace print {

class PageableDoc : public ::javax::print::Doc {
	$class(PageableDoc, $NO_CLASS_INIT, ::javax::print::Doc)
public:
	PageableDoc();
	void init$(::java::awt::print::Pageable* pageable);
	virtual ::javax::print::attribute::DocAttributeSet* getAttributes() override;
	virtual ::javax::print::DocFlavor* getDocFlavor() override;
	virtual $Object* getPrintData() override;
	virtual ::java::io::Reader* getReaderForText() override;
	virtual ::java::io::InputStream* getStreamForBytes() override;
	::java::awt::print::Pageable* pageable = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PageableDoc_h_