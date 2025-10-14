#ifndef _sun_swing_MenuItemLayoutHelper$ColumnAlignment_h_
#define _sun_swing_MenuItemLayoutHelper$ColumnAlignment_h_
//$ class sun.swing.MenuItemLayoutHelper$ColumnAlignment
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LEFT_ALIGNMENT")
#undef LEFT_ALIGNMENT
#pragma push_macro("RIGHT_ALIGNMENT")
#undef RIGHT_ALIGNMENT

namespace sun {
	namespace swing {

class $export MenuItemLayoutHelper$ColumnAlignment : public ::java::lang::Object {
	$class(MenuItemLayoutHelper$ColumnAlignment, 0, ::java::lang::Object)
public:
	MenuItemLayoutHelper$ColumnAlignment();
	void init$(int32_t checkAlignment, int32_t iconAlignment, int32_t textAlignment, int32_t accAlignment, int32_t arrowAlignment);
	virtual int32_t getAccAlignment();
	virtual int32_t getArrowAlignment();
	virtual int32_t getCheckAlignment();
	virtual int32_t getIconAlignment();
	virtual int32_t getTextAlignment();
	int32_t checkAlignment = 0;
	int32_t iconAlignment = 0;
	int32_t textAlignment = 0;
	int32_t accAlignment = 0;
	int32_t arrowAlignment = 0;
	static ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* LEFT_ALIGNMENT;
	static ::sun::swing::MenuItemLayoutHelper$ColumnAlignment* RIGHT_ALIGNMENT;
};

	} // swing
} // sun

#pragma pop_macro("LEFT_ALIGNMENT")
#pragma pop_macro("RIGHT_ALIGNMENT")

#endif // _sun_swing_MenuItemLayoutHelper$ColumnAlignment_h_