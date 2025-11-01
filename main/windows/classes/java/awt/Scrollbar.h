#ifndef _java_awt_Scrollbar_h_
#define _java_awt_Scrollbar_h_
//$ class java.awt.Scrollbar
//$ extends java.awt.Component
//$ implements java.awt.Adjustable,javax.accessibility.Accessible

#include <java/awt/Adjustable.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("VERTICAL")
#undef VERTICAL

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class AdjustmentEvent;
			class AdjustmentListener;
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

class $export Scrollbar : public ::java::awt::Component, public ::java::awt::Adjustable, public ::javax::accessibility::Accessible {
	$class(Scrollbar, 0, ::java::awt::Component, ::java::awt::Adjustable, ::javax::accessibility::Accessible)
public:
	Scrollbar();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t orientation);
	void init$(int32_t orientation, int32_t value, int32_t visible, int32_t minimum, int32_t maximum);
	virtual void addAdjustmentListener(::java::awt::event::AdjustmentListener* l) override;
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::java::awt::event::AdjustmentListener>* getAdjustmentListeners();
	virtual int32_t getBlockIncrement() override;
	virtual int32_t getLineIncrement();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual int32_t getMaximum() override;
	virtual int32_t getMinimum() override;
	virtual int32_t getOrientation() override;
	virtual int32_t getPageIncrement();
	virtual int32_t getUnitIncrement() override;
	virtual int32_t getValue() override;
	virtual bool getValueIsAdjusting();
	virtual int32_t getVisible();
	virtual int32_t getVisibleAmount() override;
	static void initIDs();
	virtual $String* paramString() override;
	virtual void processAdjustmentEvent(::java::awt::event::AdjustmentEvent* e);
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeAdjustmentListener(::java::awt::event::AdjustmentListener* l) override;
	virtual void setBlockIncrement(int32_t v) override;
	virtual void setLineIncrement(int32_t v);
	virtual void setMaximum(int32_t newMaximum) override;
	virtual void setMinimum(int32_t newMinimum) override;
	virtual void setOrientation(int32_t orientation);
	virtual void setPageIncrement(int32_t v);
	virtual void setUnitIncrement(int32_t v) override;
	virtual void setValue(int32_t newValue) override;
	virtual void setValueIsAdjusting(bool b);
	virtual void setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum);
	virtual void setVisibleAmount(int32_t newAmount) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t HORIZONTAL = 0;
	static const int32_t VERTICAL = 1;
	int32_t value = 0;
	int32_t maximum = 0;
	int32_t minimum = 0;
	int32_t visibleAmount = 0;
	int32_t orientation = 0;
	int32_t lineIncrement = 0;
	int32_t pageIncrement = 0;
	bool isAdjusting = false;
	::java::awt::event::AdjustmentListener* adjustmentListener = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x754A5ADE9D4AA18F;
	int32_t scrollbarSerializedDataVersion = 0;
};

	} // awt
} // java

#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("VERTICAL")

#endif // _java_awt_Scrollbar_h_