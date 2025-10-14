#include <com/sun/beans/finder/FinderUtils.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$MethodInfo _FinderUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FinderUtils::*)()>(&FinderUtils::init$))},
	{"isExported", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*)>(&FinderUtils::isExported))},
	{"packageName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Class*)>(&FinderUtils::packageName))},
	{}
};

$ClassInfo _FinderUtils_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.finder.FinderUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FinderUtils_MethodInfo_
};

$Object* allocate$FinderUtils($Class* clazz) {
	return $of($alloc(FinderUtils));
}

void FinderUtils::init$() {
}

bool FinderUtils::isExported($Class* c) {
	$var($String, pn, packageName(c));
	return $nc($($nc(c)->getModule()))->isExported(pn);
}

$String* FinderUtils::packageName($Class* c) {
	if ($nc(c)->isArray()) {
		return packageName(c->getComponentType());
	} else {
		$var($String, name, c->getName());
		int32_t dot = $nc(name)->lastIndexOf((int32_t)u'.');
		if (dot == -1) {
			return ""_s;
		}
		return name->substring(0, dot);
	}
}

FinderUtils::FinderUtils() {
}

$Class* FinderUtils::load$($String* name, bool initialize) {
	$loadClass(FinderUtils, name, initialize, &_FinderUtils_ClassInfo_, allocate$FinderUtils);
	return class$;
}

$Class* FinderUtils::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com