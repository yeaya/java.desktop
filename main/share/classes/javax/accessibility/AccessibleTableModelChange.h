#ifndef _javax_accessibility_AccessibleTableModelChange_h_
#define _javax_accessibility_AccessibleTableModelChange_h_
//$ interface javax.accessibility.AccessibleTableModelChange
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("INSERT")
#undef INSERT
#pragma push_macro("UPDATE")
#undef UPDATE

namespace javax {
	namespace accessibility {

class $export AccessibleTableModelChange : public ::java::lang::Object {
	$interface(AccessibleTableModelChange, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getFirstColumn() {return 0;}
	virtual int32_t getFirstRow() {return 0;}
	virtual int32_t getLastColumn() {return 0;}
	virtual int32_t getLastRow() {return 0;}
	virtual int32_t getType() {return 0;}
	static const int32_t INSERT = 1;
	static const int32_t UPDATE = 0;
	static const int32_t DELETE = (-1);
};

	} // accessibility
} // javax

#pragma pop_macro("DELETE")
#pragma pop_macro("INSERT")
#pragma pop_macro("UPDATE")

#endif // _javax_accessibility_AccessibleTableModelChange_h_