#ifndef _sun_awt_RepaintArea_h_
#define _sun_awt_RepaintArea_h_
//$ class sun.awt.RepaintArea
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("MAX_BENEFIT_RATIO")
#undef MAX_BENEFIT_RATIO
#pragma push_macro("RECT_COUNT")
#undef RECT_COUNT
#pragma push_macro("UPDATE")
#undef UPDATE
#pragma push_macro("VERTICAL")
#undef VERTICAL

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Rectangle;
	}
}

namespace sun {
	namespace awt {

class $import RepaintArea : public ::java::lang::Object {
	$class(RepaintArea, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RepaintArea();
	void init$();
	void init$(::sun::awt::RepaintArea* ra);
	virtual void add(::java::awt::Rectangle* r, int32_t id);
	::sun::awt::RepaintArea* cloneAndReset();
	virtual void constrain(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual bool isEmpty();
	virtual void paint(Object$* target, bool shouldClearRectBeforePaint);
	virtual void paintComponent(::java::awt::Component* comp, ::java::awt::Graphics* g);
	virtual void subtract(int32_t x, int32_t y, int32_t w, int32_t h);
	static bool subtract(::java::awt::Rectangle* rect, ::java::awt::Rectangle* subtr);
	virtual $String* toString() override;
	virtual void updateComponent(::java::awt::Component* comp, ::java::awt::Graphics* g);
	static const int32_t MAX_BENEFIT_RATIO = 4;
	static const int32_t HORIZONTAL = 0;
	static const int32_t VERTICAL = 1;
	static const int32_t UPDATE = 2;
	static const int32_t RECT_COUNT = 3; // UPDATE + 1
	$Array<::java::awt::Rectangle>* paintRects = nullptr;
};

	} // awt
} // sun

#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("MAX_BENEFIT_RATIO")
#pragma pop_macro("RECT_COUNT")
#pragma pop_macro("UPDATE")
#pragma pop_macro("VERTICAL")

#endif // _sun_awt_RepaintArea_h_