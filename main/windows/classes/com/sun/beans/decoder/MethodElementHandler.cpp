#include <com/sun/beans/decoder/MethodElementHandler.h>

#include <com/sun/beans/decoder/NewElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <com/sun/beans/finder/MethodFinder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

#undef TYPE
#undef VOID

using $NewElementHandler = ::com::sun::beans::decoder::NewElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $MethodFinder = ::com::sun::beans::finder::MethodFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Method = ::java::lang::reflect::Method;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _MethodElementHandler_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MethodElementHandler, name)},
	{}
};

$MethodInfo _MethodElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodElementHandler::*)()>(&MethodElementHandler::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getValueObject", "(Ljava/lang/Class;[Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", "(Ljava/lang/Class<*>;[Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", $PROTECTED, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _MethodElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.MethodElementHandler",
	"com.sun.beans.decoder.NewElementHandler",
	nullptr,
	_MethodElementHandler_FieldInfo_,
	_MethodElementHandler_MethodInfo_
};

$Object* allocate$MethodElementHandler($Class* clazz) {
	return $of($alloc(MethodElementHandler));
}

void MethodElementHandler::init$() {
	$NewElementHandler::init$();
}

void MethodElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("name"_s)) {
		$set(this, name, value);
	} else {
		$NewElementHandler::addAttribute(name, value);
	}
}

$ValueObject* MethodElementHandler::getValueObject($Class* type, $ObjectArray* args$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, args, args$renamed);
	$var($Object, bean, getContextBean());
	$var($ClassArray, types, getArgumentTypes(args));
	$var($Method, method, (type != nullptr) ? $MethodFinder::findStaticMethod(type, this->name, types) : $MethodFinder::findMethod($nc($of(bean))->getClass(), this->name, types));
	if ($nc(method)->isVarArgs()) {
		$assign(args, getArguments(args, $(method->getParameterTypes())));
	}
	$var($Object, value, $MethodUtil::invoke(method, bean, args));
	$init($Void);
	$init($ValueObjectImpl);
	return $nc($of($nc(method)->getReturnType()))->equals($Void::TYPE) ? $ValueObjectImpl::VOID : $ValueObjectImpl::create(value);
}

MethodElementHandler::MethodElementHandler() {
}

$Class* MethodElementHandler::load$($String* name, bool initialize) {
	$loadClass(MethodElementHandler, name, initialize, &_MethodElementHandler_ClassInfo_, allocate$MethodElementHandler);
	return class$;
}

$Class* MethodElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com