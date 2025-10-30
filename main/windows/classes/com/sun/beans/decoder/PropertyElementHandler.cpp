#include <com/sun/beans/decoder/PropertyElementHandler.h>

#include <com/sun/beans/decoder/AccessorElementHandler.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/finder/MethodFinder.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/IndexedPropertyDescriptor.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

#undef GETTER
#undef SETTER
#undef TYPE

using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $AccessorElementHandler = ::com::sun::beans::decoder::AccessorElementHandler;
using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $MethodFinder = ::com::sun::beans::finder::MethodFinder;
using $BeanInfo = ::java::beans::BeanInfo;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $IndexedPropertyDescriptor = ::java::beans::IndexedPropertyDescriptor;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $Method = ::java::lang::reflect::Method;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _PropertyElementHandler_FieldInfo_[] = {
	{"GETTER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PropertyElementHandler, GETTER)},
	{"SETTER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PropertyElementHandler, SETTER)},
	{"index", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(PropertyElementHandler, index)},
	{}
};

$MethodInfo _PropertyElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PropertyElementHandler::*)()>(&PropertyElementHandler::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"findGetter", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$Method*(*)($Class*,$String*,$ClassArray*)>(&PropertyElementHandler::findGetter)), "java.beans.IntrospectionException,java.lang.NoSuchMethodException"},
	{"findSetter", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$Method*(*)($Class*,$String*,$ClassArray*)>(&PropertyElementHandler::findSetter)), "java.beans.IntrospectionException,java.lang.NoSuchMethodException"},
	{"getProperty", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/beans/PropertyDescriptor;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/beans/PropertyDescriptor;", $PRIVATE | $STATIC, $method(static_cast<$PropertyDescriptor*(*)($Class*,$String*)>(&PropertyElementHandler::getProperty)), "java.beans.IntrospectionException"},
	{"getPropertyValue", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*,$String*,$Integer*)>(&PropertyElementHandler::getPropertyValue)), "java.lang.IllegalAccessException,java.beans.IntrospectionException,java.lang.reflect.InvocationTargetException,java.lang.NoSuchMethodException"},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"isArgument", "()Z", nullptr, $PROTECTED},
	{"setPropertyValue", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,$String*,$Integer*,Object$*)>(&PropertyElementHandler::setPropertyValue)), "java.lang.IllegalAccessException,java.beans.IntrospectionException,java.lang.reflect.InvocationTargetException,java.lang.NoSuchMethodException"},
	{"setValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _PropertyElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.PropertyElementHandler",
	"com.sun.beans.decoder.AccessorElementHandler",
	nullptr,
	_PropertyElementHandler_FieldInfo_,
	_PropertyElementHandler_MethodInfo_
};

$Object* allocate$PropertyElementHandler($Class* clazz) {
	return $of($alloc(PropertyElementHandler));
}

$String* PropertyElementHandler::GETTER = nullptr;
$String* PropertyElementHandler::SETTER = nullptr;

void PropertyElementHandler::init$() {
	$AccessorElementHandler::init$();
}

void PropertyElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("index"_s)) {
		$set(this, index, $Integer::valueOf(value));
	} else {
		$AccessorElementHandler::addAttribute(name, value);
	}
}

bool PropertyElementHandler::isArgument() {
	return false;
}

$Object* PropertyElementHandler::getValue($String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of(getPropertyValue($(getContextBean()), name, this->index));
	} catch ($Exception& exception) {
		$nc($(getOwner()))->handleException(exception);
	}
	return $of(nullptr);
}

void PropertyElementHandler::setValue($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	try {
		setPropertyValue($(getContextBean()), name, this->index, value);
	} catch ($Exception& exception) {
		$nc($(getOwner()))->handleException(exception);
	}
}

$Object* PropertyElementHandler::getPropertyValue(Object$* bean, $String* name, $Integer* index) {
	$init(PropertyElementHandler);
	$useLocalCurrentObjectStackCache();
	$Class* type = $nc($of(bean))->getClass();
	if (index == nullptr) {
		return $of($MethodUtil::invoke($(findGetter(type, name, $$new($ClassArray, 0))), bean, $$new($ObjectArray, 0)));
	} else if ($nc(type)->isArray() && (name == nullptr)) {
		return $of($1Array::get(bean, $nc(index)->intValue()));
	} else {
		$init($Integer);
		return $of($MethodUtil::invoke($(findGetter(type, name, $$new($ClassArray, {$Integer::TYPE}))), bean, $$new($ObjectArray, {$of(index)})));
	}
}

