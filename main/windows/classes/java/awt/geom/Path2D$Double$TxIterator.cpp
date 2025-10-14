#include <java/awt/geom/Path2D$Double$TxIterator.h>

#include <java/awt/geom/AffineTransform.h>
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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AffineTransform = ::java::awt::geom::AffineTransform;
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

$FieldInfo _Path2D$Double$TxIterator_FieldInfo_[] = {
	{"doubleCoords", "[D", nullptr, 0, $field(Path2D$Double$TxIterator, doubleCoords)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(Path2D$Double$TxIterator, affine)},
	{}
};

$MethodInfo _Path2D$Double$TxIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/Path2D$Double;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(Path2D$Double$TxIterator::*)($Path2D$Double*,$AffineTransform*)>(&Path2D$Double$TxIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Path2D$Double$TxIterator_InnerClassesInfo_[] = {
	{"java.awt.geom.Path2D$Double", "java.awt.geom.Path2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Path2D$Double$TxIterator", "java.awt.geom.Path2D$Double", "TxIterator", $STATIC},
	{"java.awt.geom.Path2D$Iterator", "java.awt.geom.Path2D", "Iterator", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Path2D$Double$TxIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.geom.Path2D$Double$TxIterator",
	"java.awt.geom.Path2D$Iterator",
	nullptr,
	_Path2D$Double$TxIterator_FieldInfo_,
	_Path2D$Double$TxIterator_MethodInfo_,
	nullptr,
	nullptr,
	_Path2D$Double$TxIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Path2D"
};

$Object* allocate$Path2D$Double$TxIterator($Class* clazz) {
	return $of($alloc(Path2D$Double$TxIterator));
}

void Path2D$Double$TxIterator::init$($Path2D$Double* p2dd, $AffineTransform* at) {
	$Path2D$Iterator::init$(p2dd);
	$set(this, doubleCoords, $nc(p2dd)->doubleCoords);
	$set(this, affine, at);
}

int32_t Path2D$Double$TxIterator::currentSegment($floats* coords) {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx);
	$init($Path2D$Iterator);
	int32_t numCoords = $nc($Path2D$Iterator::curvecoords)->get(type);
	if (numCoords > 0) {
		$nc(this->affine)->transform(this->doubleCoords, this->pointIdx, coords, 0, numCoords / 2);
	}
	return type;
}

int32_t Path2D$Double$TxIterator::currentSegment($doubles* coords) {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx);
	$init($Path2D$Iterator);
	int32_t numCoords = $nc($Path2D$Iterator::curvecoords)->get(type);
	if (numCoords > 0) {
		$nc(this->affine)->transform(this->doubleCoords, this->pointIdx, coords, 0, numCoords / 2);
	}
	return type;
}

Path2D$Double$TxIterator::Path2D$Double$TxIterator() {
}

$Class* Path2D$Double$TxIterator::load$($String* name, bool initialize) {
	$loadClass(Path2D$Double$TxIterator, name, initialize, &_Path2D$Double$TxIterator_ClassInfo_, allocate$Path2D$Double$TxIterator);
	return class$;
}

$Class* Path2D$Double$TxIterator::class$ = nullptr;

		} // geom
	} // awt
} // java