#ifndef _java_beans_MetaData$ArrayPersistenceDelegate_h_
#define _java_beans_MetaData$ArrayPersistenceDelegate_h_
//$ class java.beans.MetaData$ArrayPersistenceDelegate
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

class MetaData$ArrayPersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$ArrayPersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$ArrayPersistenceDelegate();
	void init$();
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out) override;
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$ArrayPersistenceDelegate_h_