#include <sun/java2d/marlin/Helpers$PolyStack.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/java2d/marlin/ByteArrayCache$Reference.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/DoubleArrayCache$Reference.h>
#include <sun/java2d/marlin/Helpers.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef DO_STATS
#undef INITIAL_CURVES_COUNT
#undef INITIAL_EDGES_COUNT
#undef INITIAL_TYPES_COUNT
#undef TYPE_CUBICTO
#undef TYPE_LINETO
#undef TYPE_QUADTO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $ByteArrayCache$Reference = ::sun::java2d::marlin::ByteArrayCache$Reference;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $DoubleArrayCache$Reference = ::sun::java2d::marlin::DoubleArrayCache$Reference;
using $Helpers = ::sun::java2d::marlin::Helpers;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $Histogram = ::sun::java2d::marlin::stats::Histogram;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _Helpers$PolyStack_FieldInfo_[] = {
	{"TYPE_LINETO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Helpers$PolyStack, TYPE_LINETO)},
	{"TYPE_QUADTO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Helpers$PolyStack, TYPE_QUADTO)},
	{"TYPE_CUBICTO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Helpers$PolyStack, TYPE_CUBICTO)},
	{"INITIAL_CURVES_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Helpers$PolyStack, INITIAL_CURVES_COUNT)},
	{"INITIAL_TYPES_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Helpers$PolyStack, INITIAL_TYPES_COUNT)},
	{"curves", "[D", nullptr, 0, $field(Helpers$PolyStack, curves)},
	{"end", "I", nullptr, 0, $field(Helpers$PolyStack, end)},
	{"curveTypes", "[B", nullptr, 0, $field(Helpers$PolyStack, curveTypes)},
	{"numCurves", "I", nullptr, 0, $field(Helpers$PolyStack, numCurves)},
	{"curves_ref", "Lsun/java2d/marlin/DoubleArrayCache$Reference;", nullptr, $FINAL, $field(Helpers$PolyStack, curves_ref)},
	{"curveTypes_ref", "Lsun/java2d/marlin/ByteArrayCache$Reference;", nullptr, $FINAL, $field(Helpers$PolyStack, curveTypes_ref)},
	{"curveTypesUseMark", "I", nullptr, 0, $field(Helpers$PolyStack, curveTypesUseMark)},
	{"curvesUseMark", "I", nullptr, 0, $field(Helpers$PolyStack, curvesUseMark)},
	{"stat_polystack_types", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $PRIVATE | $FINAL, $field(Helpers$PolyStack, stat_polystack_types)},
	{"stat_polystack_curves", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $PRIVATE | $FINAL, $field(Helpers$PolyStack, stat_polystack_curves)},
	{"hist_polystack_curves", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $PRIVATE | $FINAL, $field(Helpers$PolyStack, hist_polystack_curves)},
	{"stat_array_polystack_curves", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $PRIVATE | $FINAL, $field(Helpers$PolyStack, stat_array_polystack_curves)},
	{"stat_array_polystack_curveTypes", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $PRIVATE | $FINAL, $field(Helpers$PolyStack, stat_array_polystack_curveTypes)},
	{}
};

$MethodInfo _Helpers$PolyStack_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(Helpers$PolyStack::*)($RendererContext*)>(&Helpers$PolyStack::init$))},
	{"<init>", "(Lsun/java2d/marlin/RendererContext;Lsun/java2d/marlin/stats/StatLong;Lsun/java2d/marlin/stats/StatLong;Lsun/java2d/marlin/stats/Histogram;Lsun/java2d/marlin/stats/StatLong;Lsun/java2d/marlin/stats/StatLong;)V", nullptr, 0, $method(static_cast<void(Helpers$PolyStack::*)($RendererContext*,$StatLong*,$StatLong*,$Histogram*,$StatLong*,$StatLong*)>(&Helpers$PolyStack::init$))},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(Helpers$PolyStack::*)()>(&Helpers$PolyStack::dispose))},
	{"ensureSpace", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Helpers$PolyStack::*)(int32_t)>(&Helpers$PolyStack::ensureSpace))},
	{"popAll", "(Lsun/java2d/marlin/DPathConsumer2D;)V", nullptr, 0, $method(static_cast<void(Helpers$PolyStack::*)($DPathConsumer2D*)>(&Helpers$PolyStack::popAll))},
	{"pullAll", "(Lsun/java2d/marlin/DPathConsumer2D;)V", nullptr, 0, $method(static_cast<void(Helpers$PolyStack::*)($DPathConsumer2D*)>(&Helpers$PolyStack::pullAll))},
	{"pushCubic", "(DDDDDD)V", nullptr, 0, $method(static_cast<void(Helpers$PolyStack::*)(double,double,double,double,double,double)>(&Helpers$PolyStack::pushCubic))},
	{"pushLine", "(DD)V", nullptr, 0, $method(static_cast<void(Helpers$PolyStack::*)(double,double)>(&Helpers$PolyStack::pushLine))},
	{"pushQuad", "(DDDD)V", nullptr, 0, $method(static_cast<void(Helpers$PolyStack::*)(double,double,double,double)>(&Helpers$PolyStack::pushQuad))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Helpers$PolyStack_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.Helpers$PolyStack", "sun.java2d.marlin.Helpers", "PolyStack", $STATIC | $FINAL},
	{}
};

