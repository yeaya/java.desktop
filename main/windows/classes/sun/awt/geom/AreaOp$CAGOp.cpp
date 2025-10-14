#include <sun/awt/geom/AreaOp$CAGOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/geom/AreaOp.h>
#include <sun/awt/geom/Edge.h>
#include <jcpp.h>

#undef CTAG_LEFT
#undef ETAG_ENTER
#undef ETAG_EXIT
#undef ETAG_IGNORE
#undef RSTAG_INSIDE
#undef RSTAG_OUTSIDE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AreaOp = ::sun::awt::geom::AreaOp;
using $Edge = ::sun::awt::geom::Edge;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _AreaOp$CAGOp_FieldInfo_[] = {
	{"inLeft", "Z", nullptr, 0, $field(AreaOp$CAGOp, inLeft)},
	{"inRight", "Z", nullptr, 0, $field(AreaOp$CAGOp, inRight)},
	{"inResult", "Z", nullptr, 0, $field(AreaOp$CAGOp, inResult)},
	{}
};

$MethodInfo _AreaOp$CAGOp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AreaOp$CAGOp::*)()>(&AreaOp$CAGOp::init$))},
	{"classify", "(Lsun/awt/geom/Edge;)I", nullptr, $PUBLIC},
	{"getState", "()I", nullptr, $PUBLIC},
	{"newClassification", "(ZZ)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"newRow", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AreaOp$CAGOp_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AreaOp$CAGOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.geom.AreaOp$CAGOp",
	"sun.awt.geom.AreaOp",
	nullptr,
	_AreaOp$CAGOp_FieldInfo_,
	_AreaOp$CAGOp_MethodInfo_,
	nullptr,
	nullptr,
	_AreaOp$CAGOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp"
};

$Object* allocate$AreaOp$CAGOp($Class* clazz) {
	return $of($alloc(AreaOp$CAGOp));
}

void AreaOp$CAGOp::init$() {
	$AreaOp::init$();
}

void AreaOp$CAGOp::newRow() {
	this->inLeft = false;
	this->inRight = false;
	this->inResult = false;
}

int32_t AreaOp$CAGOp::classify($Edge* e) {
	if ($nc(e)->getCurveTag() == $AreaOp::CTAG_LEFT) {
		this->inLeft = !this->inLeft;
	} else {
		this->inRight = !this->inRight;
	}
	bool newClass = newClassification(this->inLeft, this->inRight);
	if (this->inResult == newClass) {
		return $AreaOp::ETAG_IGNORE;
	}
	this->inResult = newClass;
	return (newClass ? $AreaOp::ETAG_ENTER : $AreaOp::ETAG_EXIT);
}

int32_t AreaOp$CAGOp::getState() {
	return (this->inResult ? $AreaOp::RSTAG_INSIDE : $AreaOp::RSTAG_OUTSIDE);
}

AreaOp$CAGOp::AreaOp$CAGOp() {
}

$Class* AreaOp$CAGOp::load$($String* name, bool initialize) {
	$loadClass(AreaOp$CAGOp, name, initialize, &_AreaOp$CAGOp_ClassInfo_, allocate$AreaOp$CAGOp);
	return class$;
}

$Class* AreaOp$CAGOp::class$ = nullptr;

		} // geom
	} // awt
} // sun