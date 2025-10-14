#include <sun/java2d/marlin/TransformingPathConsumer2D$PathClipFilter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/Helpers$IndexStack.h>
#include <sun/java2d/marlin/Helpers.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef DO_CLIP_SUBDIVIDER
#undef OUTCODE_BOTTOM
#undef OUTCODE_LEFT
#undef OUTCODE_MASK_L_R
#undef OUTCODE_MASK_T_B
#undef OUTCODE_MASK_T_B_L_R
#undef OUTCODE_TOP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $Helpers = ::sun::java2d::marlin::Helpers;
using $Helpers$IndexStack = ::sun::java2d::marlin::Helpers$IndexStack;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $TransformingPathConsumer2D = ::sun::java2d::marlin::TransformingPathConsumer2D;
using $TransformingPathConsumer2D$CurveClipSplitter = ::sun::java2d::marlin::TransformingPathConsumer2D$CurveClipSplitter;
using $Histogram = ::sun::java2d::marlin::stats::Histogram;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _TransformingPathConsumer2D$PathClipFilter_FieldInfo_[] = {
	{"out", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, out)},
	{"clipRect", "[D", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$PathClipFilter, clipRect)},
	{"corners", "[D", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$PathClipFilter, corners)},
	{"init_corners", "Z", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, init_corners)},
	{"stack", "Lsun/java2d/marlin/Helpers$IndexStack;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$PathClipFilter, stack)},
	{"cOutCode", "I", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, cOutCode)},
	{"gOutCode", "I", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, gOutCode)},
	{"outside", "Z", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, outside)},
	{"sx0", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, sx0)},
	{"sy0", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, sy0)},
	{"cx0", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, cx0)},
	{"cy0", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, cy0)},
	{"cox0", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, cox0)},
	{"coy0", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, coy0)},
	{"subdivide", "Z", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathClipFilter, subdivide)},
	{"curveSplitter", "Lsun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$PathClipFilter, curveSplitter)},
	{}
};

$MethodInfo _TransformingPathConsumer2D$PathClipFilter_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$PathClipFilter::*)($RendererContext*)>(&TransformingPathConsumer2D$PathClipFilter::init$))},
	{"clip", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(TransformingPathConsumer2D$PathClipFilter::*)(int32_t,int32_t,int32_t)>(&TransformingPathConsumer2D$PathClipFilter::clip))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$PathClipFilter::*)()>(&TransformingPathConsumer2D$PathClipFilter::dispose))},
	{"finish", "()V", nullptr, $PRIVATE, $method(static_cast<void(TransformingPathConsumer2D$PathClipFilter::*)()>(&TransformingPathConsumer2D$PathClipFilter::finish))},
	{"finishPath", "()V", nullptr, $PRIVATE, $method(static_cast<void(TransformingPathConsumer2D$PathClipFilter::*)()>(&TransformingPathConsumer2D$PathClipFilter::finishPath))},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/TransformingPathConsumer2D$PathClipFilter;", nullptr, 0, $method(static_cast<TransformingPathConsumer2D$PathClipFilter*(TransformingPathConsumer2D$PathClipFilter::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D$PathClipFilter::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D$PathClipFilter_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$PathClipFilter", "sun.java2d.marlin.TransformingPathConsumer2D", "PathClipFilter", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D$PathClipFilter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D$PathClipFilter",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_TransformingPathConsumer2D$PathClipFilter_FieldInfo_,
	_TransformingPathConsumer2D$PathClipFilter_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D$PathClipFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D"
};

$Object* allocate$TransformingPathConsumer2D$PathClipFilter($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D$PathClipFilter));
}

void TransformingPathConsumer2D$PathClipFilter::init$($RendererContext* rdrCtx) {
	$set(this, corners, $new($doubles, 8));
	this->init_corners = false;
	this->cOutCode = 0;
	this->gOutCode = $MarlinConst::OUTCODE_MASK_T_B_L_R;
	this->outside = false;
	$init($MarlinConst);
	this->subdivide = $MarlinConst::DO_CLIP_SUBDIVIDER;
	$set(this, clipRect, $nc(rdrCtx)->clipRect);
	$set(this, curveSplitter, rdrCtx->curveClipSplitter);
	$set(this, stack, (rdrCtx->stats$ != nullptr) ? $new($Helpers$IndexStack, rdrCtx, $nc(rdrCtx->stats$)->stat_pcf_idxstack_indices, $nc(rdrCtx->stats$)->hist_pcf_idxstack_indices, $nc(rdrCtx->stats$)->stat_array_pcf_idxstack_indices) : $new($Helpers$IndexStack, rdrCtx));
}

