#ifndef _java_beans_MetaData$java_awt_List_PersistenceDelegate_h_
#define _java_beans_MetaData$java_awt_List_PersistenceDelegate_h_
//$ class java.beans.MetaData$java_awt_List_PersistenceDelegate
//$ extends java.beans.DefaultPersistenceDelegate

#include <java/beans/DefaultPersistenceDelegate.h>

namespace java {
	namespace beans {
		class Encoder;
	}
}

namespace java {
	namespace beans {

class MetaData$java_awt_List_PersistenceDelegate : public ::java::beans::DefaultPersistenceDelegate {
	$class(MetaData$java_awt_List_PersistenceDelegate, $NO_CLASS_INIT, ::java::beans::DefaultPersistenceDelegate)
public:
	MetaData$java_awt_List_PersistenceDelegate();
	void init$();
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$java_awt_List_PersistenceDelegate_h_