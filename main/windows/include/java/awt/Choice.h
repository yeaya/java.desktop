#ifndef _java_awt_Choice_h_
#define _java_awt_Choice_h_
//$ class java.awt.Choice
//$ extends java.awt.Component
//$ implements java.awt.ItemSelectable,javax.accessibility.Accessible

#include <java/awt/Component.h>
#include <java/awt/ItemSelectable.h>
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
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $import Choice : public ::java::awt::Component, public ::java::awt::ItemSelectable, public ::javax::accessibility::Accessible {
	$class(Choice, 0, ::java::awt::Component, ::java::awt::ItemSelectable, ::javax::accessibility::Accessible)
public:
	Choice();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Component::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void add($String* item);
	virtual void addItem($String* item);
	virtual void addItemListener(::java::awt::event::ItemListener* l) override;
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual int32_t countItems();
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getItem(int32_t index);
	virtual int32_t getItemCount();
	$String* getItemImpl(int32_t index);
	virtual $Array<::java::awt::event::ItemListener>* getItemListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual int32_t getSelectedIndex();
	virtual $String* getSelectedItem();
	virtual $ObjectArray* getSelectedObjects() override;
	static void initIDs();
	virtual void insert($String* item, int32_t index);
	void insertNoInvalidate($String* item, int32_t index);
	virtual $String* paramString() override;
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	virtual void processItemEvent(::java::awt::event::ItemEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::awt::Component::remove;
	virtual void remove($String* item);
	virtual void remove(int32_t position);
	virtual void removeAll();
	virtual void removeItemListener(::java::awt::event::ItemListener* l) override;
	void removeNoInvalidate(int32_t position);
	virtual void select(int32_t pos);
	virtual void select($String* str);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::Vector* pItems = nullptr;
	int32_t selectedIndex = 0;
	::java::awt::event::ItemListener* itemListener = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0xC771968881BB9DD1;
	int32_t choiceSerializedDataVersion = 0;
};

	} // awt
} // java

#endif // _java_awt_Choice_h_