TransformingPathConsumer2D$PathClipFilter* TransformingPathConsumer2D$PathClipFilter::init($DPathConsumer2D* out) {
	$set(this, out, out);
	$init($MarlinConst);
	if ($MarlinConst::DO_CLIP_SUBDIVIDER) {
		$nc(this->curveSplitter)->init();
	}
	this->init_corners = true;
	this->gOutCode = $MarlinConst::OUTCODE_MASK_T_B_L_R;
	return this;
}

void TransformingPathConsumer2D$PathClipFilter::dispose() {
	$nc(this->stack)->dispose();
}

void TransformingPathConsumer2D$PathClipFilter::finishPath() {
	if (this->outside) {
		if (this->gOutCode == 0) {
			finish();
		} else {
			this->outside = false;
			$nc(this->stack)->reset();
		}
	}
}

void TransformingPathConsumer2D$PathClipFilter::finish() {
	this->outside = false;
	if (!$nc(this->stack)->isEmpty()) {
		if (this->init_corners) {
			this->init_corners = false;
			$var($doubles, _corners, this->corners);
			$var($doubles, _clipRect, this->clipRect);
			$nc(_corners)->set(0, $nc(_clipRect)->get(2));
			_corners->set(1, _clipRect->get(0));
			_corners->set(2, _clipRect->get(2));
			_corners->set(3, _clipRect->get(1));
			_corners->set(4, _clipRect->get(3));
			_corners->set(5, _clipRect->get(0));
			_corners->set(6, _clipRect->get(3));
			_corners->set(7, _clipRect->get(1));
		}
		$nc(this->stack)->pullAll(this->corners, this->out);
	}
	$nc(this->out)->lineTo(this->cox0, this->coy0);
	this->cx0 = this->cox0;
	this->cy0 = this->coy0;
}

void TransformingPathConsumer2D$PathClipFilter::pathDone() {
	finishPath();
	$nc(this->out)->pathDone();
	dispose();
}

void TransformingPathConsumer2D$PathClipFilter::closePath() {
	finishPath();
	$nc(this->out)->closePath();
	this->cOutCode = $Helpers::outcode(this->sx0, this->sy0, this->clipRect);
	this->cx0 = this->sx0;
	this->cy0 = this->sy0;
}

void TransformingPathConsumer2D$PathClipFilter::moveTo(double x0, double y0) {
	finishPath();
	$nc(this->out)->moveTo(x0, y0);
	this->cOutCode = $Helpers::outcode(x0, y0, this->clipRect);
	this->cx0 = x0;
	this->cy0 = y0;
	this->sx0 = x0;
	this->sy0 = y0;
}

void TransformingPathConsumer2D$PathClipFilter::lineTo(double xe, double ye) {
	int32_t outcode0 = this->cOutCode;
	int32_t outcode1 = $Helpers::outcode(xe, ye, this->clipRect);
	int32_t orCode = (outcode0 | outcode1);
	if (orCode != 0) {
		int32_t sideCode = ((int32_t)(outcode0 & (uint32_t)outcode1));
		if (sideCode == 0) {
			if (this->subdivide) {
				this->subdivide = false;
				bool ret = false;
				if (this->outside) {
					ret = $nc(this->curveSplitter)->splitLine(this->cox0, this->coy0, xe, ye, orCode, this);
				} else {
					ret = $nc(this->curveSplitter)->splitLine(this->cx0, this->cy0, xe, ye, orCode, this);
				}
				this->subdivide = true;
				if (ret) {
					return;
				}
			}
		} else {
			this->cOutCode = outcode1;
			this->gOutCode &= (uint32_t)sideCode;
			this->outside = true;
			this->cox0 = xe;
			this->coy0 = ye;
			clip(sideCode, outcode0, outcode1);
			return;
		}
	}
	this->cOutCode = outcode1;
	this->gOutCode = 0;
	if (this->outside) {
		finish();
	}
	$nc(this->out)->lineTo(xe, ye);
	this->cx0 = xe;
	this->cy0 = ye;
}

void TransformingPathConsumer2D$PathClipFilter::clip(int32_t sideCode, int32_t outcode0, int32_t outcode1) {
	if ((outcode0 != outcode1) && (((int32_t)(sideCode & (uint32_t)$MarlinConst::OUTCODE_MASK_L_R)) != 0)) {
		int32_t mergeCode = (outcode0 | outcode1);
		int32_t tbCode = (int32_t)(mergeCode & (uint32_t)$MarlinConst::OUTCODE_MASK_T_B);
		int32_t lrCode = (int32_t)(mergeCode & (uint32_t)$MarlinConst::OUTCODE_MASK_L_R);
		int32_t off = (lrCode == $MarlinConst::OUTCODE_LEFT) ? 0 : 2;
		switch (tbCode) {
		case $MarlinConst::OUTCODE_TOP:
			{
				$nc(this->stack)->push(off);
				return;
			}
		case $MarlinConst::OUTCODE_BOTTOM:
			{
				$nc(this->stack)->push(off + 1);
				return;
			}
		default:
			{
				if (((int32_t)(outcode0 & (uint32_t)$MarlinConst::OUTCODE_TOP)) != 0) {
					$nc(this->stack)->push(off);
					$nc(this->stack)->push(off + 1);
				} else {
					$nc(this->stack)->push(off + 1);
					$nc(this->stack)->push(off);
				}
			}
		}
	}
}

