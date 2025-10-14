#ifndef _javax_accessibility_AccessibleStreamable_h_
#define _javax_accessibility_AccessibleStreamable_h_
//$ interface javax.accessibility.AccessibleStreamable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleStreamable : public ::java::lang::Object {
	$interface(AccessibleStreamable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getMimeTypes() {return nullptr;}
	virtual ::java::io::InputStream* getStream(::java::awt::datatransfer::DataFlavor* flavor) {return nullptr;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleStreamable_h_