#ifndef _javax_swing_LayoutStyle$ComponentPlacement_h_
#define _javax_swing_LayoutStyle$ComponentPlacement_h_
//$ class javax.swing.LayoutStyle$ComponentPlacement
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INDENT")
#undef INDENT
#pragma push_macro("RELATED")
#undef RELATED
#pragma push_macro("UNRELATED")
#undef UNRELATED

namespace javax {
	namespace swing {

class $import LayoutStyle$ComponentPlacement : public ::java::lang::Enum {
	$class(LayoutStyle$ComponentPlacement, 0, ::java::lang::Enum)
public:
	LayoutStyle$ComponentPlacement();
	static $Array<::javax::swing::LayoutStyle$ComponentPlacement>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::LayoutStyle$ComponentPlacement* valueOf($String* name);
	static $Array<::javax::swing::LayoutStyle$ComponentPlacement>* values();
	static ::javax::swing::LayoutStyle$ComponentPlacement* RELATED;
	static ::javax::swing::LayoutStyle$ComponentPlacement* UNRELATED;
	static ::javax::swing::LayoutStyle$ComponentPlacement* INDENT;
	static $Array<::javax::swing::LayoutStyle$ComponentPlacement>* $VALUES;
};

	} // swing
} // javax

#pragma pop_macro("INDENT")
#pragma pop_macro("RELATED")
#pragma pop_macro("UNRELATED")

#endif // _javax_swing_LayoutStyle$ComponentPlacement_h_