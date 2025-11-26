#ifndef _com_sun_beans_finder_FieldFinder_h_
#define _com_sun_beans_finder_FieldFinder_h_
//$ class com.sun.beans.finder.FieldFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class FieldFinder : public ::java::lang::Object {
	$class(FieldFinder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FieldFinder();
	void init$();
	static ::java::lang::reflect::Field* findField($Class* type, $String* name);
	static ::java::lang::reflect::Field* findInstanceField($Class* type, $String* name);
	static ::java::lang::reflect::Field* findStaticField($Class* type, $String* name);
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_FieldFinder_h_