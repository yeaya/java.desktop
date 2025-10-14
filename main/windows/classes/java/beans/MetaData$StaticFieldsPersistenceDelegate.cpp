#include <java/beans/MetaData$StaticFieldsPersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef TRUE

using $FieldArray = $Array<::java::lang::reflect::Field>;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $Modifier = ::java::lang::reflect::Modifier;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace beans {

$MethodInfo _MetaData$StaticFieldsPersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$StaticFieldsPersistenceDelegate::*)()>(&MetaData$StaticFieldsPersistenceDelegate::init$))},
	{"installFields", "(Ljava/beans/Encoder;Ljava/lang/Class;)V", "(Ljava/beans/Encoder;Ljava/lang/Class<*>;)V", $PROTECTED},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"writeObject", "(Ljava/lang/Object;Ljava/beans/Encoder;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetaData$StaticFieldsPersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$StaticFieldsPersistenceDelegate", "java.beans.MetaData", "StaticFieldsPersistenceDelegate", $STATIC},
	{}
};

$ClassInfo _MetaData$StaticFieldsPersistenceDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.MetaData$StaticFieldsPersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$StaticFieldsPersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$StaticFieldsPersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$StaticFieldsPersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$StaticFieldsPersistenceDelegate));
}

void MetaData$StaticFieldsPersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

void MetaData$StaticFieldsPersistenceDelegate::installFields($Encoder* out, $Class* cls) {
	$beforeCallerSensitive();
	bool var$0 = $Modifier::isPublic($nc(cls)->getModifiers());
	if (var$0 && $ReflectUtil::isPackageAccessible(cls)) {
		$var($FieldArray, fields, $nc(cls)->getFields());
		for (int32_t i = 0; i < $nc(fields)->length; ++i) {
			$var($Field, field, fields->get(i));
			$load($Object);
			if ($Object::class$->isAssignableFrom($nc(field)->getType())) {
				$nc(out)->writeExpression($$new($Expression, field, "get"_s, $$new($ObjectArray, {($Object*)nullptr})));
			}
		}
	}
}

$Expression* MetaData$StaticFieldsPersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$throwNew($RuntimeException, $$str({"Unrecognized instance: "_s, oldInstance}));
	$shouldNotReachHere();
}

void MetaData$StaticFieldsPersistenceDelegate::writeObject(Object$* oldInstance, $Encoder* out) {
	if ($nc(out)->getAttribute(this) == nullptr) {
		$init($Boolean);
		out->setAttribute(this, $Boolean::TRUE);
		installFields(out, $nc($of(oldInstance))->getClass());
	}
	$PersistenceDelegate::writeObject(oldInstance, out);
}

MetaData$StaticFieldsPersistenceDelegate::MetaData$StaticFieldsPersistenceDelegate() {
}

$Class* MetaData$StaticFieldsPersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$StaticFieldsPersistenceDelegate, name, initialize, &_MetaData$StaticFieldsPersistenceDelegate_ClassInfo_, allocate$MetaData$StaticFieldsPersistenceDelegate);
	return class$;
}

$Class* MetaData$StaticFieldsPersistenceDelegate::class$ = nullptr;

	} // beans
} // java