#ifndef _java_beans_Encoder_h_
#define _java_beans_Encoder_h_
//$ class java.beans.Encoder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {
				class PersistenceDelegateFinder;
			}
		}
	}
}
namespace java {
	namespace beans {
		class ExceptionListener;
		class Expression;
		class PersistenceDelegate;
		class Statement;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace beans {

class $export Encoder : public ::java::lang::Object {
	$class(Encoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Encoder();
	void init$();
	virtual void clear();
	::java::beans::Statement* cloneStatement(::java::beans::Statement* oldExp);
	virtual $Object* get(Object$* oldInstance);
	virtual $Object* getAttribute(Object$* key);
	virtual ::java::beans::ExceptionListener* getExceptionListener();
	virtual ::java::beans::PersistenceDelegate* getPersistenceDelegate($Class* type);
	virtual $Object* getValue(::java::beans::Expression* exp);
	virtual $Object* remove(Object$* oldInstance);
	virtual void setAttribute(Object$* key, Object$* value);
	virtual void setExceptionListener(::java::beans::ExceptionListener* exceptionListener);
	virtual void setPersistenceDelegate($Class* type, ::java::beans::PersistenceDelegate* delegate);
	virtual void writeExpression(::java::beans::Expression* oldExp);
	virtual void writeObject(Object$* o);
	$Object* writeObject1(Object$* oldInstance);
	virtual void writeStatement(::java::beans::Statement* oldStm);
	::com::sun::beans::finder::PersistenceDelegateFinder* finder = nullptr;
	::java::util::Map* bindings = nullptr;
	::java::beans::ExceptionListener* exceptionListener = nullptr;
	bool executeStatements = false;
	::java::util::Map* attributes = nullptr;
};

	} // beans
} // java

#endif // _java_beans_Encoder_h_