#include <sun/awt/geom/AreaOp$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/geom/Curve.h>
#include <sun/awt/geom/Edge.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Curve = ::sun::awt::geom::Curve;
using $Edge = ::sun::awt::geom::Edge;

namespace sun {
	namespace awt {
		namespace geom {

$MethodInfo _AreaOp$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AreaOp$1::*)()>(&AreaOp$1::init$))},
	{"compare", "(Lsun/awt/geom/Edge;Lsun/awt/geom/Edge;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AreaOp$1_EnclosingMethodInfo_ = {
	"sun.awt.geom.AreaOp",
	nullptr,
	nullptr
};

$InnerClassInfo _AreaOp$1_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AreaOp$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.geom.AreaOp$1",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_AreaOp$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lsun/awt/geom/Edge;>;",
	&_AreaOp$1_EnclosingMethodInfo_,
	_AreaOp$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp"
};

$Object* allocate$AreaOp$1($Class* clazz) {
	return $of($alloc(AreaOp$1));
}

void AreaOp$1::init$() {
}

int32_t AreaOp$1::compare($Edge* o1, $Edge* o2) {
	$var($Curve, c1, $nc(o1)->getCurve());
	$var($Curve, c2, $nc(o2)->getCurve());
	double v1 = 0.0;
	double v2 = 0.0;
	double var$0 = (v1 = $nc(c1)->getYTop());
	if (var$0 == (v2 = $nc(c2)->getYTop())) {
		double var$1 = (v1 = c1->getXTop());
		if (var$1 == (v2 = c2->getXTop())) {
			return 0;
		}
	}
	if (v1 < v2) {
		return -1;
	}
	return 1;
}

int32_t AreaOp$1::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($Edge, o1), $cast($Edge, o2));
}

AreaOp$1::AreaOp$1() {
}

$Class* AreaOp$1::load$($String* name, bool initialize) {
	$loadClass(AreaOp$1, name, initialize, &_AreaOp$1_ClassInfo_, allocate$AreaOp$1);
	return class$;
}

$Class* AreaOp$1::class$ = nullptr;

		} // geom
	} // awt
} // sun