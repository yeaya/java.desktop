#include <com/sun/beans/finder/PrimitiveWrapperMap.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef TYPE

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _PrimitiveWrapperMap_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(PrimitiveWrapperMap, map)},
	{}
};

$MethodInfo _PrimitiveWrapperMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrimitiveWrapperMap::*)()>(&PrimitiveWrapperMap::init$))},
	{"getType", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*)>(&PrimitiveWrapperMap::getType))},
	{"replacePrimitivesWithWrappers", "([Ljava/lang/Class;)V", "([Ljava/lang/Class<*>;)V", $STATIC, $method(static_cast<void(*)($ClassArray*)>(&PrimitiveWrapperMap::replacePrimitivesWithWrappers))},
	{}
};

$ClassInfo _PrimitiveWrapperMap_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.finder.PrimitiveWrapperMap",
	"java.lang.Object",
	nullptr,
	_PrimitiveWrapperMap_FieldInfo_,
	_PrimitiveWrapperMap_MethodInfo_
};

$Object* allocate$PrimitiveWrapperMap($Class* clazz) {
	return $of($alloc(PrimitiveWrapperMap));
}

$Map* PrimitiveWrapperMap::map = nullptr;

void PrimitiveWrapperMap::replacePrimitivesWithWrappers($ClassArray* types) {
	$init(PrimitiveWrapperMap);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(types)->length; ++i) {
		if (types->get(i) != nullptr) {
			if ($nc(types->get(i))->isPrimitive()) {
				types->set(i, getType($($nc(types->get(i))->getName())));
			}
		}
	}
}

$Class* PrimitiveWrapperMap::getType($String* name) {
	$init(PrimitiveWrapperMap);
	return $cast($Class, $nc(PrimitiveWrapperMap::map)->get(name));
}

void PrimitiveWrapperMap::init$() {
}

void clinit$PrimitiveWrapperMap($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(PrimitiveWrapperMap::map, $new($HashMap, 9));
	{
		$init($Boolean);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Boolean::TYPE)->getName()), $Boolean::class$);
		$init($Character);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Character::TYPE)->getName()), $Character::class$);
		$init($Byte);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Byte::TYPE)->getName()), $Byte::class$);
		$init($Short);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Short::TYPE)->getName()), $Short::class$);
		$init($Integer);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Integer::TYPE)->getName()), $Integer::class$);
		$init($Long);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Long::TYPE)->getName()), $Long::class$);
		$init($Float);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Float::TYPE)->getName()), $Float::class$);
		$init($Double);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Double::TYPE)->getName()), $Double::class$);
		$init($Void);
		$nc(PrimitiveWrapperMap::map)->put($($nc($Void::TYPE)->getName()), $Void::class$);
	}
}

PrimitiveWrapperMap::PrimitiveWrapperMap() {
}

$Class* PrimitiveWrapperMap::load$($String* name, bool initialize) {
	$loadClass(PrimitiveWrapperMap, name, initialize, &_PrimitiveWrapperMap_ClassInfo_, clinit$PrimitiveWrapperMap, allocate$PrimitiveWrapperMap);
	return class$;
}

$Class* PrimitiveWrapperMap::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com