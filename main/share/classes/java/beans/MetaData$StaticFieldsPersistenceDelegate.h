#ifndef _java_beans_MetaData$StaticFieldsPersistenceDelegate_h_
#define _java_beans_MetaData$StaticFieldsPersistenceDelegate_h_
//$ class java.beans.MetaData$StaticFieldsPersistenceDelegate
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

class MetaData$StaticFieldsPersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$StaticFieldsPersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$StaticFieldsPersistenceDelegate();
	void init$();
	virtual void installFields(::java::beans::Encoder* out, $Class* cls);
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual void writeObject(Object$* oldInstance, ::java::beans::Encoder* out) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$StaticFieldsPersistenceDelegate_h_