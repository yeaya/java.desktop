#include <sun/java2d/marlin/Dasher.h>

#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/Dasher$LengthIterator.h>
#include <sun/java2d/marlin/DoubleArrayCache$Reference.h>
#include <sun/java2d/marlin/FloatMath.h>
#include <sun/java2d/marlin/Helpers.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinProperties.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveBasicMonotonizer.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef CURVE_LEN_ERR
#undef DO_CLIP_SUBDIVIDER
#undef DO_STATS
#undef EPS
#undef INITIAL_ARRAY
#undef MAX_CYCLES
#undef MIN_T_INC
#undef REC_LIMIT

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $Dasher$LengthIterator = ::sun::java2d::marlin::Dasher$LengthIterator;
using $DoubleArrayCache$Reference = ::sun::java2d::marlin::DoubleArrayCache$Reference;
using $FloatMath = ::sun::java2d::marlin::FloatMath;
using $Helpers = ::sun::java2d::marlin::Helpers;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinProperties = ::sun::java2d::marlin::MarlinProperties;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $TransformingPathConsumer2D$CurveBasicMonotonizer = ::sun::java2d::marlin::TransformingPathConsumer2D$CurveBasicMonotonizer;
using $TransformingPathConsumer2D$CurveClipSplitter = ::sun::java2d::marlin::TransformingPathConsumer2D$CurveClipSplitter;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _Dasher_FieldInfo_[] = {
	{"REC_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(Dasher, REC_LIMIT)},
	{"CURVE_LEN_ERR", "D", nullptr, $STATIC | $FINAL, $staticField(Dasher, CURVE_LEN_ERR)},
	{"MIN_T_INC", "D", nullptr, $STATIC | $FINAL, $staticField(Dasher, MIN_T_INC)},
	{"EPS", "D", nullptr, $STATIC | $FINAL, $staticField(Dasher, EPS)},
	{"MAX_CYCLES", "D", nullptr, $STATIC | $FINAL, $staticField(Dasher, MAX_CYCLES)},
	{"out", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, $PRIVATE, $field(Dasher, out)},
	{"dash", "[D", nullptr, $PRIVATE, $field(Dasher, dash)},
	{"dashLen", "I", nullptr, $PRIVATE, $field(Dasher, dashLen)},
	{"startPhase", "D", nullptr, $PRIVATE, $field(Dasher, startPhase)},
	{"startDashOn", "Z", nullptr, $PRIVATE, $field(Dasher, startDashOn)},
	{"startIdx", "I", nullptr, $PRIVATE, $field(Dasher, startIdx)},
	{"starting", "Z", nullptr, $PRIVATE, $field(Dasher, starting)},
	{"needsMoveTo", "Z", nullptr, $PRIVATE, $field(Dasher, needsMoveTo)},
	{"idx", "I", nullptr, $PRIVATE, $field(Dasher, idx)},
	{"dashOn", "Z", nullptr, $PRIVATE, $field(Dasher, dashOn)},
	{"phase", "D", nullptr, $PRIVATE, $field(Dasher, phase)},
	{"sx0", "D", nullptr, $PRIVATE, $field(Dasher, sx0)},
	{"sy0", "D", nullptr, $PRIVATE, $field(Dasher, sy0)},
	{"cx0", "D", nullptr, $PRIVATE, $field(Dasher, cx0)},
	{"cy0", "D", nullptr, $PRIVATE, $field(Dasher, cy0)},
	{"curCurvepts", "[D", nullptr, $PRIVATE | $FINAL, $field(Dasher, curCurvepts)},
	{"rdrCtx", "Lsun/java2d/marlin/RendererContext;", nullptr, $FINAL, $field(Dasher, rdrCtx)},
	{"recycleDashes", "Z", nullptr, 0, $field(Dasher, recycleDashes)},
	{"firstSegmentsBuffer", "[D", nullptr, $PRIVATE, $field(Dasher, firstSegmentsBuffer)},
	{"firstSegidx", "I", nullptr, $PRIVATE, $field(Dasher, firstSegidx)},
	{"dashes_ref", "Lsun/java2d/marlin/DoubleArrayCache$Reference;", nullptr, $FINAL, $field(Dasher, dashes_ref)},
	{"firstSegmentsBuffer_ref", "Lsun/java2d/marlin/DoubleArrayCache$Reference;", nullptr, $FINAL, $field(Dasher, firstSegmentsBuffer_ref)},
	{"clipRect", "[D", nullptr, $PRIVATE, $field(Dasher, clipRect)},
	{"cOutCode", "I", nullptr, $PRIVATE, $field(Dasher, cOutCode)},
	{"subdivide", "Z", nullptr, $PRIVATE, $field(Dasher, subdivide)},
	{"li", "Lsun/java2d/marlin/Dasher$LengthIterator;", nullptr, $PRIVATE | $FINAL, $field(Dasher, li)},
	{"curveSplitter", "Lsun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter;", nullptr, $PRIVATE | $FINAL, $field(Dasher, curveSplitter)},
	{"cycleLen", "D", nullptr, $PRIVATE, $field(Dasher, cycleLen)},
	{"outside", "Z", nullptr, $PRIVATE, $field(Dasher, outside)},
	{"totalSkipLen", "D", nullptr, $PRIVATE, $field(Dasher, totalSkipLen)},
	{}
};

$MethodInfo _Dasher_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(Dasher::*)($RendererContext*)>(&Dasher::init$))},
	{"_curveTo", "(DDDDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)(double,double,double,double,double,double)>(&Dasher::_curveTo))},
	{"_lineTo", "(DD)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)(double,double)>(&Dasher::_lineTo))},
	{"_quadTo", "(DDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)(double,double,double,double)>(&Dasher::_quadTo))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"copyDashArray", "([F)[D", nullptr, 0, $method(static_cast<$doubles*(Dasher::*)($floats*)>(&Dasher::copyDashArray))},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(Dasher::*)()>(&Dasher::dispose))},
	{"emitFirstSegments", "()V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)()>(&Dasher::emitFirstSegments))},
	{"emitSeg", "([DII)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)($doubles*,int32_t,int32_t)>(&Dasher::emitSeg))},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"goTo", "([DIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)($doubles*,int32_t,int32_t,bool)>(&Dasher::goTo))},
	{"goTo_starting", "([DII)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)($doubles*,int32_t,int32_t)>(&Dasher::goTo_starting))},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;[DIDZ)Lsun/java2d/marlin/Dasher;", nullptr, 0, $method(static_cast<Dasher*(Dasher::*)($DPathConsumer2D*,$doubles*,int32_t,double,bool)>(&Dasher::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"pointCurve", "([DI)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($doubles*,int32_t)>(&Dasher::pointCurve))},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{"skipCurveTo", "(DDDDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)(double,double,double,double,double,double)>(&Dasher::skipCurveTo))},
	{"skipLen", "()V", nullptr, $PUBLIC, $method(static_cast<void(Dasher::*)()>(&Dasher::skipLen))},
	{"skipLineTo", "(DD)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)(double,double)>(&Dasher::skipLineTo))},
	{"skipQuadTo", "(DDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)(double,double,double,double)>(&Dasher::skipQuadTo))},
	{"skipSomethingTo", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)(int32_t)>(&Dasher::skipSomethingTo))},
	{"somethingTo", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Dasher::*)(int32_t)>(&Dasher::somethingTo))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Dasher_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.Dasher$LengthIterator", "sun.java2d.marlin.Dasher", "LengthIterator", $STATIC | $FINAL},
	{}
};

$ClassInfo _Dasher_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Dasher",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D,sun.java2d.marlin.MarlinConst",
	_Dasher_FieldInfo_,
	_Dasher_MethodInfo_,
	nullptr,
	nullptr,
	_Dasher_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.Dasher$LengthIterator"
};

$Object* allocate$Dasher($Class* clazz) {
	return $of($alloc(Dasher));
}

int32_t Dasher::hashCode() {
	 return this->$DPathConsumer2D::hashCode();
}

bool Dasher::equals(Object$* arg0) {
	 return this->$DPathConsumer2D::equals(arg0);
}

$Object* Dasher::clone() {
	 return this->$DPathConsumer2D::clone();
}

$String* Dasher::toString() {
	 return this->$DPathConsumer2D::toString();
}

void Dasher::finalize() {
	this->$DPathConsumer2D::finalize();
}

double Dasher::CURVE_LEN_ERR = 0.0;
double Dasher::MIN_T_INC = 0.0;
double Dasher::EPS = 0.0;
double Dasher::MAX_CYCLES = 0.0;

void Dasher::init$($RendererContext* rdrCtx) {
	this->cOutCode = 0;
	$init($MarlinConst);
	this->subdivide = $MarlinConst::DO_CLIP_SUBDIVIDER;
	$set(this, li, $new($Dasher$LengthIterator));
	$set(this, rdrCtx, rdrCtx);
	$set(this, dashes_ref, $nc(rdrCtx)->newDirtyDoubleArrayRef($MarlinConst::INITIAL_ARRAY));
	$set(this, firstSegmentsBuffer_ref, rdrCtx->newDirtyDoubleArrayRef($MarlinConst::INITIAL_ARRAY));
	$set(this, firstSegmentsBuffer, $nc(this->firstSegmentsBuffer_ref)->initial);
	$set(this, curCurvepts, $new($doubles, 8 * 2));
	$set(this, curveSplitter, rdrCtx->curveClipSplitter);
}

Dasher* Dasher::init($DPathConsumer2D* out, $doubles* dash, int32_t dashLen, double phase, bool recycleDashes) {
	$set(this, out, out);
	int32_t sidx = 0;
	this->dashOn = true;
	double sum = 0.0;
	for (int32_t i = 0; i < dashLen; ++i) {
		sum += $nc(dash)->get(i);
	}
	this->cycleLen = sum;
	double cycles = phase / sum;
	if (phase < 0.0) {
		if (-cycles >= Dasher::MAX_CYCLES) {
			phase = 0.0;
		} else {
			int32_t fullcycles = $FloatMath::floor_int(-cycles);
			if (((int32_t)(((int32_t)(fullcycles & (uint32_t)dashLen)) & (uint32_t)1)) != 0) {
				this->dashOn = !this->dashOn;
			}
			phase += fullcycles * sum;
			while (phase < 0.0) {
				if (--sidx < 0) {
					sidx = dashLen - 1;
				}
				phase += $nc(dash)->get(sidx);
				this->dashOn = !this->dashOn;
			}
		}
	} else if (phase > 0.0) {
		if (cycles >= Dasher::MAX_CYCLES) {
			phase = 0.0;
		} else {
			int32_t fullcycles = $FloatMath::floor_int(cycles);
			if (((int32_t)(((int32_t)(fullcycles & (uint32_t)dashLen)) & (uint32_t)1)) != 0) {
				this->dashOn = !this->dashOn;
			}
			phase -= fullcycles * sum;
			double d = 0.0;
			while (phase >= (d = $nc(dash)->get(sidx))) {
				phase -= d;
				sidx = $mod((sidx + 1), dashLen);
				this->dashOn = !this->dashOn;
			}
		}
	}
	$set(this, dash, dash);
	this->dashLen = dashLen;
	this->phase = phase;
	this->startPhase = phase;
	this->startDashOn = this->dashOn;
	this->startIdx = sidx;
	this->starting = true;
	this->needsMoveTo = false;
	this->firstSegidx = 0;
	this->recycleDashes = recycleDashes;
	if ($nc(this->rdrCtx)->doClip) {
		$set(this, clipRect, $nc(this->rdrCtx)->clipRect);
	} else {
		$set(this, clipRect, nullptr);
		this->cOutCode = 0;
	}
	return this;
}

void Dasher::dispose() {
	if (this->recycleDashes) {
		$set(this, dash, $nc(this->dashes_ref)->putArray(this->dash));
	}
	$set(this, firstSegmentsBuffer, $nc(this->firstSegmentsBuffer_ref)->putArray(this->firstSegmentsBuffer));
}

$doubles* Dasher::copyDashArray($floats* dashes) {
	int32_t len = $nc(dashes)->length;
	$var($doubles, newDashes, nullptr);
	if (len <= $MarlinConst::INITIAL_ARRAY) {
		$assign(newDashes, $nc(this->dashes_ref)->initial);
	} else {
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_dasher_dasher)->add(len);
		}
		$assign(newDashes, $nc(this->dashes_ref)->getArray(len));
	}
	for (int32_t i = 0; i < len; ++i) {
		$nc(newDashes)->set(i, dashes->get(i));
	}
	return newDashes;
}

void Dasher::moveTo(double x0, double y0) {
	if (this->firstSegidx != 0) {
		$nc(this->out)->moveTo(this->sx0, this->sy0);
		emitFirstSegments();
	}
	this->needsMoveTo = true;
	this->idx = this->startIdx;
	this->dashOn = this->startDashOn;
	this->phase = this->startPhase;
	this->cx0 = x0;
	this->cy0 = y0;
	this->sx0 = x0;
	this->sy0 = y0;
	this->starting = true;
	if (this->clipRect != nullptr) {
		int32_t outcode = $Helpers::outcode(x0, y0, this->clipRect);
		this->cOutCode = outcode;
		this->outside = false;
		this->totalSkipLen = 0.0;
	}
}

void Dasher::emitSeg($doubles* buf, int32_t off, int32_t type) {
	switch (type) {
	case 4:
		{
			$nc(this->out)->lineTo($nc(buf)->get(off), buf->get(off + 1));
			return;
		}
	case 8:
		{
			$nc(this->out)->curveTo($nc(buf)->get(off), buf->get(off + 1), buf->get(off + 2), buf->get(off + 3), buf->get(off + 4), buf->get(off + 5));
			return;
		}
	case 6:
		{
			$nc(this->out)->quadTo($nc(buf)->get(off), buf->get(off + 1), buf->get(off + 2), buf->get(off + 3));
			return;
		}
	default:
		{}
	}
}

void Dasher::emitFirstSegments() {
	$var($doubles, fSegBuf, this->firstSegmentsBuffer);
	{
		int32_t i = 0;
		int32_t len = this->firstSegidx;
		for (; i < len;) {
			int32_t type = $cast(int32_t, $nc(fSegBuf)->get(i));
			emitSeg(fSegBuf, i + 1, type);
			i += (type - 1);
		}
	}
	this->firstSegidx = 0;
}

void Dasher::goTo($doubles* pts, int32_t off, int32_t type, bool on) {
	int32_t index = off + type;
	double x = $nc(pts)->get(index - 4);
	double y = pts->get(index - 3);
	if (on) {
		if (this->starting) {
			goTo_starting(pts, off, type);
		} else {
			if (this->needsMoveTo) {
				this->needsMoveTo = false;
				$nc(this->out)->moveTo(this->cx0, this->cy0);
			}
			emitSeg(pts, off, type);
		}
	} else {
		if (this->starting) {
			this->starting = false;
		}
		this->needsMoveTo = true;
	}
	this->cx0 = x;
	this->cy0 = y;
}

void Dasher::goTo_starting($doubles* pts, int32_t off, int32_t type) {
	int32_t len = type - 1;
	int32_t segIdx = this->firstSegidx;
	$var($doubles, buf, this->firstSegmentsBuffer);
	if (segIdx + len > $nc(buf)->length) {
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS) {
			$nc($nc($nc(this->rdrCtx)->stats$)->stat_array_dasher_firstSegmentsBuffer)->add(segIdx + len);
		}
		$set(this, firstSegmentsBuffer, ($assign(buf, $nc(this->firstSegmentsBuffer_ref)->widenArray(buf, segIdx, segIdx + len))));
	}
	$nc(buf)->set(segIdx++, (double)type);
	--len;
	$System::arraycopy(pts, off, buf, segIdx, len);
	this->firstSegidx = segIdx + len;
}

void Dasher::lineTo(double x1, double y1) {
	int32_t outcode0 = this->cOutCode;
	if (this->clipRect != nullptr) {
		int32_t outcode1 = $Helpers::outcode(x1, y1, this->clipRect);
		int32_t orCode = (outcode0 | outcode1);
		if (orCode != 0) {
			int32_t sideCode = (int32_t)(outcode0 & (uint32_t)outcode1);
			if (sideCode == 0) {
				if (this->subdivide) {
					this->subdivide = false;
					bool ret = $nc(this->curveSplitter)->splitLine(this->cx0, this->cy0, x1, y1, orCode, this);
					this->subdivide = true;
					if (ret) {
						return;
					}
				}
			} else {
				this->cOutCode = outcode1;
				skipLineTo(x1, y1);
				return;
			}
		}
		this->cOutCode = outcode1;
		if (this->outside) {
			this->outside = false;
			skipLen();
		}
	}
	_lineTo(x1, y1);
}

void Dasher::_lineTo(double x1, double y1) {
	$useLocalCurrentObjectStackCache();
	double dx = x1 - this->cx0;
	double dy = y1 - this->cy0;
	double len = dx * dx + dy * dy;
	if (len == 0.0) {
		return;
	}
	len = $Math::sqrt(len);
	double cx = dx / len;
	double cy = dy / len;
	$var($doubles, _curCurvepts, this->curCurvepts);
	$var($doubles, _dash, this->dash);
	int32_t _dashLen = this->dashLen;
	int32_t _idx = this->idx;
	bool _dashOn = this->dashOn;
	double _phase = this->phase;
	double leftInThisDashSegment = 0.0;
	double rem = 0.0;
	while (true) {
		leftInThisDashSegment = $nc(_dash)->get(_idx) - _phase;
		rem = len - leftInThisDashSegment;
		if (rem <= Dasher::EPS) {
			$nc(_curCurvepts)->set(0, x1);
			_curCurvepts->set(1, y1);
			goTo(_curCurvepts, 0, 4, _dashOn);
			_phase += len;
			if ($Math::abs(rem) <= Dasher::EPS) {
				_phase = 0.0;
				_idx = $mod((_idx + 1), _dashLen);
				_dashOn = !_dashOn;
			}
			break;
		}
		$nc(_curCurvepts)->set(0, this->cx0 + leftInThisDashSegment * cx);
		_curCurvepts->set(1, this->cy0 + leftInThisDashSegment * cy);
		goTo(_curCurvepts, 0, 4, _dashOn);
		len = rem;
		_idx = $mod((_idx + 1), _dashLen);
		_dashOn = !_dashOn;
		_phase = 0.0;
	}
	this->idx = _idx;
	this->dashOn = _dashOn;
	this->phase = _phase;
}

void Dasher::skipLineTo(double x1, double y1) {
	double dx = x1 - this->cx0;
	double dy = y1 - this->cy0;
	double len = dx * dx + dy * dy;
	if (len != 0.0) {
		len = $Math::sqrt(len);
	}
	this->outside = true;
	this->totalSkipLen += len;
	this->needsMoveTo = true;
	this->starting = false;
	this->cx0 = x1;
	this->cy0 = y1;
}

void Dasher::skipLen() {
	double len = this->totalSkipLen;
	this->totalSkipLen = 0.0;
	$var($doubles, _dash, this->dash);
	int32_t _dashLen = this->dashLen;
	int32_t _idx = this->idx;
	bool _dashOn = this->dashOn;
	double _phase = this->phase;
	int64_t fullcycles = $cast(int64_t, $Math::floor(len / this->cycleLen)) - (int64_t)2;
	if (fullcycles > (int64_t)0) {
		len -= this->cycleLen * fullcycles;
		int64_t iterations = fullcycles * _dashLen;
		_idx = $mod((int32_t)(iterations + _idx), _dashLen);
		_dashOn = ((int64_t)((iterations + (_dashOn ? (int64_t)1 : (int64_t)0)) & (uint64_t)(int64_t)1)) == (int64_t)1;
	}
	double leftInThisDashSegment = 0.0;
	double rem = 0.0;
	while (true) {
		leftInThisDashSegment = $nc(_dash)->get(_idx) - _phase;
		rem = len - leftInThisDashSegment;
		if (rem <= Dasher::EPS) {
			_phase += len;
			if ($Math::abs(rem) <= Dasher::EPS) {
				_phase = 0.0;
				_idx = $mod((_idx + 1), _dashLen);
				_dashOn = !_dashOn;
			}
			break;
		}
		len = rem;
		_idx = $mod((_idx + 1), _dashLen);
		_dashOn = !_dashOn;
		_phase = 0.0;
	}
	this->idx = _idx;
	this->dashOn = _dashOn;
	this->phase = _phase;
}

void Dasher::somethingTo(int32_t type) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, _curCurvepts, this->curCurvepts);
	if (pointCurve(_curCurvepts, type)) {
		return;
	}
	$var($Dasher$LengthIterator, _li, this->li);
	$var($doubles, _dash, this->dash);
	int32_t _dashLen = this->dashLen;
	$nc(_li)->initializeIterationOnCurve(_curCurvepts, type);
	int32_t _idx = this->idx;
	bool _dashOn = this->dashOn;
	double _phase = this->phase;
	int32_t curCurveoff = 0;
	double prevT = 0.0;
	double t = 0.0;
	double leftInThisDashSegment = $nc(_dash)->get(_idx) - _phase;
	while ((t = _li->next(leftInThisDashSegment)) < 1.0) {
		if (t != 0.0) {
			$Helpers::subdivideAt((t - prevT) / (1.0 - prevT), _curCurvepts, curCurveoff, _curCurvepts, 0, type);
			prevT = t;
			goTo(_curCurvepts, 2, type, _dashOn);
			curCurveoff = type;
		}
		_idx = $mod((_idx + 1), _dashLen);
		_dashOn = !_dashOn;
		_phase = 0.0;
		leftInThisDashSegment = _dash->get(_idx);
	}
	goTo(_curCurvepts, curCurveoff + 2, type, _dashOn);
	_phase += _li->lastSegLen();
	if (_phase + Dasher::EPS >= _dash->get(_idx)) {
		_phase = 0.0;
		_idx = $mod((_idx + 1), _dashLen);
		_dashOn = !_dashOn;
	}
	this->idx = _idx;
	this->dashOn = _dashOn;
	this->phase = _phase;
	_li->reset();
}

