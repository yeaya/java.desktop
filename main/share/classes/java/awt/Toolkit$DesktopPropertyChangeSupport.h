#ifndef _java_awt_Toolkit$DesktopPropertyChangeSupport_h_
#define _java_awt_Toolkit$DesktopPropertyChangeSupport_h_
//$ class java.awt.Toolkit$DesktopPropertyChangeSupport
//$ extends java.beans.PropertyChangeSupport

#include <java/beans/PropertyChangeSupport.h>
#include <java/lang/Array.h>

#pragma push_macro("PROP_CHANGE_SUPPORT_KEY")
#undef PROP_CHANGE_SUPPORT_KEY

namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace java {
	namespace awt {

class Toolkit$DesktopPropertyChangeSupport : public ::java::beans::PropertyChangeSupport {
	$class(Toolkit$DesktopPropertyChangeSupport, 0, ::java::beans::PropertyChangeSupport)
public:
	Toolkit$DesktopPropertyChangeSupport();
	using ::java::beans::PropertyChangeSupport::firePropertyChange;
	void init$(Object$* sourceBean);
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void firePropertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners() override;
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners($String* propertyName) override;
	virtual void removePropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	static ::java::lang::StringBuilder* PROP_CHANGE_SUPPORT_KEY;
	$Object* source = nullptr;
};

	} // awt
} // java

#pragma pop_macro("PROP_CHANGE_SUPPORT_KEY")

#endif // _java_awt_Toolkit$DesktopPropertyChangeSupport_h_