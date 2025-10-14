#include <java/awt/geom/Path2D$Float$CopyIterator.h>

#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D$Iterator.h>
#include <java/awt/geom/Path2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Path2D$Iterator = ::java::awt::geom::Path2D$Iterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Path2D$Float$CopyIterator_FieldInfo_[] = {
	{"floatCoords", "[F", nullptr, 0, $field(Path2D$Float$CopyIterator, floatCoords)},
	{}
};

$MethodInfo _Path2D$Float$CopyIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/Path2D$Float;)V", nullptr, 0, $method(static_cast<void(Path2D$Float$CopyIterator::*)($Path2D$Float*)>(&Path2D$Float$CopyIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Path2D$Float$CopyIterator_InnerClassesInfo_[] = {
	{"java.awt.geom.Path2D$Float", "java.awt.geom.Path2D", "Float", $PUBLIC | $STATIC},
	{"java.awt.geom.Path2D$Float$CopyIterator", "java.awt.geom.Path2D$Float", "CopyIterator", $STATIC},
	{"java.awt.geom.Path2D$Iterator", "java.awt.geom.Path2D", "Iterator", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Path2D$Float$CopyIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.Path2D$Float$CopyIterator",
	"java.awt.geom.Path2D$Iterator",
	nullptr,
	_Path2D$Float$CopyIterator_FieldInfo_,
	_Path2D$Float$CopyIterator_MethodInfo_,
	nullptr,
	nullptr,
	_Path2D$Float$CopyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Path2D"
};

$Object* allocate$Path2D$Float$CopyIterator($Class* clazz) {
	return $of($alloc(Path2D$Float$CopyIterator));
}

void Path2D$Float$CopyIterator::init$($Path2D$Float* p2df) {
	$Path2D$Iterator::init$(p2df);
	$set(this, floatCoords, $nc(p2df)->floatCoords);
}

int32_t Path2D$Float$CopyIterator::currentSegment($floats* coords) {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx);
	$init($Path2D$Iterator);
	int32_t numCoords = $nc($Path2D$Iterator::curvecoords)->get(type);
	if (numCoords > 0) {
		$System::arraycopy(this->floatCoords, this->pointIdx, coords, 0, numCoords);
	}
	return type;
}

int32_t Path2D$Float$CopyIterator::currentSegment($doubles* coords) {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx);
	$init($Path2D$Iterator);
	int32_t numCoords = $nc($Path2D$Iterator::curvecoords)->get(type);
	if (numCoords > 0) {
		for (int32_t i = 0; i < numCoords; ++i) {
			$nc(coords)->set(i, $nc(this->floatCoords)->get(this->pointIdx + i));
		}
	}
	return type;
}

Path2D$Float$CopyIterator::Path2D$Float$CopyIterator() {
}

$Class* Path2D$Float$CopyIterator::load$($String* name, bool initialize) {
	$loadClass(Path2D$Float$CopyIterator, name, initialize, &_Path2D$Float$CopyIterator_ClassInfo_, allocate$Path2D$Float$CopyIterator);
	return class$;
}

$Class* Path2D$Float$CopyIterator::class$ = nullptr;

		} // geom
	} // awt
} // java