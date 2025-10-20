#include <java/beans/EventHandler.h>

#include <java/beans/EventHandler$1.h>
#include <java/beans/EventHandler$2.h>
#include <java/beans/NameGenerator.h>
#include <java/beans/Statement.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $EventHandler$1 = ::java::beans::EventHandler$1;
using $EventHandler$2 = ::java::beans::EventHandler$2;
using $NameGenerator = ::java::beans::NameGenerator;
using $Statement = ::java::beans::Statement;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace beans {

$Attribute EventHandler_Attribute_var$1[] = {
	{'s', "target"},
	{'s', "action"},
	{'s', "eventPropertyName"},
	{'s', "listenerMethodName"},
	{'-'}
};

$NamedAttribute EventHandler_Attribute_var$0[] = {
	{"value", '[', EventHandler_Attribute_var$1},
	{}
};

$CompoundAttribute _EventHandler_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", EventHandler_Attribute_var$0},
	{}
};

$FieldInfo _EventHandler_FieldInfo_[] = {
	{"target", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(EventHandler, target)},
	{"action", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EventHandler, action)},
	{"eventPropertyName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(EventHandler, eventPropertyName)},
	{"listenerMethodName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(EventHandler, listenerMethodName)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(EventHandler, acc)},
	{}
};

$MethodInfo _EventHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(EventHandler::*)(Object$*,$String*,$String*,$String*)>(&EventHandler::init$)), nullptr, nullptr, _EventHandler_MethodAnnotations_init$0},
	{"applyGetters", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(EventHandler::*)(Object$*,$String*)>(&EventHandler::applyGetters))},
	{"create", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/Object;Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,Object$*,$String*)>(&EventHandler::create))},
	{"create", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,Object$*,$String*,$String*)>(&EventHandler::create))},
	{"create", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,Object$*,$String*,$String*,$String*)>(&EventHandler::create))},
	{"getAction", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getClassLoader", "(Ljava/lang/Class;)Ljava/lang/ClassLoader;", "(Ljava/lang/Class<*>;)Ljava/lang/ClassLoader;", $PRIVATE | $STATIC, $method(static_cast<$ClassLoader*(*)($Class*)>(&EventHandler::getClassLoader))},
	{"getEventPropertyName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getListenerMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"invokeInternal", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(EventHandler::*)(Object$*,$Method*,$ObjectArray*)>(&EventHandler::invokeInternal))},
	{}
};

$InnerClassInfo _EventHandler_InnerClassesInfo_[] = {
	{"java.beans.EventHandler$2", nullptr, nullptr, 0},
	{"java.beans.EventHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.EventHandler",
	"java.lang.Object",
	"java.lang.reflect.InvocationHandler",
	_EventHandler_FieldInfo_,
	_EventHandler_MethodInfo_,
	nullptr,
	nullptr,
	_EventHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.EventHandler$2,java.beans.EventHandler$1"
};

$Object* allocate$EventHandler($Class* clazz) {
	return $of($alloc(EventHandler));
}

void EventHandler::init$(Object$* target, $String* action, $String* eventPropertyName, $String* listenerMethodName) {
	$set(this, acc, $AccessController::getContext());
	$set(this, target, target);
	$set(this, action, action);
	if (target == nullptr) {
		$throwNew($NullPointerException, "target must be non-null"_s);
	}
	if (action == nullptr) {
		$throwNew($NullPointerException, "action must be non-null"_s);
	}
	$set(this, eventPropertyName, eventPropertyName);
	$set(this, listenerMethodName, listenerMethodName);
}

$Object* EventHandler::getTarget() {
	return $of(this->target);
}

$String* EventHandler::getAction() {
	return this->action;
}

$String* EventHandler::getEventPropertyName() {
	return this->eventPropertyName;
}

$String* EventHandler::getListenerMethodName() {
	return this->listenerMethodName;
}

$Object* EventHandler::applyGetters(Object$* target, $String* getters) {
	$useLocalCurrentObjectStackCache();
	if (getters == nullptr || $nc(getters)->isEmpty()) {
		return $of(target);
	}
	int32_t firstDot = $nc(getters)->indexOf((int32_t)u'.');
	if (firstDot == -1) {
		firstDot = getters->length();
	}
	$var($String, first, getters->substring(0, firstDot));
	$var($String, rest, getters->substring($Math::min(firstDot + 1, getters->length())));
	try {
		$var($Method, getter, nullptr);
		if (target != nullptr) {
			$Class* var$0 = $of(target)->getClass();
			$assign(getter, $Statement::getMethod(var$0, $$str({"get"_s, $($NameGenerator::capitalize(first))}), $$new($ClassArray, 0)));
			if (getter == nullptr) {
				$Class* var$1 = $of(target)->getClass();
				$assign(getter, $Statement::getMethod(var$1, $$str({"is"_s, $($NameGenerator::capitalize(first))}), $$new($ClassArray, 0)));
			}
			if (getter == nullptr) {
				$assign(getter, $Statement::getMethod($of(target)->getClass(), first, $$new($ClassArray, 0)));
			}
		}
		if (getter == nullptr) {
			$throwNew($RuntimeException, $$str({"No method called: "_s, first, " defined on "_s, target}));
		}
		$var($Object, newTarget, $MethodUtil::invoke(getter, target, $$new($ObjectArray, 0)));
		return $of(applyGetters(newTarget, rest));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, $$str({"Failed to call method: "_s, first, " on "_s, target}), e);
	}
	$shouldNotReachHere();
}

$Object* EventHandler::invoke(Object$* proxy, $Method* method, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($AccessControlContext, acc, this->acc);
	if ((acc == nullptr) && ($System::getSecurityManager() != nullptr)) {
		$throwNew($SecurityException, "AccessControlContext is not set"_s);
	}
	return $of($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($EventHandler$1, this, proxy, method, arguments)), acc));
}

