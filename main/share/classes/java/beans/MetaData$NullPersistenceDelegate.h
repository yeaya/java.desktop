#ifndef _java_beans_MetaData$NullPersistenceDelegate_h_
#define _java_beans_MetaData$NullPersistenceDelegate_h_
//$ class java.beans.MetaData$NullPersistenceDelegate
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

class MetaData$NullPersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$NullPersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$NullPersistenceDelegate();
	void init$();
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out) override;
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual void writeObject(Object$* oldInstance, ::java::beans::Encoder* out) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$NullPersistenceDelegate_h_