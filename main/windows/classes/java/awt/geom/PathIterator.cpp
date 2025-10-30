#include <java/awt/geom/PathIterator.h>

#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef WIND_EVEN_ODD
#undef WIND_NON_ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _PathIterator_FieldInfo_[] = {
	{"WIND_EVEN_ODD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, WIND_EVEN_ODD)},
	{"WIND_NON_ZERO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, WIND_NON_ZERO)},
	{"SEG_MOVETO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_MOVETO)},
	{"SEG_LINETO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_LINETO)},
	{"SEG_QUADTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_QUADTO)},
	{"SEG_CUBICTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_CUBICTO)},
	{"SEG_CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PathIterator, SEG_CLOSE)},
	{}
};

$MethodInfo _PathIterator_MethodInfo_[] = {
	{"currentSegment", "([F)I", nullptr, $PUBLIC | $ABSTRACT},
	{"currentSegment", "([D)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getWindingRule", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isDone", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"next", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PathIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.geom.PathIterator",
	nullptr,
	nullptr,
	_PathIterator_FieldInfo_,
	_PathIterator_MethodInfo_
};

$Object* allocate$PathIterator($Class* clazz) {
	return $of($alloc(PathIterator));
}

$Class* PathIterator::load$($String* name, bool initialize) {
	$loadClass(PathIterator, name, initialize, &_PathIterator_ClassInfo_, allocate$PathIterator);
	return class$;
}

$Class* PathIterator::class$ = nullptr;

		} // geom
	} // awt
} // java