#ifndef _sun_awt_Mutex_h_
#define _sun_awt_Mutex_h_
//$ class sun.awt.Mutex
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

namespace sun {
	namespace awt {

class $import Mutex : public ::java::lang::Object {
	$class(Mutex, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Mutex();
	void init$();
	virtual bool isOwned();
	virtual void lock();
	virtual void unlock();
	bool locked = false;
	$Thread* owner = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_Mutex_h_