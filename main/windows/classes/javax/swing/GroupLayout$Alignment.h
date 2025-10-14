#ifndef _javax_swing_GroupLayout$Alignment_h_
#define _javax_swing_GroupLayout$Alignment_h_
//$ class javax.swing.GroupLayout$Alignment
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BASELINE")
#undef BASELINE
#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("LEADING")
#undef LEADING
#pragma push_macro("TRAILING")
#undef TRAILING

namespace javax {
	namespace swing {

class $export GroupLayout$Alignment : public ::java::lang::Enum {
	$class(GroupLayout$Alignment, 0, ::java::lang::Enum)
public:
	GroupLayout$Alignment();
	static $Array<::javax::swing::GroupLayout$Alignment>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::GroupLayout$Alignment* valueOf($String* name);
	static $Array<::javax::swing::GroupLayout$Alignment>* values();
	static ::javax::swing::GroupLayout$Alignment* LEADING;
	static ::javax::swing::GroupLayout$Alignment* TRAILING;
	static ::javax::swing::GroupLayout$Alignment* CENTER;
	static ::javax::swing::GroupLayout$Alignment* BASELINE;
	static $Array<::javax::swing::GroupLayout$Alignment>* $VALUES;
};

	} // swing
} // javax

#pragma pop_macro("BASELINE")
#pragma pop_macro("CENTER")
#pragma pop_macro("LEADING")
#pragma pop_macro("TRAILING")

#endif // _javax_swing_GroupLayout$Alignment_h_