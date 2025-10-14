#ifndef _java_beans_MetaData$java_awt_GridBagLayout_PersistenceDelegate_h_
#define _java_beans_MetaData$java_awt_GridBagLayout_PersistenceDelegate_h_
//$ class java.beans.MetaData$java_awt_GridBagLayout_PersistenceDelegate
//$ extends java.beans.DefaultPersistenceDelegate

#include <java/beans/DefaultPersistenceDelegate.h>

namespace java {
	namespace beans {
		class Encoder;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace java {
	namespace beans {

class MetaData$java_awt_GridBagLayout_PersistenceDelegate : public ::java::beans::DefaultPersistenceDelegate {
	$class(MetaData$java_awt_GridBagLayout_PersistenceDelegate, $NO_CLASS_INIT, ::java::beans::DefaultPersistenceDelegate)
public:
	MetaData$java_awt_GridBagLayout_PersistenceDelegate();
	void init$();
	static ::java::util::Hashtable* getHashtable(Object$* instance);
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out) override;
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$java_awt_GridBagLayout_PersistenceDelegate_h_