#ifndef _java_beans_ThreadGroupContext$1_h_
#define _java_beans_ThreadGroupContext$1_h_
//$ class java.beans.ThreadGroupContext$1
//$ extends java.beans.WeakIdentityMap

#include <java/beans/WeakIdentityMap.h>

namespace java {
	namespace beans {

class ThreadGroupContext$1 : public ::java::beans::WeakIdentityMap {
	$class(ThreadGroupContext$1, $NO_CLASS_INIT, ::java::beans::WeakIdentityMap)
public:
	ThreadGroupContext$1();
	void init$();
	virtual $Object* create(Object$* key) override;
};

	} // beans
} // java

#endif // _java_beans_ThreadGroupContext$1_h_