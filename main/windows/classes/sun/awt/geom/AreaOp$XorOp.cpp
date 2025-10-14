#include <sun/awt/geom/AreaOp$XorOp.h>

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

$MethodInfo _AreaOp$XorOp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AreaOp$XorOp::*)()>(&AreaOp$XorOp::init$))},
	{"newClassification", "(ZZ)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AreaOp$XorOp_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$XorOp", "sun.awt.geom.AreaOp", "XorOp", $PUBLIC | $STATIC},
	{"sun.awt.geom.AreaOp$CAGOp", "sun.awt.geom.AreaOp", "CAGOp", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AreaOp$XorOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.geom.AreaOp$XorOp",
	"sun.awt.geom.AreaOp$CAGOp",
	nullptr,
	nullptr,
	_AreaOp$XorOp_MethodInfo_,
	nullptr,
	nullptr,
	_AreaOp$XorOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp"
};

$Object* allocate$AreaOp$XorOp($Class* clazz) {
	return $of($alloc(AreaOp$XorOp));
}

void AreaOp$XorOp::init$() {
	$AreaOp$CAGOp::init$();
}

bool AreaOp$XorOp::newClassification(bool inLeft, bool inRight) {
	return (inLeft != inRight);
}

AreaOp$XorOp::AreaOp$XorOp() {
}

$Class* AreaOp$XorOp::load$($String* name, bool initialize) {
	$loadClass(AreaOp$XorOp, name, initialize, &_AreaOp$XorOp_ClassInfo_, allocate$AreaOp$XorOp);
	return class$;
}

$Class* AreaOp$XorOp::class$ = nullptr;

		} // geom
	} // awt
} // sun