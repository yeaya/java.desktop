#include <sun/java2d/marlin/CollinearSimplifier.h>

#include <java/lang/Math.h>
#include <sun/java2d/marlin/CollinearSimplifier$1.h>
#include <sun/java2d/marlin/CollinearSimplifier$SimplifierState.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <jcpp.h>

#undef EPS
#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CollinearSimplifier$1 = ::sun::java2d::marlin::CollinearSimplifier$1;
using $CollinearSimplifier$SimplifierState = ::sun::java2d::marlin::CollinearSimplifier$SimplifierState;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _CollinearSimplifier_FieldInfo_[] = {
	{"EPS", "D", nullptr, $STATIC | $FINAL, $staticField(CollinearSimplifier, EPS)},
	{"delegate", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $field(CollinearSimplifier, delegate)},
	{"state", "Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;", nullptr, 0, $field(CollinearSimplifier, state)},
	{"px1", "D", nullptr, 0, $field(CollinearSimplifier, px1)},
	{"py1", "D", nullptr, 0, $field(CollinearSimplifier, py1)},
	{"px2", "D", nullptr, 0, $field(CollinearSimplifier, px2)},
	{"py2", "D", nullptr, 0, $field(CollinearSimplifier, py2)},
	{"pslope", "D", nullptr, 0, $field(CollinearSimplifier, pslope)},
	{}
};

$MethodInfo _CollinearSimplifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CollinearSimplifier::*)()>(&CollinearSimplifier::init$))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"emitStashedLine", "()V", nullptr, $PRIVATE, $method(static_cast<void(CollinearSimplifier::*)()>(&CollinearSimplifier::emitStashedLine))},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"getSlope", "(DDDD)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double,double,double,double)>(&CollinearSimplifier::getSlope))},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/CollinearSimplifier;", nullptr, $PUBLIC, $method(static_cast<CollinearSimplifier*(CollinearSimplifier::*)($DPathConsumer2D*)>(&CollinearSimplifier::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CollinearSimplifier_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.CollinearSimplifier$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.java2d.marlin.CollinearSimplifier$SimplifierState", "sun.java2d.marlin.CollinearSimplifier", "SimplifierState", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CollinearSimplifier_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.CollinearSimplifier",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_CollinearSimplifier_FieldInfo_,
	_CollinearSimplifier_MethodInfo_,
	nullptr,
	nullptr,
	_CollinearSimplifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.CollinearSimplifier$1,sun.java2d.marlin.CollinearSimplifier$SimplifierState"
};

$Object* allocate$CollinearSimplifier($Class* clazz) {
	return $of($alloc(CollinearSimplifier));
}

double CollinearSimplifier::EPS = 0.0;

void CollinearSimplifier::init$() {
}

CollinearSimplifier* CollinearSimplifier::init($DPathConsumer2D* delegate) {
	$set(this, delegate, delegate);
	$init($CollinearSimplifier$SimplifierState);
	$set(this, state, $CollinearSimplifier$SimplifierState::Empty);
	return this;
}

void CollinearSimplifier::pathDone() {
	emitStashedLine();
	$init($CollinearSimplifier$SimplifierState);
	$set(this, state, $CollinearSimplifier$SimplifierState::Empty);
	$nc(this->delegate)->pathDone();
}

void CollinearSimplifier::closePath() {
	emitStashedLine();
	$init($CollinearSimplifier$SimplifierState);
	$set(this, state, $CollinearSimplifier$SimplifierState::Empty);
	$nc(this->delegate)->closePath();
}

int64_t CollinearSimplifier::getNativeConsumer() {
	return 0;
}

void CollinearSimplifier::quadTo(double x1, double y1, double x2, double y2) {
	emitStashedLine();
	$nc(this->delegate)->quadTo(x1, y1, x2, y2);
	$init($CollinearSimplifier$SimplifierState);
	$set(this, state, $CollinearSimplifier$SimplifierState::PreviousPoint);
	this->px1 = x2;
	this->py1 = y2;
}

void CollinearSimplifier::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	emitStashedLine();
	$nc(this->delegate)->curveTo(x1, y1, x2, y2, x3, y3);
	$init($CollinearSimplifier$SimplifierState);
	$set(this, state, $CollinearSimplifier$SimplifierState::PreviousPoint);
	this->px1 = x3;
	this->py1 = y3;
}

void CollinearSimplifier::moveTo(double x, double y) {
	emitStashedLine();
	$nc(this->delegate)->moveTo(x, y);
	$init($CollinearSimplifier$SimplifierState);
	$set(this, state, $CollinearSimplifier$SimplifierState::PreviousPoint);
	this->px1 = x;
	this->py1 = y;
}

void CollinearSimplifier::lineTo(double x, double y) {
	$init($CollinearSimplifier$1);
	{
		double slope = 0;
		switch ($nc($CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState)->get($nc((this->state))->ordinal())) {
		case 1:
			{
				$nc(this->delegate)->lineTo(x, y);
				$init($CollinearSimplifier$SimplifierState);
				$set(this, state, $CollinearSimplifier$SimplifierState::PreviousPoint);
				this->px1 = x;
				this->py1 = y;
				return;
			}
		case 2:
			{
				$init($CollinearSimplifier$SimplifierState);
				$set(this, state, $CollinearSimplifier$SimplifierState::PreviousLine);
				this->px2 = x;
				this->py2 = y;
				this->pslope = getSlope(this->px1, this->py1, x, y);
				return;
			}
		case 3:
			{
				slope = getSlope(this->px2, this->py2, x, y);
				if ((slope == this->pslope) || ($Math::abs(this->pslope - slope) < CollinearSimplifier::EPS)) {
					this->px2 = x;
					this->py2 = y;
					return;
				}
				$nc(this->delegate)->lineTo(this->px2, this->py2);
				this->px1 = this->px2;
				this->py1 = this->py2;
				this->px2 = x;
				this->py2 = y;
				this->pslope = slope;
				return;
			}
		default:
			{}
		}
	}
}

void CollinearSimplifier::emitStashedLine() {
	$init($CollinearSimplifier$SimplifierState);
	if (this->state == $CollinearSimplifier$SimplifierState::PreviousLine) {
		$nc(this->delegate)->lineTo(this->px2, this->py2);
	}
}

double CollinearSimplifier::getSlope(double x1, double y1, double x2, double y2) {
	$init(CollinearSimplifier);
	double dy = y2 - y1;
	if (dy == 0.0) {
		$init($Double);
		return (x2 > x1) ? $Double::POSITIVE_INFINITY : $Double::NEGATIVE_INFINITY;
	}
	return (x2 - x1) / dy;
}

CollinearSimplifier::CollinearSimplifier() {
}

void clinit$CollinearSimplifier($Class* class$) {
	CollinearSimplifier::EPS = 1.0E-4;
}

$Class* CollinearSimplifier::load$($String* name, bool initialize) {
	$loadClass(CollinearSimplifier, name, initialize, &_CollinearSimplifier_ClassInfo_, clinit$CollinearSimplifier, allocate$CollinearSimplifier);
	return class$;
}

$Class* CollinearSimplifier::class$ = nullptr;

		} // marlin
	} // java2d
} // sun