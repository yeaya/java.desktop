#ifndef _bug7010561_h_
#define _bug7010561_h_
//$ class bug7010561
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IS_SELECTED")
#undef IS_SELECTED
#pragma push_macro("RETURN_VALUE")
#undef RETURN_VALUE
#pragma push_macro("TAB_PLACEMENT")
#undef TAB_PLACEMENT

class $export bug7010561 : public ::java::lang::Object {
	$class(bug7010561, 0, ::java::lang::Object)
public:
	bug7010561();
	void init$();
	static void main($StringArray* args);
	static $ints* TAB_PLACEMENT;
	static $booleans* IS_SELECTED;
	static $ints* RETURN_VALUE;
};

#pragma pop_macro("IS_SELECTED")
#pragma pop_macro("RETURN_VALUE")
#pragma pop_macro("TAB_PLACEMENT")

#endif // _bug7010561_h_