$ClassInfo _Helpers$PolyStack_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Helpers$PolyStack",
	"java.lang.Object",
	nullptr,
	_Helpers$PolyStack_FieldInfo_,
	_Helpers$PolyStack_MethodInfo_,
	nullptr,
	nullptr,
	_Helpers$PolyStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.Helpers"
};

$Object* allocate$Helpers$PolyStack($Class* clazz) {
	return $of($alloc(Helpers$PolyStack));
}

int32_t Helpers$PolyStack::INITIAL_CURVES_COUNT = 0;
int32_t Helpers$PolyStack::INITIAL_TYPES_COUNT = 0;

void Helpers$PolyStack::init$($RendererContext* rdrCtx) {
	Helpers$PolyStack::init$(rdrCtx, nullptr, nullptr, nullptr, nullptr, nullptr);
}

void Helpers$PolyStack::init$($RendererContext* rdrCtx, $StatLong* stat_polystack_types, $StatLong* stat_polystack_curves, $Histogram* hist_polystack_curves, $StatLong* stat_array_polystack_curves, $StatLong* stat_array_polystack_curveTypes) {
	$set(this, curves_ref, $nc(rdrCtx)->newDirtyDoubleArrayRef(Helpers$PolyStack::INITIAL_CURVES_COUNT));
	$set(this, curves, $nc(this->curves_ref)->initial);
	$set(this, curveTypes_ref, rdrCtx->newDirtyByteArrayRef(Helpers$PolyStack::INITIAL_TYPES_COUNT));
	$set(this, curveTypes, $nc(this->curveTypes_ref)->initial);
	this->numCurves = 0;
	this->end = 0;
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		this->curveTypesUseMark = 0;
		this->curvesUseMark = 0;
	}
	$set(this, stat_polystack_types, stat_polystack_types);
	$set(this, stat_polystack_curves, stat_polystack_curves);
	$set(this, hist_polystack_curves, hist_polystack_curves);
	$set(this, stat_array_polystack_curves, stat_array_polystack_curves);
	$set(this, stat_array_polystack_curveTypes, stat_array_polystack_curveTypes);
}

void Helpers$PolyStack::dispose() {
	this->end = 0;
	this->numCurves = 0;
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc(this->stat_polystack_types)->add(this->curveTypesUseMark);
		$nc(this->stat_polystack_curves)->add(this->curvesUseMark);
		$nc(this->hist_polystack_curves)->add(this->curvesUseMark);
		this->curveTypesUseMark = 0;
		this->curvesUseMark = 0;
	}
	$set(this, curves, $nc(this->curves_ref)->putArray(this->curves));
	$set(this, curveTypes, $nc(this->curveTypes_ref)->putArray(this->curveTypes));
}

void Helpers$PolyStack::ensureSpace(int32_t n) {
	if ($nc(this->curves)->length - this->end < n) {
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS) {
			$nc(this->stat_array_polystack_curves)->add(this->end + n);
		}
		$set(this, curves, $nc(this->curves_ref)->widenArray(this->curves, this->end, this->end + n));
	}
	if ($nc(this->curveTypes)->length <= this->numCurves) {
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS) {
			$nc(this->stat_array_polystack_curveTypes)->add(this->numCurves + 1);
		}
		$set(this, curveTypes, $nc(this->curveTypes_ref)->widenArray(this->curveTypes, this->numCurves, this->numCurves + 1));
	}
}

void Helpers$PolyStack::pushCubic(double x0, double y0, double x1, double y1, double x2, double y2) {
	ensureSpace(6);
	$nc(this->curveTypes)->set(this->numCurves++, Helpers$PolyStack::TYPE_CUBICTO);
	$var($doubles, _curves, this->curves);
	int32_t e = this->end;
	$nc(_curves)->set(e++, x2);
	_curves->set(e++, y2);
	_curves->set(e++, x1);
	_curves->set(e++, y1);
	_curves->set(e++, x0);
	_curves->set(e++, y0);
	this->end = e;
}

void Helpers$PolyStack::pushQuad(double x0, double y0, double x1, double y1) {
	ensureSpace(4);
	$nc(this->curveTypes)->set(this->numCurves++, Helpers$PolyStack::TYPE_QUADTO);
	$var($doubles, _curves, this->curves);
	int32_t e = this->end;
	$nc(_curves)->set(e++, x1);
	_curves->set(e++, y1);
	_curves->set(e++, x0);
	_curves->set(e++, y0);
	this->end = e;
}

void Helpers$PolyStack::pushLine(double x, double y) {
	ensureSpace(2);
	$nc(this->curveTypes)->set(this->numCurves++, Helpers$PolyStack::TYPE_LINETO);
	$nc(this->curves)->set(this->end++, x);
	$nc(this->curves)->set(this->end++, y);
}

