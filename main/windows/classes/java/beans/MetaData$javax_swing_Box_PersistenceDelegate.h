#ifndef _java_beans_MetaData$javax_swing_Box_PersistenceDelegate_h_
#define _java_beans_MetaData$javax_swing_Box_PersistenceDelegate_h_
//$ class java.beans.MetaData$javax_swing_Box_PersistenceDelegate
//$ extends java.beans.DefaultPersistenceDelegate

#include <java/beans/DefaultPersistenceDelegate.h>

namespace java {
	namespace beans {
		class Encoder;
		class Expression;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}

namespace java {
	namespace beans {

class MetaData$javax_swing_Box_PersistenceDelegate : public ::java::beans::DefaultPersistenceDelegate {
	$class(MetaData$javax_swing_Box_PersistenceDelegate, $NO_CLASS_INIT, ::java::beans::DefaultPersistenceDelegate)
public:
	MetaData$javax_swing_Box_PersistenceDelegate();
	void init$();
	::java::lang::Integer* getAxis(Object$* object);
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$javax_swing_Box_PersistenceDelegate_h_