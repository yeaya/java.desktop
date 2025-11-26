#ifndef _java_beans_MetaData$PrimitivePersistenceDelegate_h_
#define _java_beans_MetaData$PrimitivePersistenceDelegate_h_
//$ class java.beans.MetaData$PrimitivePersistenceDelegate
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

class MetaData$PrimitivePersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$PrimitivePersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$PrimitivePersistenceDelegate();
	void init$();
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$PrimitivePersistenceDelegate_h_