#ifndef _java_beans_Expression_h_
#define _java_beans_Expression_h_
//$ class java.beans.Expression
//$ extends java.beans.Statement

#include <java/beans/Statement.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {

class $export Expression : public ::java::beans::Statement {
	$class(Expression, 0, ::java::beans::Statement)
public:
	Expression();
	void init$(Object$* target, $String* methodName, $ObjectArray* arguments);
	void init$(Object$* value, Object$* target, $String* methodName, $ObjectArray* arguments);
	virtual void execute() override;
	virtual $Object* getValue();
	virtual $String* instanceName(Object$* instance) override;
	virtual void setValue(Object$* value);
	virtual $String* toString() override;
	static $Object* unbound;
	$Object* value = nullptr;
};

	} // beans
} // java

#endif // _java_beans_Expression_h_