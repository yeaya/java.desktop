#include <com/sun/beans/finder/MethodFinder.h>

#include <com/sun/beans/TypeResolver.h>
#include <com/sun/beans/finder/AbstractFinder.h>
#include <com/sun/beans/finder/FinderUtils.h>
#include <com/sun/beans/finder/MethodFinder$1.h>
#include <com/sun/beans/finder/PrimitiveWrapperMap.h>
#include <com/sun/beans/finder/Signature.h>
#include <com/sun/beans/finder/SignatureException.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Arrays.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef CACHE
#undef SOFT

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeResolver = ::com::sun::beans::TypeResolver;
using $AbstractFinder = ::com::sun::beans::finder::AbstractFinder;
using $FinderUtils = ::com::sun::beans::finder::FinderUtils;
using $MethodFinder$1 = ::com::sun::beans::finder::MethodFinder$1;
using $PrimitiveWrapperMap = ::com::sun::beans::finder::PrimitiveWrapperMap;
using $Signature = ::com::sun::beans::finder::Signature;
using $SignatureException = ::com::sun::beans::finder::SignatureException;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $Arrays = ::java::util::Arrays;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _MethodFinder_FieldInfo_[] = {
	{"CACHE", "Lcom/sun/beans/util/Cache;", "Lcom/sun/beans/util/Cache<Lcom/sun/beans/finder/Signature;Ljava/lang/reflect/Method;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MethodFinder, CACHE)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodFinder, name)},
	{}
};

$MethodInfo _MethodFinder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Class;)V", "(Ljava/lang/String;[Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(MethodFinder::*)($String*,$ClassArray*)>(&MethodFinder::init$))},
	{"findAccessibleMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Method*(*)($Method*)>(&MethodFinder::findAccessibleMethod)), "java.lang.NoSuchMethodException"},
	{"findAccessibleMethod", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Method*(*)($Method*,$Type*)>(&MethodFinder::findAccessibleMethod)), "java.lang.NoSuchMethodException"},
	{"findInstanceMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Method*(*)($Class*,$String*,$ClassArray*)>(&MethodFinder::findInstanceMethod)), "java.lang.NoSuchMethodException"},
	{"findMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Method*(*)($Class*,$String*,$ClassArray*)>(&MethodFinder::findMethod)), "java.lang.NoSuchMethodException"},
	{"findStaticMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Method*(*)($Class*,$String*,$ClassArray*)>(&MethodFinder::findStaticMethod)), "java.lang.NoSuchMethodException"},
	{"isValid", "(Ljava/lang/reflect/Method;)Z", nullptr, $PROTECTED, $method(static_cast<bool(MethodFinder::*)($Method*)>(&MethodFinder::isValid))},
	{"isValid", "(Ljava/lang/reflect/Executable;)Z", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _MethodFinder_InnerClassesInfo_[] = {
	{"com.sun.beans.finder.MethodFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodFinder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.finder.MethodFinder",
	"com.sun.beans.finder.AbstractFinder",
	nullptr,
	_MethodFinder_FieldInfo_,
	_MethodFinder_MethodInfo_,
	"Lcom/sun/beans/finder/AbstractFinder<Ljava/lang/reflect/Method;>;",
	nullptr,
	_MethodFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.beans.finder.MethodFinder$1"
};

$Object* allocate$MethodFinder($Class* clazz) {
	return $of($alloc(MethodFinder));
}

$Cache* MethodFinder::CACHE = nullptr;

$Method* MethodFinder::findMethod($Class* type, $String* name, $ClassArray* args) {
	$init(MethodFinder);
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "Method name is not set"_s);
	}
	$PrimitiveWrapperMap::replacePrimitivesWithWrappers(args);
	$var($Signature, signature, $new($Signature, type, name, args));
	try {
		$var($Method, method, $cast($Method, $nc(MethodFinder::CACHE)->get(signature)));
		return (method == nullptr) || $ReflectUtil::isPackageAccessible($nc(method)->getDeclaringClass()) ? method : $cast($Method, $nc(MethodFinder::CACHE)->create(signature));
	} catch ($SignatureException&) {
		$var($SignatureException, exception, $catch());
		$throw($(exception->toNoSuchMethodException($$str({"Method \'"_s, name, "\' is not found"_s}))));
	}
	$shouldNotReachHere();
}

$Method* MethodFinder::findInstanceMethod($Class* type, $String* name, $ClassArray* args) {
	$init(MethodFinder);
	$var($Method, method, findMethod(type, name, args));
	if ($Modifier::isStatic($nc(method)->getModifiers())) {
		$throwNew($NoSuchMethodException, $$str({"Method \'"_s, name, "\' is static"_s}));
	}
	return method;
}

$Method* MethodFinder::findStaticMethod($Class* type, $String* name, $ClassArray* args) {
	$init(MethodFinder);
	$var($Method, method, findMethod(type, name, args));
	if (!$Modifier::isStatic($nc(method)->getModifiers())) {
		$throwNew($NoSuchMethodException, $$str({"Method \'"_s, name, "\' is not static"_s}));
	}
	return method;
}

$Method* MethodFinder::findAccessibleMethod($Method* method) {
	$init(MethodFinder);
	$Class* type = $nc(method)->getDeclaringClass();
	if (!$FinderUtils::isExported(type)) {
		$throwNew($NoSuchMethodException, $$str({"Method \'"_s, $(method->getName()), "\' is not accessible"_s}));
	}
	bool var$0 = $Modifier::isPublic($nc(type)->getModifiers());
	if (var$0 && $ReflectUtil::isPackageAccessible(type)) {
		return method;
	}
	if ($Modifier::isStatic(method->getModifiers())) {
		$throwNew($NoSuchMethodException, $$str({"Method \'"_s, $(method->getName()), "\' is not accessible"_s}));
	}
	{
		$var($TypeArray, arr$, $nc(type)->getGenericInterfaces());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Type, generic, arr$->get(i$));
			{
				try {
					return findAccessibleMethod(method, generic);
				} catch ($NoSuchMethodException&) {
					$catch();
				}
			}
		}
	}
	return findAccessibleMethod(method, $(type->getGenericSuperclass()));
}

$Method* MethodFinder::findAccessibleMethod($Method* method, $Type* generic) {
	$init(MethodFinder);
	$beforeCallerSensitive();
	$var($String, name, $nc(method)->getName());
	$var($ClassArray, params, method->getParameterTypes());
	if ($instanceOf($Class, generic)) {
		$Class* type = $cast($Class, generic);
		return findAccessibleMethod($($nc(type)->getMethod(name, params)));
	}
	if ($instanceOf($ParameterizedType, generic)) {
		$var($ParameterizedType, pt, $cast($ParameterizedType, generic));
		$Class* type = $cast($Class, $nc(pt)->getRawType());
		{
			$var($MethodArray, arr$, $nc(type)->getMethods());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Method, m, arr$->get(i$));
				{
					if ($nc($($nc(m)->getName()))->equals(name)) {
						$var($ClassArray, pts, m->getParameterTypes());
						if ($nc(pts)->length == $nc(params)->length) {
							if ($Arrays::equals(params, pts)) {
								return findAccessibleMethod(m);
							}
							$var($TypeArray, gpts, m->getGenericParameterTypes());
							if (params->length == $nc(gpts)->length) {
								if ($Arrays::equals(params, $($TypeResolver::erase($($TypeResolver::resolve(static_cast<$Type*>(pt), gpts)))))) {
									return findAccessibleMethod(m);
								}
							}
						}
					}
				}
			}
		}
	}
	$throwNew($NoSuchMethodException, $$str({"Method \'"_s, name, "\' is not accessible"_s}));
}

void MethodFinder::init$($String* name, $ClassArray* args) {
	$AbstractFinder::init$(args);
	$set(this, name, name);
}

bool MethodFinder::isValid($Method* method) {
	bool var$0 = $AbstractFinder::isValid(method);
	return var$0 && $nc($($nc(method)->getName()))->equals(this->name);
}

bool MethodFinder::isValid($Executable* method) {
	return this->isValid($cast($Method, method));
}

void clinit$MethodFinder($Class* class$) {
	$init($Cache$Kind);
	$assignStatic(MethodFinder::CACHE, $new($MethodFinder$1, $Cache$Kind::SOFT, $Cache$Kind::SOFT));
}

MethodFinder::MethodFinder() {
}

$Class* MethodFinder::load$($String* name, bool initialize) {
	$loadClass(MethodFinder, name, initialize, &_MethodFinder_ClassInfo_, clinit$MethodFinder, allocate$MethodFinder);
	return class$;
}

$Class* MethodFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com