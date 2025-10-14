#include <com/sun/beans/finder/ClassFinder.h>

#include <com/sun/beans/finder/PrimitiveTypeMap.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $PrimitiveTypeMap = ::com::sun::beans::finder::PrimitiveTypeMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$MethodInfo _ClassFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassFinder::*)()>(&ClassFinder::init$))},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*)>(&ClassFinder::findClass)), "java.lang.ClassNotFoundException"},
	{"findClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*,$ClassLoader*)>(&ClassFinder::findClass)), "java.lang.ClassNotFoundException"},
	{"resolveClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*)>(&ClassFinder::resolveClass)), "java.lang.ClassNotFoundException"},
	{"resolveClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*,$ClassLoader*)>(&ClassFinder::resolveClass)), "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _ClassFinder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.finder.ClassFinder",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClassFinder_MethodInfo_
};

$Object* allocate$ClassFinder($Class* clazz) {
	return $of($alloc(ClassFinder));
}

$Class* ClassFinder::findClass($String* name) {
	$load(ClassFinder);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(name);
	try {
		$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
		if (loader == nullptr) {
			$assign(loader, $ClassLoader::getSystemClassLoader());
		}
		if (loader != nullptr) {
			return $Class::forName(name, false, loader);
		}
	} catch ($ClassNotFoundException&) {
		$catch();
	} catch ($SecurityException&) {
		$catch();
	}
	return $Class::forName(name);
}

$Class* ClassFinder::findClass($String* name, $ClassLoader* loader) {
	$load(ClassFinder);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(name);
	if (loader != nullptr) {
		try {
			return $Class::forName(name, false, loader);
		} catch ($ClassNotFoundException&) {
			$catch();
		} catch ($SecurityException&) {
			$catch();
		}
	}
	return findClass(name);
}

$Class* ClassFinder::resolveClass($String* name) {
	return resolveClass(name, nullptr);
}

$Class* ClassFinder::resolveClass($String* name, $ClassLoader* loader) {
	$Class* type = $PrimitiveTypeMap::getType(name);
	return (type == nullptr) ? findClass(name, loader) : type;
}

void ClassFinder::init$() {
}

ClassFinder::ClassFinder() {
}

$Class* ClassFinder::load$($String* name, bool initialize) {
	$loadClass(ClassFinder, name, initialize, &_ClassFinder_ClassInfo_, allocate$ClassFinder);
	return class$;
}

$Class* ClassFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com