#ifndef _java_awt_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_h_
#define _java_awt_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_h_
//$ class java.awt.Component$AccessibleAWTComponent$AccessibleAWTFocusHandler
//$ extends java.awt.event.FocusListener
//$ implements java.io.Serializable

#include <java/awt/event/FocusListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Component$AccessibleAWTComponent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace java {
	namespace awt {

class $import Component$AccessibleAWTComponent$AccessibleAWTFocusHandler : public ::java::awt::event::FocusListener, public ::java::io::Serializable {
	$class(Component$AccessibleAWTComponent$AccessibleAWTFocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusListener, ::java::io::Serializable)
public:
	Component$AccessibleAWTComponent$AccessibleAWTFocusHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component$AccessibleAWTComponent* this$1);
	virtual void focusGained(::java::awt::event::FocusEvent* event) override;
	virtual void focusLost(::java::awt::event::FocusEvent* event) override;
	virtual $String* toString() override;
	::java::awt::Component$AccessibleAWTComponent* this$1 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2BBA465DA7494219;
};

	} // awt
} // java

#endif // _java_awt_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_h_