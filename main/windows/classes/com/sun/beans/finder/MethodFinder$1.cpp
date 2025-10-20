#include <com/sun/beans/finder/MethodFinder$1.h>

#include <com/sun/beans/finder/MethodFinder.h>
#include <com/sun/beans/finder/Signature.h>
#include <com/sun/beans/finder/SignatureException.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ExecutableArray = $Array<::java::lang::reflect::Executable>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $AbstractFinder = ::com::sun::beans::finder::AbstractFinder;
using $MethodFinder = ::com::sun::beans::finder::MethodFinder;
using $Signature = ::com::sun::beans::finder::Signature;
using $SignatureException = ::com::sun::beans::finder::SignatureException;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$MethodInfo _MethodFinder$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, 0, $method(static_cast<void(MethodFinder$1::*)($Cache$Kind*,$Cache$Kind*)>(&MethodFinder$1::init$))},
	{"create", "(Lcom/sun/beans/finder/Signature;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _MethodFinder$1_EnclosingMethodInfo_ = {
	"com.sun.beans.finder.MethodFinder",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodFinder$1_InnerClassesInfo_[] = {
	{"com.sun.beans.finder.MethodFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.beans.finder.MethodFinder$1",
	"com.sun.beans.util.Cache",
	nullptr,
	nullptr,
	_MethodFinder$1_MethodInfo_,
	"Lcom/sun/beans/util/Cache<Lcom/sun/beans/finder/Signature;Ljava/lang/reflect/Method;>;",
	&_MethodFinder$1_EnclosingMethodInfo_,
	_MethodFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.finder.MethodFinder"
};

$Object* allocate$MethodFinder$1($Class* clazz) {
	return $of($alloc(MethodFinder$1));
}

void MethodFinder$1::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	$Cache::init$(keyKind, valueKind);
}

$Method* MethodFinder$1::create($Signature* signature) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($String, var$0, $nc(signature)->getName());
		$var($MethodFinder, finder, $new($MethodFinder, var$0, $(signature->getArgs())));
		return $MethodFinder::findAccessibleMethod($cast($Method, $(finder->find($($fcast($ExecutableArray, $nc($nc(signature)->getType())->getMethods()))))));
	} catch ($Exception&) {
		$var($Exception, exception, $catch());
		$throwNew($SignatureException, exception);
	}
	$shouldNotReachHere();
}

$Object* MethodFinder$1::create(Object$* signature) {
	return $of(this->create($cast($Signature, signature)));
}

MethodFinder$1::MethodFinder$1() {
}

$Class* MethodFinder$1::load$($String* name, bool initialize) {
	$loadClass(MethodFinder$1, name, initialize, &_MethodFinder$1_ClassInfo_, allocate$MethodFinder$1);
	return class$;
}

$Class* MethodFinder$1::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com