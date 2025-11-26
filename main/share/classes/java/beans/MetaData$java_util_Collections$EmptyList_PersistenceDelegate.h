#ifndef _java_beans_MetaData$java_util_Collections$EmptyList_PersistenceDelegate_h_
#define _java_beans_MetaData$java_util_Collections$EmptyList_PersistenceDelegate_h_
//$ class java.beans.MetaData$java_util_Collections$EmptyList_PersistenceDelegate
//$ extends java.beans.MetaData$java_util_Collections

#include <java/beans/MetaData$java_util_Collections.h>

namespace java {
	namespace beans {
		class Encoder;
		class Expression;
	}
}

namespace java {
	namespace beans {

class MetaData$java_util_Collections$EmptyList_PersistenceDelegate : public ::java::beans::MetaData$java_util_Collections {
	$class(MetaData$java_util_Collections$EmptyList_PersistenceDelegate, $NO_CLASS_INIT, ::java::beans::MetaData$java_util_Collections)
public:
	MetaData$java_util_Collections$EmptyList_PersistenceDelegate();
	void init$();
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$java_util_Collections$EmptyList_PersistenceDelegate_h_