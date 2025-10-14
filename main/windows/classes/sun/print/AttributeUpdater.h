#ifndef _sun_print_AttributeUpdater_h_
#define _sun_print_AttributeUpdater_h_
//$ interface sun.print.AttributeUpdater
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {
		namespace attribute {
			class PrintServiceAttributeSet;
		}
	}
}

namespace sun {
	namespace print {

class AttributeUpdater : public ::java::lang::Object {
	$interface(AttributeUpdater, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::print::attribute::PrintServiceAttributeSet* getUpdatedAttributes() {return nullptr;}
};

	} // print
} // sun

#endif // _sun_print_AttributeUpdater_h_