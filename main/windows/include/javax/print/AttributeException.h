#ifndef _javax_print_AttributeException_h_
#define _javax_print_AttributeException_h_
//$ interface javax.print.AttributeException
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace print {
		namespace attribute {
			class Attribute;
		}
	}
}

namespace javax {
	namespace print {

class $import AttributeException : public ::java::lang::Object {
	$interface(AttributeException, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $ClassArray* getUnsupportedAttributes() {return nullptr;}
	virtual $Array<::javax::print::attribute::Attribute>* getUnsupportedValues() {return nullptr;}
};

	} // print
} // javax

#endif // _javax_print_AttributeException_h_