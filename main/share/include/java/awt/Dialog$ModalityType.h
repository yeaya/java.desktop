#ifndef _java_awt_Dialog$ModalityType_h_
#define _java_awt_Dialog$ModalityType_h_
//$ class java.awt.Dialog$ModalityType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("APPLICATION_MODAL")
#undef APPLICATION_MODAL
#pragma push_macro("DOCUMENT_MODAL")
#undef DOCUMENT_MODAL
#pragma push_macro("MODELESS")
#undef MODELESS
#pragma push_macro("TOOLKIT_MODAL")
#undef TOOLKIT_MODAL

namespace java {
	namespace awt {

class $import Dialog$ModalityType : public ::java::lang::Enum {
	$class(Dialog$ModalityType, 0, ::java::lang::Enum)
public:
	Dialog$ModalityType();
	static $Array<::java::awt::Dialog$ModalityType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::Dialog$ModalityType* valueOf($String* name);
	static $Array<::java::awt::Dialog$ModalityType>* values();
	static ::java::awt::Dialog$ModalityType* MODELESS;
	static ::java::awt::Dialog$ModalityType* DOCUMENT_MODAL;
	static ::java::awt::Dialog$ModalityType* APPLICATION_MODAL;
	static ::java::awt::Dialog$ModalityType* TOOLKIT_MODAL;
	static $Array<::java::awt::Dialog$ModalityType>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("APPLICATION_MODAL")
#pragma pop_macro("DOCUMENT_MODAL")
#pragma pop_macro("MODELESS")
#pragma pop_macro("TOOLKIT_MODAL")

#endif // _java_awt_Dialog$ModalityType_h_