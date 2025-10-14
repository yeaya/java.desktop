#ifndef _javax_swing_plaf_ComponentUI_h_
#define _javax_swing_plaf_ComponentUI_h_
//$ class javax.swing.plaf.ComponentUI
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import ComponentUI : public ::java::lang::Object {
	$class(ComponentUI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ComponentUI();
	void init$();
	virtual bool contains(::javax::swing::JComponent* c, int32_t x, int32_t y);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* c, int32_t i);
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height);
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c);
	virtual void installUI(::javax::swing::JComponent* c);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void uninstallUI(::javax::swing::JComponent* c);
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_ComponentUI_h_