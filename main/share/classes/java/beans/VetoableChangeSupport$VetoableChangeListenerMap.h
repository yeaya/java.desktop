#ifndef _java_beans_VetoableChangeSupport$VetoableChangeListenerMap_h_
#define _java_beans_VetoableChangeSupport$VetoableChangeListenerMap_h_
//$ class java.beans.VetoableChangeSupport$VetoableChangeListenerMap
//$ extends java.beans.ChangeListenerMap

#include <java/beans/ChangeListenerMap.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace beans {
		class VetoableChangeListener;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}

namespace java {
	namespace beans {

class VetoableChangeSupport$VetoableChangeListenerMap : public ::java::beans::ChangeListenerMap {
	$class(VetoableChangeSupport$VetoableChangeListenerMap, 0, ::java::beans::ChangeListenerMap)
public:
	VetoableChangeSupport$VetoableChangeListenerMap();
	void init$();
	::java::beans::VetoableChangeListener* extract(::java::beans::VetoableChangeListener* listener);
	virtual ::java::util::EventListener* extract(::java::util::EventListener* listener) override;
	virtual $Array<::java::util::EventListener>* newArray(int32_t length) override;
	::java::beans::VetoableChangeListener* newProxy($String* name, ::java::beans::VetoableChangeListener* listener);
	virtual ::java::util::EventListener* newProxy($String* name, ::java::util::EventListener* listener) override;
	static $Array<::java::beans::VetoableChangeListener>* EMPTY;
};

	} // beans
} // java

#pragma pop_macro("EMPTY")

#endif // _java_beans_VetoableChangeSupport$VetoableChangeListenerMap_h_