void Helpers$PolyStack::pullAll($DPathConsumer2D* io) {
	$useLocalCurrentObjectStackCache();
	int32_t nc = this->numCurves;
	if (nc == 0) {
		return;
	}
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		if (this->numCurves > this->curveTypesUseMark) {
			this->curveTypesUseMark = this->numCurves;
		}
		if (this->end > this->curvesUseMark) {
			this->curvesUseMark = this->end;
		}
	}
	$var($bytes, _curveTypes, this->curveTypes);
	$var($doubles, _curves, this->curves);
	int32_t e = 0;
	for (int32_t i = 0; i < nc; ++i) {
		switch ($nc(_curveTypes)->get(i)) {
		case Helpers$PolyStack::TYPE_LINETO:
			{
				$nc(io)->lineTo($nc(_curves)->get(e), _curves->get(e + 1));
				e += 2;
				continue;
			}
		case Helpers$PolyStack::TYPE_CUBICTO:
			{
				$nc(io)->curveTo($nc(_curves)->get(e), _curves->get(e + 1), _curves->get(e + 2), _curves->get(e + 3), _curves->get(e + 4), _curves->get(e + 5));
				e += 6;
				continue;
			}
		case Helpers$PolyStack::TYPE_QUADTO:
			{
				$nc(io)->quadTo($nc(_curves)->get(e), _curves->get(e + 1), _curves->get(e + 2), _curves->get(e + 3));
				e += 4;
				continue;
			}
		default:
			{}
		}
	}
	this->numCurves = 0;
	this->end = 0;
}

void Helpers$PolyStack::popAll($DPathConsumer2D* io) {
	$useLocalCurrentObjectStackCache();
	int32_t nc = this->numCurves;
	if (nc == 0) {
		return;
	}
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		if (this->numCurves > this->curveTypesUseMark) {
			this->curveTypesUseMark = this->numCurves;
		}
		if (this->end > this->curvesUseMark) {
			this->curvesUseMark = this->end;
		}
	}
	$var($bytes, _curveTypes, this->curveTypes);
	$var($doubles, _curves, this->curves);
	int32_t e = this->end;
	while (nc != 0) {
		switch ($nc(_curveTypes)->get(--nc)) {
		case Helpers$PolyStack::TYPE_LINETO:
			{
				e -= 2;
				$nc(io)->lineTo($nc(_curves)->get(e), _curves->get(e + 1));
				continue;
			}
		case Helpers$PolyStack::TYPE_CUBICTO:
			{
				e -= 6;
				$nc(io)->curveTo($nc(_curves)->get(e), _curves->get(e + 1), _curves->get(e + 2), _curves->get(e + 3), _curves->get(e + 4), _curves->get(e + 5));
				continue;
			}
		case Helpers$PolyStack::TYPE_QUADTO:
			{
				e -= 4;
				$nc(io)->quadTo($nc(_curves)->get(e), _curves->get(e + 1), _curves->get(e + 2), _curves->get(e + 3));
				continue;
			}
		default:
			{}
		}
	}
	this->numCurves = 0;
	this->end = 0;
}

$String* Helpers$PolyStack::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, ""_s);
	int32_t nc = this->numCurves;
	int32_t last = this->end;
	int32_t len = 0;
	while (nc != 0) {
		switch ($nc(this->curveTypes)->get(--nc)) {
		case Helpers$PolyStack::TYPE_LINETO:
			{
				len = 2;
				$plusAssign(ret, "line: "_s);
				break;
			}
		case Helpers$PolyStack::TYPE_QUADTO:
			{
				len = 4;
				$plusAssign(ret, "quad: "_s);
				break;
			}
		case Helpers$PolyStack::TYPE_CUBICTO:
			{
				len = 6;
				$plusAssign(ret, "cubic: "_s);
				break;
			}
		default:
			{
				len = 0;
			}
		}
		last -= len;
		$plusAssign(ret, $$str({$($Arrays::toString($($Arrays::copyOfRange(this->curves, last, last + len)))), "\n"_s}));
	}
	return ret;
}

void clinit$Helpers$PolyStack($Class* class$) {
	$init($MarlinConst);
	Helpers$PolyStack::INITIAL_CURVES_COUNT = $MarlinConst::INITIAL_EDGES_COUNT << 1;
	Helpers$PolyStack::INITIAL_TYPES_COUNT = $MarlinConst::INITIAL_EDGES_COUNT;
}

Helpers$PolyStack::Helpers$PolyStack() {
}

$Class* Helpers$PolyStack::load$($String* name, bool initialize) {
	$loadClass(Helpers$PolyStack, name, initialize, &_Helpers$PolyStack_ClassInfo_, clinit$Helpers$PolyStack, allocate$Helpers$PolyStack);
	return class$;
}

$Class* Helpers$PolyStack::class$ = nullptr;

		} // marlin
	} // java2d
} // sun