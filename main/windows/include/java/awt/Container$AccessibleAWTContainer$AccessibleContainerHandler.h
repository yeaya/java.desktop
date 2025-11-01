#ifndef _java_awt_Container$AccessibleAWTContainer$AccessibleContainerHandler_h_
#define _java_awt_Container$AccessibleAWTContainer$AccessibleContainerHandler_h_
//$ class java.awt.Container$AccessibleAWTContainer$AccessibleContainerHandler
//$ extends java.awt.event.ContainerListener
//$ implements java.io.Serializable

#include <java/awt/event/ContainerListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Container$AccessibleAWTContainer;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
		}
	}
}

namespace java {
	namespace awt {

class $import Container$AccessibleAWTContainer$AccessibleContainerHandler : public ::java::awt::event::ContainerListener, public ::java::io::Serializable {
	$class(Container$AccessibleAWTContainer$AccessibleContainerHandler, $NO_CLASS_INIT, ::java::awt::event::ContainerListener, ::java::io::Serializable)
public:
	Container$AccessibleAWTContainer$AccessibleContainerHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Container$AccessibleAWTContainer* this$1);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	virtual $String* toString() override;
	::java::awt::Container$AccessibleAWTContainer* this$1 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xF953A89A6CF921EB;
};

	} // awt
} // java

#endif // _java_awt_Container$AccessibleAWTContainer$AccessibleContainerHandler_h_