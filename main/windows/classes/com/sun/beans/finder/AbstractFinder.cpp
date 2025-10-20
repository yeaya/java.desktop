#include <com/sun/beans/finder/AbstractFinder.h>

#include <com/sun/beans/finder/PrimitiveWrapperMap.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ExecutableArray = $Array<::java::lang::reflect::Executable>;
using $PrimitiveWrapperMap = ::com::sun::beans::finder::PrimitiveWrapperMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Executable = ::java::lang::reflect::Executable;
using $Modifier = ::java::lang::reflect::Modifier;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _AbstractFinder_FieldInfo_[] = {
	{"args", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(AbstractFinder, args)},
	{}
};

$MethodInfo _AbstractFinder_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Class;)V", "([Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(AbstractFinder::*)($ClassArray*)>(&AbstractFinder::init$))},
	{"find", "([Ljava/lang/reflect/Executable;)Ljava/lang/reflect/Executable;", "([TT;)TT;", $FINAL, $method(static_cast<$Executable*(AbstractFinder::*)($ExecutableArray*)>(&AbstractFinder::find)), "java.lang.NoSuchMethodException"},
	{"isAssignable", "([Ljava/lang/Class;[Ljava/lang/Class;)Z", "([Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Z", $PRIVATE, $method(static_cast<bool(AbstractFinder::*)($ClassArray*,$ClassArray*)>(&AbstractFinder::isAssignable))},
	{"isValid", "(Ljava/lang/reflect/Executable;)Z", "(TT;)Z", $PROTECTED},
	{}
};

$ClassInfo _AbstractFinder_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.beans.finder.AbstractFinder",
	"java.lang.Object",
	nullptr,
	_AbstractFinder_FieldInfo_,
	_AbstractFinder_MethodInfo_,
	"<T:Ljava/lang/reflect/Executable;>Ljava/lang/Object;"
};

$Object* allocate$AbstractFinder($Class* clazz) {
	return $of($alloc(AbstractFinder));
}

void AbstractFinder::init$($ClassArray* args) {
	$set(this, args, args);
}

bool AbstractFinder::isValid($Executable* method) {
	return $Modifier::isPublic($nc(method)->getModifiers());
}

$Executable* AbstractFinder::find($ExecutableArray* methods) {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $new($HashMap));
	$var($Executable, oldMethod, nullptr);
	$var($ClassArray, oldParams, nullptr);
	bool ambiguous = false;
	{
		$var($ExecutableArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Executable, newMethod, arr$->get(i$));
			{
				if (isValid(newMethod)) {
					$var($ClassArray, newParams, $nc(newMethod)->getParameterTypes());
					if ($nc(newParams)->length == $nc(this->args)->length) {
						$PrimitiveWrapperMap::replacePrimitivesWithWrappers(newParams);
						if (isAssignable(newParams, this->args)) {
							if (oldMethod == nullptr) {
								$assign(oldMethod, newMethod);
								$assign(oldParams, newParams);
							} else {
								bool useNew = isAssignable(oldParams, newParams);
								bool useOld = isAssignable(newParams, oldParams);
								if (useOld && useNew) {
									useNew = !newMethod->isSynthetic();
									useOld = !$nc(oldMethod)->isSynthetic();
								}
								if (useOld == useNew) {
									ambiguous = true;
								} else if (useNew) {
									$assign(oldMethod, newMethod);
									$assign(oldParams, newParams);
									ambiguous = false;
								}
							}
						}
					}
					if (newMethod->isVarArgs()) {
						int32_t length = $nc(newParams)->length - 1;
						if (length <= $nc(this->args)->length) {
							$var($ClassArray, array, $new($ClassArray, $nc(this->args)->length));
							$System::arraycopy(newParams, 0, array, 0, length);
							if (length < $nc(this->args)->length) {
								$Class* type = $nc(newParams->get(length))->getComponentType();
								if ($nc(type)->isPrimitive()) {
									type = $PrimitiveWrapperMap::getType($(type->getName()));
								}
								for (int32_t i = length; i < $nc(this->args)->length; ++i) {
									array->set(i, type);
								}
							}
							map->put(newMethod, array);
						}
					}
				}
			}
		}
	}
	{
		$var($ExecutableArray, arr$, methods);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Executable, newMethod, arr$->get(i$));
			{
				$var($ClassArray, newParams, $cast($ClassArray, map->get(newMethod)));
				if (newParams != nullptr) {
					if (isAssignable(newParams, this->args)) {
						if (oldMethod == nullptr) {
							$assign(oldMethod, newMethod);
							$assign(oldParams, newParams);
						} else {
							bool useNew = isAssignable(oldParams, newParams);
							bool useOld = isAssignable(newParams, oldParams);
							if (useOld && useNew) {
								useNew = !$nc(newMethod)->isSynthetic();
								useOld = !$nc(oldMethod)->isSynthetic();
							}
							if (useOld == useNew) {
								if ($equals(oldParams, map->get(oldMethod))) {
									ambiguous = true;
								}
							} else if (useNew) {
								$assign(oldMethod, newMethod);
								$assign(oldParams, newParams);
								ambiguous = false;
							}
						}
					}
				}
			}
		}
	}
	if (ambiguous) {
		$throwNew($NoSuchMethodException, "Ambiguous methods are found"_s);
	}
	if (oldMethod == nullptr) {
		$throwNew($NoSuchMethodException, "Method is not found"_s);
	}
	return oldMethod;
}

bool AbstractFinder::isAssignable($ClassArray* min, $ClassArray* max) {
	for (int32_t i = 0; i < $nc(this->args)->length; ++i) {
		if (nullptr != $nc(this->args)->get(i)) {
			if (!$nc($nc(min)->get(i))->isAssignableFrom($nc(max)->get(i))) {
				return false;
			}
		}
	}
	return true;
}

AbstractFinder::AbstractFinder() {
}

$Class* AbstractFinder::load$($String* name, bool initialize) {
	$loadClass(AbstractFinder, name, initialize, &_AbstractFinder_ClassInfo_, allocate$AbstractFinder);
	return class$;
}

$Class* AbstractFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com