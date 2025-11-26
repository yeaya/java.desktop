#include <java/beans/MetaData$java_lang_reflect_Method_PersistenceDelegate.h>

#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_lang_reflect_Method_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_lang_reflect_Method_PersistenceDelegate::*)()>(&MetaData$java_lang_reflect_Method_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_lang_reflect_Method_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_lang_reflect_Method_PersistenceDelegate", "java.beans.MetaData", "java_lang_reflect_Method_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_lang_reflect_Method_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_lang_reflect_Method_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_lang_reflect_Method_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_lang_reflect_Method_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_lang_reflect_Method_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_lang_reflect_Method_PersistenceDelegate));
}

void MetaData$java_lang_reflect_Method_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_lang_reflect_Method_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_lang_reflect_Method_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($Method, m, $cast($Method, oldInstance));
	$var($Object, var$0, oldInstance);
	$var($Object, var$1, $of($nc(m)->getDeclaringClass()));
	$var($String, var$2, "getMethod"_s);
	return $new($Expression, var$0, var$1, var$2, $$new($ObjectArray, {
		$($of(m->getName())),
		$($of(m->getParameterTypes()))
	}));
}

MetaData$java_lang_reflect_Method_PersistenceDelegate::MetaData$java_lang_reflect_Method_PersistenceDelegate() {
}

$Class* MetaData$java_lang_reflect_Method_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_lang_reflect_Method_PersistenceDelegate, name, initialize, &_MetaData$java_lang_reflect_Method_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_lang_reflect_Method_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_lang_reflect_Method_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java