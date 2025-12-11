#include <java/beans/Statement.h>

#include <com/sun/beans/finder/ClassFinder.h>
#include <com/sun/beans/finder/ConstructorFinder.h>
#include <com/sun/beans/finder/MethodFinder.h>
#include <java/beans/ExceptionListener.h>
#include <java/beans/NameGenerator.h>
#include <java/beans/Statement$1.h>
#include <java/beans/Statement$2.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $ConstructorFinder = ::com::sun::beans::finder::ConstructorFinder;
using $MethodFinder = ::com::sun::beans::finder::MethodFinder;
using $ExceptionListener = ::java::beans::ExceptionListener;
using $NameGenerator = ::java::beans::NameGenerator;
using $Statement$1 = ::java::beans::Statement$1;
using $Statement$2 = ::java::beans::Statement$2;
using $Attribute = ::java::lang::Attribute;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $SecurityException = ::java::lang::SecurityException;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $1Array = ::java::lang::reflect::Array;
using $Constructor = ::java::lang::reflect::Constructor;
using $Executable = ::java::lang::reflect::Executable;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace beans {

$Attribute Statement_Attribute_var$1[] = {
	{'s', "target"},
	{'s', "methodName"},
	{'s', "arguments"},
	{'-'}
};

$NamedAttribute Statement_Attribute_var$0[] = {
	{"value", '[', Statement_Attribute_var$1},
	{}
};

$CompoundAttribute _Statement_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", Statement_Attribute_var$0},
	{}
};

$FieldInfo _Statement_FieldInfo_[] = {
	{"emptyArray", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Statement, emptyArray)},
	{"defaultExceptionListener", "Ljava/beans/ExceptionListener;", nullptr, $STATIC, $staticField(Statement, defaultExceptionListener)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(Statement, acc)},
	{"target", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Statement, target)},
	{"methodName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Statement, methodName)},
	{"arguments", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Statement, arguments)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, 0, $field(Statement, loader)},
	{}
};

$MethodInfo _Statement_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Statement::*)(Object$*,$String*,$ObjectArray*)>(&Statement::init$)), nullptr, nullptr, _Statement_MethodAnnotations_init$0},
	{"execute", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"getArguments", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $STATIC | $TRANSIENT, $method(static_cast<$Method*(*)($Class*,$String*,$ClassArray*)>(&Statement::getMethod))},
	{"getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"instanceName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, 0},
	{"invoke", "()Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.Exception"},
	{"invokeInternal", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Statement::*)()>(&Statement::invokeInternal)), "java.lang.Exception"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Statement_InnerClassesInfo_[] = {
	{"java.beans.Statement$2", nullptr, nullptr, 0},
	{"java.beans.Statement$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Statement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.Statement",
	"java.lang.Object",
	nullptr,
	_Statement_FieldInfo_,
	_Statement_MethodInfo_,
	nullptr,
	nullptr,
	_Statement_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.Statement$2,java.beans.Statement$1"
};

$Object* allocate$Statement($Class* clazz) {
	return $of($alloc(Statement));
}

$ObjectArray* Statement::emptyArray = nullptr;
$ExceptionListener* Statement::defaultExceptionListener = nullptr;

void Statement::init$(Object$* target, $String* methodName, $ObjectArray* arguments) {
	$set(this, acc, $AccessController::getContext());
	$set(this, target, target);
	$set(this, methodName, methodName);
	$set(this, arguments, (arguments == nullptr) ? Statement::emptyArray : $cast($ObjectArray, $nc(arguments)->clone()));
}

$Object* Statement::getTarget() {
	return $of(this->target);
}

$String* Statement::getMethodName() {
	return this->methodName;
}

$ObjectArray* Statement::getArguments() {
	return $cast($ObjectArray, $nc(this->arguments)->clone());
}

void Statement::execute() {
	invoke();
}

$Object* Statement::invoke() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($AccessControlContext, acc, this->acc);
	if ((acc == nullptr) && ($System::getSecurityManager() != nullptr)) {
		$throwNew($SecurityException, "AccessControlContext is not set"_s);
	}
	try {
		return $of($AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Statement$2, this)), acc));
	} catch ($PrivilegedActionException& exception) {
		$throw($(exception->getException()));
	}
	$shouldNotReachHere();
}

