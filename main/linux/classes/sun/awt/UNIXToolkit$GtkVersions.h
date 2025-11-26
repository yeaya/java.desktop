#ifndef _sun_awt_UNIXToolkit$GtkVersions_h_
#define _sun_awt_UNIXToolkit$GtkVersions_h_
//$ class sun.awt.UNIXToolkit$GtkVersions
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANY")
#undef ANY
#pragma push_macro("GTK2")
#undef GTK2
#pragma push_macro("GTK3")
#undef GTK3

namespace sun {
	namespace awt {

class $export UNIXToolkit$GtkVersions : public ::java::lang::Enum {
	$class(UNIXToolkit$GtkVersions, 0, ::java::lang::Enum)
public:
	UNIXToolkit$GtkVersions();
	static $Array<::sun::awt::UNIXToolkit$GtkVersions>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t number);
	virtual int32_t getNumber();
	static ::sun::awt::UNIXToolkit$GtkVersions* getVersion(int32_t number);
	static ::sun::awt::UNIXToolkit$GtkVersions* valueOf($String* name);
	static $Array<::sun::awt::UNIXToolkit$GtkVersions>* values();
	static ::sun::awt::UNIXToolkit$GtkVersions* ANY;
	static ::sun::awt::UNIXToolkit$GtkVersions* GTK2;
	static ::sun::awt::UNIXToolkit$GtkVersions* GTK3;
	static $Array<::sun::awt::UNIXToolkit$GtkVersions>* $VALUES;
	int32_t number = 0;
};

	} // awt
} // sun

#pragma pop_macro("ANY")
#pragma pop_macro("GTK2")
#pragma pop_macro("GTK3")

#endif // _sun_awt_UNIXToolkit$GtkVersions_h_