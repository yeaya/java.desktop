#ifndef _java_beans_DefaultPersistenceDelegate_h_
#define _java_beans_DefaultPersistenceDelegate_h_
//$ class java.beans.DefaultPersistenceDelegate
//$ extends java.beans.PersistenceDelegate

#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace beans {
		class Encoder;
		class Expression;
		class PropertyDescriptor;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace beans {

class $import DefaultPersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(DefaultPersistenceDelegate, 0, ::java::beans::PersistenceDelegate)
public:
	DefaultPersistenceDelegate();
	void init$();
	void init$($StringArray* constructorPropertyNames);
	static bool definesEquals($Class* type);
	bool definesEquals(Object$* instance);
	void doProperty($Class* type, ::java::beans::PropertyDescriptor* pd, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out);
	::java::lang::reflect::Method* findMethod($Class* type, $String* property);
	static ::java::beans::PropertyDescriptor* getPropertyDescriptor($Class* type, $String* property);
	void initBean($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out);
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out) override;
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	static void invokeStatement(Object$* instance, $String* methodName, $ObjectArray* args, ::java::beans::Encoder* out);
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
	static $StringArray* EMPTY;
	$StringArray* constructor = nullptr;
	::java::lang::Boolean* definesEquals$ = nullptr;
};

	} // beans
} // java

#pragma pop_macro("EMPTY")

#endif // _java_beans_DefaultPersistenceDelegate_h_