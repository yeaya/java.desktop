#ifndef _java_awt_List$AccessibleAWTList_h_
#define _java_awt_List$AccessibleAWTList_h_
//$ class java.awt.List$AccessibleAWTList
//$ extends java.awt.Component$AccessibleAWTComponent
//$ implements javax.accessibility.AccessibleSelection,java.awt.event.ItemListener,java.awt.event.ActionListener

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <javax/accessibility/AccessibleSelection.h>

namespace java {
	namespace awt {
		class List;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ItemEvent;
		}
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}

namespace java {
	namespace awt {

class $import List$AccessibleAWTList : public ::java::awt::Component$AccessibleAWTComponent, public ::javax::accessibility::AccessibleSelection, public ::java::awt::event::ItemListener, public ::java::awt::event::ActionListener {
	$class(List$AccessibleAWTList, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent, ::javax::accessibility::AccessibleSelection, ::java::awt::event::ItemListener, ::java::awt::event::ActionListener)
public:
	List$AccessibleAWTList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::List* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void clearAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual void itemStateChanged(::java::awt::event::ItemEvent* event) override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void selectAllAccessibleSelection() override;
	virtual $String* toString() override;
	::java::awt::List* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x6DF9E582FFD8E81D;
};

	} // awt
} // java

#endif // _java_awt_List$AccessibleAWTList_h_