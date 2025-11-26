#ifndef _java_awt_Container$AccessibleAWTContainer_h_
#define _java_awt_Container$AccessibleAWTContainer_h_
//$ class java.awt.Container$AccessibleAWTContainer
//$ extends java.awt.Component$AccessibleAWTComponent

#include <java/awt/Component$AccessibleAWTComponent.h>

namespace java {
	namespace awt {
		class Container;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace java {
	namespace awt {

class $import Container$AccessibleAWTContainer : public ::java::awt::Component$AccessibleAWTComponent {
	$class(Container$AccessibleAWTContainer, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent)
public:
	Container$AccessibleAWTContainer();
	void init$(::java::awt::Container* this$0);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	::java::awt::Container* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x468479FC7895D1D1;
	$volatile(int32_t) propertyListenersCount = 0;
	::java::awt::event::ContainerListener* accessibleContainerHandler = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Container$AccessibleAWTContainer_h_