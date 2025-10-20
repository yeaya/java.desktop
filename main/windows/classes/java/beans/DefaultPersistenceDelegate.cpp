#include <java/beans/DefaultPersistenceDelegate.h>

#include <java/awt/Component.h>
#include <java/awt/event/ComponentListener.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/Encoder.h>
#include <java/beans/EventSetDescriptor.h>
#include <java/beans/ExceptionListener.h>
#include <java/beans/Expression.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/beans/Statement.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/EventListener.h>
#include <java/util/Objects.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/event/ChangeListener.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef EMPTY
#undef FALSE
#undef TRUE

using $EventSetDescriptorArray = $Array<::java::beans::EventSetDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $FieldArray = $Array<::java::lang::reflect::Field>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $Component = ::java::awt::Component;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $BeanInfo = ::java::beans::BeanInfo;
using $Encoder = ::java::beans::Encoder;
using $EventSetDescriptor = ::java::beans::EventSetDescriptor;
using $ExceptionListener = ::java::beans::ExceptionListener;
using $Expression = ::java::beans::Expression;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $Statement = ::java::beans::Statement;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $1Array = ::java::lang::reflect::Array;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $EventListener = ::java::util::EventListener;
using $Objects = ::java::util::Objects;
using $JMenuItem = ::javax::swing::JMenuItem;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace beans {

$FieldInfo _DefaultPersistenceDelegate_FieldInfo_[] = {
	{"EMPTY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultPersistenceDelegate, EMPTY)},
	{"constructor", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DefaultPersistenceDelegate, constructor)},
	{"definesEquals", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(DefaultPersistenceDelegate, definesEquals$)},
	{}
};

$MethodInfo _DefaultPersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultPersistenceDelegate::*)()>(&DefaultPersistenceDelegate::init$))},
	{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultPersistenceDelegate::*)($StringArray*)>(&DefaultPersistenceDelegate::init$))},
	{"definesEquals", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*)>(&DefaultPersistenceDelegate::definesEquals))},
	{"definesEquals", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultPersistenceDelegate::*)(Object$*)>(&DefaultPersistenceDelegate::definesEquals))},
	{"doProperty", "(Ljava/lang/Class;Ljava/beans/PropertyDescriptor;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/beans/PropertyDescriptor;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PRIVATE, $method(static_cast<void(DefaultPersistenceDelegate::*)($Class*,$PropertyDescriptor*,Object$*,Object$*,$Encoder*)>(&DefaultPersistenceDelegate::doProperty)), "java.lang.Exception"},
	{"findMethod", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $PRIVATE, $method(static_cast<$Method*(DefaultPersistenceDelegate::*)($Class*,$String*)>(&DefaultPersistenceDelegate::findMethod))},
	{"getPropertyDescriptor", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/beans/PropertyDescriptor;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/beans/PropertyDescriptor;", $PRIVATE | $STATIC, $method(static_cast<$PropertyDescriptor*(*)($Class*,$String*)>(&DefaultPersistenceDelegate::getPropertyDescriptor))},
	{"initBean", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PRIVATE, $method(static_cast<void(DefaultPersistenceDelegate::*)($Class*,Object$*,Object$*,$Encoder*)>(&DefaultPersistenceDelegate::initBean))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"invokeStatement", "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;Ljava/beans/Encoder;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*,$String*,$ObjectArray*,$Encoder*)>(&DefaultPersistenceDelegate::invokeStatement))},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DefaultPersistenceDelegate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.DefaultPersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	_DefaultPersistenceDelegate_FieldInfo_,
	_DefaultPersistenceDelegate_MethodInfo_
};

$Object* allocate$DefaultPersistenceDelegate($Class* clazz) {
	return $of($alloc(DefaultPersistenceDelegate));
}

$StringArray* DefaultPersistenceDelegate::EMPTY = nullptr;

void DefaultPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
	$set(this, constructor, DefaultPersistenceDelegate::EMPTY);
}

void DefaultPersistenceDelegate::init$($StringArray* constructorPropertyNames) {
	$PersistenceDelegate::init$();
	$set(this, constructor, (constructorPropertyNames == nullptr) ? DefaultPersistenceDelegate::EMPTY : $cast($StringArray, $nc(constructorPropertyNames)->clone()));
}

bool DefaultPersistenceDelegate::definesEquals($Class* type) {
	$init(DefaultPersistenceDelegate);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($Object);
		return type == $nc($($nc(type)->getMethod("equals"_s, $$new($ClassArray, {$Object::class$}))))->getDeclaringClass();
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool DefaultPersistenceDelegate::definesEquals(Object$* instance) {
	if (this->definesEquals$ != nullptr) {
		$init($Boolean);
		return (this->definesEquals$ == $Boolean::TRUE);
	} else {
		bool result = definesEquals($nc($of(instance))->getClass());
		$init($Boolean);
		$set(this, definesEquals$, result ? $Boolean::TRUE : $Boolean::FALSE);
		return result;
	}
}

bool DefaultPersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return ($nc(this->constructor)->length == 0) || !definesEquals(oldInstance) ? $PersistenceDelegate::mutatesTo(oldInstance, newInstance) : $nc($of(oldInstance))->equals(newInstance);
}

$Expression* DefaultPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	int32_t nArgs = $nc(this->constructor)->length;
	$Class* type = $nc($of(oldInstance))->getClass();
	$var($ObjectArray, constructorArgs, $new($ObjectArray, nArgs));
	for (int32_t i = 0; i < nArgs; ++i) {
		try {
			$var($Method, method, findMethod(type, $nc(this->constructor)->get(i)));
			constructorArgs->set(i, $($MethodUtil::invoke(method, oldInstance, $$new($ObjectArray, 0))));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$nc($($nc(out)->getExceptionListener()))->exceptionThrown(e);
		}
	}
	return $new($Expression, oldInstance, $of(oldInstance)->getClass(), "new"_s, constructorArgs);
}

