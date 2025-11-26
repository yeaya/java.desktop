#ifndef _java_awt_Button_h_
#define _java_awt_Button_h_
//$ class java.awt.Button
//$ extends java.awt.Component
//$ implements javax.accessibility.Accessible

#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $export Button : public ::java::awt::Component, public ::javax::accessibility::Accessible {
	$class(Button, 0, ::java::awt::Component, ::javax::accessibility::Accessible)
public:
	Button();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* label);
	virtual void addActionListener(::java::awt::event::ActionListener* l);
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getActionCommand();
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual $String* getLabel();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	static void initIDs();
	virtual $String* paramString() override;
	virtual void processActionEvent(::java::awt::event::ActionEvent* e);
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeActionListener(::java::awt::event::ActionListener* l);
	virtual void setActionCommand($String* command);
	virtual void setLabel($String* label);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$String* label = nullptr;
	$String* actionCommand = nullptr;
	::java::awt::event::ActionListener* actionListener = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x863A0FA678C2539E;
	int32_t buttonSerializedDataVersion = 0;
};

	} // awt
} // java

#endif // _java_awt_Button_h_