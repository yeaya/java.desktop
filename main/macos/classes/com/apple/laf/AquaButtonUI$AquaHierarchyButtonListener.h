#ifndef _com_apple_laf_AquaButtonUI$AquaHierarchyButtonListener_h_
#define _com_apple_laf_AquaButtonUI$AquaHierarchyButtonListener_h_
//$ class com.apple.laf.AquaButtonUI$AquaHierarchyButtonListener
//$ extends java.awt.event.HierarchyListener

#include <java/awt/event/HierarchyListener.h>

namespace java {
	namespace awt {
		namespace event {
			class HierarchyEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonUI$AquaHierarchyButtonListener : public ::java::awt::event::HierarchyListener {
	$class(AquaButtonUI$AquaHierarchyButtonListener, $NO_CLASS_INIT, ::java::awt::event::HierarchyListener)
public:
	AquaButtonUI$AquaHierarchyButtonListener();
	void init$();
	virtual void hierarchyChanged(::java::awt::event::HierarchyEvent* e) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonUI$AquaHierarchyButtonListener_h_