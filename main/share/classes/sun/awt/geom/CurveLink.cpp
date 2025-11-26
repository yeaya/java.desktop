#include <sun/awt/geom/CurveLink.h>

#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <sun/awt/geom/Curve.h>
#include <sun/awt/geom/Order0.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Curve = ::sun::awt::geom::Curve;
using $Order0 = ::sun::awt::geom::Order0;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _CurveLink_FieldInfo_[] = {
	{"curve", "Lsun/awt/geom/Curve;", nullptr, 0, $field(CurveLink, curve)},
	{"ytop", "D", nullptr, 0, $field(CurveLink, ytop)},
	{"ybot", "D", nullptr, 0, $field(CurveLink, ybot)},
	{"etag", "I", nullptr, 0, $field(CurveLink, etag)},
	{"next", "Lsun/awt/geom/CurveLink;", nullptr, 0, $field(CurveLink, next)},
	{}
};

$MethodInfo _CurveLink_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/geom/Curve;DDI)V", nullptr, $PUBLIC, $method(static_cast<void(CurveLink::*)($Curve*,double,double,int32_t)>(&CurveLink::init$))},
	{"absorb", "(Lsun/awt/geom/CurveLink;)Z", nullptr, $PUBLIC, $method(static_cast<bool(CurveLink::*)(CurveLink*)>(&CurveLink::absorb))},
	{"absorb", "(Lsun/awt/geom/Curve;DDI)Z", nullptr, $PUBLIC, $method(static_cast<bool(CurveLink::*)($Curve*,double,double,int32_t)>(&CurveLink::absorb))},
	{"getCurve", "()Lsun/awt/geom/Curve;", nullptr, $PUBLIC, $method(static_cast<$Curve*(CurveLink::*)()>(&CurveLink::getCurve))},
	{"getEdgeTag", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CurveLink::*)()>(&CurveLink::getEdgeTag))},
	{"getMoveto", "()Lsun/awt/geom/Curve;", nullptr, $PUBLIC, $method(static_cast<$Curve*(CurveLink::*)()>(&CurveLink::getMoveto))},
	{"getNext", "()Lsun/awt/geom/CurveLink;", nullptr, $PUBLIC, $method(static_cast<CurveLink*(CurveLink::*)()>(&CurveLink::getNext))},
	{"getSubCurve", "()Lsun/awt/geom/Curve;", nullptr, $PUBLIC, $method(static_cast<$Curve*(CurveLink::*)()>(&CurveLink::getSubCurve))},
	{"getX", "()D", nullptr, $PUBLIC, $method(static_cast<double(CurveLink::*)()>(&CurveLink::getX))},
	{"getXBot", "()D", nullptr, $PUBLIC, $method(static_cast<double(CurveLink::*)()>(&CurveLink::getXBot))},
	{"getXTop", "()D", nullptr, $PUBLIC, $method(static_cast<double(CurveLink::*)()>(&CurveLink::getXTop))},
	{"getYBot", "()D", nullptr, $PUBLIC, $method(static_cast<double(CurveLink::*)()>(&CurveLink::getYBot))},
	{"getYTop", "()D", nullptr, $PUBLIC, $method(static_cast<double(CurveLink::*)()>(&CurveLink::getYTop))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CurveLink::*)()>(&CurveLink::isEmpty))},
	{"setNext", "(Lsun/awt/geom/CurveLink;)V", nullptr, $PUBLIC, $method(static_cast<void(CurveLink::*)(CurveLink*)>(&CurveLink::setNext))},
	{}
};

$ClassInfo _CurveLink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.geom.CurveLink",
	"java.lang.Object",
	nullptr,
	_CurveLink_FieldInfo_,
	_CurveLink_MethodInfo_
};

$Object* allocate$CurveLink($Class* clazz) {
	return $of($alloc(CurveLink));
}

void CurveLink::init$($Curve* curve, double ystart, double yend, int32_t etag) {
	$useLocalCurrentObjectStackCache();
	$set(this, curve, curve);
	this->ytop = ystart;
	this->ybot = yend;
	this->etag = etag;
	bool var$0 = this->ytop < $nc(curve)->getYTop();
	if (var$0 || this->ybot > $nc(curve)->getYBot()) {
		$throwNew($InternalError, $$str({"bad curvelink ["_s, $$str(this->ytop), "=>"_s, $$str(this->ybot), "] for "_s, curve}));
	}
}

bool CurveLink::absorb(CurveLink* link) {
	return absorb($nc(link)->curve, link->ytop, link->ybot, link->etag);
}

bool CurveLink::absorb($Curve* curve, double ystart, double yend, int32_t etag) {
	$useLocalCurrentObjectStackCache();
	if (this->curve != curve || this->etag != etag || this->ybot < ystart || this->ytop > yend) {
		return false;
	}
	bool var$0 = ystart < $nc(curve)->getYTop();
	if (var$0 || yend > $nc(curve)->getYBot()) {
		$throwNew($InternalError, $$str({"bad curvelink ["_s, $$str(ystart), "=>"_s, $$str(yend), "] for "_s, curve}));
	}
	this->ytop = $Math::min(this->ytop, ystart);
	this->ybot = $Math::max(this->ybot, yend);
	return true;
}

bool CurveLink::isEmpty() {
	return (this->ytop == this->ybot);
}

$Curve* CurveLink::getCurve() {
	return this->curve;
}

$Curve* CurveLink::getSubCurve() {
	bool var$0 = this->ytop == $nc(this->curve)->getYTop();
	if (var$0 && this->ybot == $nc(this->curve)->getYBot()) {
		return $nc(this->curve)->getWithDirection(this->etag);
	}
	return $nc(this->curve)->getSubCurve(this->ytop, this->ybot, this->etag);
}

$Curve* CurveLink::getMoveto() {
	double var$0 = getXTop();
	return $new($Order0, var$0, getYTop());
}

double CurveLink::getXTop() {
	return $nc(this->curve)->XforY(this->ytop);
}

double CurveLink::getYTop() {
	return this->ytop;
}

double CurveLink::getXBot() {
	return $nc(this->curve)->XforY(this->ybot);
}

double CurveLink::getYBot() {
	return this->ybot;
}

double CurveLink::getX() {
	return $nc(this->curve)->XforY(this->ytop);
}

int32_t CurveLink::getEdgeTag() {
	return this->etag;
}

void CurveLink::setNext(CurveLink* link) {
	$set(this, next, link);
}

CurveLink* CurveLink::getNext() {
	return this->next;
}

CurveLink::CurveLink() {
}

$Class* CurveLink::load$($String* name, bool initialize) {
	$loadClass(CurveLink, name, initialize, &_CurveLink_ClassInfo_, allocate$CurveLink);
	return class$;
}

$Class* CurveLink::class$ = nullptr;

		} // geom
	} // awt
} // sun