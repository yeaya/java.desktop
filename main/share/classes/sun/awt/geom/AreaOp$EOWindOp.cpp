#include <sun/awt/geom/AreaOp$EOWindOp.h>

#include <sun/awt/geom/AreaOp.h>
#include <sun/awt/geom/Edge.h>
#include <jcpp.h>

#undef ETAG_ENTER
#undef ETAG_EXIT
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

$FieldInfo _AreaOp$EOWindOp_FieldInfo_[] = {
	{"inside", "Z", nullptr, $PRIVATE, $field(AreaOp$EOWindOp, inside)},
	{}
};

$MethodInfo _AreaOp$EOWindOp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AreaOp$EOWindOp::*)()>(&AreaOp$EOWindOp::init$))},
	{"classify", "(Lsun/awt/geom/Edge;)I", nullptr, $PUBLIC},
	{"getState", "()I", nullptr, $PUBLIC},
	{"newRow", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AreaOp$EOWindOp_InnerClassesInfo_[] = {
	{"sun.awt.geom.AreaOp$EOWindOp", "sun.awt.geom.AreaOp", "EOWindOp", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AreaOp$EOWindOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.geom.AreaOp$EOWindOp",
	"sun.awt.geom.AreaOp",
	nullptr,
	_AreaOp$EOWindOp_FieldInfo_,
	_AreaOp$EOWindOp_MethodInfo_,
	nullptr,
	nullptr,
	_AreaOp$EOWindOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.geom.AreaOp"
};

$Object* allocate$AreaOp$EOWindOp($Class* clazz) {
	return $of($alloc(AreaOp$EOWindOp));
}

void AreaOp$EOWindOp::init$() {
	$AreaOp::init$();
}

void AreaOp$EOWindOp::newRow() {
	this->inside = false;
}

int32_t AreaOp$EOWindOp::classify($Edge* e) {
	bool newInside = !this->inside;
	this->inside = newInside;
	return (newInside ? $AreaOp::ETAG_ENTER : $AreaOp::ETAG_EXIT);
}

int32_t AreaOp$EOWindOp::getState() {
	return (this->inside ? $AreaOp::RSTAG_INSIDE : $AreaOp::RSTAG_OUTSIDE);
}

AreaOp$EOWindOp::AreaOp$EOWindOp() {
}

$Class* AreaOp$EOWindOp::load$($String* name, bool initialize) {
	$loadClass(AreaOp$EOWindOp, name, initialize, &_AreaOp$EOWindOp_ClassInfo_, allocate$AreaOp$EOWindOp);
	return class$;
}

$Class* AreaOp$EOWindOp::class$ = nullptr;

		} // geom
	} // awt
} // sun