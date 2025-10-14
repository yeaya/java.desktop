#ifndef _java_beans_PersistenceDelegate_h_
#define _java_beans_PersistenceDelegate_h_
//$ class java.beans.PersistenceDelegate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		class Encoder;
		class Expression;
	}
}

namespace java {
	namespace beans {

class $import PersistenceDelegate : public ::java::lang::Object {
	$class(PersistenceDelegate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PersistenceDelegate();
	void init$();
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out);
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) {return nullptr;}
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance);
	virtual void writeObject(Object$* oldInstance, ::java::beans::Encoder* out);
};

	} // beans
} // java

#endif // _java_beans_PersistenceDelegate_h_