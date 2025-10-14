#include <sun/awt/geom/AreaOp$NZWindOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/geom/AreaOp.h>
#include <sun/awt/geom/Curve.h>
#include <sun/awt/geom/Edge.h>
#include <jcpp.h>

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
using $Curve = ::sun::awt::geom::Curve;
using $Edge = ::sun::awt::geom::Edge;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _AreaOp$NZWindOp_FieldInfo_[] = {
	{"count", "I", nullptr, $PRIVATE, $field(AreaOp$NZWindOp, count)},
	{}
};

$MethodInfo _AreaOp$NZWindOp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AreaOp$NZWindOp::*)()>(&AreaOp$NZWindOp::init$))},
	{"classify", "(Lsun/awt/geom/Edge;)I", nullptr, $PUBLIC},
	{"getState", "()I", nullptr, $PUBLIC},
	{"newRow", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AreaOp$NZWindOp_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$NZWindOp", "sun.awt.geom.AreaOp", "NZWindOp", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AreaOp$NZWindOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.geom.AreaOp$NZWindOp",
	"sun.awt.geom.AreaOp",
	nullptr,
	_AreaOp$NZWindOp_FieldInfo_,
	_AreaOp$NZWindOp_MethodInfo_,
	nullptr,
	nullptr,
	_AreaOp$NZWindOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp"
};

$Object* allocate$AreaOp$NZWindOp($Class* clazz) {
	return $of($alloc(AreaOp$NZWindOp));
}

void AreaOp$NZWindOp::init$() {
	$AreaOp::init$();
}

void AreaOp$NZWindOp::newRow() {
	this->count = 0;
}

int32_t AreaOp$NZWindOp::classify($Edge* e) {
	int32_t newCount = this->count;
	int32_t type = (newCount == 0 ? $AreaOp::ETAG_ENTER : $AreaOp::ETAG_IGNORE);
	newCount += $nc($($nc(e)->getCurve()))->getDirection();
	this->count = newCount;
	return (newCount == 0 ? $AreaOp::ETAG_EXIT : type);
}

int32_t AreaOp$NZWindOp::getState() {
	return ((this->count == 0) ? $AreaOp::RSTAG_OUTSIDE : $AreaOp::RSTAG_INSIDE);
}

AreaOp$NZWindOp::AreaOp$NZWindOp() {
}

$Class* AreaOp$NZWindOp::load$($String* name, bool initialize) {
	$loadClass(AreaOp$NZWindOp, name, initialize, &_AreaOp$NZWindOp_ClassInfo_, allocate$AreaOp$NZWindOp);
	return class$;
}

$Class* AreaOp$NZWindOp::class$ = nullptr;

		} // geom
	} // awt
} // sun