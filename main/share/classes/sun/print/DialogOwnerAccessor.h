#ifndef _sun_print_DialogOwnerAccessor_h_
#define _sun_print_DialogOwnerAccessor_h_
//$ class sun.print.DialogOwnerAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class DialogOwner;
			}
		}
	}
}

namespace sun {
	namespace print {

class DialogOwnerAccessor : public ::java::lang::Object {
	$class(DialogOwnerAccessor, 0, ::java::lang::Object)
public:
	DialogOwnerAccessor();
	void init$();
	static int64_t getID(::javax::print::attribute::standard::DialogOwner* owner);
	virtual int64_t getOwnerID(::javax::print::attribute::standard::DialogOwner* owner) {return 0;}
	static void setAccessor(::sun::print::DialogOwnerAccessor* acc);
	static ::sun::print::DialogOwnerAccessor* accessor;
};

	} // print
} // sun

#endif // _sun_print_DialogOwnerAccessor_h_