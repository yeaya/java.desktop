#include <java/awt/geom/Path2D$Double$CopyIterator.h>

#include <java/awt/geom/Path2D$Double.h>
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
using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $Path2D$Iterator = ::java::awt::geom::Path2D$Iterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Path2D$Double$CopyIterator_FieldInfo_[] = {
	{"doubleCoords", "[D", nullptr, 0, $field(Path2D$Double$CopyIterator, doubleCoords)},
	{}
};

$MethodInfo _Path2D$Double$CopyIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/Path2D$Double;)V", nullptr, 0, $method(static_cast<void(Path2D$Double$CopyIterator::*)($Path2D$Double*)>(&Path2D$Double$CopyIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Path2D$Double$CopyIterator_InnerClassesInfo_[] = {
	{"java.awt.geom.Path2D$Double", "java.awt.geom.Path2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Path2D$Double$CopyIterator", "java.awt.geom.Path2D$Double", "CopyIterator", $STATIC},
	{"java.awt.geom.Path2D$Iterator", "java.awt.geom.Path2D", "Iterator", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Path2D$Double$CopyIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.Path2D$Double$CopyIterator",
	"java.awt.geom.Path2D$Iterator",
	nullptr,
	_Path2D$Double$CopyIterator_FieldInfo_,
	_Path2D$Double$CopyIterator_MethodInfo_,
	nullptr,
	nullptr,
	_Path2D$Double$CopyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Path2D"
};

$Object* allocate$Path2D$Double$CopyIterator($Class* clazz) {
	return $of($alloc(Path2D$Double$CopyIterator));
}

void Path2D$Double$CopyIterator::init$($Path2D$Double* p2dd) {
	$Path2D$Iterator::init$(p2dd);
	$set(this, doubleCoords, $nc(p2dd)->doubleCoords);
}

int32_t Path2D$Double$CopyIterator::currentSegment($floats* coords) {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx);
	$init($Path2D$Iterator);
	int32_t numCoords = $nc($Path2D$Iterator::curvecoords)->get(type);
	if (numCoords > 0) {
		for (int32_t i = 0; i < numCoords; ++i) {
			$nc(coords)->set(i, (float)$nc(this->doubleCoords)->get(this->pointIdx + i));
		}
	}
	return type;
}

int32_t Path2D$Double$CopyIterator::currentSegment($doubles* coords) {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx);
	$init($Path2D$Iterator);
	int32_t numCoords = $nc($Path2D$Iterator::curvecoords)->get(type);
	if (numCoords > 0) {
		$System::arraycopy(this->doubleCoords, this->pointIdx, coords, 0, numCoords);
	}
	return type;
}

Path2D$Double$CopyIterator::Path2D$Double$CopyIterator() {
}

$Class* Path2D$Double$CopyIterator::load$($String* name, bool initialize) {
	$loadClass(Path2D$Double$CopyIterator, name, initialize, &_Path2D$Double$CopyIterator_ClassInfo_, allocate$Path2D$Double$CopyIterator);
	return class$;
}

$Class* Path2D$Double$CopyIterator::class$ = nullptr;

		} // geom
	} // awt
} // java