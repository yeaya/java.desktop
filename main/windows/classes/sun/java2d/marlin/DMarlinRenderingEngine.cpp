#include <sun/java2d/marlin/DMarlinRenderingEngine.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Double.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <sun/awt/geom/PathConsumer2D.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <sun/java2d/ReentrantContextProviderCLQ.h>
#include <sun/java2d/ReentrantContextProviderTL.h>
#include <sun/java2d/marlin/CollinearSimplifier.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$1.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$2.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/Dasher.h>
#include <sun/java2d/marlin/MarlinCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinProperties.h>
#include <sun/java2d/marlin/MarlinTileGenerator.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/PathSimplifier.h>
#include <sun/java2d/marlin/Renderer.h>
#include <sun/java2d/marlin/RendererContext$PathConsumer2DAdapter.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/Stroker.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveBasicMonotonizer.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <sun/java2d/marlin/Version.h>
#include <sun/java2d/pipe/AATileGenerator.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderingEngine.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef A
#undef B
#undef BLOCK_SIZE_LG
#undef C
#undef CAP_BUTT
#undef CUB_DEC_BND
#undef CUB_INC_BND
#undef D
#undef DISABLE_2ND_STROKER_CLIPPING
#undef DO_CHECKS
#undef DO_CLIP
#undef DO_CLIP_FILL
#undef DO_CLIP_RUNTIME_ENABLE
#undef DO_LOG_CLIP
#undef DO_MONITORS
#undef DO_STATS
#undef DO_TRACE_PATH
#undef EA
#undef EB
#undef EC
#undef ENABLE_LOGS
#undef INITIAL_CROSSING_COUNT
#undef INITIAL_EDGES_CAPACITY
#undef INITIAL_EDGES_COUNT
#undef INITIAL_PIXEL_HEIGHT
#undef INITIAL_PIXEL_WIDTH
#undef LOG_CREATE_CONTEXT
#undef LOG_UNSAFE_MALLOC
#undef LOWER_BND
#undef MAX_VALUE
#undef MIN_PEN_SIZE
#undef MIN_SUBPIXELS
#undef MIN_VALUE
#undef OFF
#undef ON_NO_AA
#undef ON_WITH_AA
#undef QUAD_DEC_BND
#undef RDR_CTX_PROVIDER
#undef RDR_OFFSET_X
#undef RDR_OFFSET_Y
#undef REF_HARD
#undef REF_SOFT
#undef REF_TYPE
#undef REF_WEAK
#undef RLE_MIN_WIDTH
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef SETTINGS_LOGGED
#undef SUBPIXEL_LG_POSITIONS_X
#undef SUBPIXEL_LG_POSITIONS_Y
#undef TILE_H_LG
#undef TILE_W_LG
#undef TYPE_GENERAL_SCALE
#undef TYPE_GENERAL_TRANSFORM
#undef UPPER_BND
#undef USE_LOGGER
#undef USE_PATH_SIMPLIFIER
#undef USE_SIMPLIFIER
#undef USE_THREAD_LOCAL
#undef WIND_EVEN_ODD
#undef WIND_NON_ZERO

