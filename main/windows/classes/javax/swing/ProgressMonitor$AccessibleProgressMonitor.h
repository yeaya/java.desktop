#ifndef _javax_swing_ProgressMonitor$AccessibleProgressMonitor_h_
#define _javax_swing_ProgressMonitor$AccessibleProgressMonitor_h_
//$ class javax.swing.ProgressMonitor$AccessibleProgressMonitor
//$ extends javax.accessibility.AccessibleContext
//$ implements javax.accessibility.AccessibleText,javax.swing.event.ChangeListener,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleComponent;
		class AccessibleRole;
		class AccessibleStateSet;
		class AccessibleValue;
	}
}
namespace javax {
	namespace swing {
		class ProgressMonitor;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace swing {

class $export ProgressMonitor$AccessibleProgressMonitor : public ::javax::accessibility::AccessibleContext, public ::javax::accessibility::AccessibleText, public ::javax::swing::event::ChangeListener, public ::java::beans::PropertyChangeListener {
	$class(ProgressMonitor$AccessibleProgressMonitor, $NO_CLASS_INIT, ::javax::accessibility::AccessibleContext, ::javax::accessibility::AccessibleText, ::javax::swing::event::ChangeListener, ::java::beans::PropertyChangeListener)
public:
	ProgressMonitor$AccessibleProgressMonitor();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::ProgressMonitor* this$0);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual $String* getAccessibleDescription() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::Accessible* getAccessibleParent() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual $String* getAfterIndex(int32_t part, int32_t index) override;
	virtual $String* getAtIndex(int32_t part, int32_t index) override;
	virtual $String* getBeforeIndex(int32_t part, int32_t index) override;
	virtual int32_t getCaretPosition() override;
	virtual int32_t getCharCount() override;
	virtual ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) override;
	virtual ::java::awt::Rectangle* getCharacterBounds(int32_t i) override;
	virtual int32_t getIndexAtPoint(::java::awt::Point* p) override;
	virtual ::java::util::Locale* getLocale() override;
	::javax::accessibility::AccessibleText* getNoteLabelAccessibleText();
	::javax::accessibility::AccessibleContext* getPanelAccessibleContext();
	::javax::accessibility::AccessibleContext* getParentAccessibleContext();
	virtual $String* getSelectedText() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	void optionPaneCreated();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	bool sameWindowAncestor(::java::awt::Component* src, ::java::awt::Component* dest);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::ProgressMonitor* this$0 = nullptr;
	$Object* oldModelValue = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ProgressMonitor$AccessibleProgressMonitor_h_