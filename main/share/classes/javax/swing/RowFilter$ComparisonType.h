#ifndef _javax_swing_RowFilter$ComparisonType_h_
#define _javax_swing_RowFilter$ComparisonType_h_
//$ class javax.swing.RowFilter$ComparisonType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AFTER")
#undef AFTER
#pragma push_macro("BEFORE")
#undef BEFORE
#pragma push_macro("EQUAL")
#undef EQUAL
#pragma push_macro("NOT_EQUAL")
#undef NOT_EQUAL

namespace javax {
	namespace swing {

class $export RowFilter$ComparisonType : public ::java::lang::Enum {
	$class(RowFilter$ComparisonType, 0, ::java::lang::Enum)
public:
	RowFilter$ComparisonType();
	static $Array<::javax::swing::RowFilter$ComparisonType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::RowFilter$ComparisonType* valueOf($String* name);
	static $Array<::javax::swing::RowFilter$ComparisonType>* values();
	static ::javax::swing::RowFilter$ComparisonType* BEFORE;
	static ::javax::swing::RowFilter$ComparisonType* AFTER;
	static ::javax::swing::RowFilter$ComparisonType* EQUAL;
	static ::javax::swing::RowFilter$ComparisonType* NOT_EQUAL;
	static $Array<::javax::swing::RowFilter$ComparisonType>* $VALUES;
};

	} // swing
} // javax

#pragma pop_macro("AFTER")
#pragma pop_macro("BEFORE")
#pragma pop_macro("EQUAL")
#pragma pop_macro("NOT_EQUAL")

#endif // _javax_swing_RowFilter$ComparisonType_h_