using $BasicStroke = ::java::awt::BasicStroke;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $PathConsumer2D = ::sun::awt::geom::PathConsumer2D;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;
using $ReentrantContextProviderCLQ = ::sun::java2d::ReentrantContextProviderCLQ;
using $ReentrantContextProviderTL = ::sun::java2d::ReentrantContextProviderTL;
using $CollinearSimplifier = ::sun::java2d::marlin::CollinearSimplifier;
using $DMarlinRenderingEngine$1 = ::sun::java2d::marlin::DMarlinRenderingEngine$1;
using $DMarlinRenderingEngine$2 = ::sun::java2d::marlin::DMarlinRenderingEngine$2;
using $DMarlinRenderingEngine$NormMode = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $Dasher = ::sun::java2d::marlin::Dasher;
using $MarlinCache = ::sun::java2d::marlin::MarlinCache;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinProperties = ::sun::java2d::marlin::MarlinProperties;
using $MarlinTileGenerator = ::sun::java2d::marlin::MarlinTileGenerator;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $PathSimplifier = ::sun::java2d::marlin::PathSimplifier;
using $Renderer = ::sun::java2d::marlin::Renderer;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $RendererContext$PathConsumer2DAdapter = ::sun::java2d::marlin::RendererContext$PathConsumer2DAdapter;
using $Stroker = ::sun::java2d::marlin::Stroker;
using $TransformingPathConsumer2D = ::sun::java2d::marlin::TransformingPathConsumer2D;
using $TransformingPathConsumer2D$CurveBasicMonotonizer = ::sun::java2d::marlin::TransformingPathConsumer2D$CurveBasicMonotonizer;
using $Version = ::sun::java2d::marlin::Version;
using $AATileGenerator = ::sun::java2d::pipe::AATileGenerator;
using $Region = ::sun::java2d::pipe::Region;
using $RenderingEngine = ::sun::java2d::pipe::RenderingEngine;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _DMarlinRenderingEngine_FieldInfo_[] = {
	{"DISABLE_2ND_STROKER_CLIPPING", "Z", nullptr, $STATIC | $FINAL, $constField(DMarlinRenderingEngine, DISABLE_2ND_STROKER_CLIPPING)},
	{"DO_TRACE_PATH", "Z", nullptr, $STATIC | $FINAL, $constField(DMarlinRenderingEngine, DO_TRACE_PATH)},
	{"DO_CLIP", "Z", nullptr, $STATIC | $FINAL, $staticField(DMarlinRenderingEngine, DO_CLIP)},
	{"DO_CLIP_FILL", "Z", nullptr, $STATIC | $FINAL, $constField(DMarlinRenderingEngine, DO_CLIP_FILL)},
	{"DO_CLIP_RUNTIME_ENABLE", "Z", nullptr, $STATIC | $FINAL, $staticField(DMarlinRenderingEngine, DO_CLIP_RUNTIME_ENABLE)},
	{"MIN_PEN_SIZE", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DMarlinRenderingEngine, MIN_PEN_SIZE)},
	{"UPPER_BND", "D", nullptr, $STATIC | $FINAL, $staticField(DMarlinRenderingEngine, UPPER_BND)},
	{"LOWER_BND", "D", nullptr, $STATIC | $FINAL, $staticField(DMarlinRenderingEngine, LOWER_BND)},
	{"USE_THREAD_LOCAL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DMarlinRenderingEngine, USE_THREAD_LOCAL)},
	{"REF_TYPE", "I", nullptr, $STATIC | $FINAL, $staticField(DMarlinRenderingEngine, REF_TYPE)},
	{"RDR_CTX_PROVIDER", "Lsun/java2d/ReentrantContextProvider;", "Lsun/java2d/ReentrantContextProvider<Lsun/java2d/marlin/RendererContext;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DMarlinRenderingEngine, RDR_CTX_PROVIDER)},
	{"SETTINGS_LOGGED", "Z", nullptr, $PRIVATE | $STATIC, $staticField(DMarlinRenderingEngine, SETTINGS_LOGGED)},
	{}
};

$MethodInfo _DMarlinRenderingEngine_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DMarlinRenderingEngine::*)()>(&DMarlinRenderingEngine::init$))},
	{"createStrokedShape", "(Ljava/awt/Shape;FIIF[FF)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getAATileGenerator", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Lsun/java2d/pipe/Region;Ljava/awt/BasicStroke;ZZ[I)Lsun/java2d/pipe/AATileGenerator;", nullptr, $PUBLIC},
	{"getAATileGenerator", "(DDDDDDDDLsun/java2d/pipe/Region;[I)Lsun/java2d/pipe/AATileGenerator;", nullptr, $PUBLIC},
	{"getMinimumAAPenSize", "()F", nullptr, $PUBLIC},
	{"getRendererContext", "()Lsun/java2d/marlin/RendererContext;", nullptr, $STATIC, $method(static_cast<$RendererContext*(*)()>(&DMarlinRenderingEngine::getRendererContext))},
	{"logSettings", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&DMarlinRenderingEngine::logSettings))},
	{"nearZero", "(D)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double)>(&DMarlinRenderingEngine::nearZero))},
	{"pathTo", "(Lsun/java2d/marlin/RendererContext;Ljava/awt/geom/PathIterator;Lsun/java2d/marlin/DPathConsumer2D;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($RendererContext*,$PathIterator*,$DPathConsumer2D*)>(&DMarlinRenderingEngine::pathTo))},
	{"pathToLoop", "([DLjava/awt/geom/PathIterator;Lsun/java2d/marlin/DPathConsumer2D;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($doubles*,$PathIterator*,$DPathConsumer2D*)>(&DMarlinRenderingEngine::pathToLoop))},
	{"returnRendererContext", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, $STATIC, $method(static_cast<void(*)($RendererContext*)>(&DMarlinRenderingEngine::returnRendererContext))},
	{"strokeTo", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Ljava/awt/BasicStroke;ZZZLsun/awt/geom/PathConsumer2D;)V", nullptr, $PUBLIC},
	{"strokeTo", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Lsun/java2d/pipe/Region;Ljava/awt/BasicStroke;ZZZLsun/awt/geom/PathConsumer2D;)V", nullptr, $PUBLIC},
	{"strokeTo", "(Lsun/java2d/marlin/RendererContext;Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Ljava/awt/BasicStroke;ZLsun/java2d/marlin/DMarlinRenderingEngine$NormMode;ZLsun/java2d/marlin/DPathConsumer2D;)V", nullptr, 0, $method(static_cast<void(DMarlinRenderingEngine::*)($RendererContext*,$Shape*,$AffineTransform*,$BasicStroke*,bool,$DMarlinRenderingEngine$NormMode*,bool,$DPathConsumer2D*)>(&DMarlinRenderingEngine::strokeTo))},
	{"strokeTo", "(Lsun/java2d/marlin/RendererContext;Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;DLsun/java2d/marlin/DMarlinRenderingEngine$NormMode;IIF[FFLsun/java2d/marlin/DPathConsumer2D;)V", nullptr, 0, $method(static_cast<void(DMarlinRenderingEngine::*)($RendererContext*,$Shape*,$AffineTransform*,double,$DMarlinRenderingEngine$NormMode*,int32_t,int32_t,float,$floats*,float,$DPathConsumer2D*)>(&DMarlinRenderingEngine::strokeTo))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"userSpaceLineWidth", "(Ljava/awt/geom/AffineTransform;D)D", nullptr, $PRIVATE, $method(static_cast<double(DMarlinRenderingEngine::*)($AffineTransform*,double)>(&DMarlinRenderingEngine::userSpaceLineWidth))},
	{}
};

$InnerClassInfo _DMarlinRenderingEngine_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator", "sun.java2d.marlin.DMarlinRenderingEngine", "NormalizingPathIterator", $STATIC | $ABSTRACT},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode", "sun.java2d.marlin.DMarlinRenderingEngine", "NormMode", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"sun.java2d.marlin.DMarlinRenderingEngine$2", nullptr, nullptr, 0},
	{"sun.java2d.marlin.DMarlinRenderingEngine$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DMarlinRenderingEngine_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.DMarlinRenderingEngine",
	"sun.java2d.pipe.RenderingEngine",
	"sun.java2d.marlin.MarlinConst",
	_DMarlinRenderingEngine_FieldInfo_,
	_DMarlinRenderingEngine_MethodInfo_,
	nullptr,
	nullptr,
	_DMarlinRenderingEngine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator,sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter,sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter,sun.java2d.marlin.DMarlinRenderingEngine$NormMode,sun.java2d.marlin.DMarlinRenderingEngine$NormMode$3,sun.java2d.marlin.DMarlinRenderingEngine$NormMode$2,sun.java2d.marlin.DMarlinRenderingEngine$NormMode$1,sun.java2d.marlin.DMarlinRenderingEngine$2,sun.java2d.marlin.DMarlinRenderingEngine$1"
};

$Object* allocate$DMarlinRenderingEngine($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine));
}

