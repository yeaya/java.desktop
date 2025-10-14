#include <com/sun/beans/introspect/MethodInfo.h>

#include <com/sun/beans/TypeResolver.h>
#include <com/sun/beans/finder/MethodFinder.h>
#include <com/sun/beans/introspect/MethodInfo$MethodOrder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeResolver = ::com::sun::beans::TypeResolver;
using $MethodFinder = ::com::sun::beans::finder::MethodFinder;
using $MethodInfo$MethodOrder = ::com::sun::beans::introspect::MethodInfo$MethodOrder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Type = ::java::lang::reflect::Type;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

$FieldInfo _MethodInfo_FieldInfo_[] = {
	{"method", "Ljava/lang/reflect/Method;", nullptr, $FINAL, $field(MethodInfo, method)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(MethodInfo, type)},
	{}
};

$MethodInfo _MethodInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/Class;)V", "(Ljava/lang/reflect/Method;Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(MethodInfo::*)($Method*,$Class*)>(&MethodInfo::init$))},
	{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)V", nullptr, 0, $method(static_cast<void(MethodInfo::*)($Method*,$Type*)>(&MethodInfo::init$))},
	{"get", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $STATIC, $method(static_cast<$List*(*)($Class*)>(&MethodInfo::get))},
	{"isThrow", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", 0, $method(static_cast<bool(MethodInfo::*)($Class*)>(&MethodInfo::isThrow))},
	{"resolve", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)Ljava/lang/Class;", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($Method*,$Type*)>(&MethodInfo::resolve))},
	{}
};

$InnerClassInfo _MethodInfo_InnerClassesInfo_[] = {
	{"com.sun.beans.introspect.MethodInfo$MethodOrder", "com.sun.beans.introspect.MethodInfo", "MethodOrder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.introspect.MethodInfo",
	"java.lang.Object",
	nullptr,
	_MethodInfo_FieldInfo_,
	_MethodInfo_MethodInfo_,
	nullptr,
	nullptr,
	_MethodInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.beans.introspect.MethodInfo$MethodOrder"
};

$Object* allocate$MethodInfo($Class* clazz) {
	return $of($alloc(MethodInfo));
}

void MethodInfo::init$($Method* method, $Class* type) {
	$set(this, method, method);
	$set(this, type, type);
}

void MethodInfo::init$($Method* method, $Type* type) {
	$set(this, method, method);
	$set(this, type, resolve(method, type));
}

bool MethodInfo::isThrow($Class* exception) {
	{
		$var($ClassArray, arr$, $nc(this->method)->getExceptionTypes());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* type = arr$->get(i$);
			{
				if (type == exception) {
					return true;
				}
			}
		}
	}
	return false;
}

$Class* MethodInfo::resolve($Method* method, $Type* type) {
	return $TypeResolver::erase($($TypeResolver::resolveInClass($nc(method)->getDeclaringClass(), type)));
}

$List* MethodInfo::get($Class* type) {
	$load(MethodInfo);
	$beforeCallerSensitive();
	$var($List, list, nullptr);
	if (type != nullptr) {
		bool inaccessible = !$Modifier::isPublic(type->getModifiers());
		{
			$var($MethodArray, arr$, type->getMethods());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Method, method, arr$->get(i$));
				{
					if ($nc($of($nc(method)->getDeclaringClass()))->equals(type)) {
						if (inaccessible) {
							try {
								$assign(method, $MethodFinder::findAccessibleMethod(method));
								if (!$nc($nc(method)->getDeclaringClass())->isInterface()) {
									$assign(method, nullptr);
								}
							} catch ($NoSuchMethodException&) {
								$catch();
							}
						}
						if (method != nullptr) {
							if (list == nullptr) {
								$assign(list, $new($ArrayList));
							}
							$nc(list)->add(method);
						}
					}
				}
			}
		}
	}
	if (list != nullptr) {
		$init($MethodInfo$MethodOrder);
		list->sort($MethodInfo$MethodOrder::instance);
		return $Collections::unmodifiableList(list);
	}
	return $Collections::emptyList();
}

MethodInfo::MethodInfo() {
}

$Class* MethodInfo::load$($String* name, bool initialize) {
	$loadClass(MethodInfo, name, initialize, &_MethodInfo_ClassInfo_, allocate$MethodInfo);
	return class$;
}

$Class* MethodInfo::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com