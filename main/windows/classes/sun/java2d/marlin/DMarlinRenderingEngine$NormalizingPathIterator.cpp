#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator.h>

#include <java/awt/geom/PathIterator.h>
#include <java/lang/InternalError.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO

using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $DMarlinRenderingEngine = ::sun::java2d::marlin::DMarlinRenderingEngine;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _DMarlinRenderingEngine$NormalizingPathIterator_FieldInfo_[] = {
	{"src", "Ljava/awt/geom/PathIterator;", nullptr, $PRIVATE, $field(DMarlinRenderingEngine$NormalizingPathIterator, src)},
	{"curx_adjust", "D", nullptr, $PRIVATE, $field(DMarlinRenderingEngine$NormalizingPathIterator, curx_adjust)},
	{"cury_adjust", "D", nullptr, $PRIVATE, $field(DMarlinRenderingEngine$NormalizingPathIterator, cury_adjust)},
	{"movx_adjust", "D", nullptr, $PRIVATE, $field(DMarlinRenderingEngine$NormalizingPathIterator, movx_adjust)},
	{"movy_adjust", "D", nullptr, $PRIVATE, $field(DMarlinRenderingEngine$NormalizingPathIterator, movy_adjust)},
	{"tmp", "[D", nullptr, $PRIVATE | $FINAL, $field(DMarlinRenderingEngine$NormalizingPathIterator, tmp)},
	{}
};

$MethodInfo _DMarlinRenderingEngine$NormalizingPathIterator_MethodInfo_[] = {
	{"<init>", "([D)V", nullptr, 0, $method(static_cast<void(DMarlinRenderingEngine$NormalizingPathIterator::*)($doubles*)>(&DMarlinRenderingEngine$NormalizingPathIterator::init$))},
	{"currentSegment", "([D)I", nullptr, $PUBLIC | $FINAL},
	{"currentSegment", "([F)I", nullptr, $PUBLIC | $FINAL},
	{"dispose", "()V", nullptr, $FINAL, $method(static_cast<void(DMarlinRenderingEngine$NormalizingPathIterator::*)()>(&DMarlinRenderingEngine$NormalizingPathIterator::dispose))},
	{"getWindingRule", "()I", nullptr, $PUBLIC | $FINAL},
	{"init", "(Ljava/awt/geom/PathIterator;)Lsun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator;", nullptr, $FINAL, $method(static_cast<DMarlinRenderingEngine$NormalizingPathIterator*(DMarlinRenderingEngine$NormalizingPathIterator::*)($PathIterator*)>(&DMarlinRenderingEngine$NormalizingPathIterator::init))},
	{"isDone", "()Z", nullptr, $PUBLIC | $FINAL},
	{"next", "()V", nullptr, $PUBLIC | $FINAL},
	{"normCoord", "(D)D", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _DMarlinRenderingEngine$NormalizingPathIterator_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "sun.java2d.marlin.DMarlinRenderingEngine", "NormalizingPathIterator", $STATIC | $ABSTRACT},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter", "sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "NearestPixelQuarter", $STATIC | $FINAL},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter", "sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "NearestPixelCenter", $STATIC | $FINAL},
	{}
};

$ClassInfo _DMarlinRenderingEngine$NormalizingPathIterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_DMarlinRenderingEngine$NormalizingPathIterator_FieldInfo_,
	_DMarlinRenderingEngine$NormalizingPathIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$NormalizingPathIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$NormalizingPathIterator($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$NormalizingPathIterator));
}

void DMarlinRenderingEngine$NormalizingPathIterator::init$($doubles* tmp) {
	$set(this, tmp, tmp);
}

DMarlinRenderingEngine$NormalizingPathIterator* DMarlinRenderingEngine$NormalizingPathIterator::init($PathIterator* src) {
	$set(this, src, src);
	return this;
}

void DMarlinRenderingEngine$NormalizingPathIterator::dispose() {
	$set(this, src, nullptr);
}

int32_t DMarlinRenderingEngine$NormalizingPathIterator::currentSegment($doubles* coords) {
	int32_t lastCoord = 0;
	int32_t type = $nc(this->src)->currentSegment(coords);
	switch (type) {
	case $PathIterator::SEG_MOVETO:
		{}
	case $PathIterator::SEG_LINETO:
		{
			lastCoord = 0;
			break;
		}
	case $PathIterator::SEG_QUADTO:
		{
			lastCoord = 2;
			break;
		}
	case $PathIterator::SEG_CUBICTO:
		{
			lastCoord = 4;
			break;
		}
	case $PathIterator::SEG_CLOSE:
		{
			this->curx_adjust = this->movx_adjust;
			this->cury_adjust = this->movy_adjust;
			return type;
		}
	default:
		{
			$throwNew($InternalError, "Unrecognized curve type"_s);
		}
	}
	double coord = 0.0;
	double x_adjust = 0.0;
	double y_adjust = 0.0;
	coord = $nc(coords)->get(lastCoord);
	x_adjust = normCoord(coord);
	coords->set(lastCoord, x_adjust);
	x_adjust -= coord;
	coord = coords->get(lastCoord + 1);
	y_adjust = normCoord(coord);
	coords->set(lastCoord + 1, y_adjust);
	y_adjust -= coord;
	switch (type) {
	case $PathIterator::SEG_MOVETO:
		{
			this->movx_adjust = x_adjust;
			this->movy_adjust = y_adjust;
			break;
		}
	case $PathIterator::SEG_LINETO:
		{
			break;
		}
	case $PathIterator::SEG_QUADTO:
		{
			(*coords)[0] += (this->curx_adjust + x_adjust) / 2.0;
			(*coords)[1] += (this->cury_adjust + y_adjust) / 2.0;
			break;
		}
	case $PathIterator::SEG_CUBICTO:
		{
			(*coords)[0] += this->curx_adjust;
			(*coords)[1] += this->cury_adjust;
			(*coords)[2] += x_adjust;
			(*coords)[3] += y_adjust;
			break;
		}
	case $PathIterator::SEG_CLOSE:
		{}
	default:
		{}
	}
	this->curx_adjust = x_adjust;
	this->cury_adjust = y_adjust;
	return type;
}

int32_t DMarlinRenderingEngine$NormalizingPathIterator::currentSegment($floats* coords) {
	$var($doubles, _tmp, this->tmp);
	int32_t type = this->currentSegment(_tmp);
	for (int32_t i = 0; i < 6; ++i) {
		$nc(coords)->set(i, (float)$nc(_tmp)->get(i));
	}
	return type;
}

int32_t DMarlinRenderingEngine$NormalizingPathIterator::getWindingRule() {
	return $nc(this->src)->getWindingRule();
}

bool DMarlinRenderingEngine$NormalizingPathIterator::isDone() {
	if ($nc(this->src)->isDone()) {
		dispose();
		return true;
	}
	return false;
}

void DMarlinRenderingEngine$NormalizingPathIterator::next() {
	$nc(this->src)->next();
}

DMarlinRenderingEngine$NormalizingPathIterator::DMarlinRenderingEngine$NormalizingPathIterator() {
}

$Class* DMarlinRenderingEngine$NormalizingPathIterator::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$NormalizingPathIterator, name, initialize, &_DMarlinRenderingEngine$NormalizingPathIterator_ClassInfo_, allocate$DMarlinRenderingEngine$NormalizingPathIterator);
	return class$;
}

$Class* DMarlinRenderingEngine$NormalizingPathIterator::class$ = nullptr;

		} // marlin
	} // java2d
} // sun