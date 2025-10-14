#ifndef _java_beans_MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_h_
#define _java_beans_MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_h_
//$ class java.beans.MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate
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

class MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate();
	void init$();
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$sun_swing_PrintColorUIResource_PersistenceDelegate_h_