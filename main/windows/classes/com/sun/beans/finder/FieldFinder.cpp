#include <com/sun/beans/finder/FieldFinder.h>

#include <com/sun/beans/finder/FinderUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $FinderUtils = ::com::sun::beans::finder::FinderUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $Field = ::java::lang::reflect::Field;
using $Modifier = ::java::lang::reflect::Modifier;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$MethodInfo _FieldFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FieldFinder::*)()>(&FieldFinder::init$))},
	{"findField", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Field;", $PUBLIC | $STATIC, $method(static_cast<$Field*(*)($Class*,$String*)>(&FieldFinder::findField)), "java.lang.NoSuchFieldException"},
	{"findInstanceField", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Field;", $PUBLIC | $STATIC, $method(static_cast<$Field*(*)($Class*,$String*)>(&FieldFinder::findInstanceField)), "java.lang.NoSuchFieldException"},
	{"findStaticField", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Field;", $PUBLIC | $STATIC, $method(static_cast<$Field*(*)($Class*,$String*)>(&FieldFinder::findStaticField)), "java.lang.NoSuchFieldException"},
	{}
};

$ClassInfo _FieldFinder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.finder.FieldFinder",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FieldFinder_MethodInfo_
};

$Object* allocate$FieldFinder($Class* clazz) {
	return $of($alloc(FieldFinder));
}

$Field* FieldFinder::findField($Class* type, $String* name) {
	$load(FieldFinder);
	$beforeCallerSensitive();
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "Field name is not set"_s);
	}
	if (!$FinderUtils::isExported(type)) {
		$throwNew($NoSuchFieldException, $$str({"Field \'"_s, name, "\' is not accessible"_s}));
	}
	$var($Field, field, $nc(type)->getField(name));
	if (!$Modifier::isPublic($nc(field)->getModifiers())) {
		$throwNew($NoSuchFieldException, $$str({"Field \'"_s, name, "\' is not public"_s}));
	}
	type = $nc(field)->getDeclaringClass();
	bool var$0 = !$Modifier::isPublic(type->getModifiers());
	if (var$0 || !$ReflectUtil::isPackageAccessible(type)) {
		$throwNew($NoSuchFieldException, $$str({"Field \'"_s, name, "\' is not accessible"_s}));
	}
	return field;
}

$Field* FieldFinder::findInstanceField($Class* type, $String* name) {
	$var($Field, field, findField(type, name));
	if ($Modifier::isStatic($nc(field)->getModifiers())) {
		$throwNew($NoSuchFieldException, $$str({"Field \'"_s, name, "\' is static"_s}));
	}
	return field;
}

$Field* FieldFinder::findStaticField($Class* type, $String* name) {
	$var($Field, field, findField(type, name));
	if (!$Modifier::isStatic($nc(field)->getModifiers())) {
		$throwNew($NoSuchFieldException, $$str({"Field \'"_s, name, "\' is not static"_s}));
	}
	return field;
}

void FieldFinder::init$() {
}

FieldFinder::FieldFinder() {
}

$Class* FieldFinder::load$($String* name, bool initialize) {
	$loadClass(FieldFinder, name, initialize, &_FieldFinder_ClassInfo_, allocate$FieldFinder);
	return class$;
}

$Class* FieldFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com