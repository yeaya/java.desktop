#ifndef _java_beans_PropertyChangeSupport$PropertyChangeListenerMap_h_
#define _java_beans_PropertyChangeSupport$PropertyChangeListenerMap_h_
//$ class java.beans.PropertyChangeSupport$PropertyChangeListenerMap
//$ extends java.beans.ChangeListenerMap

#include <java/beans/ChangeListenerMap.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}

namespace java {
	namespace beans {

class PropertyChangeSupport$PropertyChangeListenerMap : public ::java::beans::ChangeListenerMap {
	$class(PropertyChangeSupport$PropertyChangeListenerMap, 0, ::java::beans::ChangeListenerMap)
public:
	PropertyChangeSupport$PropertyChangeListenerMap();
	void init$();
	::java::beans::PropertyChangeListener* extract(::java::beans::PropertyChangeListener* listener);
	virtual ::java::util::EventListener* extract(::java::util::EventListener* listener) override;
	virtual $Array<::java::util::EventListener>* newArray(int32_t length) override;
	::java::beans::PropertyChangeListener* newProxy($String* name, ::java::beans::PropertyChangeListener* listener);
	virtual ::java::util::EventListener* newProxy($String* name, ::java::util::EventListener* listener) override;
	static $Array<::java::beans::PropertyChangeListener>* EMPTY;
};

	} // beans
} // java

#pragma pop_macro("EMPTY")

#endif // _java_beans_PropertyChangeSupport$PropertyChangeListenerMap_h_