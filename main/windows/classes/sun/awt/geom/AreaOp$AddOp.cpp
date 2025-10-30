#include <sun/awt/geom/AreaOp$AddOp.h>

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

$MethodInfo _AreaOp$AddOp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AreaOp$AddOp::*)()>(&AreaOp$AddOp::init$))},
	{"newClassification", "(ZZ)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AreaOp$AddOp_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$AddOp", "sun.awt.geom.AreaOp", "AddOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AreaOp$AddOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.geom.AreaOp$AddOp",
	"sun.awt.geom.AreaOp$CAGOp",
	nullptr,
	nullptr,
	_AreaOp$AddOp_MethodInfo_,
	nullptr,
	nullptr,
	_AreaOp$AddOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp"
};

$Object* allocate$AreaOp$AddOp($Class* clazz) {
	return $of($alloc(AreaOp$AddOp));
}

void AreaOp$AddOp::init$() {
	$AreaOp$CAGOp::init$();
}

bool AreaOp$AddOp::newClassification(bool inLeft, bool inRight) {
	return (inLeft || inRight);
}

AreaOp$AddOp::AreaOp$AddOp() {
}

$Class* AreaOp$AddOp::load$($String* name, bool initialize) {
	$loadClass(AreaOp$AddOp, name, initialize, &_AreaOp$AddOp_ClassInfo_, allocate$AreaOp$AddOp);
	return class$;
}

$Class* AreaOp$AddOp::class$ = nullptr;

		} // geom
	} // awt
} // sun