$Method* DefaultPersistenceDelegate::findMethod($Class* type, $String* property) {
	$useLocalCurrentObjectStackCache();
	if (property == nullptr) {
		$throwNew($IllegalArgumentException, "Property name is null"_s);
	}
	$var($PropertyDescriptor, pd, getPropertyDescriptor(type, property));
	if (pd == nullptr) {
		$throwNew($IllegalStateException, $$str({"Could not find property by the name "_s, property}));
	}
	$var($Method, method, $nc(pd)->getReadMethod());
	if (method == nullptr) {
		$throwNew($IllegalStateException, $$str({"Could not find getter for the property "_s, property}));
	}
	return method;
}

void DefaultPersistenceDelegate::doProperty($Class* type, $PropertyDescriptor* pd, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Method, getter, $nc(pd)->getReadMethod());
	$var($Method, setter, pd->getWriteMethod());
	if (getter != nullptr && setter != nullptr) {
		$var($Expression, oldGetExp, $new($Expression, oldInstance, $(getter->getName()), $$new($ObjectArray, 0)));
		$var($Expression, newGetExp, $new($Expression, newInstance, $(getter->getName()), $$new($ObjectArray, 0)));
		$var($Object, oldValue, oldGetExp->getValue());
		$var($Object, newValue, newGetExp->getValue());
		$nc(out)->writeExpression(oldGetExp);
		if (!$Objects::equals(newValue, $(out->get(oldValue)))) {
			$var($Object, e, $cast($ObjectArray, pd->getValue("enumerationValues"_s)));
			if ($instanceOf($ObjectArray, e) && $1Array::getLength(e) % 3 == 0) {
				$var($ObjectArray, a, $cast($ObjectArray, e));
				for (int32_t i = 0; i < $nc(a)->length; i = i + 3) {
					try {
						$var($Field, f, $nc(type)->getField($cast($String, a->get(i))));
						if ($nc($of($($nc(f)->get(nullptr))))->equals(oldValue)) {
							out->remove(oldValue);
							out->writeExpression($$new($Expression, oldValue, f, "get"_s, $$new($ObjectArray, {($Object*)nullptr})));
						}
					} catch ($Exception&) {
						$catch();
					}
				}
			}
			invokeStatement(oldInstance, $(setter->getName()), $$new($ObjectArray, {oldValue}), out);
		}
	}
}

void DefaultPersistenceDelegate::invokeStatement(Object$* instance, $String* methodName, $ObjectArray* args, $Encoder* out) {
	$init(DefaultPersistenceDelegate);
	$nc(out)->writeStatement($$new($Statement, instance, methodName, args));
}