void Dasher::skipSomethingTo(int32_t type) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, _curCurvepts, this->curCurvepts);
	if (pointCurve(_curCurvepts, type)) {
		return;
	}
	$var($Dasher$LengthIterator, _li, this->li);
	$nc(_li)->initializeIterationOnCurve(_curCurvepts, type);
	double len = _li->totalLength();
	this->outside = true;
	this->totalSkipLen += len;
	this->needsMoveTo = true;
	this->starting = false;
}

bool Dasher::pointCurve($doubles* curve, int32_t type) {
	$init(Dasher);
	for (int32_t i = 2; i < type; ++i) {
		if ($nc(curve)->get(i) != curve->get(i - 2)) {
			return false;
		}
	}
	return true;
}

void Dasher::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	int32_t outcode0 = this->cOutCode;
	if (this->clipRect != nullptr) {
		int32_t outcode1 = $Helpers::outcode(x1, y1, this->clipRect);
		int32_t outcode2 = $Helpers::outcode(x2, y2, this->clipRect);
		int32_t outcode3 = $Helpers::outcode(x3, y3, this->clipRect);
		int32_t orCode = (((outcode0 | outcode1) | outcode2) | outcode3);
		if (orCode != 0) {
			int32_t sideCode = (int32_t)(((int32_t)(((int32_t)(outcode0 & (uint32_t)outcode1)) & (uint32_t)outcode2)) & (uint32_t)outcode3);
			if (sideCode == 0) {
				if (this->subdivide) {
					this->subdivide = false;
					bool ret = $nc(this->curveSplitter)->splitCurve(this->cx0, this->cy0, x1, y1, x2, y2, x3, y3, orCode, this);
					this->subdivide = true;
					if (ret) {
						return;
					}
				}
			} else {
				this->cOutCode = outcode3;
				skipCurveTo(x1, y1, x2, y2, x3, y3);
				return;
			}
		}
		this->cOutCode = outcode3;
		if (this->outside) {
			this->outside = false;
			skipLen();
		}
	}
	_curveTo(x1, y1, x2, y2, x3, y3);
}