void TransformingPathConsumer2D$PathClipFilter::curveTo(double x1, double y1, double x2, double y2, double xe, double ye) {
	int32_t outcode0 = this->cOutCode;
	int32_t outcode1 = $Helpers::outcode(x1, y1, this->clipRect);
	int32_t outcode2 = $Helpers::outcode(x2, y2, this->clipRect);
	int32_t outcode3 = $Helpers::outcode(xe, ye, this->clipRect);
	int32_t orCode = (((outcode0 | outcode1) | outcode2) | outcode3);
	if (orCode != 0) {
		int32_t sideCode = (int32_t)(((int32_t)(((int32_t)(outcode0 & (uint32_t)outcode1)) & (uint32_t)outcode2)) & (uint32_t)outcode3);
		if (sideCode == 0) {
			if (this->subdivide) {
				this->subdivide = false;
				bool ret = false;
				if (this->outside) {
					ret = $nc(this->curveSplitter)->splitCurve(this->cox0, this->coy0, x1, y1, x2, y2, xe, ye, orCode, this);
				} else {
					ret = $nc(this->curveSplitter)->splitCurve(this->cx0, this->cy0, x1, y1, x2, y2, xe, ye, orCode, this);
				}
				this->subdivide = true;
				if (ret) {
					return;
				}
			}
		} else {
			this->cOutCode = outcode3;
			this->gOutCode &= (uint32_t)sideCode;
			this->outside = true;
			this->cox0 = xe;
			this->coy0 = ye;
			clip(sideCode, outcode0, outcode3);
			return;
		}
	}
	this->cOutCode = outcode3;
	this->gOutCode = 0;
	if (this->outside) {
		finish();
	}
	$nc(this->out)->curveTo(x1, y1, x2, y2, xe, ye);
	this->cx0 = xe;
	this->cy0 = ye;
}

void TransformingPathConsumer2D$PathClipFilter::quadTo(double x1, double y1, double xe, double ye) {
	int32_t outcode0 = this->cOutCode;
	int32_t outcode1 = $Helpers::outcode(x1, y1, this->clipRect);
	int32_t outcode2 = $Helpers::outcode(xe, ye, this->clipRect);
	int32_t orCode = ((outcode0 | outcode1) | outcode2);
	if (orCode != 0) {
		int32_t sideCode = (int32_t)(((int32_t)(outcode0 & (uint32_t)outcode1)) & (uint32_t)outcode2);
		if (sideCode == 0) {
			if (this->subdivide) {
				this->subdivide = false;
				bool ret = false;
				if (this->outside) {
					ret = $nc(this->curveSplitter)->splitQuad(this->cox0, this->coy0, x1, y1, xe, ye, orCode, this);
				} else {
					ret = $nc(this->curveSplitter)->splitQuad(this->cx0, this->cy0, x1, y1, xe, ye, orCode, this);
				}
				this->subdivide = true;
				if (ret) {
					return;
				}
			}
		} else {
			this->cOutCode = outcode2;
			this->gOutCode &= (uint32_t)sideCode;
			this->outside = true;
			this->cox0 = xe;
			this->coy0 = ye;
			clip(sideCode, outcode0, outcode2);
			return;
		}
	}
	this->cOutCode = outcode2;
	this->gOutCode = 0;
	if (this->outside) {
		finish();
	}
	$nc(this->out)->quadTo(x1, y1, xe, ye);
	this->cx0 = xe;
	this->cy0 = ye;
}

int64_t TransformingPathConsumer2D$PathClipFilter::getNativeConsumer() {
	$throwNew($InternalError, "Not using a native peer"_s);
	$shouldNotReachHere();
}

TransformingPathConsumer2D$PathClipFilter::TransformingPathConsumer2D$PathClipFilter() {
}

$Class* TransformingPathConsumer2D$PathClipFilter::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D$PathClipFilter, name, initialize, &_TransformingPathConsumer2D$PathClipFilter_ClassInfo_, allocate$TransformingPathConsumer2D$PathClipFilter);
	return class$;
}

$Class* TransformingPathConsumer2D$PathClipFilter::class$ = nullptr;

		} // marlin
	} // java2d
} // sun