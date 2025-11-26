#ifndef _CloseOnMouseClickPropertyTest$TestType_h_
#define _CloseOnMouseClickPropertyTest$TestType_h_
//$ class CloseOnMouseClickPropertyTest$TestType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CHECK_BOX_MENU_ITEM")
#undef CHECK_BOX_MENU_ITEM
#pragma push_macro("MENU_ITEM")
#undef MENU_ITEM
#pragma push_macro("RADIO_BUTTON_MENU_ITEM")
#undef RADIO_BUTTON_MENU_ITEM

class $export CloseOnMouseClickPropertyTest$TestType : public ::java::lang::Enum {
	$class(CloseOnMouseClickPropertyTest$TestType, 0, ::java::lang::Enum)
public:
	CloseOnMouseClickPropertyTest$TestType();
	static $Array<CloseOnMouseClickPropertyTest$TestType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::CloseOnMouseClickPropertyTest$TestType* valueOf($String* name);
	static $Array<CloseOnMouseClickPropertyTest$TestType>* values();
	static ::CloseOnMouseClickPropertyTest$TestType* MENU_ITEM;
	static ::CloseOnMouseClickPropertyTest$TestType* CHECK_BOX_MENU_ITEM;
	static ::CloseOnMouseClickPropertyTest$TestType* RADIO_BUTTON_MENU_ITEM;
	static $Array<CloseOnMouseClickPropertyTest$TestType>* $VALUES;
};

#pragma pop_macro("CHECK_BOX_MENU_ITEM")
#pragma pop_macro("MENU_ITEM")
#pragma pop_macro("RADIO_BUTTON_MENU_ITEM")

#endif // _CloseOnMouseClickPropertyTest$TestType_h_