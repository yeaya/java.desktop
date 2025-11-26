#ifndef _sun_swing_MenuItemLayoutHelper$LayoutResult_h_
#define _sun_swing_MenuItemLayoutHelper$LayoutResult_h_
//$ class sun.swing.MenuItemLayoutHelper$LayoutResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace swing {

class $export MenuItemLayoutHelper$LayoutResult : public ::java::lang::Object {
	$class(MenuItemLayoutHelper$LayoutResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MenuItemLayoutHelper$LayoutResult();
	void init$();
	void init$(::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect, ::java::awt::Rectangle* accRect, ::java::awt::Rectangle* checkRect, ::java::awt::Rectangle* arrowRect, ::java::awt::Rectangle* labelRect);
	virtual ::java::awt::Rectangle* getAccRect();
	virtual ::java::util::Map* getAllRects();
	virtual ::java::awt::Rectangle* getArrowRect();
	virtual ::java::awt::Rectangle* getCheckRect();
	virtual ::java::awt::Rectangle* getIconRect();
	virtual ::java::awt::Rectangle* getLabelRect();
	virtual ::java::awt::Rectangle* getTextRect();
	virtual void setAccRect(::java::awt::Rectangle* accRect);
	virtual void setArrowRect(::java::awt::Rectangle* arrowRect);
	virtual void setCheckRect(::java::awt::Rectangle* checkRect);
	virtual void setIconRect(::java::awt::Rectangle* iconRect);
	virtual void setLabelRect(::java::awt::Rectangle* labelRect);
	virtual void setTextRect(::java::awt::Rectangle* textRect);
	::java::awt::Rectangle* iconRect = nullptr;
	::java::awt::Rectangle* textRect = nullptr;
	::java::awt::Rectangle* accRect = nullptr;
	::java::awt::Rectangle* checkRect = nullptr;
	::java::awt::Rectangle* arrowRect = nullptr;
	::java::awt::Rectangle* labelRect = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_MenuItemLayoutHelper$LayoutResult_h_