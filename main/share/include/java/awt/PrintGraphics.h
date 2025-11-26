#ifndef _java_awt_PrintGraphics_h_
#define _java_awt_PrintGraphics_h_
//$ interface java.awt.PrintGraphics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class PrintJob;
	}
}

namespace java {
	namespace awt {

class $import PrintGraphics : public ::java::lang::Object {
	$interface(PrintGraphics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::PrintJob* getPrintJob() {return nullptr;}
};

	} // awt
} // java

#endif // _java_awt_PrintGraphics_h_