int32_t DMarlinRenderingEngine::hashCode() {
	 return this->$RenderingEngine::hashCode();
}

bool DMarlinRenderingEngine::equals(Object$* arg0) {
	 return this->$RenderingEngine::equals(arg0);
}

$Object* DMarlinRenderingEngine::clone() {
	 return this->$RenderingEngine::clone();
}

$String* DMarlinRenderingEngine::toString() {
	 return this->$RenderingEngine::toString();
}

void DMarlinRenderingEngine::finalize() {
	this->$RenderingEngine::finalize();
}

bool DMarlinRenderingEngine::DO_CLIP = false;
bool DMarlinRenderingEngine::DO_CLIP_RUNTIME_ENABLE = false;
float DMarlinRenderingEngine::MIN_PEN_SIZE = 0.0;
double DMarlinRenderingEngine::UPPER_BND = 0.0;
double DMarlinRenderingEngine::LOWER_BND = 0.0;
bool DMarlinRenderingEngine::USE_THREAD_LOCAL = false;
int32_t DMarlinRenderingEngine::REF_TYPE = 0;
$ReentrantContextProvider* DMarlinRenderingEngine::RDR_CTX_PROVIDER = nullptr;
bool DMarlinRenderingEngine::SETTINGS_LOGGED = false;

void DMarlinRenderingEngine::init$() {
	$RenderingEngine::init$();
	logSettings($(DMarlinRenderingEngine::class$->getName()));
}

