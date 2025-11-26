#ifndef _sun_awt_UNIXToolkit$GtkVersions$Constants_h_
#define _sun_awt_UNIXToolkit$GtkVersions$Constants_h_
//$ class sun.awt.UNIXToolkit$GtkVersions$Constants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("GTK2_MAJOR_NUMBER")
#undef GTK2_MAJOR_NUMBER
#pragma push_macro("GTK3_MAJOR_NUMBER")
#undef GTK3_MAJOR_NUMBER

namespace sun {
	namespace awt {

class $import UNIXToolkit$GtkVersions$Constants : public ::java::lang::Object {
	$class(UNIXToolkit$GtkVersions$Constants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UNIXToolkit$GtkVersions$Constants();
	void init$();
	static const int32_t GTK2_MAJOR_NUMBER = 2;
	static const int32_t GTK3_MAJOR_NUMBER = 3;
};

	} // awt
} // sun

#pragma pop_macro("GTK2_MAJOR_NUMBER")
#pragma pop_macro("GTK3_MAJOR_NUMBER")

#endif // _sun_awt_UNIXToolkit$GtkVersions$Constants_h_