#ifndef _java_awt_Checkbox_h_
#define _java_awt_Checkbox_h_
//$ class java.awt.Checkbox
//$ extends java.awt.Component
//$ implements java.awt.ItemSelectable,javax.accessibility.Accessible

#include <java/awt/Component.h>
#include <java/awt/ItemSelectable.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class CheckboxGroup;
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

class $import Checkbox : public ::java::awt::Component, public ::java::awt::ItemSelectable, public ::javax::accessibility::Accessible {
	$class(Checkbox, 0, ::java::awt::Component, ::java::awt::ItemSelectable, ::javax::accessibility::Accessible)
public:
	Checkbox();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* label);
	void init$($String* label, bool state);
	void init$($String* label, bool state, ::java::awt::CheckboxGroup* group);
	void init$($String* label, ::java::awt::CheckboxGroup* group, bool state);
	virtual void addItemListener(::java::awt::event::ItemListener* l) override;
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::CheckboxGroup* getCheckboxGroup();
	virtual $Array<::java::awt::event::ItemListener>* getItemListeners();
	virtual $String* getLabel();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual $ObjectArray* getSelectedObjects() override;
	virtual bool getState();
	static void initIDs();
	virtual $String* paramString() override;
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	virtual void processItemEvent(::java::awt::event::ItemEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeItemListener(::java::awt::event::ItemListener* l) override;
	virtual void setCheckboxGroup(::java::awt::CheckboxGroup* g);
	virtual void setLabel($String* label);
	virtual void setState(bool state);
	virtual void setStateInternal(bool state);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$String* label = nullptr;
	bool state = false;
	::java::awt::CheckboxGroup* group = nullptr;
	::java::awt::event::ItemListener* itemListener = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x64E6C4265B00C083;
	int32_t checkboxSerializedDataVersion = 0;
};

	} // awt
} // java

#endif // _java_awt_Checkbox_h_