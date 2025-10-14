#include <com/sun/beans/finder/ConstructorFinder.h>

#include <com/sun/beans/finder/AbstractFinder.h>
#include <com/sun/beans/finder/ConstructorFinder$1.h>
#include <com/sun/beans/finder/FinderUtils.h>
#include <com/sun/beans/finder/PrimitiveWrapperMap.h>
#include <com/sun/beans/finder/Signature.h>
#include <com/sun/beans/finder/SignatureException.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef CACHE
#undef SOFT

using $AbstractFinder = ::com::sun::beans::finder::AbstractFinder;
using $ConstructorFinder$1 = ::com::sun::beans::finder::ConstructorFinder$1;
using $FinderUtils = ::com::sun::beans::finder::FinderUtils;
using $PrimitiveWrapperMap = ::com::sun::beans::finder::PrimitiveWrapperMap;
using $Signature = ::com::sun::beans::finder::Signature;
using $SignatureException = ::com::sun::beans::finder::SignatureException;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Modifier = ::java::lang::reflect::Modifier;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _ConstructorFinder_FieldInfo_[] = {
	{"CACHE", "Lcom/sun/beans/util/Cache;", "Lcom/sun/beans/util/Cache<Lcom/sun/beans/finder/Signature;Ljava/lang/reflect/Constructor<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ConstructorFinder, CACHE)},
	{}
};

$MethodInfo _ConstructorFinder_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Class;)V", "([Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(ConstructorFinder::*)($ClassArray*)>(&ConstructorFinder::init$))},
	{"findConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Constructor<*>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Constructor*(*)($Class*,$ClassArray*)>(&ConstructorFinder::findConstructor)), "java.lang.NoSuchMethodException"},
	{}
};

$InnerClassInfo _ConstructorFinder_InnerClassesInfo_[] = {
	{"com.sun.beans.finder.ConstructorFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ConstructorFinder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.finder.ConstructorFinder",
	"com.sun.beans.finder.AbstractFinder",
	nullptr,
	_ConstructorFinder_FieldInfo_,
	_ConstructorFinder_MethodInfo_,
	"Lcom/sun/beans/finder/AbstractFinder<Ljava/lang/reflect/Constructor<*>;>;",
	nullptr,
	_ConstructorFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.beans.finder.ConstructorFinder$1"
};

$Object* allocate$ConstructorFinder($Class* clazz) {
	return $of($alloc(ConstructorFinder));
}

$Cache* ConstructorFinder::CACHE = nullptr;

$Constructor* ConstructorFinder::findConstructor($Class* type, $ClassArray* args) {
	$init(ConstructorFinder);
	if ($nc(type)->isPrimitive()) {
		$throwNew($NoSuchMethodException, $$str({"Primitive wrapper does not contain constructors: "_s, $(type->getName())}));
	}
	if ($nc(type)->isInterface()) {
		$throwNew($NoSuchMethodException, $$str({"Interface does not contain constructors: "_s, $(type->getName())}));
	}
	if (!$FinderUtils::isExported(type)) {
		$throwNew($NoSuchMethodException, $$str({"Class is not accessible: "_s, $($nc(type)->getName())}));
	}
	if ($Modifier::isAbstract($nc(type)->getModifiers())) {
		$throwNew($NoSuchMethodException, $$str({"Abstract class cannot be instantiated: "_s, $($nc(type)->getName())}));
	}
	bool var$0 = !$Modifier::isPublic($nc(type)->getModifiers());
	if (var$0 || !$ReflectUtil::isPackageAccessible(type)) {
		$throwNew($NoSuchMethodException, $$str({"Class is not accessible: "_s, $($nc(type)->getName())}));
	}
	$PrimitiveWrapperMap::replacePrimitivesWithWrappers(args);
	$var($Signature, signature, $new($Signature, type, args));
	try {
		return $cast($Constructor, $nc(ConstructorFinder::CACHE)->get(signature));
	} catch ($SignatureException&) {
		$var($SignatureException, exception, $catch());
		$throw($(exception->toNoSuchMethodException("Constructor is not found"_s)));
	}
	$shouldNotReachHere();
}

void ConstructorFinder::init$($ClassArray* args) {
	$AbstractFinder::init$(args);
}

void clinit$ConstructorFinder($Class* class$) {
	$init($Cache$Kind);
	$assignStatic(ConstructorFinder::CACHE, $new($ConstructorFinder$1, $Cache$Kind::SOFT, $Cache$Kind::SOFT));
}

ConstructorFinder::ConstructorFinder() {
}

$Class* ConstructorFinder::load$($String* name, bool initialize) {
	$loadClass(ConstructorFinder, name, initialize, &_ConstructorFinder_ClassInfo_, clinit$ConstructorFinder, allocate$ConstructorFinder);
	return class$;
}

$Class* ConstructorFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com