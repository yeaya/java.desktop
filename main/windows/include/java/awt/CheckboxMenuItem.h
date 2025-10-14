#ifndef _java_awt_CheckboxMenuItem_h_
#define _java_awt_CheckboxMenuItem_h_
//$ class java.awt.CheckboxMenuItem
//$ extends java.awt.MenuItem
//$ implements java.awt.ItemSelectable

#include <java/awt/ItemSelectable.h>
#include <java/awt/MenuItem.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
			class ItemListener;
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

class $import CheckboxMenuItem : public ::java::awt::MenuItem, public ::java::awt::ItemSelectable {
	$class(CheckboxMenuItem, 0, ::java::awt::MenuItem, ::java::awt::ItemSelectable)
public:
	CheckboxMenuItem();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* label);
	void init$($String* label, bool state);
	virtual void addItemListener(::java::awt::event::ItemListener* l) override;
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual void doMenuEvent(int64_t when, int32_t modifiers) override;
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::java::awt::event::ItemListener>* getItemListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual $ObjectArray* getSelectedObjects() override;
	virtual bool getState();
	static void initIDs();
	virtual $String* paramString() override;
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	virtual void processItemEvent(::java::awt::event::ItemEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeItemListener(::java::awt::event::ItemListener* l) override;
	virtual void setState(bool b);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$volatile(bool) state = false;
	$volatile(::java::awt::event::ItemListener*) itemListener = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x55E98118F4AF22DB;
	int32_t checkboxMenuItemSerializedDataVersion = 0;
};

	} // awt
} // java

#endif // _java_awt_CheckboxMenuItem_h_