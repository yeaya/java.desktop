#ifndef _java_awt_Dialog$ModalExclusionType_h_
#define _java_awt_Dialog$ModalExclusionType_h_
//$ class java.awt.Dialog$ModalExclusionType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("APPLICATION_EXCLUDE")
#undef APPLICATION_EXCLUDE
#pragma push_macro("NO_EXCLUDE")
#undef NO_EXCLUDE
#pragma push_macro("TOOLKIT_EXCLUDE")
#undef TOOLKIT_EXCLUDE

namespace java {
	namespace awt {

class $import Dialog$ModalExclusionType : public ::java::lang::Enum {
	$class(Dialog$ModalExclusionType, 0, ::java::lang::Enum)
public:
	Dialog$ModalExclusionType();
	static $Array<::java::awt::Dialog$ModalExclusionType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::Dialog$ModalExclusionType* valueOf($String* name);
	static $Array<::java::awt::Dialog$ModalExclusionType>* values();
	static ::java::awt::Dialog$ModalExclusionType* NO_EXCLUDE;
	static ::java::awt::Dialog$ModalExclusionType* APPLICATION_EXCLUDE;
	static ::java::awt::Dialog$ModalExclusionType* TOOLKIT_EXCLUDE;
	static $Array<::java::awt::Dialog$ModalExclusionType>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("APPLICATION_EXCLUDE")
#pragma pop_macro("NO_EXCLUDE")
#pragma pop_macro("TOOLKIT_EXCLUDE")

#endif // _java_awt_Dialog$ModalExclusionType_h_