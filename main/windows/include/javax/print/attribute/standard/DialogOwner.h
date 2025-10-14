#ifndef _javax_print_attribute_standard_DialogOwner_h_
#define _javax_print_attribute_standard_DialogOwner_h_
//$ class javax.print.attribute.standard.DialogOwner
//$ extends javax.print.attribute.PrintRequestAttribute

#include <javax/print/attribute/PrintRequestAttribute.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class DialogOwner$Accessor;
			}
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import DialogOwner : public ::javax::print::attribute::PrintRequestAttribute {
	$class(DialogOwner, 0, ::javax::print::attribute::PrintRequestAttribute)
public:
	DialogOwner();
	void init$();
	void init$(::java::awt::Window* owner);
	void init$(int64_t id);
	virtual $Class* getCategory() override;
	int64_t getID();
	virtual $String* getName() override;
	::java::awt::Window* getOwner();
	static ::javax::print::attribute::standard::DialogOwner$Accessor* accessor;
	static const int64_t serialVersionUID = (int64_t)0xE59B0F0D755A07FD;
	::java::awt::Window* owner = nullptr;
	int64_t id = 0;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_DialogOwner_h_