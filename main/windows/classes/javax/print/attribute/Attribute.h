#ifndef _javax_print_attribute_Attribute_h_
#define _javax_print_attribute_Attribute_h_
//$ interface javax.print.attribute.Attribute
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace print {
		namespace attribute {

class $export Attribute : public ::java::io::Serializable {
	$interface(Attribute, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual $Class* getCategory() {return nullptr;}
	virtual $String* getName() {return nullptr;}
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_Attribute_h_