#ifndef _sun_swing_MenuItemLayoutHelper$RectSize_h_
#define _sun_swing_MenuItemLayoutHelper$RectSize_h_
//$ class sun.swing.MenuItemLayoutHelper$RectSize
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace swing {

class $export MenuItemLayoutHelper$RectSize : public ::java::lang::Object {
	$class(MenuItemLayoutHelper$RectSize, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MenuItemLayoutHelper$RectSize();
	void init$();
	void init$(int32_t width, int32_t height, int32_t origWidth, int32_t maxWidth);
	virtual int32_t getHeight();
	virtual int32_t getMaxWidth();
	virtual int32_t getOrigWidth();
	virtual int32_t getWidth();
	virtual void setHeight(int32_t height);
	virtual void setMaxWidth(int32_t maxWidth);
	virtual void setOrigWidth(int32_t origWidth);
	virtual void setWidth(int32_t width);
	virtual $String* toString() override;
	int32_t width = 0;
	int32_t height = 0;
	int32_t origWidth = 0;
	int32_t maxWidth = 0;
};

	} // swing
} // sun

#endif // _sun_swing_MenuItemLayoutHelper$RectSize_h_