$Object* Statement::invokeInternal() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, target, getTarget());
	$var($String, methodName, getMethodName());
	if (target == nullptr || methodName == nullptr) {
		$throwNew($NullPointerException, $$str({(target == nullptr ? "target"_s : "methodName"_s), " should not be null"_s}));
	}
	$var($ObjectArray, arguments, getArguments());
	if (arguments == nullptr) {
		$assign(arguments, Statement::emptyArray);
	} else {
		$assign(arguments, $cast($ObjectArray, $nc(arguments)->clone()));
	}
	if ($equals(target, $Class::class$) && $nc(methodName)->equals("forName"_s)) {
		$var($String, name, $cast($String, $nc(arguments)->get(0)));
		if (arguments->length == 1) {
			return $of($ClassFinder::resolveClass(name, this->loader));
		}
		$ReflectUtil::checkPackageAccess(name);
	}
	$var($ClassArray, argClasses, $new($ClassArray, $nc(arguments)->length));
	for (int32_t i = 0; i < arguments->length; ++i) {
		argClasses->set(i, (arguments->get(i) == nullptr) ? ($Class*)nullptr : $nc($of(arguments->get(i)))->getClass());
	}
	$var($AccessibleObject, m, nullptr);
	if ($instanceOf($Class, target)) {
		if ($nc(methodName)->equals("new"_s)) {
			$assign(methodName, "newInstance"_s);
		}
		bool var$0 = $nc(methodName)->equals("newInstance"_s);
		if (var$0 && $nc(($cast($Class, target)))->isArray()) {
			$var($Object, result, $1Array::newInstance($nc(($cast($Class, target)))->getComponentType(), arguments->length));
			for (int32_t i = 0; i < arguments->length; ++i) {
				$1Array::set(result, i, arguments->get(i));
			}
			return $of(result);
		}
		if ($nc(methodName)->equals("newInstance"_s) && arguments->length != 0) {
			$load($Character);
			if ($equals(target, $Character::class$) && arguments->length == 1 && argClasses->get(0) == $String::class$) {
				return $of($Character::valueOf($nc(($cast($String, arguments->get(0))))->charAt(0)));
			}
			try {
				$assign(m, $ConstructorFinder::findConstructor($cast($Class, target), argClasses));
			} catch ($NoSuchMethodException& exception) {
				$assign(m, nullptr);
			}
		}
		if (m == nullptr && !$equals(target, $Class::class$)) {
			$assign(m, getMethod($cast($Class, target), methodName, argClasses));
		}
		if (m == nullptr) {
			$assign(m, getMethod($Class::class$, methodName, argClasses));
		}
	} else {
		bool var$1 = $nc($of(target))->getClass()->isArray();
		if (var$1) {
			bool var$2 = $nc(methodName)->equals("set"_s);
			var$1 = (var$2 || $nc(methodName)->equals("get"_s));
		}
		if (var$1) {
			int32_t index = $nc(($cast($Integer, arguments->get(0))))->intValue();
			if (methodName->equals("get"_s)) {
				return $of($1Array::get(target, index));
			} else {
				$1Array::set(target, index, arguments->get(1));
				return $of(nullptr);
			}
		}
		$assign(m, getMethod($nc($of(target))->getClass(), methodName, argClasses));
	}
	if (m != nullptr) {
		try {
			if ($instanceOf($Method, m)) {
				return $of($MethodUtil::invoke($cast($Method, m), target, arguments));
			} else {
				return $of($nc(($cast($Constructor, m)))->newInstance(arguments));
			}
		} catch ($IllegalAccessException& iae) {
			$throwNew($Exception, $$str({"Statement cannot invoke: "_s, methodName, " on "_s, $nc($of(target))->getClass()}), iae);
		} catch ($InvocationTargetException& ite) {
			$var($Throwable, te, ite->getCause());
			if ($instanceOf($Exception, te)) {
				$throw($cast($Exception, te));
			} else {
				$throw(ite);
			}
		}
	}
	$throwNew($NoSuchMethodException, $(toString()));
	$shouldNotReachHere();
}

$String* Statement::instanceName(Object$* instance) {
	if (instance == nullptr) {
		return "null"_s;
	} else if ($nc($of(instance))->getClass() == $String::class$) {
		return $str({"\""_s, $cast($String, instance), "\""_s});
	} else {
		return $NameGenerator::unqualifiedClassName($of(instance)->getClass());
	}
}

$String* Statement::toString() {
	$useLocalCurrentObjectStackCache();
	$var($Object, target, getTarget());
	$var($String, methodName, getMethodName());
	$var($ObjectArray, arguments, getArguments());
	if (arguments == nullptr) {
		$assign(arguments, Statement::emptyArray);
	}
	$var($StringBuilder, result, $new($StringBuilder, $$str({$(instanceName(target)), "."_s, methodName, "("_s})));
	int32_t n = $nc(arguments)->length;
	for (int32_t i = 0; i < n; ++i) {
		result->append($(instanceName(arguments->get(i))));
		if (i != n - 1) {
			result->append(", "_s);
		}
	}
	result->append(");"_s);
	return result->toString();
}

$Method* Statement::getMethod($Class* type, $String* name, $ClassArray* args) {
	$init(Statement);
	try {
		return $MethodFinder::findMethod(type, name, args);
	} catch ($NoSuchMethodException& exception) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void clinit$Statement($Class* class$) {
	$assignStatic(Statement::emptyArray, $new($ObjectArray, 0));
	$assignStatic(Statement::defaultExceptionListener, $new($Statement$1));
}

Statement::Statement() {
}

$Class* Statement::load$($String* name, bool initialize) {
	$loadClass(Statement, name, initialize, &_Statement_ClassInfo_, clinit$Statement, allocate$Statement);
	return class$;
}

$Class* Statement::class$ = nullptr;

	} // beans
} // java