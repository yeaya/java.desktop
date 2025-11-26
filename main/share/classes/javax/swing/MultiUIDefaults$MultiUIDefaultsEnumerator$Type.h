#ifndef _javax_swing_MultiUIDefaults$MultiUIDefaultsEnumerator$Type_h_
#define _javax_swing_MultiUIDefaults$MultiUIDefaultsEnumerator$Type_h_
//$ class javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ELEMENTS")
#undef ELEMENTS
#pragma push_macro("KEYS")
#undef KEYS

namespace javax {
	namespace swing {

class MultiUIDefaults$MultiUIDefaultsEnumerator$Type : public ::java::lang::Enum {
	$class(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, 0, ::java::lang::Enum)
public:
	MultiUIDefaults$MultiUIDefaultsEnumerator$Type();
	static $Array<::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type* valueOf($String* name);
	static $Array<::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type>* values();
	static ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type* KEYS;
	static ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type* ELEMENTS;
	static $Array<::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type>* $VALUES;
};

	} // swing
} // javax

#pragma pop_macro("ELEMENTS")
#pragma pop_macro("KEYS")

#endif // _javax_swing_MultiUIDefaults$MultiUIDefaultsEnumerator$Type_h_