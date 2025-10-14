#ifndef _javax_print_attribute_standard_DialogOwner$Accessor_h_
#define _javax_print_attribute_standard_DialogOwner$Accessor_h_
//$ class javax.print.attribute.standard.DialogOwner$Accessor
//$ extends sun.print.DialogOwnerAccessor

#include <sun/print/DialogOwnerAccessor.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class DialogOwner;
			}
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class DialogOwner$Accessor : public ::sun::print::DialogOwnerAccessor {
	$class(DialogOwner$Accessor, $NO_CLASS_INIT, ::sun::print::DialogOwnerAccessor)
public:
	DialogOwner$Accessor();
	void init$();
	virtual int64_t getOwnerID(::javax::print::attribute::standard::DialogOwner* owner) override;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_DialogOwner$Accessor_h_