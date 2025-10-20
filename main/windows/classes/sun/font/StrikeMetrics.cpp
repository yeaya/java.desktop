#include <sun/font/StrikeMetrics.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _StrikeMetrics_FieldInfo_[] = {
	{"ascentX", "F", nullptr, $PUBLIC, $field(StrikeMetrics, ascentX)},
	{"ascentY", "F", nullptr, $PUBLIC, $field(StrikeMetrics, ascentY)},
	{"descentX", "F", nullptr, $PUBLIC, $field(StrikeMetrics, descentX)},
	{"descentY", "F", nullptr, $PUBLIC, $field(StrikeMetrics, descentY)},
	{"baselineX", "F", nullptr, $PUBLIC, $field(StrikeMetrics, baselineX)},
	{"baselineY", "F", nullptr, $PUBLIC, $field(StrikeMetrics, baselineY)},
	{"leadingX", "F", nullptr, $PUBLIC, $field(StrikeMetrics, leadingX)},
	{"leadingY", "F", nullptr, $PUBLIC, $field(StrikeMetrics, leadingY)},
	{"maxAdvanceX", "F", nullptr, $PUBLIC, $field(StrikeMetrics, maxAdvanceX)},
	{"maxAdvanceY", "F", nullptr, $PUBLIC, $field(StrikeMetrics, maxAdvanceY)},
	{}
};

$MethodInfo _StrikeMetrics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StrikeMetrics::*)()>(&StrikeMetrics::init$))},
	{"<init>", "(FFFFFFFFFF)V", nullptr, 0, $method(static_cast<void(StrikeMetrics::*)(float,float,float,float,float,float,float,float,float,float)>(&StrikeMetrics::init$))},
	{"convertToUserSpace", "(Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(StrikeMetrics::*)($AffineTransform*)>(&StrikeMetrics::convertToUserSpace))},
	{"getAscent", "()F", nullptr, $PUBLIC, $method(static_cast<float(StrikeMetrics::*)()>(&StrikeMetrics::getAscent))},
	{"getDescent", "()F", nullptr, $PUBLIC, $method(static_cast<float(StrikeMetrics::*)()>(&StrikeMetrics::getDescent))},
	{"getLeading", "()F", nullptr, $PUBLIC, $method(static_cast<float(StrikeMetrics::*)()>(&StrikeMetrics::getLeading))},
	{"getMaxAdvance", "()F", nullptr, $PUBLIC, $method(static_cast<float(StrikeMetrics::*)()>(&StrikeMetrics::getMaxAdvance))},
	{"merge", "(Lsun/font/StrikeMetrics;)V", nullptr, 0, $method(static_cast<void(StrikeMetrics::*)(StrikeMetrics*)>(&StrikeMetrics::merge))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StrikeMetrics_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.StrikeMetrics",
	"java.lang.Object",
	nullptr,
	_StrikeMetrics_FieldInfo_,
	_StrikeMetrics_MethodInfo_
};

$Object* allocate$StrikeMetrics($Class* clazz) {
	return $of($alloc(StrikeMetrics));
}

void StrikeMetrics::init$() {
	this->ascentX = (this->ascentY = (float)$Integer::MAX_VALUE);
	this->descentX = (this->descentY = (this->leadingX = (this->leadingY = (float)$Integer::MIN_VALUE)));
	this->baselineX = (this->baselineY = (this->maxAdvanceX = (this->maxAdvanceY = (float)$Integer::MIN_VALUE)));
}

void StrikeMetrics::init$(float ax, float ay, float dx, float dy, float bx, float by, float lx, float ly, float mx, float my) {
	this->ascentX = ax;
	this->ascentY = ay;
	this->descentX = dx;
	this->descentY = dy;
	this->baselineX = bx;
	this->baselineY = by;
	this->leadingX = lx;
	this->leadingY = ly;
	this->maxAdvanceX = mx;
	this->maxAdvanceY = my;
}

float StrikeMetrics::getAscent() {
	return -this->ascentY;
}

float StrikeMetrics::getDescent() {
	return this->descentY;
}

float StrikeMetrics::getLeading() {
	return this->leadingY;
}

float StrikeMetrics::getMaxAdvance() {
	return this->maxAdvanceX;
}

void StrikeMetrics::merge(StrikeMetrics* other) {
	if (other == nullptr) {
		return;
	}
	if ($nc(other)->ascentX < this->ascentX) {
		this->ascentX = other->ascentX;
	}
	if ($nc(other)->ascentY < this->ascentY) {
		this->ascentY = other->ascentY;
	}
	if ($nc(other)->descentX > this->descentX) {
		this->descentX = other->descentX;
	}
	if ($nc(other)->descentY > this->descentY) {
		this->descentY = other->descentY;
	}
	if ($nc(other)->baselineX > this->baselineX) {
		this->baselineX = other->baselineX;
	}
	if ($nc(other)->baselineY > this->baselineY) {
		this->baselineY = other->baselineY;
	}
	if ($nc(other)->leadingX > this->leadingX) {
		this->leadingX = other->leadingX;
	}
	if ($nc(other)->leadingY > this->leadingY) {
		this->leadingY = other->leadingY;
	}
	if ($nc(other)->maxAdvanceX > this->maxAdvanceX) {
		this->maxAdvanceX = other->maxAdvanceX;
	}
	if ($nc(other)->maxAdvanceY > this->maxAdvanceY) {
		this->maxAdvanceY = other->maxAdvanceY;
	}
}

void StrikeMetrics::convertToUserSpace($AffineTransform* invTx) {
	$var($Point2D$Float, pt2D, $new($Point2D$Float));
	pt2D->x = this->ascentX;
	pt2D->y = this->ascentY;
	$nc(invTx)->deltaTransform(pt2D, pt2D);
	this->ascentX = pt2D->x;
	this->ascentY = pt2D->y;
	pt2D->x = this->descentX;
	pt2D->y = this->descentY;
	invTx->deltaTransform(pt2D, pt2D);
	this->descentX = pt2D->x;
	this->descentY = pt2D->y;
	pt2D->x = this->baselineX;
	pt2D->y = this->baselineY;
	invTx->deltaTransform(pt2D, pt2D);
	this->baselineX = pt2D->x;
	this->baselineY = pt2D->y;
	pt2D->x = this->leadingX;
	pt2D->y = this->leadingY;
	invTx->deltaTransform(pt2D, pt2D);
	this->leadingX = pt2D->x;
	this->leadingY = pt2D->y;
	pt2D->x = this->maxAdvanceX;
	pt2D->y = this->maxAdvanceY;
	invTx->deltaTransform(pt2D, pt2D);
	this->maxAdvanceX = pt2D->x;
	this->maxAdvanceY = pt2D->y;
}

$String* StrikeMetrics::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"ascent:x="_s, $$str(this->ascentX), " y="_s, $$str(this->ascentY), " descent:x="_s, $$str(this->descentX), " y="_s, $$str(this->descentY), " baseline:x="_s, $$str(this->baselineX), " y="_s, $$str(this->baselineY), " leading:x="_s, $$str(this->leadingX), " y="_s, $$str(this->leadingY), 
	" maxAdvance:x="_s, $$str(this->maxAdvanceX), " y="_s, $$str(this->maxAdvanceY)});
}

StrikeMetrics::StrikeMetrics() {
}

$Class* StrikeMetrics::load$($String* name, bool initialize) {
	$loadClass(StrikeMetrics, name, initialize, &_StrikeMetrics_ClassInfo_, allocate$StrikeMetrics);
	return class$;
}

$Class* StrikeMetrics::class$ = nullptr;

	} // font
} // sun