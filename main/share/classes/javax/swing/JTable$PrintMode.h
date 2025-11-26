#ifndef _javax_swing_JTable$PrintMode_h_
#define _javax_swing_JTable$PrintMode_h_
//$ class javax.swing.JTable$PrintMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FIT_WIDTH")
#undef FIT_WIDTH
#pragma push_macro("NORMAL")
#undef NORMAL

namespace javax {
	namespace swing {

class $export JTable$PrintMode : public ::java::lang::Enum {
	$class(JTable$PrintMode, 0, ::java::lang::Enum)
public:
	JTable$PrintMode();
	static $Array<::javax::swing::JTable$PrintMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::JTable$PrintMode* valueOf($String* name);
	static $Array<::javax::swing::JTable$PrintMode>* values();
	static ::javax::swing::JTable$PrintMode* NORMAL;
	static ::javax::swing::JTable$PrintMode* FIT_WIDTH;
	static $Array<::javax::swing::JTable$PrintMode>* $VALUES;
};

	} // swing
} // javax

#pragma pop_macro("FIT_WIDTH")
#pragma pop_macro("NORMAL")

#endif // _javax_swing_JTable$PrintMode_h_