void Dasher::_curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, _curCurvepts, this->curCurvepts);
	$var($TransformingPathConsumer2D$CurveBasicMonotonizer, monotonizer, $nc($nc(this->rdrCtx)->monotonizer)->curve(this->cx0, this->cy0, x1, y1, x2, y2, x3, y3));
	int32_t nSplits = $nc(monotonizer)->nbSplits;
	$var($doubles, mid, monotonizer->middle);
	{
		int32_t i = 0;
		int32_t off = 0;
		for (; i <= nSplits; ++i, off += 6) {
			$System::arraycopy(mid, off, _curCurvepts, 0, 8);
			somethingTo(8);
		}
	}
}

void Dasher::skipCurveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$var($doubles, _curCurvepts, this->curCurvepts);
	$nc(_curCurvepts)->set(0, this->cx0);
	_curCurvepts->set(1, this->cy0);
	_curCurvepts->set(2, x1);
	_curCurvepts->set(3, y1);
	_curCurvepts->set(4, x2);
	_curCurvepts->set(5, y2);
	_curCurvepts->set(6, x3);
	_curCurvepts->set(7, y3);
	skipSomethingTo(8);
	this->cx0 = x3;
	this->cy0 = y3;
}

void Dasher::quadTo(double x1, double y1, double x2, double y2) {
	int32_t outcode0 = this->cOutCode;
	if (this->clipRect != nullptr) {
		int32_t outcode1 = $Helpers::outcode(x1, y1, this->clipRect);
		int32_t outcode2 = $Helpers::outcode(x2, y2, this->clipRect);
		int32_t orCode = ((outcode0 | outcode1) | outcode2);
		if (orCode != 0) {
			int32_t sideCode = (int32_t)(((int32_t)(outcode0 & (uint32_t)outcode1)) & (uint32_t)outcode2);
			if (sideCode == 0) {
				if (this->subdivide) {
					this->subdivide = false;
					bool ret = $nc(this->curveSplitter)->splitQuad(this->cx0, this->cy0, x1, y1, x2, y2, orCode, this);
					this->subdivide = true;
					if (ret) {
						return;
					}
				}
			} else {
				this->cOutCode = outcode2;
				skipQuadTo(x1, y1, x2, y2);
				return;
			}
		}
		this->cOutCode = outcode2;
		if (this->outside) {
			this->outside = false;
			skipLen();
		}
	}
	_quadTo(x1, y1, x2, y2);
}

