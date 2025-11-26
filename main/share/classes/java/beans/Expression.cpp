#include <java/beans/Expression.h>

#include <java/beans/Statement.h>
#include <jcpp.h>

using $Statement = ::java::beans::Statement;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace beans {

$Attribute Expression_Attribute_var$1[] = {
	{'s', "target"},
	{'s', "methodName"},
	{'s', "arguments"},
	{'-'}
};

$NamedAttribute Expression_Attribute_var$0[] = {
	{"value", '[', Expression_Attribute_var$1},
	{}
};

$CompoundAttribute _Expression_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", Expression_Attribute_var$0},
	{}
};

$FieldInfo _Expression_FieldInfo_[] = {
	{"unbound", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Expression, unbound)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Expression, value)},
	{}
};

$MethodInfo _Expression_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Expression::*)(Object$*,$String*,$ObjectArray*)>(&Expression::init$)), nullptr, nullptr, _Expression_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Expression::*)(Object$*,Object$*,$String*,$ObjectArray*)>(&Expression::init$))},
	{"execute", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"instanceName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, 0},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Expression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.Expression",
	"java.beans.Statement",
	nullptr,
	_Expression_FieldInfo_,
	_Expression_MethodInfo_
};

$Object* allocate$Expression($Class* clazz) {
	return $of($alloc(Expression));
}

$Object* Expression::unbound = nullptr;

void Expression::init$(Object$* target, $String* methodName, $ObjectArray* arguments) {
	$Statement::init$(target, methodName, arguments);
	$set(this, value, Expression::unbound);
}

void Expression::init$(Object$* value, Object$* target, $String* methodName, $ObjectArray* arguments) {
	Expression::init$(target, methodName, arguments);
	setValue(value);
}

void Expression::execute() {
	setValue($(invoke()));
}

$Object* Expression::getValue() {
	if ($equals(this->value, Expression::unbound)) {
		setValue($(invoke()));
	}
	return $of(this->value);
}

void Expression::setValue(Object$* value) {
	$set(this, value, value);
}

$String* Expression::instanceName(Object$* instance) {
	return $equals(instance, Expression::unbound) ? "<unbound>"_s : $Statement::instanceName(instance);
}

$String* Expression::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$(instanceName(this->value)), "="_s}));
	return $concat(var$0, $($Statement::toString()));
}

void clinit$Expression($Class* class$) {
	$assignStatic(Expression::unbound, $new($Object));
}

Expression::Expression() {
}

$Class* Expression::load$($String* name, bool initialize) {
	$loadClass(Expression, name, initialize, &_Expression_ClassInfo_, clinit$Expression, allocate$Expression);
	return class$;
}

$Class* Expression::class$ = nullptr;

	} // beans
} // java