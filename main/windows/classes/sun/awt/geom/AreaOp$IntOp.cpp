#include <sun/awt/geom/AreaOp$IntOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/geom/AreaOp$CAGOp.h>
#include <sun/awt/geom/AreaOp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AreaOp = ::sun::awt::geom::AreaOp;
using $AreaOp$CAGOp = ::sun::awt::geom::AreaOp$CAGOp;

namespace sun {
	namespace awt {
		namespace geom {

$MethodInfo _AreaOp$IntOp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AreaOp$IntOp::*)()>(&AreaOp$IntOp::init$))},
	{"newClassification", "(ZZ)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AreaOp$IntOp_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$IntOp", "sun.awt.geom.AreaOp", "IntOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AreaOp$IntOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.geom.AreaOp$IntOp",
	"sun.awt.geom.AreaOp$CAGOp",
	nullptr,
	nullptr,
	_AreaOp$IntOp_MethodInfo_,
	nullptr,
	nullptr,
	_AreaOp$IntOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp"
};

$Object* allocate$AreaOp$IntOp($Class* clazz) {
	return $of($alloc(AreaOp$IntOp));
}

void AreaOp$IntOp::init$() {
	$AreaOp$CAGOp::init$();
}

bool AreaOp$IntOp::newClassification(bool inLeft, bool inRight) {
	return (inLeft && inRight);
}

AreaOp$IntOp::AreaOp$IntOp() {
}

$Class* AreaOp$IntOp::load$($String* name, bool initialize) {
	$loadClass(AreaOp$IntOp, name, initialize, &_AreaOp$IntOp_ClassInfo_, allocate$AreaOp$IntOp);
	return class$;
}

$Class* AreaOp$IntOp::class$ = nullptr;

		} // geom
	} // awt
} // sun