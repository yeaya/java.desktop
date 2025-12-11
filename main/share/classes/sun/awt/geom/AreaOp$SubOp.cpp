#include <sun/awt/geom/AreaOp$SubOp.h>

#include <sun/awt/geom/AreaOp$CAGOp.h>
#include <sun/awt/geom/AreaOp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AreaOp$CAGOp = ::sun::awt::geom::AreaOp$CAGOp;

namespace sun {
	namespace awt {
		namespace geom {

$MethodInfo _AreaOp$SubOp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AreaOp$SubOp::*)()>(&AreaOp$SubOp::init$))},
	{"newClassification", "(ZZ)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AreaOp$SubOp_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$SubOp", "sun.awt.geom.AreaOp", "SubOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AreaOp$SubOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.geom.AreaOp$SubOp",
	"sun.awt.geom.AreaOp$CAGOp",
	nullptr,
	nullptr,
	_AreaOp$SubOp_MethodInfo_,
	nullptr,
	nullptr,
	_AreaOp$SubOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp"
};

$Object* allocate$AreaOp$SubOp($Class* clazz) {
	return $of($alloc(AreaOp$SubOp));
}

void AreaOp$SubOp::init$() {
	$AreaOp$CAGOp::init$();
}

bool AreaOp$SubOp::newClassification(bool inLeft, bool inRight) {
	return (inLeft && !inRight);
}

AreaOp$SubOp::AreaOp$SubOp() {
}

$Class* AreaOp$SubOp::load$($String* name, bool initialize) {
	$loadClass(AreaOp$SubOp, name, initialize, &_AreaOp$SubOp_ClassInfo_, allocate$AreaOp$SubOp);
	return class$;
}

$Class* AreaOp$SubOp::class$ = nullptr;

		} // geom
	} // awt
} // sun