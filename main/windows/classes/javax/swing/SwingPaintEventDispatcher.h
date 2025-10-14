#ifndef _javax_swing_SwingPaintEventDispatcher_h_
#define _javax_swing_SwingPaintEventDispatcher_h_
//$ class javax.swing.SwingPaintEventDispatcher
//$ extends sun.awt.PaintEventDispatcher

#include <sun/awt/PaintEventDispatcher.h>

#pragma push_macro("ERASE_BACKGROUND")
#undef ERASE_BACKGROUND
#pragma push_macro("SHOW_FROM_DOUBLE_BUFFER")
#undef SHOW_FROM_DOUBLE_BUFFER

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class PaintEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace javax {
	namespace swing {

class SwingPaintEventDispatcher : public ::sun::awt::PaintEventDispatcher {
	$class(SwingPaintEventDispatcher, 0, ::sun::awt::PaintEventDispatcher)
public:
	SwingPaintEventDispatcher();
	void init$();
	virtual ::java::awt::event::PaintEvent* createPaintEvent(::java::awt::Component* component, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual bool queueSurfaceDataReplacing(::java::awt::Component* c, ::java::lang::Runnable* r) override;
	virtual bool shouldDoNativeBackgroundErase(::java::awt::Component* c) override;
	static bool SHOW_FROM_DOUBLE_BUFFER;
	static bool ERASE_BACKGROUND;
};

	} // swing
} // javax

#pragma pop_macro("ERASE_BACKGROUND")
#pragma pop_macro("SHOW_FROM_DOUBLE_BUFFER")

#endif // _javax_swing_SwingPaintEventDispatcher_h_