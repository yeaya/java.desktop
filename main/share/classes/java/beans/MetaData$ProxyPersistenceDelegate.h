#ifndef _java_beans_MetaData$ProxyPersistenceDelegate_h_
#define _java_beans_MetaData$ProxyPersistenceDelegate_h_
//$ class java.beans.MetaData$ProxyPersistenceDelegate
//$ extends java.beans.PersistenceDelegate

#include <java/beans/PersistenceDelegate.h>

namespace java {
	namespace beans {
		class Encoder;
		class Expression;
	}
}

namespace java {
	namespace beans {

class MetaData$ProxyPersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$ProxyPersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$ProxyPersistenceDelegate();
	void init$();
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$ProxyPersistenceDelegate_h_