$Shape* DMarlinRenderingEngine::createStrokedShape($Shape* src, float width, int32_t caps, int32_t join, float miterlimit, $floats* dashes, float dashphase) {
	$useLocalCurrentObjectStackCache();
	$var($RendererContext, rdrCtx, getRendererContext());
	{
		$var($Throwable, var$0, nullptr);
		$var($Shape, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Path2D$Double, p2d, $nc(rdrCtx)->getPath2D());
			$init($DMarlinRenderingEngine$NormMode);
			strokeTo(rdrCtx, src, nullptr, width, $DMarlinRenderingEngine$NormMode::OFF, caps, join, miterlimit, dashes, dashphase, $($nc(rdrCtx->transformerPC2D)->wrapPath2D(p2d)));
			$assign(var$2, $new($Path2D$Double, static_cast<$Shape*>(p2d)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			returnRendererContext(rdrCtx);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void DMarlinRenderingEngine::strokeTo($Shape* src, $AffineTransform* at, $BasicStroke* bs, bool thin, bool normalize, bool antialias, $PathConsumer2D* consumer) {
	strokeTo(src, at, ($Region*)nullptr, bs, thin, normalize, antialias, consumer);
}

void DMarlinRenderingEngine::strokeTo($Shape* src, $AffineTransform* at, $Region* clip, $BasicStroke* bs, bool thin, bool normalize, bool antialias, $PathConsumer2D* consumer) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, _at, (at != nullptr && !at->isIdentity()) ? at : ($AffineTransform*)nullptr);
	$init($DMarlinRenderingEngine$NormMode);
	$DMarlinRenderingEngine$NormMode* norm = (normalize) ? ((antialias) ? $DMarlinRenderingEngine$NormMode::ON_WITH_AA : $DMarlinRenderingEngine$NormMode::ON_NO_AA) : $DMarlinRenderingEngine$NormMode::OFF;
	$var($RendererContext, rdrCtx, getRendererContext());
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ((clip != nullptr) && (DMarlinRenderingEngine::DO_CLIP || (DMarlinRenderingEngine::DO_CLIP_RUNTIME_ENABLE && $MarlinProperties::isDoClipAtRuntime()))) {
				$var($doubles, clipRect, $nc(rdrCtx)->clipRect);
				double rdrOffX = 0.25;
				double rdrOffY = 0.25;
				double margin = 0.001;
				$nc(clipRect)->set(0, $nc(clip)->getLoY() - margin + rdrOffY);
				int32_t var$1 = clip->getLoY();
				clipRect->set(1, var$1 + clip->getHeight() + margin + rdrOffY);
				clipRect->set(2, clip->getLoX() - margin + rdrOffX);
				int32_t var$2 = clip->getLoX();
				clipRect->set(3, var$2 + clip->getWidth() + margin + rdrOffX);
				$init($MarlinConst);
				if ($MarlinConst::DO_LOG_CLIP) {
					$MarlinUtils::logInfo($$str({"clipRect (clip): "_s, $($Arrays::toString(rdrCtx->clipRect))}));
				}
				rdrCtx->doClip = true;
			}
			strokeTo(rdrCtx, src, _at, bs, thin, norm, antialias, $(static_cast<$DPathConsumer2D*>($nc($nc(rdrCtx)->p2dAdapter)->init(consumer))));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			returnRendererContext(rdrCtx);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DMarlinRenderingEngine::strokeTo($RendererContext* rdrCtx, $Shape* src, $AffineTransform* at, $BasicStroke* bs, bool thin, $DMarlinRenderingEngine$NormMode* normalize, bool antialias, $DPathConsumer2D* pc2d) {
	$useLocalCurrentObjectStackCache();
	double lw = 0.0;
	if (thin) {
		if (antialias) {
			lw = userSpaceLineWidth(at, DMarlinRenderingEngine::MIN_PEN_SIZE);
		} else {
			lw = userSpaceLineWidth(at, 1.0);
		}
	} else {
		lw = $nc(bs)->getLineWidth();
	}
	$var($RendererContext, var$0, rdrCtx);
	$var($Shape, var$1, src);
	$var($AffineTransform, var$2, at);
	double var$3 = lw;
	$var($DMarlinRenderingEngine$NormMode, var$4, normalize);
	int32_t var$5 = $nc(bs)->getEndCap();
	int32_t var$6 = bs->getLineJoin();
	float var$7 = bs->getMiterLimit();
	$var($floats, var$8, bs->getDashArray());
	strokeTo(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, bs->getDashPhase(), pc2d);
}

double DMarlinRenderingEngine::userSpaceLineWidth($AffineTransform* at, double lw) {
	double widthScale = 0.0;
	if (at == nullptr) {
		widthScale = 1.0;
	} else if (((int32_t)($nc(at)->getType() & (uint32_t)($AffineTransform::TYPE_GENERAL_TRANSFORM | $AffineTransform::TYPE_GENERAL_SCALE))) != 0) {
		widthScale = $Math::sqrt($Math::abs(at->getDeterminant()));
	} else {
		double A = at->getScaleX();
		double C = at->getShearX();
		double B = at->getShearY();
		double D = at->getScaleY();
		double EA = A * A + B * B;
		double EB = 2.0 * (A * C + B * D);
		double EC = C * C + D * D;
		double hypot = $Math::sqrt(EB * EB + (EA - EC) * (EA - EC));
		double widthsquared = ((EA + EC + hypot) / 2.0);
		widthScale = $Math::sqrt(widthsquared);
	}
	return (lw / widthScale);
}

void DMarlinRenderingEngine::strokeTo($RendererContext* rdrCtx, $Shape* src, $AffineTransform* at$renamed, double width, $DMarlinRenderingEngine$NormMode* norm, int32_t caps, int32_t join, float miterlimit, $floats* dashes, float dashphase, $DPathConsumer2D* pc2d$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($DPathConsumer2D, pc2d, pc2d$renamed);
	$var($AffineTransform, at, at$renamed);
	$var($AffineTransform, strokerat, nullptr);
	int32_t dashLen = -1;
	bool recycleDashes = false;
	$var($doubles, dashesD, nullptr);
	if (dashes != nullptr) {
		recycleDashes = true;
		dashLen = dashes->length;
		$assign(dashesD, $nc($nc(rdrCtx)->dasher)->copyDashArray(dashes));
	}
	if (at != nullptr && !at->isIdentity()) {
		double a = at->getScaleX();
		double b = at->getShearX();
		double c = at->getShearY();
		double d = at->getScaleY();
		double det = a * d - c * b;
		$init($Double);
		if ($Math::abs(det) <= (2.0 * $Double::MIN_VALUE)) {
			$nc(pc2d)->moveTo(0.0, 0.0);
			pc2d->pathDone();
			return;
		}
		bool var$0 = nearZero(a * b + c * d);
		if (var$0 && nearZero(a * a + c * c - (b * b + d * d))) {
			double scale = $Math::sqrt(a * a + c * c);
			if (dashesD != nullptr) {
				for (int32_t i = 0; i < dashLen; ++i) {
					(*dashesD)[i] *= scale;
				}
				dashphase *= scale;
			}
			width *= scale;
		} else {
			$assign(strokerat, at);
		}
	} else {
		$assign(at, nullptr);
	}
	$var($TransformingPathConsumer2D, transformerPC2D, $nc(rdrCtx)->transformerPC2D);
	$init($MarlinConst);
	if ($MarlinConst::USE_SIMPLIFIER) {
		$assign(pc2d, $nc(rdrCtx->simplifier)->init(pc2d));
	}
	$assign(pc2d, $nc(transformerPC2D)->deltaTransformConsumer(pc2d, strokerat));
	$assign(pc2d, $nc(rdrCtx->stroker)->init(pc2d, width, caps, join, miterlimit, (dashesD == nullptr)));
	$nc(rdrCtx->monotonizer)->init(width);
	if (dashesD != nullptr) {
		$assign(pc2d, $nc(rdrCtx->dasher)->init(pc2d, dashesD, dashLen, dashphase, recycleDashes));
		{
			$nc(rdrCtx->stroker)->disableClipping();
		}
	} else if (rdrCtx->doClip && (caps != $MarlinConst::CAP_BUTT)) {
		$assign(pc2d, transformerPC2D->detectClosedPath(pc2d));
	}
	$assign(pc2d, transformerPC2D->inverseDeltaTransformConsumer(pc2d, strokerat));
	$var($PathIterator, pi, $nc(norm)->getNormalizingPathIterator(rdrCtx, $($nc(src)->getPathIterator(at))));
	pathTo(rdrCtx, pi, pc2d);
}

bool DMarlinRenderingEngine::nearZero(double num) {
	$init(DMarlinRenderingEngine);
	double var$0 = $Math::abs(num);
	return var$0 < 2.0 * $Math::ulp(num);
}

void DMarlinRenderingEngine::pathTo($RendererContext* rdrCtx, $PathIterator* pi, $DPathConsumer2D* pc2d$renamed) {
	$init(DMarlinRenderingEngine);
	$var($DPathConsumer2D, pc2d, pc2d$renamed);
	$init($MarlinConst);
	if ($MarlinConst::USE_PATH_SIMPLIFIER) {
		$assign(pc2d, $nc($nc(rdrCtx)->pathSimplifier)->init(pc2d));
	}
	$nc(rdrCtx)->dirty = true;
	pathToLoop(rdrCtx->double6, pi, pc2d);
	rdrCtx->dirty = false;
}

void DMarlinRenderingEngine::pathToLoop($doubles* coords, $PathIterator* pi, $DPathConsumer2D* pc2d) {
	$init(DMarlinRenderingEngine);
	bool subpathStarted = false;
	for (; !$nc(pi)->isDone(); $nc(pi)->next()) {
		switch (pi->currentSegment(coords)) {
		case $PathIterator::SEG_MOVETO:
			{
				if ($nc(coords)->get(0) < DMarlinRenderingEngine::UPPER_BND && coords->get(0) > DMarlinRenderingEngine::LOWER_BND && coords->get(1) < DMarlinRenderingEngine::UPPER_BND && coords->get(1) > DMarlinRenderingEngine::LOWER_BND) {
					$nc(pc2d)->moveTo(coords->get(0), coords->get(1));
					subpathStarted = true;
				}
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				if ($nc(coords)->get(0) < DMarlinRenderingEngine::UPPER_BND && coords->get(0) > DMarlinRenderingEngine::LOWER_BND && coords->get(1) < DMarlinRenderingEngine::UPPER_BND && coords->get(1) > DMarlinRenderingEngine::LOWER_BND) {
					if (subpathStarted) {
						$nc(pc2d)->lineTo(coords->get(0), coords->get(1));
					} else {
						$nc(pc2d)->moveTo(coords->get(0), coords->get(1));
						subpathStarted = true;
					}
				}
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				if ($nc(coords)->get(2) < DMarlinRenderingEngine::UPPER_BND && coords->get(2) > DMarlinRenderingEngine::LOWER_BND && coords->get(3) < DMarlinRenderingEngine::UPPER_BND && coords->get(3) > DMarlinRenderingEngine::LOWER_BND) {
					if (subpathStarted) {
						if (coords->get(0) < DMarlinRenderingEngine::UPPER_BND && coords->get(0) > DMarlinRenderingEngine::LOWER_BND && coords->get(1) < DMarlinRenderingEngine::UPPER_BND && coords->get(1) > DMarlinRenderingEngine::LOWER_BND) {
							$nc(pc2d)->quadTo(coords->get(0), coords->get(1), coords->get(2), coords->get(3));
						} else {
							$nc(pc2d)->lineTo(coords->get(2), coords->get(3));
						}
					} else {
						$nc(pc2d)->moveTo(coords->get(2), coords->get(3));
						subpathStarted = true;
					}
				}
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				if ($nc(coords)->get(4) < DMarlinRenderingEngine::UPPER_BND && coords->get(4) > DMarlinRenderingEngine::LOWER_BND && coords->get(5) < DMarlinRenderingEngine::UPPER_BND && coords->get(5) > DMarlinRenderingEngine::LOWER_BND) {
					if (subpathStarted) {
						if (coords->get(0) < DMarlinRenderingEngine::UPPER_BND && coords->get(0) > DMarlinRenderingEngine::LOWER_BND && coords->get(1) < DMarlinRenderingEngine::UPPER_BND && coords->get(1) > DMarlinRenderingEngine::LOWER_BND && coords->get(2) < DMarlinRenderingEngine::UPPER_BND && coords->get(2) > DMarlinRenderingEngine::LOWER_BND && coords->get(3) < DMarlinRenderingEngine::UPPER_BND && coords->get(3) > DMarlinRenderingEngine::LOWER_BND) {
							$nc(pc2d)->curveTo(coords->get(0), coords->get(1), coords->get(2), coords->get(3), coords->get(4), coords->get(5));
						} else {
							$nc(pc2d)->lineTo(coords->get(4), coords->get(5));
						}
					} else {
						$nc(pc2d)->moveTo(coords->get(4), coords->get(5));
						subpathStarted = true;
					}
				}
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				if (subpathStarted) {
					$nc(pc2d)->closePath();
				}
				break;
			}
		default:
			{}
		}
	}
	$nc(pc2d)->pathDone();
}

$AATileGenerator* DMarlinRenderingEngine::getAATileGenerator($Shape* s, $AffineTransform* at, $Region* clip, $BasicStroke* bs, bool thin, bool normalize, $ints* bbox) {
	$useLocalCurrentObjectStackCache();
	$var($MarlinTileGenerator, ptg, nullptr);
	$var($Renderer, r, nullptr);
	$var($RendererContext, rdrCtx, getRendererContext());
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (DMarlinRenderingEngine::DO_CLIP || (DMarlinRenderingEngine::DO_CLIP_RUNTIME_ENABLE && $MarlinProperties::isDoClipAtRuntime())) {
				$var($doubles, clipRect, $nc(rdrCtx)->clipRect);
				$init($Renderer);
				double rdrOffX = $Renderer::RDR_OFFSET_X;
				double rdrOffY = $Renderer::RDR_OFFSET_Y;
				double margin = 0.001;
				$nc(clipRect)->set(0, $nc(clip)->getLoY() - margin + rdrOffY);
				int32_t var$1 = clip->getLoY();
				clipRect->set(1, var$1 + clip->getHeight() + margin + rdrOffY);
				clipRect->set(2, clip->getLoX() - margin + rdrOffX);
				int32_t var$2 = clip->getLoX();
				clipRect->set(3, var$2 + clip->getWidth() + margin + rdrOffX);
				$init($MarlinConst);
				if ($MarlinConst::DO_LOG_CLIP) {
					$MarlinUtils::logInfo($$str({"clipRect (clip): "_s, $($Arrays::toString(rdrCtx->clipRect))}));
				}
				rdrCtx->doClip = true;
			}
			$var($AffineTransform, _at, (at != nullptr && !at->isIdentity()) ? at : ($AffineTransform*)nullptr);
			$init($DMarlinRenderingEngine$NormMode);
			$DMarlinRenderingEngine$NormMode* norm = (normalize) ? $DMarlinRenderingEngine$NormMode::ON_WITH_AA : $DMarlinRenderingEngine$NormMode::OFF;
			if (bs == nullptr) {
				$var($PathIterator, pi, norm->getNormalizingPathIterator(rdrCtx, $($nc(s)->getPathIterator(_at))));
				int32_t var$3 = $nc(clip)->getLoX();
				int32_t var$4 = clip->getLoY();
				int32_t var$5 = clip->getWidth();
				int32_t var$6 = clip->getHeight();
				$assign(r, $nc($nc(rdrCtx)->renderer)->init(var$3, var$4, var$5, var$6, $nc(pi)->getWindingRule()));
				$var($DPathConsumer2D, pc2d, r);
				if (rdrCtx->doClip) {
					$assign(pc2d, $nc(rdrCtx->transformerPC2D)->pathClipper(pc2d));
				}
				pathTo(rdrCtx, pi, pc2d);
			} else {
				int32_t var$7 = $nc(clip)->getLoX();
				int32_t var$8 = clip->getLoY();
				int32_t var$9 = clip->getWidth();
				$assign(r, $nc($nc(rdrCtx)->renderer)->init(var$7, var$8, var$9, clip->getHeight(), $MarlinConst::WIND_NON_ZERO));
				strokeTo(rdrCtx, s, _at, bs, thin, norm, true, static_cast<$DPathConsumer2D*>(r));
			}
			if ($nc(r)->endRendering()) {
				$assign(ptg, $nc($nc(rdrCtx)->ptg)->init());
				$nc(ptg)->getBbox(bbox);
				$assign(r, nullptr);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (r != nullptr) {
				r->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return ptg;
}

$AATileGenerator* DMarlinRenderingEngine::getAATileGenerator(double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2, $Region* clip, $ints* bbox) {
	$useLocalCurrentObjectStackCache();
	double ldx1 = 0.0;
	double ldy1 = 0.0;
	double ldx2 = 0.0;
	double ldy2 = 0.0;
	bool innerpgram = (lw1 > 0.0 && lw2 > 0.0);
	if (innerpgram) {
		ldx1 = dx1 * lw1;
		ldy1 = dy1 * lw1;
		ldx2 = dx2 * lw2;
		ldy2 = dy2 * lw2;
		x -= (ldx1 + ldx2) / 2.0;
		y -= (ldy1 + ldy2) / 2.0;
		dx1 += ldx1;
		dy1 += ldy1;
		dx2 += ldx2;
		dy2 += ldy2;
		if (lw1 > 1.0 && lw2 > 1.0) {
			innerpgram = false;
		}
	} else {
		ldx1 = (ldy1 = (ldx2 = (ldy2 = 0.0)));
	}
	$var($MarlinTileGenerator, ptg, nullptr);
	$var($Renderer, r, nullptr);
	$var($RendererContext, rdrCtx, getRendererContext());
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t var$1 = $nc(clip)->getLoX();
			int32_t var$2 = clip->getLoY();
			int32_t var$3 = clip->getWidth();
			$assign(r, $nc($nc(rdrCtx)->renderer)->init(var$1, var$2, var$3, clip->getHeight(), $MarlinConst::WIND_EVEN_ODD));
			$nc(r)->moveTo(x, y);
			r->lineTo((x + dx1), (y + dy1));
			r->lineTo((x + dx1 + dx2), (y + dy1 + dy2));
			r->lineTo((x + dx2), (y + dy2));
			r->closePath();
			if (innerpgram) {
				x += ldx1 + ldx2;
				y += ldy1 + ldy2;
				dx1 -= 2.0 * ldx1;
				dy1 -= 2.0 * ldy1;
				dx2 -= 2.0 * ldx2;
				dy2 -= 2.0 * ldy2;
				r->moveTo(x, y);
				r->lineTo((x + dx1), (y + dy1));
				r->lineTo((x + dx1 + dx2), (y + dy1 + dy2));
				r->lineTo((x + dx2), (y + dy2));
				r->closePath();
			}
			r->pathDone();
			if (r->endRendering()) {
				$assign(ptg, $nc(rdrCtx->ptg)->init());
				$nc(ptg)->getBbox(bbox);
				$assign(r, nullptr);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (r != nullptr) {
				r->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return ptg;
}

float DMarlinRenderingEngine::getMinimumAAPenSize() {
	return DMarlinRenderingEngine::MIN_PEN_SIZE;
}

void DMarlinRenderingEngine::logSettings($String* reClass) {
	$init(DMarlinRenderingEngine);
	$useLocalCurrentObjectStackCache();
	if (DMarlinRenderingEngine::SETTINGS_LOGGED) {
		return;
	}
	DMarlinRenderingEngine::SETTINGS_LOGGED = true;
	$var($String, refType, nullptr);
	switch (DMarlinRenderingEngine::REF_TYPE) {
	default:
		{}
	case $ReentrantContextProvider::REF_HARD:
		{
			$assign(refType, "hard"_s);
			break;
		}
	case $ReentrantContextProvider::REF_SOFT:
		{
			$assign(refType, "soft"_s);
			break;
		}
	case $ReentrantContextProvider::REF_WEAK:
		{
			$assign(refType, "weak"_s);
			break;
		}
	}
	$MarlinUtils::logInfo("==============================================================================="_s);
	$MarlinUtils::logInfo("Marlin software rasterizer           = ENABLED"_s);
	$MarlinUtils::logInfo($$str({"Version                              = ["_s, $($Version::getVersion()), "]"_s}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer                  = "_s, reClass}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.useThreadLocal   = "_s, $$str(DMarlinRenderingEngine::USE_THREAD_LOCAL)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.useRef           = "_s, refType}));
	$init($MarlinConst);
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.edges            = "_s, $$str($MarlinConst::INITIAL_EDGES_COUNT)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.pixelWidth       = "_s, $$str($MarlinConst::INITIAL_PIXEL_WIDTH)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.pixelHeight      = "_s, $$str($MarlinConst::INITIAL_PIXEL_HEIGHT)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.subPixel_log2_X  = "_s, $$str($MarlinConst::SUBPIXEL_LG_POSITIONS_X)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.subPixel_log2_Y  = "_s, $$str($MarlinConst::SUBPIXEL_LG_POSITIONS_Y)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.tileSize_log2    = "_s, $$str($MarlinConst::TILE_H_LG)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.tileWidth_log2   = "_s, $$str($MarlinConst::TILE_W_LG)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.blockSize_log2   = "_s, $$str($MarlinConst::BLOCK_SIZE_LG)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.forceRLE         = "_s, $$str($MarlinProperties::isForceRLE())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.forceNoRLE       = "_s, $$str($MarlinProperties::isForceNoRLE())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.useTileFlags     = "_s, $$str($MarlinProperties::isUseTileFlags())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.useTileFlags.useHeuristics = "_s, $$str($MarlinProperties::isUseTileFlagsWithHeuristics())}));
	$init($MarlinCache);
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.rleMinWidth      = "_s, $$str($MarlinCache::RLE_MIN_WIDTH)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.useSimplifier    = "_s, $$str($MarlinConst::USE_SIMPLIFIER)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.usePathSimplifier= "_s, $$str($MarlinConst::USE_PATH_SIMPLIFIER)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.pathSimplifier.pixTol = "_s, $$str($MarlinProperties::getPathSimplifierPixelTolerance())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.clip             = "_s, $$str($MarlinProperties::isDoClip())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.clip.runtime.enable = "_s, $$str($MarlinProperties::isDoClipRuntimeFlag())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.clip.subdivider  = "_s, $$str($MarlinProperties::isDoClipSubdivider())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.clip.subdivider.minLength = "_s, $$str($MarlinProperties::getSubdividerMinLength())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.doStats          = "_s, $$str($MarlinConst::DO_STATS)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.doMonitors       = "_s, $$str($MarlinConst::DO_MONITORS)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.doChecks         = "_s, $$str($MarlinConst::DO_CHECKS)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.useLogger        = "_s, $$str($MarlinConst::USE_LOGGER)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.logCreateContext = "_s, $$str($MarlinConst::LOG_CREATE_CONTEXT)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.logUnsafeMalloc  = "_s, $$str($MarlinConst::LOG_UNSAFE_MALLOC)}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.curve_len_err    = "_s, $$str($MarlinProperties::getCurveLengthError())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.cubic_dec_d2     = "_s, $$str($MarlinProperties::getCubicDecD2())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.cubic_inc_d1     = "_s, $$str($MarlinProperties::getCubicIncD1())}));
	$MarlinUtils::logInfo($$str({"sun.java2d.renderer.quad_dec_d2      = "_s, $$str($MarlinProperties::getQuadDecD2())}));
	$MarlinUtils::logInfo("Renderer settings:"_s);
	$init($Renderer);
	$MarlinUtils::logInfo($$str({"CUB_DEC_BND  = "_s, $$str($Renderer::CUB_DEC_BND)}));
	$MarlinUtils::logInfo($$str({"CUB_INC_BND  = "_s, $$str($Renderer::CUB_INC_BND)}));
	$MarlinUtils::logInfo($$str({"QUAD_DEC_BND = "_s, $$str($Renderer::QUAD_DEC_BND)}));
	$MarlinUtils::logInfo($$str({"INITIAL_EDGES_CAPACITY               = "_s, $$str($MarlinConst::INITIAL_EDGES_CAPACITY)}));
	$MarlinUtils::logInfo($$str({"INITIAL_CROSSING_COUNT               = "_s, $$str($Renderer::INITIAL_CROSSING_COUNT)}));
	$MarlinUtils::logInfo("==============================================================================="_s);
}

$RendererContext* DMarlinRenderingEngine::getRendererContext() {
	$init(DMarlinRenderingEngine);
	$var($RendererContext, rdrCtx, $cast($RendererContext, $nc(DMarlinRenderingEngine::RDR_CTX_PROVIDER)->acquire()));
	return rdrCtx;
}

void DMarlinRenderingEngine::returnRendererContext($RendererContext* rdrCtx) {
	$init(DMarlinRenderingEngine);
	$nc(rdrCtx)->dispose();
	$nc(DMarlinRenderingEngine::RDR_CTX_PROVIDER)->release(rdrCtx);
}

void clinit$DMarlinRenderingEngine($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Float);
	DMarlinRenderingEngine::UPPER_BND = $Float::MAX_VALUE / 2.0;
	DMarlinRenderingEngine::LOWER_BND = -DMarlinRenderingEngine::UPPER_BND;
	$beforeCallerSensitive();
	DMarlinRenderingEngine::DO_CLIP = $MarlinProperties::isDoClip();
	DMarlinRenderingEngine::DO_CLIP_RUNTIME_ENABLE = $MarlinProperties::isDoClipRuntimeFlag();
	$init($MarlinConst);
	DMarlinRenderingEngine::MIN_PEN_SIZE = 1.0f / $MarlinConst::MIN_SUBPIXELS;
	{
	}
	{
		DMarlinRenderingEngine::USE_THREAD_LOCAL = $MarlinProperties::isUseThreadLocal();
		$var($String, refType, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.renderer.useRef"_s, "soft"_s)))));
		{
			$var($String, s44864$, refType);
			int32_t tmp44864$ = -1;
			switch ($nc(s44864$)->hashCode()) {
			case 0x0035F42A:
				{
					if (s44864$->equals("soft"_s)) {
						tmp44864$ = 1;
					}
					break;
				}
			case 0x00379F78:
				{
					if (s44864$->equals("weak"_s)) {
						tmp44864$ = 2;
					}
					break;
				}
			case 0x0030C0EB:
				{
					if (s44864$->equals("hard"_s)) {
						tmp44864$ = 3;
					}
					break;
				}
			}
			switch (tmp44864$) {
			default:
				{}
			case 1:
				{
					DMarlinRenderingEngine::REF_TYPE = $ReentrantContextProvider::REF_SOFT;
					break;
				}
			case 2:
				{
					DMarlinRenderingEngine::REF_TYPE = $ReentrantContextProvider::REF_WEAK;
					break;
				}
			case 3:
				{
					DMarlinRenderingEngine::REF_TYPE = $ReentrantContextProvider::REF_HARD;
					break;
				}
			}
		}
		if (DMarlinRenderingEngine::USE_THREAD_LOCAL) {
			$assignStatic(DMarlinRenderingEngine::RDR_CTX_PROVIDER, $new($DMarlinRenderingEngine$1, DMarlinRenderingEngine::REF_TYPE));
		} else {
			$assignStatic(DMarlinRenderingEngine::RDR_CTX_PROVIDER, $new($DMarlinRenderingEngine$2, DMarlinRenderingEngine::REF_TYPE));
		}
	}
	DMarlinRenderingEngine::SETTINGS_LOGGED = !$MarlinConst::ENABLE_LOGS;
}

DMarlinRenderingEngine::DMarlinRenderingEngine() {
}

$Class* DMarlinRenderingEngine::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine, name, initialize, &_DMarlinRenderingEngine_ClassInfo_, clinit$DMarlinRenderingEngine, allocate$DMarlinRenderingEngine);
	return class$;
}

$Class* DMarlinRenderingEngine::class$ = nullptr;

		} // marlin
	} // java2d
} // sun