void Dasher::_quadTo(double x1, double y1, double x2, double y2) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, _curCurvepts, this->curCurvepts);
	$var($TransformingPathConsumer2D$CurveBasicMonotonizer, monotonizer, $nc($nc(this->rdrCtx)->monotonizer)->quad(this->cx0, this->cy0, x1, y1, x2, y2));
	int32_t nSplits = $nc(monotonizer)->nbSplits;
	$var($doubles, mid, monotonizer->middle);
	{
		int32_t i = 0;
		int32_t off = 0;
		for (; i <= nSplits; ++i, off += 4) {
			$System::arraycopy(mid, off, _curCurvepts, 0, 8);
			somethingTo(6);
		}
	}
}

void Dasher::skipQuadTo(double x1, double y1, double x2, double y2) {
	$var($doubles, _curCurvepts, this->curCurvepts);
	$nc(_curCurvepts)->set(0, this->cx0);
	_curCurvepts->set(1, this->cy0);
	_curCurvepts->set(2, x1);
	_curCurvepts->set(3, y1);
	_curCurvepts->set(4, x2);
	_curCurvepts->set(5, y2);
	skipSomethingTo(6);
	this->cx0 = x2;
	this->cy0 = y2;
}

void Dasher::closePath() {
	if (this->cx0 != this->sx0 || this->cy0 != this->sy0) {
		lineTo(this->sx0, this->sy0);
	}
	if (this->firstSegidx != 0) {
		if (!this->dashOn || this->needsMoveTo) {
			$nc(this->out)->moveTo(this->sx0, this->sy0);
		}
		emitFirstSegments();
	}
	moveTo(this->sx0, this->sy0);
}

void Dasher::pathDone() {
	if (this->firstSegidx != 0) {
		$nc(this->out)->moveTo(this->sx0, this->sy0);
		emitFirstSegments();
	}
	$nc(this->out)->pathDone();
	dispose();
}

int64_t Dasher::getNativeConsumer() {
	$throwNew($InternalError, "Dasher does not use a native consumer"_s);
	$shouldNotReachHere();
}

void clinit$Dasher($Class* class$) {
	Dasher::MIN_T_INC = $div(1.0, ($sl(1, Dasher::REC_LIMIT)));
	Dasher::EPS = 1.0E-6;
	Dasher::MAX_CYCLES = 1.6E7;
	Dasher::CURVE_LEN_ERR = $MarlinProperties::getCurveLengthError();
}

Dasher::Dasher() {
}

$Class* Dasher::load$($String* name, bool initialize) {
	$loadClass(Dasher, name, initialize, &_Dasher_ClassInfo_, clinit$Dasher, allocate$Dasher);
	return class$;
}

$Class* Dasher::class$ = nullptr;

		} // marlin
	} // java2d
} // sun