#include <sun/awt/geom/Edge.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/geom/AreaOp.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef CTAG_LEFT
#undef ETAG_ENTER
#undef ETAG_EXIT
#undef ETAG_IGNORE
#undef GROW_PARTS
#undef INIT_PARTS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AreaOp = ::sun::awt::geom::AreaOp;
using $Curve = ::sun::awt::geom::Curve;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _Edge_FieldInfo_[] = {
	{"INIT_PARTS", "I", nullptr, $STATIC | $FINAL, $constField(Edge, INIT_PARTS)},
	{"GROW_PARTS", "I", nullptr, $STATIC | $FINAL, $constField(Edge, GROW_PARTS)},
	{"curve", "Lsun/awt/geom/Curve;", nullptr, 0, $field(Edge, curve)},
	{"ctag", "I", nullptr, 0, $field(Edge, ctag)},
	{"etag", "I", nullptr, 0, $field(Edge, etag)},
	{"activey", "D", nullptr, 0, $field(Edge, activey)},
	{"equivalence", "I", nullptr, 0, $field(Edge, equivalence)},
	{"lastEdge", "Lsun/awt/geom/Edge;", nullptr, $PRIVATE, $field(Edge, lastEdge)},
	{"lastResult", "I", nullptr, $PRIVATE, $field(Edge, lastResult)},
	{"lastLimit", "D", nullptr, $PRIVATE, $field(Edge, lastLimit)},
	{}
};

$MethodInfo _Edge_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/geom/Curve;I)V", nullptr, $PUBLIC, $method(static_cast<void(Edge::*)($Curve*,int32_t)>(&Edge::init$))},
	{"<init>", "(Lsun/awt/geom/Curve;II)V", nullptr, $PUBLIC, $method(static_cast<void(Edge::*)($Curve*,int32_t,int32_t)>(&Edge::init$))},
	{"compareTo", "(Lsun/awt/geom/Edge;[D)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Edge::*)(Edge*,$doubles*)>(&Edge::compareTo))},
	{"getCurve", "()Lsun/awt/geom/Curve;", nullptr, $PUBLIC, $method(static_cast<$Curve*(Edge::*)()>(&Edge::getCurve))},
	{"getCurveTag", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Edge::*)()>(&Edge::getCurveTag))},
	{"getEdgeTag", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Edge::*)()>(&Edge::getEdgeTag))},
	{"getEquivalence", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Edge::*)()>(&Edge::getEquivalence))},
	{"isActiveFor", "(DI)Z", nullptr, $PUBLIC, $method(static_cast<bool(Edge::*)(double,int32_t)>(&Edge::isActiveFor))},
	{"record", "(DI)V", nullptr, $PUBLIC, $method(static_cast<void(Edge::*)(double,int32_t)>(&Edge::record))},
	{"setEdgeTag", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Edge::*)(int32_t)>(&Edge::setEdgeTag))},
	{"setEquivalence", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Edge::*)(int32_t)>(&Edge::setEquivalence))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Edge_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.geom.Edge",
	"java.lang.Object",
	nullptr,
	_Edge_FieldInfo_,
	_Edge_MethodInfo_
};

$Object* allocate$Edge($Class* clazz) {
	return $of($alloc(Edge));
}

void Edge::init$($Curve* c, int32_t ctag) {
	Edge::init$(c, ctag, $AreaOp::ETAG_IGNORE);
}

void Edge::init$($Curve* c, int32_t ctag, int32_t etag) {
	$set(this, curve, c);
	this->ctag = ctag;
	this->etag = etag;
}

$Curve* Edge::getCurve() {
	return this->curve;
}

int32_t Edge::getCurveTag() {
	return this->ctag;
}

int32_t Edge::getEdgeTag() {
	return this->etag;
}

void Edge::setEdgeTag(int32_t etag) {
	this->etag = etag;
}

int32_t Edge::getEquivalence() {
	return this->equivalence;
}

void Edge::setEquivalence(int32_t eq) {
	this->equivalence = eq;
}

int32_t Edge::compareTo(Edge* other, $doubles* yrange) {
	if (other == this->lastEdge && $nc(yrange)->get(0) < this->lastLimit) {
		if (yrange->get(1) > this->lastLimit) {
			yrange->set(1, this->lastLimit);
		}
		return this->lastResult;
	}
	if (this == $nc(other)->lastEdge && $nc(yrange)->get(0) < other->lastLimit) {
		if (yrange->get(1) > other->lastLimit) {
			yrange->set(1, other->lastLimit);
		}
		return 0 - other->lastResult;
	}
	int32_t ret = $nc(this->curve)->compareTo($nc(other)->curve, yrange);
	$set(this, lastEdge, other);
	this->lastLimit = $nc(yrange)->get(1);
	this->lastResult = ret;
	return ret;
}

void Edge::record(double yend, int32_t etag) {
	this->activey = yend;
	this->etag = etag;
}

bool Edge::isActiveFor(double y, int32_t etag) {
	return (this->etag == etag && this->activey >= y);
}

$String* Edge::toString() {
	return ($str({"Edge["_s, this->curve, ", "_s, (this->ctag == $AreaOp::CTAG_LEFT ? "L"_s : "R"_s), ", "_s, (this->etag == $AreaOp::ETAG_ENTER ? "I"_s : (this->etag == $AreaOp::ETAG_EXIT ? "O"_s : "N"_s)), "]"_s}));
}

Edge::Edge() {
}

$Class* Edge::load$($String* name, bool initialize) {
	$loadClass(Edge, name, initialize, &_Edge_ClassInfo_, allocate$Edge);
	return class$;
}

$Class* Edge::class$ = nullptr;

		} // geom
	} // awt
} // sun