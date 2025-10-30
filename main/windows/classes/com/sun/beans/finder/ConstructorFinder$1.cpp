#include <com/sun/beans/finder/ConstructorFinder$1.h>

#include <com/sun/beans/finder/ConstructorFinder.h>
#include <com/sun/beans/finder/Signature.h>
#include <com/sun/beans/finder/SignatureException.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <jcpp.h>

using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $ExecutableArray = $Array<::java::lang::reflect::Executable>;
using $AbstractFinder = ::com::sun::beans::finder::AbstractFinder;
using $ConstructorFinder = ::com::sun::beans::finder::ConstructorFinder;
using $Signature = ::com::sun::beans::finder::Signature;
using $SignatureException = ::com::sun::beans::finder::SignatureException;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Executable = ::java::lang::reflect::Executable;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$MethodInfo _ConstructorFinder$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, 0, $method(static_cast<void(ConstructorFinder$1::*)($Cache$Kind*,$Cache$Kind*)>(&ConstructorFinder$1::init$))},
	{"create", "(Lcom/sun/beans/finder/Signature;)Ljava/lang/reflect/Constructor;", "(Lcom/sun/beans/finder/Signature;)Ljava/lang/reflect/Constructor<*>;", $PUBLIC},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _ConstructorFinder$1_EnclosingMethodInfo_ = {
	"com.sun.beans.finder.ConstructorFinder",
	nullptr,
	nullptr
};

$InnerClassInfo _ConstructorFinder$1_InnerClassesInfo_[] = {
	{"com.sun.beans.finder.ConstructorFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ConstructorFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.beans.finder.ConstructorFinder$1",
	"com.sun.beans.util.Cache",
	nullptr,
	nullptr,
	_ConstructorFinder$1_MethodInfo_,
	"Lcom/sun/beans/util/Cache<Lcom/sun/beans/finder/Signature;Ljava/lang/reflect/Constructor<*>;>;",
	&_ConstructorFinder$1_EnclosingMethodInfo_,
	_ConstructorFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.finder.ConstructorFinder"
};

$Object* allocate$ConstructorFinder$1($Class* clazz) {
	return $of($alloc(ConstructorFinder$1));
}

void ConstructorFinder$1::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	$Cache::init$(keyKind, valueKind);
}

$Constructor* ConstructorFinder$1::create($Signature* signature) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ConstructorFinder, finder, $new($ConstructorFinder, $($nc(signature)->getArgs())));
		return $cast($Constructor, finder->find($($fcast($ExecutableArray, $nc($nc(signature)->getType())->getConstructors()))));
	} catch ($Exception& exception) {
		$throwNew($SignatureException, exception);
	}
	$shouldNotReachHere();
}

$Object* ConstructorFinder$1::create(Object$* signature) {
	return $of(this->create($cast($Signature, signature)));
}

ConstructorFinder$1::ConstructorFinder$1() {
}

$Class* ConstructorFinder$1::load$($String* name, bool initialize) {
	$loadClass(ConstructorFinder$1, name, initialize, &_ConstructorFinder$1_ClassInfo_, allocate$ConstructorFinder$1);
	return class$;
}

$Class* ConstructorFinder$1::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com