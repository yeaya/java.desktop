#ifndef _javax_swing_event_AncestorEvent_h_
#define _javax_swing_event_AncestorEvent_h_
//$ class javax.swing.event.AncestorEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("ANCESTOR_ADDED")
#undef ANCESTOR_ADDED
#pragma push_macro("ANCESTOR_MOVED")
#undef ANCESTOR_MOVED
#pragma push_macro("ANCESTOR_REMOVED")
#undef ANCESTOR_REMOVED

namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import AncestorEvent : public ::java::awt::AWTEvent {
	$class(AncestorEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	AncestorEvent();
	void init$(::javax::swing::JComponent* source, int32_t id, ::java::awt::Container* ancestor, ::java::awt::Container* ancestorParent);
	virtual ::java::awt::Container* getAncestor();
	virtual ::java::awt::Container* getAncestorParent();
	virtual ::javax::swing::JComponent* getComponent();
	static const int32_t ANCESTOR_ADDED = 1;
	static const int32_t ANCESTOR_REMOVED = 2;
	static const int32_t ANCESTOR_MOVED = 3;
	::java::awt::Container* ancestor = nullptr;
	::java::awt::Container* ancestorParent = nullptr;
};

		} // event
	} // swing
} // javax

#pragma pop_macro("ANCESTOR_ADDED")
#pragma pop_macro("ANCESTOR_MOVED")
#pragma pop_macro("ANCESTOR_REMOVED")

#endif // _javax_swing_event_AncestorEvent_h_