void PropertyElementHandler::setPropertyValue(Object$* bean, $String* name, $Integer* index, Object$* value) {
	$init(PropertyElementHandler);
	$useLocalCurrentObjectStackCache();
	$Class* type = $nc($of(bean))->getClass();
	$Class* param = (value != nullptr) ? $nc($of(value))->getClass() : ($Class*)nullptr;
	if (index == nullptr) {
		$MethodUtil::invoke($(findSetter(type, name, $$new($ClassArray, {param}))), bean, $$new($ObjectArray, {value}));
	} else if ($nc(type)->isArray() && (name == nullptr)) {
		$1Array::set(bean, $nc(index)->intValue(), value);
	} else {
		$init($Integer);
		$MethodUtil::invoke($(findSetter(type, name, $$new($ClassArray, {
			$Integer::TYPE,
			param
		}))), bean, $$new($ObjectArray, {
			$of(index),
			value
		}));
	}
}

$Method* PropertyElementHandler::findGetter($Class* type, $String* name, $ClassArray* args) {
	$init(PropertyElementHandler);
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		return $MethodFinder::findInstanceMethod(type, PropertyElementHandler::GETTER, args);
	}
	$var($PropertyDescriptor, pd, getProperty(type, name));
	if ($nc(args)->length == 0) {
		$var($Method, method, $nc(pd)->getReadMethod());
		if (method != nullptr) {
			return method;
		}
	} else if ($instanceOf($IndexedPropertyDescriptor, pd)) {
		$var($IndexedPropertyDescriptor, ipd, $cast($IndexedPropertyDescriptor, pd));
		$var($Method, method, $nc(ipd)->getIndexedReadMethod());
		if (method != nullptr) {
			return method;
		}
	}
	$throwNew($IntrospectionException, $$str({"Could not find getter for the "_s, name, " property"_s}));
}

$Method* PropertyElementHandler::findSetter($Class* type, $String* name, $ClassArray* args) {
	$init(PropertyElementHandler);
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		return $MethodFinder::findInstanceMethod(type, PropertyElementHandler::SETTER, args);
	}
	$var($PropertyDescriptor, pd, getProperty(type, name));
	if ($nc(args)->length == 1) {
		$var($Method, method, $nc(pd)->getWriteMethod());
		if (method != nullptr) {
			return method;
		}
	} else if ($instanceOf($IndexedPropertyDescriptor, pd)) {
		$var($IndexedPropertyDescriptor, ipd, $cast($IndexedPropertyDescriptor, pd));
		$var($Method, method, $nc(ipd)->getIndexedWriteMethod());
		if (method != nullptr) {
			return method;
		}
	}
	$throwNew($IntrospectionException, $$str({"Could not find setter for the "_s, name, " property"_s}));
}

$PropertyDescriptor* PropertyElementHandler::getProperty($Class* type, $String* name) {
	$init(PropertyElementHandler);
	$useLocalCurrentObjectStackCache();
	{
		$var($PropertyDescriptorArray, arr$, $nc($($Introspector::getBeanInfo(type)))->getPropertyDescriptors());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($PropertyDescriptor, pd, arr$->get(i$));
			{
				if ($nc(name)->equals($($nc(pd)->getName()))) {
					return pd;
				}
			}
		}
	}
	$throwNew($IntrospectionException, $$str({"Could not find the "_s, name, " property descriptor"_s}));
}

PropertyElementHandler::PropertyElementHandler() {
}

void clinit$PropertyElementHandler($Class* class$) {
	$assignStatic(PropertyElementHandler::GETTER, "get"_s);
	$assignStatic(PropertyElementHandler::SETTER, "set"_s);
}

$Class* PropertyElementHandler::load$($String* name, bool initialize) {
	$loadClass(PropertyElementHandler, name, initialize, &_PropertyElementHandler_ClassInfo_, clinit$PropertyElementHandler, allocate$PropertyElementHandler);
	return class$;
}

$Class* PropertyElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com