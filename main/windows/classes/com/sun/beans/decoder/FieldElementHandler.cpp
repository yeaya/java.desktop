#include <com/sun/beans/decoder/FieldElementHandler.h>

#include <com/sun/beans/decoder/AccessorElementHandler.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/finder/FieldFinder.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AccessorElementHandler = ::com::sun::beans::decoder::AccessorElementHandler;
using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $FieldFinder = ::com::sun::beans::finder::FieldFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _FieldElementHandler_FieldInfo_[] = {
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(FieldElementHandler, type)},
	{}
};

$MethodInfo _FieldElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FieldElementHandler::*)()>(&FieldElementHandler::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"findField", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Field*(*)(Object$*,$String*)>(&FieldElementHandler::findField)), "java.lang.NoSuchFieldException"},
	{"getContextBean", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getFieldValue", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*,$String*)>(&FieldElementHandler::getFieldValue)), "java.lang.IllegalAccessException,java.lang.NoSuchFieldException"},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"isArgument", "()Z", nullptr, $PROTECTED},
	{"setFieldValue", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,$String*,Object$*)>(&FieldElementHandler::setFieldValue)), "java.lang.IllegalAccessException,java.lang.NoSuchFieldException"},
	{"setValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _FieldElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.FieldElementHandler",
	"com.sun.beans.decoder.AccessorElementHandler",
	nullptr,
	_FieldElementHandler_FieldInfo_,
	_FieldElementHandler_MethodInfo_
};

$Object* allocate$FieldElementHandler($Class* clazz) {
	return $of($alloc(FieldElementHandler));
}

void FieldElementHandler::init$() {
	$AccessorElementHandler::init$();
}

void FieldElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("class"_s)) {
		$set(this, type, $nc($(getOwner()))->findClass(value));
	} else {
		$AccessorElementHandler::addAttribute(name, value);
	}
}

bool FieldElementHandler::isArgument() {
	return $AccessorElementHandler::isArgument() && (this->type != nullptr);
}

$Object* FieldElementHandler::getContextBean() {
	return $of((this->type != nullptr) ? $of(this->type) : $AccessorElementHandler::getContextBean());
}

$Object* FieldElementHandler::getValue($String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of(getFieldValue($(getContextBean()), name));
	} catch ($Exception&) {
		$var($Exception, exception, $catch());
		$nc($(getOwner()))->handleException(exception);
	}
	return $of(nullptr);
}

void FieldElementHandler::setValue($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	try {
		setFieldValue($(getContextBean()), name, value);
	} catch ($Exception&) {
		$var($Exception, exception, $catch());
		$nc($(getOwner()))->handleException(exception);
	}
}

$Object* FieldElementHandler::getFieldValue(Object$* bean, $String* name) {
	$init(FieldElementHandler);
	$beforeCallerSensitive();
	return $of($nc($(findField(bean, name)))->get(bean));
}

void FieldElementHandler::setFieldValue(Object$* bean, $String* name, Object$* value) {
	$init(FieldElementHandler);
	$beforeCallerSensitive();
	$nc($(findField(bean, name)))->set(bean, value);
}

$Field* FieldElementHandler::findField(Object$* bean, $String* name) {
	$init(FieldElementHandler);
	return ($instanceOf($Class, bean)) ? $FieldFinder::findStaticField($cast($Class, bean), name) : $FieldFinder::findField($nc($of(bean))->getClass(), name);
}

FieldElementHandler::FieldElementHandler() {
}

$Class* FieldElementHandler::load$($String* name, bool initialize) {
	$loadClass(FieldElementHandler, name, initialize, &_FieldElementHandler_ClassInfo_, allocate$FieldElementHandler);
	return class$;
}

$Class* FieldElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com