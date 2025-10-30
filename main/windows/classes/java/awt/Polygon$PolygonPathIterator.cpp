#include <java/awt/Polygon$PolygonPathIterator.h>

#include <java/awt/Polygon.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_LINETO
#undef SEG_MOVETO
#undef WIND_EVEN_ODD

using $Polygon = ::java::awt::Polygon;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Polygon$PolygonPathIterator_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Polygon;", nullptr, $FINAL | $SYNTHETIC, $field(Polygon$PolygonPathIterator, this$0)},
	{"poly", "Ljava/awt/Polygon;", nullptr, 0, $field(Polygon$PolygonPathIterator, poly)},
	{"transform", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(Polygon$PolygonPathIterator, transform)},
	{"index", "I", nullptr, 0, $field(Polygon$PolygonPathIterator, index)},
	{}
};

$MethodInfo _Polygon$PolygonPathIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Polygon;Ljava/awt/Polygon;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(Polygon$PolygonPathIterator::*)($Polygon*,$Polygon*,$AffineTransform*)>(&Polygon$PolygonPathIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Polygon$PolygonPathIterator_InnerClassesInfo_[] = {
	{"java.awt.Polygon$PolygonPathIterator", "java.awt.Polygon", "PolygonPathIterator", 0},
	{}
};

$ClassInfo _Polygon$PolygonPathIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Polygon$PolygonPathIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_Polygon$PolygonPathIterator_FieldInfo_,
	_Polygon$PolygonPathIterator_MethodInfo_,
	nullptr,
	nullptr,
	_Polygon$PolygonPathIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Polygon"
};

$Object* allocate$Polygon$PolygonPathIterator($Class* clazz) {
	return $of($alloc(Polygon$PolygonPathIterator));
}

void Polygon$PolygonPathIterator::init$($Polygon* this$0, $Polygon* pg, $AffineTransform* at) {
	$set(this, this$0, this$0);
	$set(this, poly, pg);
	$set(this, transform, at);
	if ($nc(pg)->npoints == 0) {
		this->index = 1;
	}
}

int32_t Polygon$PolygonPathIterator::getWindingRule() {
	return $PathIterator::WIND_EVEN_ODD;
}

bool Polygon$PolygonPathIterator::isDone() {
	return this->index > $nc(this->poly)->npoints;
}

void Polygon$PolygonPathIterator::next() {
	++this->index;
}

int32_t Polygon$PolygonPathIterator::currentSegment($floats* coords) {
	if (this->index >= $nc(this->poly)->npoints) {
		return $PathIterator::SEG_CLOSE;
	}
	$nc(coords)->set(0, (float)$nc($nc(this->poly)->xpoints)->get(this->index));
	coords->set(1, (float)$nc($nc(this->poly)->ypoints)->get(this->index));
	if (this->transform != nullptr) {
		$nc(this->transform)->transform(coords, 0, coords, 0, 1);
	}
	return (this->index == 0 ? $PathIterator::SEG_MOVETO : $PathIterator::SEG_LINETO);
}

int32_t Polygon$PolygonPathIterator::currentSegment($doubles* coords) {
	if (this->index >= $nc(this->poly)->npoints) {
		return $PathIterator::SEG_CLOSE;
	}
	$nc(coords)->set(0, (double)$nc($nc(this->poly)->xpoints)->get(this->index));
	coords->set(1, (double)$nc($nc(this->poly)->ypoints)->get(this->index));
	if (this->transform != nullptr) {
		$nc(this->transform)->transform(coords, 0, coords, 0, 1);
	}
	return (this->index == 0 ? $PathIterator::SEG_MOVETO : $PathIterator::SEG_LINETO);
}

Polygon$PolygonPathIterator::Polygon$PolygonPathIterator() {
}

$Class* Polygon$PolygonPathIterator::load$($String* name, bool initialize) {
	$loadClass(Polygon$PolygonPathIterator, name, initialize, &_Polygon$PolygonPathIterator_ClassInfo_, allocate$Polygon$PolygonPathIterator);
	return class$;
}

$Class* Polygon$PolygonPathIterator::class$ = nullptr;

	} // awt
} // java