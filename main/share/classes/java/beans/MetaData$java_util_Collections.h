#ifndef _java_beans_MetaData$java_util_Collections_h_
#define _java_beans_MetaData$java_util_Collections_h_
//$ class java.beans.MetaData$java_util_Collections
//$ extends java.beans.PersistenceDelegate

#include <java/beans/PersistenceDelegate.h>

namespace java {
	namespace beans {
		class Encoder;
	}
}

namespace java {
	namespace beans {

class MetaData$java_util_Collections : public ::java::beans::PersistenceDelegate {
	$class(MetaData$java_util_Collections, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$java_util_Collections();
	void init$();
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out) override;
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$java_util_Collections_h_