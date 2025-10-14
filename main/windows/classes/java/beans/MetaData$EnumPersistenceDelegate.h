#ifndef _java_beans_MetaData$EnumPersistenceDelegate_h_
#define _java_beans_MetaData$EnumPersistenceDelegate_h_
//$ class java.beans.MetaData$EnumPersistenceDelegate
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

class MetaData$EnumPersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$EnumPersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$EnumPersistenceDelegate();
	void init$();
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$EnumPersistenceDelegate_h_