void DefaultPersistenceDelegate::initBean($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($FieldArray, arr$, $nc(type)->getFields());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Field, field, arr$->get(i$));
			{
				if (!$ReflectUtil::isPackageAccessible($nc(field)->getDeclaringClass())) {
					continue;
				}
				int32_t mod = $nc(field)->getModifiers();
				bool var$1 = $Modifier::isFinal(mod);
				bool var$0 = var$1 || $Modifier::isStatic(mod);
				if (var$0 || $Modifier::isTransient(mod)) {
					continue;
				}
				try {
					$var($Expression, oldGetExp, $new($Expression, field, "get"_s, $$new($ObjectArray, {oldInstance})));
					$var($Expression, newGetExp, $new($Expression, field, "get"_s, $$new($ObjectArray, {newInstance})));
					$var($Object, oldValue, oldGetExp->getValue());
					$var($Object, newValue, newGetExp->getValue());
					$nc(out)->writeExpression(oldGetExp);
					if (!$Objects::equals(newValue, $(out->get(oldValue)))) {
						out->writeStatement($$new($Statement, field, "set"_s, $$new($ObjectArray, {
							oldInstance,
							oldValue
						})));
					}
				} catch ($Exception&) {
					$var($Exception, exception, $catch());
					$nc($($nc(out)->getExceptionListener()))->exceptionThrown(exception);
				}
			}
		}
	}
	$var($BeanInfo, info, nullptr);
	try {
		$assign(info, $Introspector::getBeanInfo(type));
	} catch ($IntrospectionException&) {
		$var($IntrospectionException, exception, $catch());
		return;
	}
	{
		$var($PropertyDescriptorArray, arr$, $nc(info)->getPropertyDescriptors());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($PropertyDescriptor, d, arr$->get(i$));
			{
				if ($nc(d)->isTransient()) {
					continue;
				}
				try {
					doProperty(type, d, oldInstance, newInstance, out);
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$nc($($nc(out)->getExceptionListener()))->exceptionThrown(e);
				}
			}
		}
	}
	$load($Component);
	if (!$Component::class$->isAssignableFrom(type)) {
		return;
	}
	{
		$var($EventSetDescriptorArray, arr$, info->getEventSetDescriptors());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($EventSetDescriptor, d, arr$->get(i$));
			{
				if ($nc(d)->isTransient()) {
					continue;
				}
				$Class* listenerType = $nc(d)->getListenerType();
				$load($ComponentListener);
				if (listenerType == $ComponentListener::class$) {
					continue;
				}
				$load($ChangeListener);
				$load($JMenuItem);
				if (listenerType == $ChangeListener::class$ && type == $JMenuItem::class$) {
					continue;
				}
				$var($EventListenerArray, oldL, $new($EventListenerArray, 0));
				$var($EventListenerArray, newL, $new($EventListenerArray, 0));
				try {
					$var($Method, m, d->getGetListenerMethod());
					$assign(oldL, $cast($EventListenerArray, $MethodUtil::invoke(m, oldInstance, $$new($ObjectArray, 0))));
					$assign(newL, $cast($EventListenerArray, $MethodUtil::invoke(m, newInstance, $$new($ObjectArray, 0))));
				} catch ($Exception&) {
					$var($Exception, e2, $catch());
					try {
						$var($Method, m, type->getMethod("getListeners"_s, $$new($ClassArray, {$Class::class$})));
						$assign(oldL, $cast($EventListenerArray, $MethodUtil::invoke(m, oldInstance, $$new($ObjectArray, {$of(listenerType)}))));
						$assign(newL, $cast($EventListenerArray, $MethodUtil::invoke(m, newInstance, $$new($ObjectArray, {$of(listenerType)}))));
					} catch ($Exception&) {
						$var($Exception, e3, $catch());
						return;
					}
				}
				$var($String, addListenerMethodName, $nc($(d->getAddListenerMethod()))->getName());
				for (int32_t i = newL->length; i < oldL->length; ++i) {
					invokeStatement(oldInstance, addListenerMethodName, $$new($ObjectArray, {$of(oldL->get(i))}), out);
				}
				$var($String, removeListenerMethodName, $nc($(d->getRemoveListenerMethod()))->getName());
				for (int32_t i = oldL->length; i < newL->length; ++i) {
					invokeStatement(oldInstance, removeListenerMethodName, $$new($ObjectArray, {$of(newL->get(i))}), out);
				}
			}
		}
	}
}

void DefaultPersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$PersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	if ($nc($of(oldInstance))->getClass() == type) {
		initBean(type, oldInstance, newInstance, out);
	}
}

$PropertyDescriptor* DefaultPersistenceDelegate::getPropertyDescriptor($Class* type, $String* property) {
	$init(DefaultPersistenceDelegate);
	$useLocalCurrentObjectStackCache();
	try {
		{
			$var($PropertyDescriptorArray, arr$, $nc($($Introspector::getBeanInfo(type)))->getPropertyDescriptors());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($PropertyDescriptor, pd, arr$->get(i$));
				{
					if ($nc(property)->equals($($nc(pd)->getName()))) {
						return pd;
					}
				}
			}
		}
	} catch ($IntrospectionException&) {
		$catch();
	}
	return nullptr;
}

void clinit$DefaultPersistenceDelegate($Class* class$) {
	$assignStatic(DefaultPersistenceDelegate::EMPTY, $new($StringArray, 0));
}

DefaultPersistenceDelegate::DefaultPersistenceDelegate() {
}

$Class* DefaultPersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(DefaultPersistenceDelegate, name, initialize, &_DefaultPersistenceDelegate_ClassInfo_, clinit$DefaultPersistenceDelegate, allocate$DefaultPersistenceDelegate);
	return class$;
}

$Class* DefaultPersistenceDelegate::class$ = nullptr;

	} // beans
} // java