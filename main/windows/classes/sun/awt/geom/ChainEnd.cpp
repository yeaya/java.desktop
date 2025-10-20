#include <sun/awt/geom/ChainEnd.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/geom/AreaOp.h>
#include <sun/awt/geom/CurveLink.h>
#include <jcpp.h>

#undef ETAG_ENTER
#undef ETAG_IGNORE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AreaOp = ::sun::awt::geom::AreaOp;
using $CurveLink = ::sun::awt::geom::CurveLink;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _ChainEnd_FieldInfo_[] = {
	{"head", "Lsun/awt/geom/CurveLink;", nullptr, 0, $field(ChainEnd, head)},
	{"tail", "Lsun/awt/geom/CurveLink;", nullptr, 0, $field(ChainEnd, tail)},
	{"partner", "Lsun/awt/geom/ChainEnd;", nullptr, 0, $field(ChainEnd, partner)},
	{"etag", "I", nullptr, 0, $field(ChainEnd, etag)},
	{}
};

$MethodInfo _ChainEnd_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/geom/CurveLink;Lsun/awt/geom/ChainEnd;)V", nullptr, $PUBLIC, $method(static_cast<void(ChainEnd::*)($CurveLink*,ChainEnd*)>(&ChainEnd::init$))},
	{"addLink", "(Lsun/awt/geom/CurveLink;)V", nullptr, $PUBLIC, $method(static_cast<void(ChainEnd::*)($CurveLink*)>(&ChainEnd::addLink))},
	{"getChain", "()Lsun/awt/geom/CurveLink;", nullptr, $PUBLIC, $method(static_cast<$CurveLink*(ChainEnd::*)()>(&ChainEnd::getChain))},
	{"getPartner", "()Lsun/awt/geom/ChainEnd;", nullptr, $PUBLIC, $method(static_cast<ChainEnd*(ChainEnd::*)()>(&ChainEnd::getPartner))},
	{"getX", "()D", nullptr, $PUBLIC, $method(static_cast<double(ChainEnd::*)()>(&ChainEnd::getX))},
	{"linkTo", "(Lsun/awt/geom/ChainEnd;)Lsun/awt/geom/CurveLink;", nullptr, $PUBLIC, $method(static_cast<$CurveLink*(ChainEnd::*)(ChainEnd*)>(&ChainEnd::linkTo))},
	{"setOtherEnd", "(Lsun/awt/geom/ChainEnd;)V", nullptr, $PUBLIC, $method(static_cast<void(ChainEnd::*)(ChainEnd*)>(&ChainEnd::setOtherEnd))},
	{}
};

$ClassInfo _ChainEnd_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.geom.ChainEnd",
	"java.lang.Object",
	nullptr,
	_ChainEnd_FieldInfo_,
	_ChainEnd_MethodInfo_
};

$Object* allocate$ChainEnd($Class* clazz) {
	return $of($alloc(ChainEnd));
}

void ChainEnd::init$($CurveLink* first, ChainEnd* partner) {
	$set(this, head, first);
	$set(this, tail, first);
	$set(this, partner, partner);
	this->etag = $nc(first)->getEdgeTag();
}

$CurveLink* ChainEnd::getChain() {
	return this->head;
}

void ChainEnd::setOtherEnd(ChainEnd* partner) {
	$set(this, partner, partner);
}

ChainEnd* ChainEnd::getPartner() {
	return this->partner;
}

$CurveLink* ChainEnd::linkTo(ChainEnd* that) {
	$useLocalCurrentObjectStackCache();
	if (this->etag == $AreaOp::ETAG_IGNORE || $nc(that)->etag == $AreaOp::ETAG_IGNORE) {
		$throwNew($InternalError, "ChainEnd linked more than once!"_s);
	}
	if (this->etag == $nc(that)->etag) {
		$throwNew($InternalError, "Linking chains of the same type!"_s);
	}
	$var(ChainEnd, enter, nullptr);
	$var(ChainEnd, exit, nullptr);
	if (this->etag == $AreaOp::ETAG_ENTER) {
		$assign(enter, this);
		$assign(exit, that);
	} else {
		$assign(enter, that);
		$assign(exit, this);
	}
	this->etag = $AreaOp::ETAG_IGNORE;
	$nc(that)->etag = $AreaOp::ETAG_IGNORE;
	$nc($nc(enter)->tail)->setNext($nc(exit)->head);
	$set(enter, tail, $nc(exit)->tail);
	if (this->partner == that) {
		return enter->head;
	}
	$var(ChainEnd, otherenter, exit->partner);
	$var(ChainEnd, otherexit, enter->partner);
	$set($nc(otherenter), partner, otherexit);
	$set($nc(otherexit), partner, otherenter);
	double var$0 = $nc(enter->head)->getYTop();
	if (var$0 < $nc(otherenter->head)->getYTop()) {
		$nc(enter->tail)->setNext(otherenter->head);
		$set(otherenter, head, enter->head);
	} else {
		$nc(otherexit->tail)->setNext(enter->head);
		$set(otherexit, tail, enter->tail);
	}
	return nullptr;
}

void ChainEnd::addLink($CurveLink* newlink) {
	if (this->etag == $AreaOp::ETAG_ENTER) {
		$nc(this->tail)->setNext(newlink);
		$set(this, tail, newlink);
	} else {
		$nc(newlink)->setNext(this->head);
		$set(this, head, newlink);
	}
}

double ChainEnd::getX() {
	if (this->etag == $AreaOp::ETAG_ENTER) {
		return $nc(this->tail)->getXBot();
	} else {
		return $nc(this->head)->getXBot();
	}
}

ChainEnd::ChainEnd() {
}

$Class* ChainEnd::load$($String* name, bool initialize) {
	$loadClass(ChainEnd, name, initialize, &_ChainEnd_ClassInfo_, allocate$ChainEnd);
	return class$;
}

$Class* ChainEnd::class$ = nullptr;

		} // geom
	} // awt
} // sun