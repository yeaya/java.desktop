#include <com/sun/beans/finder/PrimitiveTypeMap.h>

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

$FieldInfo _PrimitiveTypeMap_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(PrimitiveTypeMap, map)},
	{}
};

$MethodInfo _PrimitiveTypeMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrimitiveTypeMap::*)()>(&PrimitiveTypeMap::init$))},
	{"getType", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($String*)>(&PrimitiveTypeMap::getType))},
	{}
};

$ClassInfo _PrimitiveTypeMap_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.finder.PrimitiveTypeMap",
	"java.lang.Object",
	nullptr,
	_PrimitiveTypeMap_FieldInfo_,
	_PrimitiveTypeMap_MethodInfo_
};

$Object* allocate$PrimitiveTypeMap($Class* clazz) {
	return $of($alloc(PrimitiveTypeMap));
}

$Map* PrimitiveTypeMap::map = nullptr;

$Class* PrimitiveTypeMap::getType($String* name) {
	$init(PrimitiveTypeMap);
	return $cast($Class, $nc(PrimitiveTypeMap::map)->get(name));
}

void PrimitiveTypeMap::init$() {
}

void clinit$PrimitiveTypeMap($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(PrimitiveTypeMap::map, $new($HashMap, 9));
	{
		$init($Boolean);
		$nc(PrimitiveTypeMap::map)->put($($nc($Boolean::TYPE)->getName()), $Boolean::TYPE);
		$init($Character);
		$nc(PrimitiveTypeMap::map)->put($($nc($Character::TYPE)->getName()), $Character::TYPE);
		$init($Byte);
		$nc(PrimitiveTypeMap::map)->put($($nc($Byte::TYPE)->getName()), $Byte::TYPE);
		$init($Short);
		$nc(PrimitiveTypeMap::map)->put($($nc($Short::TYPE)->getName()), $Short::TYPE);
		$init($Integer);
		$nc(PrimitiveTypeMap::map)->put($($nc($Integer::TYPE)->getName()), $Integer::TYPE);
		$init($Long);
		$nc(PrimitiveTypeMap::map)->put($($nc($Long::TYPE)->getName()), $Long::TYPE);
		$init($Float);
		$nc(PrimitiveTypeMap::map)->put($($nc($Float::TYPE)->getName()), $Float::TYPE);
		$init($Double);
		$nc(PrimitiveTypeMap::map)->put($($nc($Double::TYPE)->getName()), $Double::TYPE);
		$init($Void);
		$nc(PrimitiveTypeMap::map)->put($($nc($Void::TYPE)->getName()), $Void::TYPE);
	}
}

PrimitiveTypeMap::PrimitiveTypeMap() {
}

$Class* PrimitiveTypeMap::load$($String* name, bool initialize) {
	$loadClass(PrimitiveTypeMap, name, initialize, &_PrimitiveTypeMap_ClassInfo_, clinit$PrimitiveTypeMap, allocate$PrimitiveTypeMap);
	return class$;
}

$Class* PrimitiveTypeMap::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com