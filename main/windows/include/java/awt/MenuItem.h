#ifndef _java_awt_MenuItem_h_
#define _java_awt_MenuItem_h_
//$ class java.awt.MenuItem
//$ extends java.awt.MenuComponent
//$ implements javax.accessibility.Accessible

#include <java/awt/MenuComponent.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class MenuShortcut;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
			class KeyEvent;
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

class $import MenuItem : public ::java::awt::MenuComponent, public ::javax::accessibility::Accessible {
	$class(MenuItem, 0, ::java::awt::MenuComponent, ::javax::accessibility::Accessible)
public:
	MenuItem();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* label);
	void init$($String* label, ::java::awt::MenuShortcut* s);
	virtual void addActionListener(::java::awt::event::ActionListener* l);
	virtual void addNotify();
	virtual $String* constructComponentName() override;
	virtual void deleteShortcut();
	virtual void deleteShortcut(::java::awt::MenuShortcut* s);
	virtual void disable();
	void disableEvents(int64_t eventsToDisable);
	virtual void doMenuEvent(int64_t when, int32_t modifiers);
	virtual void enable();
	virtual void enable(bool b);
	void enableEvents(int64_t eventsToEnable);
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getActionCommand();
	$String* getActionCommandImpl();
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual $String* getLabel();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual ::java::awt::MenuShortcut* getShortcut();
	virtual ::java::awt::MenuItem* getShortcutMenuItem(::java::awt::MenuShortcut* s);
	virtual bool handleShortcut(::java::awt::event::KeyEvent* e);
	static void initIDs();
	virtual bool isEnabled();
	bool isItemEnabled();
	virtual $String* paramString() override;
	virtual void processActionEvent(::java::awt::event::ActionEvent* e);
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeActionListener(::java::awt::event::ActionListener* l);
	virtual void setActionCommand($String* command);
	virtual void setEnabled(bool b);
	virtual void setLabel($String* label);
	virtual void setShortcut(::java::awt::MenuShortcut* s);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$volatile(bool) enabled = false;
	$volatile($String*) label = nullptr;
	$volatile($String*) actionCommand = nullptr;
	$volatile(int64_t) eventMask = 0;
	$volatile(::java::awt::event::ActionListener*) actionListener = nullptr;
	$volatile(::java::awt::MenuShortcut*) shortcut = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0xFFB2B3D19A69D586;
	int32_t menuItemSerializedDataVersion = 0;
};

	} // awt
} // java

#endif // _java_awt_MenuItem_h_