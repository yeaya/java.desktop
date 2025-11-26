#ifndef _com_sun_java_swing_SwingUtilities3_h_
#define _com_sun_java_swing_SwingUtilities3_h_
//$ class com.sun.java.swing.SwingUtilities3
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DELEGATE_REPAINT_MANAGER_KEY")
#undef DELEGATE_REPAINT_MANAGER_KEY

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class RepaintManager;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {

class SwingUtilities3 : public ::java::lang::Object {
	$class(SwingUtilities3, 0, ::java::lang::Object)
public:
	SwingUtilities3();
	void init$();
	static ::javax::swing::RepaintManager* getDelegateRepaintManager(::java::awt::Component* component);
	static bool isVsyncRequested(::java::awt::Container* rootContainer);
	static void setDelegateRepaintManager(::javax::swing::JComponent* component, ::javax::swing::RepaintManager* repaintManager);
	static void setVsyncRequested(::java::awt::Container* rootContainer, bool isRequested);
	static bool $assertionsDisabled;
	static $Object* DELEGATE_REPAINT_MANAGER_KEY;
	static ::java::util::Map* vsyncedMap;
};

			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("DELEGATE_REPAINT_MANAGER_KEY")

#endif // _com_sun_java_swing_SwingUtilities3_h_