$Object* EventHandler::invokeInternal(Object$* proxy, $Method* method, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	$var($String, methodName, $nc(method)->getName());
	$load($Object);
	if (method->getDeclaringClass() == $Object::class$) {
		if ($nc(methodName)->equals("hashCode"_s)) {
			return $of($Integer::valueOf($System::identityHashCode(proxy)));
		} else if (methodName->equals("equals"_s)) {
			$init($Boolean);
			return $of(($equals(proxy, $nc(arguments)->get(0)) ? $Boolean::TRUE : $Boolean::FALSE));
		} else if (methodName->equals("toString"_s)) {
			$var($String, var$0, $$str({$($nc($of(proxy))->getClass()->getName()), $$str(u'@')}));
			return $of($concat(var$0, $($Integer::toHexString($of(proxy)->hashCode()))));
		}
	}
	if (this->listenerMethodName == nullptr || $nc(this->listenerMethodName)->equals(methodName)) {
		$var($ClassArray, argTypes, nullptr);
		$var($ObjectArray, newArgs, nullptr);
		if (this->eventPropertyName == nullptr) {
			$assign(newArgs, $new($ObjectArray, 0));
			$assign(argTypes, $new($ClassArray, 0));
		} else {
			$var($Object, input, applyGetters($nc(arguments)->get(0), $(getEventPropertyName())));
			$assign(newArgs, $new($ObjectArray, {input}));
			$assign(argTypes, $new($ClassArray, {input == nullptr ? ($Class*)nullptr : $nc($of(input))->getClass()}));
		}
		try {
			int32_t lastDot = $nc(this->action)->lastIndexOf((int32_t)u'.');
			if (lastDot != -1) {
				$set(this, target, applyGetters(this->target, $($nc(this->action)->substring(0, lastDot))));
				$set(this, action, $nc(this->action)->substring(lastDot + 1));
			}
			$var($Method, targetMethod, $Statement::getMethod($nc($of(this->target))->getClass(), this->action, argTypes));
			if (targetMethod == nullptr) {
				$Class* var$1 = $nc($of(this->target))->getClass();
				$assign(targetMethod, $Statement::getMethod(var$1, $$str({"set"_s, $($NameGenerator::capitalize(this->action))}), argTypes));
			}
			if (targetMethod == nullptr) {
				$var($String, argTypeString, ($nc(argTypes)->length == 0) ? " with no arguments"_s : $str({" with argument "_s, $nc(argTypes)->get(0)}));
				$throwNew($RuntimeException, $$str({"No method called "_s, this->action, " on "_s, $nc($of(this->target))->getClass(), argTypeString}));
			}
			return $of($MethodUtil::invoke(targetMethod, this->target, newArgs));
		} catch ($IllegalAccessException&) {
			$var($IllegalAccessException, ex, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
		} catch ($InvocationTargetException&) {
			$var($InvocationTargetException, ex, $catch());
			$var($Throwable, th, ex->getCause());
			$throw(($instanceOf($RuntimeException, th)) ? $cast($RuntimeException, th) : $$new($RuntimeException, th));
		}
	}
	return $of(nullptr);
}

$Object* EventHandler::create($Class* listenerInterface, Object$* target, $String* action) {
	$init(EventHandler);
	return $of(create(listenerInterface, target, action, nullptr, nullptr));
}

$Object* EventHandler::create($Class* listenerInterface, Object$* target, $String* action, $String* eventPropertyName) {
	$init(EventHandler);
	return $of(create(listenerInterface, target, action, eventPropertyName, nullptr));
}

$Object* EventHandler::create($Class* listenerInterface, Object$* target, $String* action, $String* eventPropertyName, $String* listenerMethodName) {
	$init(EventHandler);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var(EventHandler, handler, $new(EventHandler, target, action, eventPropertyName, listenerMethodName));
	if (listenerInterface == nullptr) {
		$throwNew($NullPointerException, "listenerInterface must be non-null"_s);
	}
	$var($ClassLoader, loader, getClassLoader(listenerInterface));
	$var($ClassArray, interfaces, $new($ClassArray, {listenerInterface}));
	return $of($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($EventHandler$2, loader, interfaces, handler))));
}

$ClassLoader* EventHandler::getClassLoader($Class* type) {
	$init(EventHandler);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(type);
	$var($ClassLoader, loader, $nc(type)->getClassLoader());
	if (loader == nullptr) {
		$assign(loader, $($Thread::currentThread())->getContextClassLoader());
		if (loader == nullptr) {
			$assign(loader, $ClassLoader::getSystemClassLoader());
		}
	}
	return loader;
}

EventHandler::EventHandler() {
}

$Class* EventHandler::load$($String* name, bool initialize) {
	$loadClass(EventHandler, name, initialize, &_EventHandler_ClassInfo_, allocate$EventHandler);
	return class$;
}

$Class* EventHandler::class$ = nullptr;

	} // beans
} // java