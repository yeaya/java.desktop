#ifndef _java_awt_Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_h_
#define _java_awt_Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_h_
//$ class java.awt.Component$AccessibleAWTComponent$AccessibleAWTComponentHandler
//$ extends java.awt.event.ComponentListener
//$ implements java.io.Serializable

#include <java/awt/event/ComponentListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Component$AccessibleAWTComponent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}

namespace java {
	namespace awt {

class $export Component$AccessibleAWTComponent$AccessibleAWTComponentHandler : public ::java::awt::event::ComponentListener, public ::java::io::Serializable {
	$class(Component$AccessibleAWTComponent$AccessibleAWTComponentHandler, $NO_CLASS_INIT, ::java::awt::event::ComponentListener, ::java::io::Serializable)
public:
	Component$AccessibleAWTComponent$AccessibleAWTComponentHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component$AccessibleAWTComponent* this$1);
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	virtual $String* toString() override;
	::java::awt::Component$AccessibleAWTComponent* this$1 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xF1FCE1A7618089C3;
};

	} // awt
} // java

#endif // _java_awt_Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_h_