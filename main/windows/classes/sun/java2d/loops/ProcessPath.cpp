#include <sun/java2d/loops/ProcessPath.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/QuadCurve2D.h>
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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <sun/awt/SunHints.h>
#include <sun/java2d/loops/ProcessPath$1.h>
#include <sun/java2d/loops/ProcessPath$ActiveEdgeList.h>
#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/loops/ProcessPath$DrawProcessHandler.h>
#include <sun/java2d/loops/ProcessPath$Edge.h>
#include <sun/java2d/loops/ProcessPath$EndSubPathHandler.h>
#include <sun/java2d/loops/ProcessPath$FillData.h>
#include <sun/java2d/loops/ProcessPath$FillProcessHandler.h>
#include <sun/java2d/loops/ProcessPath$Point.h>
#include <sun/java2d/loops/ProcessPath$ProcessHandler.h>
#include <jcpp.h>

#undef CALC_LBND
#undef CALC_UBND
#undef CLIP
#undef CLIPCLAMP
#undef CRES_INVISIBLE
#undef CRES_MAX_CLIPPED
#undef CRES_MIN_CLIPPED
#undef CRES_NOT_CLIPPED
#undef CUB_A_MDP_MULT
#undef CUB_A_SHIFT
#undef CUB_B_MDP_MULT
#undef CUB_B_SHIFT
#undef CUB_C_MDP_MULT
#undef CUB_C_SHIFT
#undef DF_CUB_COUNT
#undef DF_CUB_DEC_BND
#undef DF_CUB_INC_BND
#undef DF_CUB_SHIFT
#undef DF_CUB_STEPS
#undef DF_MAX_POINT
#undef DF_QUAD_COUNT
#undef DF_QUAD_DEC_BND
#undef DF_QUAD_INC_BND
#undef DF_QUAD_SHIFT
#undef DF_QUAD_STEPS
#undef EPSF
#undef EPSFX
#undef FWD_PREC
#undef INTVAL_STROKE_PURE
#undef IS_CLIPPED
#undef LINE_MAX
#undef LINE_MIN
#undef LOWER_BND
#undef LOWER_OUT_BND
#undef MAX_CUB_SIZE
#undef MAX_QUAD_SIZE
#undef MAX_VALUE
#undef MDP_F_MASK
#undef MDP_HALF_MULT
#undef MDP_MULT
#undef MDP_PREC
#undef MDP_W_MASK
#undef PH_MODE_DRAW_CLIP
#undef PH_MODE_FILL_CLIP
#undef QUAD_A_MDP_MULT
#undef QUAD_A_SHIFT
#undef QUAD_B_MDP_MULT
#undef QUAD_B_SHIFT
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef TESTANDCLIP
#undef UPPER_BND
#undef UPPER_OUT_BND
#undef WIND_NON_ZERO

using $ProcessPath$PointArray = $Array<::sun::java2d::loops::ProcessPath$Point>;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $QuadCurve2D = ::java::awt::geom::QuadCurve2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $SunHints = ::sun::awt::SunHints;
using $ProcessPath$1 = ::sun::java2d::loops::ProcessPath$1;
using $ProcessPath$ActiveEdgeList = ::sun::java2d::loops::ProcessPath$ActiveEdgeList;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $ProcessPath$DrawProcessHandler = ::sun::java2d::loops::ProcessPath$DrawProcessHandler;
using $ProcessPath$Edge = ::sun::java2d::loops::ProcessPath$Edge;
using $ProcessPath$EndSubPathHandler = ::sun::java2d::loops::ProcessPath$EndSubPathHandler;
using $ProcessPath$FillData = ::sun::java2d::loops::ProcessPath$FillData;
using $ProcessPath$FillProcessHandler = ::sun::java2d::loops::ProcessPath$FillProcessHandler;
using $ProcessPath$Point = ::sun::java2d::loops::ProcessPath$Point;
using $ProcessPath$ProcessHandler = ::sun::java2d::loops::ProcessPath$ProcessHandler;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath_FieldInfo_[] = {
	{"PH_MODE_DRAW_CLIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ProcessPath, PH_MODE_DRAW_CLIP)},
	{"PH_MODE_FILL_CLIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ProcessPath, PH_MODE_FILL_CLIP)},
	{"noopEndSubPathHandler", "Lsun/java2d/loops/ProcessPath$EndSubPathHandler;", nullptr, $PUBLIC | $STATIC, $staticField(ProcessPath, noopEndSubPathHandler)},
	{"UPPER_BND", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessPath, UPPER_BND)},
	{"LOWER_BND", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessPath, LOWER_BND)},
	{"FWD_PREC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, FWD_PREC)},
	{"MDP_PREC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, MDP_PREC)},
	{"MDP_MULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, MDP_MULT)},
	{"MDP_HALF_MULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, MDP_HALF_MULT)},
	{"UPPER_OUT_BND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, UPPER_OUT_BND)},
	{"LOWER_OUT_BND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, LOWER_OUT_BND)},
	{"CALC_UBND", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessPath, CALC_UBND)},
	{"CALC_LBND", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessPath, CALC_LBND)},
	{"EPSFX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ProcessPath, EPSFX)},
	{"EPSF", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ProcessPath, EPSF)},
	{"MDP_W_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, MDP_W_MASK)},
	{"MDP_F_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, MDP_F_MASK)},
	{"MAX_CUB_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, MAX_CUB_SIZE)},
	{"MAX_QUAD_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, MAX_QUAD_SIZE)},
	{"DF_CUB_STEPS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_CUB_STEPS)},
	{"DF_QUAD_STEPS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_QUAD_STEPS)},
	{"DF_CUB_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_CUB_SHIFT)},
	{"DF_QUAD_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_QUAD_SHIFT)},
	{"DF_CUB_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_CUB_COUNT)},
	{"DF_QUAD_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_QUAD_COUNT)},
	{"DF_CUB_DEC_BND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_CUB_DEC_BND)},
	{"DF_CUB_INC_BND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_CUB_INC_BND)},
	{"DF_QUAD_DEC_BND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_QUAD_DEC_BND)},
	{"DF_QUAD_INC_BND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_QUAD_INC_BND)},
	{"CUB_A_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CUB_A_SHIFT)},
	{"CUB_B_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CUB_B_SHIFT)},
	{"CUB_C_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CUB_C_SHIFT)},
	{"CUB_A_MDP_MULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CUB_A_MDP_MULT)},
	{"CUB_B_MDP_MULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CUB_B_MDP_MULT)},
	{"CUB_C_MDP_MULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CUB_C_MDP_MULT)},
	{"QUAD_A_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, QUAD_A_SHIFT)},
	{"QUAD_B_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, QUAD_B_SHIFT)},
	{"QUAD_A_MDP_MULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, QUAD_A_MDP_MULT)},
	{"QUAD_B_MDP_MULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, QUAD_B_MDP_MULT)},
	{"CRES_MIN_CLIPPED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CRES_MIN_CLIPPED)},
	{"CRES_MAX_CLIPPED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CRES_MAX_CLIPPED)},
	{"CRES_NOT_CLIPPED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CRES_NOT_CLIPPED)},
	{"CRES_INVISIBLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, CRES_INVISIBLE)},
	{"DF_MAX_POINT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessPath, DF_MAX_POINT)},
	{}
};

$MethodInfo _ProcessPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProcessPath::*)()>(&ProcessPath::init$))},
	{"CLIP", "(FFFFD)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(float,float,float,float,double)>(&ProcessPath::CLIP))},
	{"CLIP", "(IIIID)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t,int32_t,double)>(&ProcessPath::CLIP))},
	{"CLIPCLAMP", "(FF[FIIIIII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(float,float,$floats*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ProcessPath::CLIPCLAMP))},
	{"CLIPCLAMP", "(II[IIIIIII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,$ints*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ProcessPath::CLIPCLAMP))},
	{"DrawMonotonicCubic", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;[FZ[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,$floats*,bool,$ints*)>(&ProcessPath::DrawMonotonicCubic))},
	{"DrawMonotonicQuad", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;[FZ[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,$floats*,bool,$ints*)>(&ProcessPath::DrawMonotonicQuad))},
	{"FillPolygon", "(Lsun/java2d/loops/ProcessPath$FillProcessHandler;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$FillProcessHandler*,int32_t)>(&ProcessPath::FillPolygon))},
	{"IS_CLIPPED", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&ProcessPath::IS_CLIPPED))},
	{"ProcessCubic", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;[F[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,$floats*,$ints*)>(&ProcessPath::ProcessCubic))},
	{"ProcessFirstMonotonicPartOfCubic", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;[F[IF)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,$floats*,$ints*,float)>(&ProcessPath::ProcessFirstMonotonicPartOfCubic))},
	{"ProcessFirstMonotonicPartOfQuad", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;[F[IF)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,$floats*,$ints*,float)>(&ProcessPath::ProcessFirstMonotonicPartOfQuad))},
	{"ProcessLine", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;FFFF[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,float,float,float,float,$ints*)>(&ProcessPath::ProcessLine))},
	{"ProcessMonotonicCubic", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;[F[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,$floats*,$ints*)>(&ProcessPath::ProcessMonotonicCubic))},
	{"ProcessMonotonicQuad", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;[F[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,$floats*,$ints*)>(&ProcessPath::ProcessMonotonicQuad))},
	{"ProcessQuad", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;[F[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProcessPath$ProcessHandler*,$floats*,$ints*)>(&ProcessPath::ProcessQuad))},
	{"TESTANDCLIP", "(FF[FIIII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(float,float,$floats*,int32_t,int32_t,int32_t,int32_t)>(&ProcessPath::TESTANDCLIP))},
	{"TESTANDCLIP", "(II[IIIII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,$ints*,int32_t,int32_t,int32_t,int32_t)>(&ProcessPath::TESTANDCLIP))},
	{"doProcessPath", "(Lsun/java2d/loops/ProcessPath$ProcessHandler;Ljava/awt/geom/Path2D$Float;FF)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ProcessPath$ProcessHandler*,$Path2D$Float*,float,float)>(&ProcessPath::doProcessPath))},
	{"drawPath", "(Lsun/java2d/loops/ProcessPath$DrawHandler;Lsun/java2d/loops/ProcessPath$EndSubPathHandler;Ljava/awt/geom/Path2D$Float;II)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ProcessPath$DrawHandler*,$ProcessPath$EndSubPathHandler*,$Path2D$Float*,int32_t,int32_t)>(&ProcessPath::drawPath))},
	{"drawPath", "(Lsun/java2d/loops/ProcessPath$DrawHandler;Ljava/awt/geom/Path2D$Float;II)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ProcessPath$DrawHandler*,$Path2D$Float*,int32_t,int32_t)>(&ProcessPath::drawPath))},
	{"fillPath", "(Lsun/java2d/loops/ProcessPath$DrawHandler;Ljava/awt/geom/Path2D$Float;II)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ProcessPath$DrawHandler*,$Path2D$Float*,int32_t,int32_t)>(&ProcessPath::fillPath))},
	{}
};

$InnerClassInfo _ProcessPath_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$FillProcessHandler", "sun.java2d.loops.ProcessPath", "FillProcessHandler", $PRIVATE | $STATIC},
	{"sun.java2d.loops.ProcessPath$ActiveEdgeList", "sun.java2d.loops.ProcessPath", "ActiveEdgeList", $PRIVATE | $STATIC},
	{"sun.java2d.loops.ProcessPath$FillData", "sun.java2d.loops.ProcessPath", "FillData", $PRIVATE | $STATIC},
	{"sun.java2d.loops.ProcessPath$Edge", "sun.java2d.loops.ProcessPath", "Edge", $PRIVATE | $STATIC},
	{"sun.java2d.loops.ProcessPath$Point", "sun.java2d.loops.ProcessPath", "Point", $PRIVATE | $STATIC},
	{"sun.java2d.loops.ProcessPath$DrawProcessHandler", "sun.java2d.loops.ProcessPath", "DrawProcessHandler", $PRIVATE | $STATIC},
	{"sun.java2d.loops.ProcessPath$ProcessHandler", "sun.java2d.loops.ProcessPath", "ProcessHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{"sun.java2d.loops.ProcessPath$EndSubPathHandler", "sun.java2d.loops.ProcessPath", "EndSubPathHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.java2d.loops.ProcessPath$DrawHandler", "sun.java2d.loops.ProcessPath", "DrawHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{"sun.java2d.loops.ProcessPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.ProcessPath",
	"java.lang.Object",
	nullptr,
	_ProcessPath_FieldInfo_,
	_ProcessPath_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath$FillProcessHandler,sun.java2d.loops.ProcessPath$ActiveEdgeList,sun.java2d.loops.ProcessPath$FillData,sun.java2d.loops.ProcessPath$Edge,sun.java2d.loops.ProcessPath$Point,sun.java2d.loops.ProcessPath$DrawProcessHandler,sun.java2d.loops.ProcessPath$ProcessHandler,sun.java2d.loops.ProcessPath$EndSubPathHandler,sun.java2d.loops.ProcessPath$DrawHandler,sun.java2d.loops.ProcessPath$1"
};

$Object* allocate$ProcessPath($Class* clazz) {
	return $of($alloc(ProcessPath));
}

$ProcessPath$EndSubPathHandler* ProcessPath::noopEndSubPathHandler = nullptr;
float ProcessPath::UPPER_BND = 0.0;
float ProcessPath::LOWER_BND = 0.0;
float ProcessPath::CALC_UBND = 0.0;
float ProcessPath::CALC_LBND = 0.0;
float ProcessPath::EPSF = 0.0;

void ProcessPath::init$() {
}

bool ProcessPath::fillPath($ProcessPath$DrawHandler* dhnd, $Path2D$Float* p2df, int32_t transX, int32_t transY) {
	$init(ProcessPath);
	$var($ProcessPath$FillProcessHandler, fhnd, $new($ProcessPath$FillProcessHandler, dhnd));
	if (!doProcessPath(fhnd, p2df, (float)transX, (float)transY)) {
		return false;
	}
	FillPolygon(fhnd, $nc(p2df)->getWindingRule());
	return true;
}

bool ProcessPath::drawPath($ProcessPath$DrawHandler* dhnd, $ProcessPath$EndSubPathHandler* endSubPath, $Path2D$Float* p2df, int32_t transX, int32_t transY) {
	$init(ProcessPath);
	return doProcessPath($$new($ProcessPath$DrawProcessHandler, dhnd, endSubPath), p2df, (float)transX, (float)transY);
}

bool ProcessPath::drawPath($ProcessPath$DrawHandler* dhnd, $Path2D$Float* p2df, int32_t transX, int32_t transY) {
	$init(ProcessPath);
	return doProcessPath($$new($ProcessPath$DrawProcessHandler, dhnd, ProcessPath::noopEndSubPathHandler), p2df, (float)transX, (float)transY);
}

float ProcessPath::CLIP(float a1, float b1, float a2, float b2, double t) {
	$init(ProcessPath);
	return (float)(b1 + (t - a1) * (b2 - b1) / (a2 - a1));
}

int32_t ProcessPath::CLIP(int32_t a1, int32_t b1, int32_t a2, int32_t b2, double t) {
	$init(ProcessPath);
	return $cast(int32_t, (b1 + (t - a1) * (b2 - b1) / (a2 - a1)));
}

bool ProcessPath::IS_CLIPPED(int32_t res) {
	$init(ProcessPath);
	return res == ProcessPath::CRES_MIN_CLIPPED || res == ProcessPath::CRES_MAX_CLIPPED;
}

int32_t ProcessPath::TESTANDCLIP(float LINE_MIN, float LINE_MAX, $floats* c, int32_t a1, int32_t b1, int32_t a2, int32_t b2) {
	$init(ProcessPath);
	double t = 0.0;
	int32_t res = ProcessPath::CRES_NOT_CLIPPED;
	if ($nc(c)->get(a1) < (LINE_MIN) || $nc(c)->get(a1) > (LINE_MAX)) {
		if (c->get(a1) < (LINE_MIN)) {
			if (c->get(a2) < (LINE_MIN)) {
				return ProcessPath::CRES_INVISIBLE;
			}
			res = ProcessPath::CRES_MIN_CLIPPED;
			t = (LINE_MIN);
		} else {
			if (c->get(a2) > (LINE_MAX)) {
				return ProcessPath::CRES_INVISIBLE;
			}
			res = ProcessPath::CRES_MAX_CLIPPED;
			t = (LINE_MAX);
		}
		c->set(b1, CLIP(c->get(a1), c->get(b1), c->get(a2), c->get(b2), t));
		c->set(a1, (float)t);
	}
	return res;
}

int32_t ProcessPath::TESTANDCLIP(int32_t LINE_MIN, int32_t LINE_MAX, $ints* c, int32_t a1, int32_t b1, int32_t a2, int32_t b2) {
	$init(ProcessPath);
	double t = 0.0;
	int32_t res = ProcessPath::CRES_NOT_CLIPPED;
	if ($nc(c)->get(a1) < (LINE_MIN) || $nc(c)->get(a1) > (LINE_MAX)) {
		if (c->get(a1) < (LINE_MIN)) {
			if (c->get(a2) < (LINE_MIN)) {
				return ProcessPath::CRES_INVISIBLE;
			}
			res = ProcessPath::CRES_MIN_CLIPPED;
			t = ((double)LINE_MIN);
		} else {
			if (c->get(a2) > (LINE_MAX)) {
				return ProcessPath::CRES_INVISIBLE;
			}
			res = ProcessPath::CRES_MAX_CLIPPED;
			t = ((double)LINE_MAX);
		}
		c->set(b1, CLIP(c->get(a1), c->get(b1), c->get(a2), c->get(b2), t));
		c->set(a1, $cast(int32_t, t));
	}
	return res;
}

int32_t ProcessPath::CLIPCLAMP(float LINE_MIN, float LINE_MAX, $floats* c, int32_t a1, int32_t b1, int32_t a2, int32_t b2, int32_t a3, int32_t b3) {
	$init(ProcessPath);
	$nc(c)->set(a3, c->get(a1));
	c->set(b3, c->get(b1));
	int32_t res = TESTANDCLIP(LINE_MIN, LINE_MAX, c, a1, b1, a2, b2);
	if (res == ProcessPath::CRES_MIN_CLIPPED) {
		c->set(a3, c->get(a1));
	} else if (res == ProcessPath::CRES_MAX_CLIPPED) {
		c->set(a3, c->get(a1));
		res = ProcessPath::CRES_MAX_CLIPPED;
	} else if (res == ProcessPath::CRES_INVISIBLE) {
		if (c->get(a1) > LINE_MAX) {
			res = ProcessPath::CRES_INVISIBLE;
		} else {
			c->set(a1, LINE_MIN);
			c->set(a2, LINE_MIN);
			res = ProcessPath::CRES_NOT_CLIPPED;
		}
	}
	return res;
}

int32_t ProcessPath::CLIPCLAMP(int32_t LINE_MIN, int32_t LINE_MAX, $ints* c, int32_t a1, int32_t b1, int32_t a2, int32_t b2, int32_t a3, int32_t b3) {
	$init(ProcessPath);
	$nc(c)->set(a3, c->get(a1));
	c->set(b3, c->get(b1));
	int32_t res = TESTANDCLIP(LINE_MIN, LINE_MAX, c, a1, b1, a2, b2);
	if (res == ProcessPath::CRES_MIN_CLIPPED) {
		c->set(a3, c->get(a1));
	} else if (res == ProcessPath::CRES_MAX_CLIPPED) {
		c->set(a3, c->get(a1));
		res = ProcessPath::CRES_MAX_CLIPPED;
	} else if (res == ProcessPath::CRES_INVISIBLE) {
		if (c->get(a1) > LINE_MAX) {
			res = ProcessPath::CRES_INVISIBLE;
		} else {
			c->set(a1, LINE_MIN);
			c->set(a2, LINE_MIN);
			res = ProcessPath::CRES_NOT_CLIPPED;
		}
	}
	return res;
}

void ProcessPath::DrawMonotonicQuad($ProcessPath$ProcessHandler* hnd, $floats* coords, bool checkBounds, $ints* pixelInfo) {
	$init(ProcessPath);
	int32_t x0 = $cast(int32_t, ($nc(coords)->get(0) * ProcessPath::MDP_MULT));
	int32_t y0 = $cast(int32_t, (coords->get(1) * ProcessPath::MDP_MULT));
	int32_t xe = $cast(int32_t, (coords->get(4) * ProcessPath::MDP_MULT));
	int32_t ye = $cast(int32_t, (coords->get(5) * ProcessPath::MDP_MULT));
	int32_t px = $sl((int32_t)(x0 & (uint32_t)(~ProcessPath::MDP_W_MASK)), ProcessPath::DF_QUAD_SHIFT);
	int32_t py = $sl((int32_t)(y0 & (uint32_t)(~ProcessPath::MDP_W_MASK)), ProcessPath::DF_QUAD_SHIFT);
	int32_t count = ProcessPath::DF_QUAD_COUNT;
	int32_t shift = ProcessPath::DF_QUAD_SHIFT;
	int32_t ax = $cast(int32_t, ((coords->get(0) - 2 * coords->get(2) + coords->get(4)) * ProcessPath::QUAD_A_MDP_MULT));
	int32_t ay = $cast(int32_t, ((coords->get(1) - 2 * coords->get(3) + coords->get(5)) * ProcessPath::QUAD_A_MDP_MULT));
	int32_t bx = $cast(int32_t, ((-2 * coords->get(0) + 2 * coords->get(2)) * ProcessPath::QUAD_B_MDP_MULT));
	int32_t by = $cast(int32_t, ((-2 * coords->get(1) + 2 * coords->get(3)) * ProcessPath::QUAD_B_MDP_MULT));
	int32_t ddpx = 2 * ax;
	int32_t ddpy = 2 * ay;
	int32_t dpx = ax + bx;
	int32_t dpy = ay + by;
	int32_t x1 = 0;
	int32_t y1 = 0;
	int32_t x2 = x0;
	int32_t y2 = y0;
	int32_t var$0 = $Math::abs(ddpx);
	int32_t maxDD = $Math::max(var$0, $Math::abs(ddpy));
	int32_t dx = xe - x0;
	int32_t dy = ye - y0;
	int32_t x0w = (int32_t)(x0 & (uint32_t)ProcessPath::MDP_W_MASK);
	int32_t y0w = (int32_t)(y0 & (uint32_t)ProcessPath::MDP_W_MASK);
	while (maxDD > ProcessPath::DF_QUAD_DEC_BND) {
		dpx = (dpx << 1) - ax;
		dpy = (dpy << 1) - ay;
		count <<= 1;
		maxDD >>= 2;
		px <<= 2;
		py <<= 2;
		shift += 2;
	}
	while (count-- > 1) {
		px += dpx;
		py += dpy;
		dpx += ddpx;
		dpy += ddpy;
		x1 = x2;
		y1 = y2;
		x2 = x0w + ($sr(px, shift));
		y2 = y0w + ($sr(py, shift));
		if (((xe - x2) ^ dx) < 0) {
			x2 = xe;
		}
		if (((ye - y2) ^ dy) < 0) {
			y2 = ye;
		}
		$nc(hnd)->processFixedLine(x1, y1, x2, y2, pixelInfo, checkBounds, false);
	}
	$nc(hnd)->processFixedLine(x2, y2, xe, ye, pixelInfo, checkBounds, false);
}

void ProcessPath::ProcessMonotonicQuad($ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo) {
	$init(ProcessPath);
	$var($floats, coords1, $new($floats, 6));
	float tx = 0.0;
	float ty = 0.0;
	float xMin = 0.0;
	float yMin = 0.0;
	float xMax = 0.0;
	float yMax = 0.0;
	xMin = (xMax = $nc(coords)->get(0));
	yMin = (yMax = coords->get(1));
	for (int32_t i = 2; i < 6; i += 2) {
		xMin = (xMin > coords->get(i)) ? coords->get(i) : xMin;
		xMax = (xMax < coords->get(i)) ? coords->get(i) : xMax;
		yMin = (yMin > coords->get(i + 1)) ? coords->get(i + 1) : yMin;
		yMax = (yMax < coords->get(i + 1)) ? coords->get(i + 1) : yMax;
	}
	if ($nc(hnd)->clipMode == ProcessPath::PH_MODE_DRAW_CLIP) {
		if ($nc(hnd->dhnd)->xMaxf < xMin || $nc(hnd->dhnd)->xMinf > xMax || $nc(hnd->dhnd)->yMaxf < yMin || $nc(hnd->dhnd)->yMinf > yMax) {
			return;
		}
	} else {
		if ($nc(hnd->dhnd)->yMaxf < yMin || $nc(hnd->dhnd)->yMinf > yMax || $nc(hnd->dhnd)->xMaxf < xMin) {
			return;
		}
		if ($nc(hnd->dhnd)->xMinf > xMax) {
			coords->set(0, coords->set(2, coords->set(4, $nc(hnd->dhnd)->xMinf)));
		}
	}
	if (xMax - xMin > ProcessPath::MAX_QUAD_SIZE || yMax - yMin > ProcessPath::MAX_QUAD_SIZE) {
		coords1->set(4, coords->get(4));
		coords1->set(5, coords->get(5));
		coords1->set(2, (coords->get(2) + coords->get(4)) / 2.0f);
		coords1->set(3, (coords->get(3) + coords->get(5)) / 2.0f);
		coords->set(2, (coords->get(0) + coords->get(2)) / 2.0f);
		coords->set(3, (coords->get(1) + coords->get(3)) / 2.0f);
		coords->set(4, coords1->set(0, (coords->get(2) + coords1->get(2)) / 2.0f));
		coords->set(5, coords1->set(1, (coords->get(3) + coords1->get(3)) / 2.0f));
		ProcessMonotonicQuad(hnd, coords, pixelInfo);
		ProcessMonotonicQuad(hnd, coords1, pixelInfo);
	} else {
		DrawMonotonicQuad(hnd, coords, $nc($nc(hnd)->dhnd)->xMinf >= xMin || $nc($nc(hnd)->dhnd)->xMaxf <= xMax || $nc($nc(hnd)->dhnd)->yMinf >= yMin || $nc($nc(hnd)->dhnd)->yMaxf <= yMax, pixelInfo);
	}
}

void ProcessPath::ProcessQuad($ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo) {
	$init(ProcessPath);
	$var($doubles, params, $new($doubles, 2));
	int32_t cnt = 0;
	double param = 0.0;
	if (($nc(coords)->get(0) > coords->get(2) || $nc(coords)->get(2) > coords->get(4)) && (coords->get(0) < coords->get(2) || $nc(coords)->get(2) < coords->get(4))) {
		double ax = coords->get(0) - 2 * coords->get(2) + coords->get(4);
		if (ax != 0) {
			double bx = coords->get(0) - coords->get(2);
			param = bx / ax;
			if (param < 1.0 && param > 0.0) {
				params->set(cnt++, param);
			}
		}
	}
	if (($nc(coords)->get(1) > coords->get(3) || $nc(coords)->get(3) > coords->get(5)) && (coords->get(1) < coords->get(3) || $nc(coords)->get(3) < coords->get(5))) {
		double ay = coords->get(1) - 2 * coords->get(3) + coords->get(5);
		if (ay != 0) {
			double by = coords->get(1) - coords->get(3);
			param = by / ay;
			if (param < 1.0 && param > 0.0) {
				if (cnt > 0) {
					if (params->get(0) > param) {
						params->set(cnt++, params->get(0));
						params->set(0, param);
					} else if (params->get(0) < param) {
						params->set(cnt++, param);
					}
				} else {
					params->set(cnt++, param);
				}
			}
		}
	}
	switch (cnt) {
	case 0:
		{
			break;
		}
	case 1:
		{
			ProcessFirstMonotonicPartOfQuad(hnd, coords, pixelInfo, (float)params->get(0));
			break;
		}
	case 2:
		{
			ProcessFirstMonotonicPartOfQuad(hnd, coords, pixelInfo, (float)params->get(0));
			param = params->get(1) - params->get(0);
			if (param > 0) {
				ProcessFirstMonotonicPartOfQuad(hnd, coords, pixelInfo, (float)(param / (1.0 - params->get(0))));
			}
			break;
		}
	}
	ProcessMonotonicQuad(hnd, coords, pixelInfo);
}

void ProcessPath::ProcessFirstMonotonicPartOfQuad($ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo, float t) {
	$init(ProcessPath);
	$var($floats, coords1, $new($floats, 6));
	coords1->set(0, $nc(coords)->get(0));
	coords1->set(1, coords->get(1));
	coords1->set(2, coords->get(0) + t * (coords->get(2) - coords->get(0)));
	coords1->set(3, coords->get(1) + t * (coords->get(3) - coords->get(1)));
	coords->set(2, coords->get(2) + t * (coords->get(4) - coords->get(2)));
	coords->set(3, coords->get(3) + t * (coords->get(5) - coords->get(3)));
	coords->set(0, coords1->set(4, coords1->get(2) + t * (coords->get(2) - coords1->get(2))));
	coords->set(1, coords1->set(5, coords1->get(3) + t * (coords->get(3) - coords1->get(3))));
	ProcessMonotonicQuad(hnd, coords1, pixelInfo);
}

void ProcessPath::DrawMonotonicCubic($ProcessPath$ProcessHandler* hnd, $floats* coords, bool checkBounds, $ints* pixelInfo) {
	$init(ProcessPath);
	int32_t x0 = $cast(int32_t, ($nc(coords)->get(0) * ProcessPath::MDP_MULT));
	int32_t y0 = $cast(int32_t, (coords->get(1) * ProcessPath::MDP_MULT));
	int32_t xe = $cast(int32_t, (coords->get(6) * ProcessPath::MDP_MULT));
	int32_t ye = $cast(int32_t, (coords->get(7) * ProcessPath::MDP_MULT));
	int32_t px = $sl((int32_t)(x0 & (uint32_t)(~ProcessPath::MDP_W_MASK)), ProcessPath::DF_CUB_SHIFT);
	int32_t py = $sl((int32_t)(y0 & (uint32_t)(~ProcessPath::MDP_W_MASK)), ProcessPath::DF_CUB_SHIFT);
	int32_t incStepBnd = ProcessPath::DF_CUB_INC_BND;
	int32_t decStepBnd = ProcessPath::DF_CUB_DEC_BND;
	int32_t count = ProcessPath::DF_CUB_COUNT;
	int32_t shift = ProcessPath::DF_CUB_SHIFT;
	int32_t ax = $cast(int32_t, ((-coords->get(0) + 3 * coords->get(2) - 3 * coords->get(4) + coords->get(6)) * ProcessPath::CUB_A_MDP_MULT));
	int32_t ay = $cast(int32_t, ((-coords->get(1) + 3 * coords->get(3) - 3 * coords->get(5) + coords->get(7)) * ProcessPath::CUB_A_MDP_MULT));
	int32_t bx = $cast(int32_t, ((3 * coords->get(0) - 6 * coords->get(2) + 3 * coords->get(4)) * ProcessPath::CUB_B_MDP_MULT));
	int32_t by = $cast(int32_t, ((3 * coords->get(1) - 6 * coords->get(3) + 3 * coords->get(5)) * ProcessPath::CUB_B_MDP_MULT));
	int32_t cx = $cast(int32_t, ((-3 * coords->get(0) + 3 * coords->get(2)) * (ProcessPath::CUB_C_MDP_MULT)));
	int32_t cy = $cast(int32_t, ((-3 * coords->get(1) + 3 * coords->get(3)) * (ProcessPath::CUB_C_MDP_MULT)));
	int32_t dddpx = 6 * ax;
	int32_t dddpy = 6 * ay;
	int32_t ddpx = dddpx + bx;
	int32_t ddpy = dddpy + by;
	int32_t dpx = ax + (bx >> 1) + cx;
	int32_t dpy = ay + (by >> 1) + cy;
	int32_t x1 = 0;
	int32_t y1 = 0;
	int32_t x2 = x0;
	int32_t y2 = y0;
	int32_t x0w = (int32_t)(x0 & (uint32_t)ProcessPath::MDP_W_MASK);
	int32_t y0w = (int32_t)(y0 & (uint32_t)ProcessPath::MDP_W_MASK);
	int32_t dx = xe - x0;
	int32_t dy = ye - y0;
	while (count > 0) {
		while (true) {
			bool var$0 = $Math::abs(ddpx) > decStepBnd;
			if (!(var$0 || $Math::abs(ddpy) > decStepBnd)) {
				break;
			}
			{
				ddpx = (ddpx << 1) - dddpx;
				ddpy = (ddpy << 1) - dddpy;
				dpx = (dpx << 2) - (ddpx >> 1);
				dpy = (dpy << 2) - (ddpy >> 1);
				count <<= 1;
				decStepBnd <<= 3;
				incStepBnd <<= 3;
				px <<= 3;
				py <<= 3;
				shift += 3;
			}
		}
		while (true) {
			bool var$1 = ((int32_t)(count & (uint32_t)1)) == 0 && shift > ProcessPath::DF_CUB_SHIFT && $Math::abs(dpx) <= incStepBnd;
			if (!(var$1 && $Math::abs(dpy) <= incStepBnd)) {
				break;
			}
			{
				dpx = (dpx >> 2) + (ddpx >> 3);
				dpy = (dpy >> 2) + (ddpy >> 3);
				ddpx = (ddpx + dddpx) >> 1;
				ddpy = (ddpy + dddpy) >> 1;
				count >>= 1;
				decStepBnd >>= 3;
				incStepBnd >>= 3;
				px >>= 3;
				py >>= 3;
				shift -= 3;
			}
		}
		--count;
		if (count > 0) {
			px += dpx;
			py += dpy;
			dpx += ddpx;
			dpy += ddpy;
			ddpx += dddpx;
			ddpy += dddpy;
			x1 = x2;
			y1 = y2;
			x2 = x0w + ($sr(px, shift));
			y2 = y0w + ($sr(py, shift));
			if (((xe - x2) ^ dx) < 0) {
				x2 = xe;
			}
			if (((ye - y2) ^ dy) < 0) {
				y2 = ye;
			}
			$nc(hnd)->processFixedLine(x1, y1, x2, y2, pixelInfo, checkBounds, false);
		} else {
			$nc(hnd)->processFixedLine(x2, y2, xe, ye, pixelInfo, checkBounds, false);
		}
	}
}

void ProcessPath::ProcessMonotonicCubic($ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo) {
	$init(ProcessPath);
	$var($floats, coords1, $new($floats, 8));
	float tx = 0.0;
	float ty = 0.0;
	float xMin = 0.0;
	float xMax = 0.0;
	float yMin = 0.0;
	float yMax = 0.0;
	xMin = (xMax = $nc(coords)->get(0));
	yMin = (yMax = coords->get(1));
	for (int32_t i = 2; i < 8; i += 2) {
		xMin = (xMin > coords->get(i)) ? coords->get(i) : xMin;
		xMax = (xMax < coords->get(i)) ? coords->get(i) : xMax;
		yMin = (yMin > coords->get(i + 1)) ? coords->get(i + 1) : yMin;
		yMax = (yMax < coords->get(i + 1)) ? coords->get(i + 1) : yMax;
	}
	if ($nc(hnd)->clipMode == ProcessPath::PH_MODE_DRAW_CLIP) {
		if ($nc(hnd->dhnd)->xMaxf < xMin || $nc(hnd->dhnd)->xMinf > xMax || $nc(hnd->dhnd)->yMaxf < yMin || $nc(hnd->dhnd)->yMinf > yMax) {
			return;
		}
	} else {
		if ($nc(hnd->dhnd)->yMaxf < yMin || $nc(hnd->dhnd)->yMinf > yMax || $nc(hnd->dhnd)->xMaxf < xMin) {
			return;
		}
		if ($nc(hnd->dhnd)->xMinf > xMax) {
			coords->set(0, coords->set(2, coords->set(4, coords->set(6, $nc(hnd->dhnd)->xMinf))));
		}
	}
	if (xMax - xMin > ProcessPath::MAX_CUB_SIZE || yMax - yMin > ProcessPath::MAX_CUB_SIZE) {
		coords1->set(6, coords->get(6));
		coords1->set(7, coords->get(7));
		coords1->set(4, (coords->get(4) + coords->get(6)) / 2.0f);
		coords1->set(5, (coords->get(5) + coords->get(7)) / 2.0f);
		tx = (coords->get(2) + coords->get(4)) / 2.0f;
		ty = (coords->get(3) + coords->get(5)) / 2.0f;
		coords1->set(2, (tx + coords1->get(4)) / 2.0f);
		coords1->set(3, (ty + coords1->get(5)) / 2.0f);
		coords->set(2, (coords->get(0) + coords->get(2)) / 2.0f);
		coords->set(3, (coords->get(1) + coords->get(3)) / 2.0f);
		coords->set(4, (coords->get(2) + tx) / 2.0f);
		coords->set(5, (coords->get(3) + ty) / 2.0f);
		coords->set(6, coords1->set(0, (coords->get(4) + coords1->get(2)) / 2.0f));
		coords->set(7, coords1->set(1, (coords->get(5) + coords1->get(3)) / 2.0f));
		ProcessMonotonicCubic(hnd, coords, pixelInfo);
		ProcessMonotonicCubic(hnd, coords1, pixelInfo);
	} else {
		DrawMonotonicCubic(hnd, coords, $nc($nc(hnd)->dhnd)->xMinf > xMin || $nc($nc(hnd)->dhnd)->xMaxf < xMax || $nc($nc(hnd)->dhnd)->yMinf > yMin || $nc($nc(hnd)->dhnd)->yMaxf < yMax, pixelInfo);
	}
}

void ProcessPath::ProcessCubic($ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo) {
	$init(ProcessPath);
	$var($doubles, params, $new($doubles, 4));
	$var($doubles, eqn, $new($doubles, 3));
	$var($doubles, res, $new($doubles, 2));
	int32_t cnt = 0;
	if (($nc(coords)->get(0) > coords->get(2) || $nc(coords)->get(2) > coords->get(4) || $nc(coords)->get(4) > coords->get(6)) && (coords->get(0) < coords->get(2) || $nc(coords)->get(2) < coords->get(4) || $nc(coords)->get(4) < coords->get(6))) {
		eqn->set(2, -coords->get(0) + 3 * coords->get(2) - 3 * coords->get(4) + coords->get(6));
		eqn->set(1, 2 * (coords->get(0) - 2 * coords->get(2) + coords->get(4)));
		eqn->set(0, -coords->get(0) + coords->get(2));
		int32_t nr = $QuadCurve2D::solveQuadratic(eqn, res);
		for (int32_t i = 0; i < nr; ++i) {
			if (res->get(i) > 0 && res->get(i) < 1) {
				params->set(cnt++, res->get(i));
			}
		}
	}
	if (($nc(coords)->get(1) > coords->get(3) || $nc(coords)->get(3) > coords->get(5) || $nc(coords)->get(5) > coords->get(7)) && (coords->get(1) < coords->get(3) || $nc(coords)->get(3) < coords->get(5) || $nc(coords)->get(5) < coords->get(7))) {
		eqn->set(2, -coords->get(1) + 3 * coords->get(3) - 3 * coords->get(5) + coords->get(7));
		eqn->set(1, 2 * (coords->get(1) - 2 * coords->get(3) + coords->get(5)));
		eqn->set(0, -coords->get(1) + coords->get(3));
		int32_t nr = $QuadCurve2D::solveQuadratic(eqn, res);
		for (int32_t i = 0; i < nr; ++i) {
			if (res->get(i) > 0 && res->get(i) < 1) {
				params->set(cnt++, res->get(i));
			}
		}
	}
	if (cnt > 0) {
		$Arrays::sort(params, 0, cnt);
		ProcessFirstMonotonicPartOfCubic(hnd, coords, pixelInfo, (float)params->get(0));
		for (int32_t i = 1; i < cnt; ++i) {
			double param = params->get(i) - params->get(i - 1);
			if (param > 0) {
				ProcessFirstMonotonicPartOfCubic(hnd, coords, pixelInfo, (float)(param / (1.0 - params->get(i - 1))));
			}
		}
	}
	ProcessMonotonicCubic(hnd, coords, pixelInfo);
}

void ProcessPath::ProcessFirstMonotonicPartOfCubic($ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo, float t) {
	$init(ProcessPath);
	$var($floats, coords1, $new($floats, 8));
	float tx = 0.0;
	float ty = 0.0;
	coords1->set(0, $nc(coords)->get(0));
	coords1->set(1, coords->get(1));
	tx = coords->get(2) + t * (coords->get(4) - coords->get(2));
	ty = coords->get(3) + t * (coords->get(5) - coords->get(3));
	coords1->set(2, coords->get(0) + t * (coords->get(2) - coords->get(0)));
	coords1->set(3, coords->get(1) + t * (coords->get(3) - coords->get(1)));
	coords1->set(4, coords1->get(2) + t * (tx - coords1->get(2)));
	coords1->set(5, coords1->get(3) + t * (ty - coords1->get(3)));
	coords->set(4, coords->get(4) + t * (coords->get(6) - coords->get(4)));
	coords->set(5, coords->get(5) + t * (coords->get(7) - coords->get(5)));
	coords->set(2, tx + t * (coords->get(4) - tx));
	coords->set(3, ty + t * (coords->get(5) - ty));
	coords->set(0, coords1->set(6, coords1->get(4) + t * (coords->get(2) - coords1->get(4))));
	coords->set(1, coords1->set(7, coords1->get(5) + t * (coords->get(3) - coords1->get(5))));
	ProcessMonotonicCubic(hnd, coords1, pixelInfo);
}

void ProcessPath::ProcessLine($ProcessPath$ProcessHandler* hnd, float x1, float y1, float x2, float y2, $ints* pixelInfo) {
	$init(ProcessPath);
	float xMin = 0.0;
	float yMin = 0.0;
	float xMax = 0.0;
	float yMax = 0.0;
	int32_t X1 = 0;
	int32_t Y1 = 0;
	int32_t X2 = 0;
	int32_t Y2 = 0;
	int32_t X3 = 0;
	int32_t Y3 = 0;
	int32_t res = 0;
	bool clipped = false;
	float x3 = 0.0;
	float y3 = 0.0;
	$var($floats, c, $new($floats, {
		x1,
		y1,
		x2,
		y2,
		(float)0,
		(float)0
	}));
	bool lastClipped = false;
	xMin = $nc($nc(hnd)->dhnd)->xMinf;
	yMin = $nc(hnd->dhnd)->yMinf;
	xMax = $nc(hnd->dhnd)->xMaxf;
	yMax = $nc(hnd->dhnd)->yMaxf;
	res = TESTANDCLIP(yMin, yMax, c, 1, 0, 3, 2);
	if (res == ProcessPath::CRES_INVISIBLE) {
		return;
	}
	clipped = IS_CLIPPED(res);
	res = TESTANDCLIP(yMin, yMax, c, 3, 2, 1, 0);
	if (res == ProcessPath::CRES_INVISIBLE) {
		return;
	}
	lastClipped = IS_CLIPPED(res);
	clipped = clipped || lastClipped;
	if (hnd->clipMode == ProcessPath::PH_MODE_DRAW_CLIP) {
		res = TESTANDCLIP(xMin, xMax, c, 0, 1, 2, 3);
		if (res == ProcessPath::CRES_INVISIBLE) {
			return;
		}
		clipped = clipped || IS_CLIPPED(res);
		res = TESTANDCLIP(xMin, xMax, c, 2, 3, 0, 1);
		if (res == ProcessPath::CRES_INVISIBLE) {
			return;
		}
		lastClipped = lastClipped || IS_CLIPPED(res);
		clipped = clipped || lastClipped;
		X1 = $cast(int32_t, (c->get(0) * ProcessPath::MDP_MULT));
		Y1 = $cast(int32_t, (c->get(1) * ProcessPath::MDP_MULT));
		X2 = $cast(int32_t, (c->get(2) * ProcessPath::MDP_MULT));
		Y2 = $cast(int32_t, (c->get(3) * ProcessPath::MDP_MULT));
		hnd->processFixedLine(X1, Y1, X2, Y2, pixelInfo, clipped, lastClipped);
	} else {
		res = CLIPCLAMP(xMin, xMax, c, 0, 1, 2, 3, 4, 5);
		X1 = $cast(int32_t, (c->get(0) * ProcessPath::MDP_MULT));
		Y1 = $cast(int32_t, (c->get(1) * ProcessPath::MDP_MULT));
		if (res == ProcessPath::CRES_MIN_CLIPPED) {
			X3 = $cast(int32_t, (c->get(4) * ProcessPath::MDP_MULT));
			Y3 = $cast(int32_t, (c->get(5) * ProcessPath::MDP_MULT));
			hnd->processFixedLine(X3, Y3, X1, Y1, pixelInfo, false, lastClipped);
		} else if (res == ProcessPath::CRES_INVISIBLE) {
			return;
		}
		res = CLIPCLAMP(xMin, xMax, c, 2, 3, 0, 1, 4, 5);
		lastClipped = lastClipped || (res == ProcessPath::CRES_MAX_CLIPPED);
		X2 = $cast(int32_t, (c->get(2) * ProcessPath::MDP_MULT));
		Y2 = $cast(int32_t, (c->get(3) * ProcessPath::MDP_MULT));
		hnd->processFixedLine(X1, Y1, X2, Y2, pixelInfo, false, lastClipped);
		if (res == ProcessPath::CRES_MIN_CLIPPED) {
			X3 = $cast(int32_t, (c->get(4) * ProcessPath::MDP_MULT));
			Y3 = $cast(int32_t, (c->get(5) * ProcessPath::MDP_MULT));
			hnd->processFixedLine(X2, Y2, X3, Y3, pixelInfo, false, lastClipped);
		}
	}
}

bool ProcessPath::doProcessPath($ProcessPath$ProcessHandler* hnd, $Path2D$Float* p2df, float transXf, float transYf) {
	$init(ProcessPath);
	$var($floats, coords, $new($floats, 8));
	$var($floats, tCoords, $new($floats, 8));
	$var($floats, closeCoord, $new($floats, {
		0.0f,
		0.0f
	}));
	$var($floats, firstCoord, $new($floats, 2));
	$var($ints, pixelInfo, $new($ints, 5));
	bool subpathStarted = false;
	bool skip = false;
	float lastX = 0.0;
	float lastY = 0.0;
	pixelInfo->set(0, 0);
	$nc($nc(hnd)->dhnd)->adjustBounds(ProcessPath::LOWER_OUT_BND, ProcessPath::LOWER_OUT_BND, ProcessPath::UPPER_OUT_BND, ProcessPath::UPPER_OUT_BND);
	if ($nc(hnd->dhnd)->strokeControl == $SunHints::INTVAL_STROKE_PURE) {
		closeCoord->set(0, -0.5f);
		closeCoord->set(1, -0.5f);
		transXf -= 0.5;
		transYf -= 0.5;
	}
	$var($PathIterator, pi, $nc(p2df)->getPathIterator(nullptr));
	while (!$nc(pi)->isDone()) {
		switch (pi->currentSegment(coords)) {
		case $PathIterator::SEG_MOVETO:
			{
				if (subpathStarted && !skip) {
					if (hnd->clipMode == ProcessPath::PH_MODE_FILL_CLIP) {
						if (tCoords->get(0) != closeCoord->get(0) || tCoords->get(1) != closeCoord->get(1)) {
							ProcessLine(hnd, tCoords->get(0), tCoords->get(1), closeCoord->get(0), closeCoord->get(1), pixelInfo);
						}
					}
					hnd->processEndSubPath();
				}
				tCoords->set(0, coords->get(0) + transXf);
				tCoords->set(1, coords->get(1) + transYf);
				if (tCoords->get(0) < ProcessPath::UPPER_BND && tCoords->get(0) > ProcessPath::LOWER_BND && tCoords->get(1) < ProcessPath::UPPER_BND && tCoords->get(1) > ProcessPath::LOWER_BND) {
					subpathStarted = true;
					skip = false;
					closeCoord->set(0, tCoords->get(0));
					closeCoord->set(1, tCoords->get(1));
				} else {
					skip = true;
				}
				pixelInfo->set(0, 0);
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				lastX = (tCoords->set(2, coords->get(0) + transXf));
				lastY = (tCoords->set(3, coords->get(1) + transYf));
				if (lastX < ProcessPath::UPPER_BND && lastX > ProcessPath::LOWER_BND && lastY < ProcessPath::UPPER_BND && lastY > ProcessPath::LOWER_BND) {
					if (skip) {
						tCoords->set(0, closeCoord->set(0, lastX));
						tCoords->set(1, closeCoord->set(1, lastY));
						subpathStarted = true;
						skip = false;
					} else {
						ProcessLine(hnd, tCoords->get(0), tCoords->get(1), tCoords->get(2), tCoords->get(3), pixelInfo);
						tCoords->set(0, lastX);
						tCoords->set(1, lastY);
					}
				}
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				tCoords->set(2, coords->get(0) + transXf);
				tCoords->set(3, coords->get(1) + transYf);
				lastX = (tCoords->set(4, coords->get(2) + transXf));
				lastY = (tCoords->set(5, coords->get(3) + transYf));
				if (lastX < ProcessPath::UPPER_BND && lastX > ProcessPath::LOWER_BND && lastY < ProcessPath::UPPER_BND && lastY > ProcessPath::LOWER_BND) {
					if (skip) {
						tCoords->set(0, closeCoord->set(0, lastX));
						tCoords->set(1, closeCoord->set(1, lastY));
						subpathStarted = true;
						skip = false;
					} else {
						if (tCoords->get(2) < ProcessPath::UPPER_BND && tCoords->get(2) > ProcessPath::LOWER_BND && tCoords->get(3) < ProcessPath::UPPER_BND && tCoords->get(3) > ProcessPath::LOWER_BND) {
							ProcessQuad(hnd, tCoords, pixelInfo);
						} else {
							ProcessLine(hnd, tCoords->get(0), tCoords->get(1), tCoords->get(4), tCoords->get(5), pixelInfo);
						}
						tCoords->set(0, lastX);
						tCoords->set(1, lastY);
					}
				}
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				tCoords->set(2, coords->get(0) + transXf);
				tCoords->set(3, coords->get(1) + transYf);
				tCoords->set(4, coords->get(2) + transXf);
				tCoords->set(5, coords->get(3) + transYf);
				lastX = (tCoords->set(6, coords->get(4) + transXf));
				lastY = (tCoords->set(7, coords->get(5) + transYf));
				if (lastX < ProcessPath::UPPER_BND && lastX > ProcessPath::LOWER_BND && lastY < ProcessPath::UPPER_BND && lastY > ProcessPath::LOWER_BND) {
					if (skip) {
						tCoords->set(0, closeCoord->set(0, tCoords->get(6)));
						tCoords->set(1, closeCoord->set(1, tCoords->get(7)));
						subpathStarted = true;
						skip = false;
					} else {
						if (tCoords->get(2) < ProcessPath::UPPER_BND && tCoords->get(2) > ProcessPath::LOWER_BND && tCoords->get(3) < ProcessPath::UPPER_BND && tCoords->get(3) > ProcessPath::LOWER_BND && tCoords->get(4) < ProcessPath::UPPER_BND && tCoords->get(4) > ProcessPath::LOWER_BND && tCoords->get(5) < ProcessPath::UPPER_BND && tCoords->get(5) > ProcessPath::LOWER_BND) {
							ProcessCubic(hnd, tCoords, pixelInfo);
						} else {
							ProcessLine(hnd, tCoords->get(0), tCoords->get(1), tCoords->get(6), tCoords->get(7), pixelInfo);
						}
						tCoords->set(0, lastX);
						tCoords->set(1, lastY);
					}
				}
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				if (subpathStarted && !skip) {
					skip = false;
					if (tCoords->get(0) != closeCoord->get(0) || tCoords->get(1) != closeCoord->get(1)) {
						ProcessLine(hnd, tCoords->get(0), tCoords->get(1), closeCoord->get(0), closeCoord->get(1), pixelInfo);
						tCoords->set(0, closeCoord->get(0));
						tCoords->set(1, closeCoord->get(1));
					}
					hnd->processEndSubPath();
				}
				break;
			}
		}
		pi->next();
	}
	if (subpathStarted & !skip) {
		if (hnd->clipMode == ProcessPath::PH_MODE_FILL_CLIP) {
			if (tCoords->get(0) != closeCoord->get(0) || tCoords->get(1) != closeCoord->get(1)) {
				ProcessLine(hnd, tCoords->get(0), tCoords->get(1), closeCoord->get(0), closeCoord->get(1), pixelInfo);
			}
		}
		hnd->processEndSubPath();
	}
	return true;
}

void ProcessPath::FillPolygon($ProcessPath$FillProcessHandler* hnd, int32_t fillRule) {
	$init(ProcessPath);
	int32_t k = 0;
	int32_t y = 0;
	int32_t n = 0;
	bool drawing = false;
	$var($ProcessPath$Edge, active, nullptr);
	int32_t rightBnd = $nc($nc(hnd)->dhnd)->xMax - 1;
	$var($ProcessPath$FillData, fd, hnd->fd);
	int32_t yMin = $nc(fd)->plgYMin;
	int32_t yMax = fd->plgYMax;
	int32_t hashSize = ($sr(yMax - yMin, ProcessPath::MDP_PREC)) + 4;
	int32_t hashOffset = ((int32_t)((yMin - 1) & (uint32_t)ProcessPath::MDP_W_MASK));
	int32_t counter = 0;
	int32_t counterMask = (fillRule == $PathIterator::WIND_NON_ZERO) ? -1 : 1;
	int32_t pntOffset = 0;
	$var($List, pnts, fd->plgPnts);
	n = $nc(pnts)->size();
	if (n <= 1) {
		return;
	}
	$var($ProcessPath$PointArray, yHash, $new($ProcessPath$PointArray, hashSize));
	$var($ProcessPath$Point, curpt, $cast($ProcessPath$Point, pnts->get(0)));
	$set($nc(curpt), prev, nullptr);
	for (int32_t i = 0; i < n - 1; ++i) {
		$assign(curpt, $cast($ProcessPath$Point, pnts->get(i)));
		$var($ProcessPath$Point, nextpt, $cast($ProcessPath$Point, pnts->get(i + 1)));
		int32_t curHashInd = $sr($nc(curpt)->y - hashOffset - 1, ProcessPath::MDP_PREC);
		$set(curpt, nextByY, yHash->get(curHashInd));
		yHash->set(curHashInd, curpt);
		$set(curpt, next, nextpt);
		$set($nc(nextpt), prev, curpt);
	}
	$var($ProcessPath$Point, ept, $cast($ProcessPath$Point, pnts->get(n - 1)));
	int32_t curHashInd = $sr($nc(ept)->y - hashOffset - 1, ProcessPath::MDP_PREC);
	$set(ept, nextByY, yHash->get(curHashInd));
	yHash->set(curHashInd, ept);
	$var($ProcessPath$ActiveEdgeList, activeList, $new($ProcessPath$ActiveEdgeList));
	for (y = hashOffset + ProcessPath::MDP_MULT, k = 0; y <= yMax && k < hashSize; y += ProcessPath::MDP_MULT, ++k) {
		{
			$var($ProcessPath$Point, pt, yHash->get(k));
			for (; pt != nullptr; $assign(pt, $nc(pt)->nextByY)) {
				if (pt->prev != nullptr && !$nc(pt->prev)->lastPoint) {
					if ($nc(pt->prev)->edge != nullptr && $nc(pt->prev)->y <= y) {
						activeList->delete$($nc(pt->prev)->edge);
						$set($nc(pt->prev), edge, nullptr);
					} else if ($nc(pt->prev)->y > y) {
						activeList->insert(pt->prev, y);
					}
				}
				if (!pt->lastPoint && pt->next != nullptr) {
					if (pt->edge != nullptr && $nc(pt->next)->y <= y) {
						activeList->delete$(pt->edge);
						$set(pt, edge, nullptr);
					} else if ($nc(pt->next)->y > y) {
						activeList->insert(pt, y);
					}
				}
			}
		}
		if (activeList->isEmpty()) {
			continue;
		}
		activeList->sort();
		counter = 0;
		drawing = false;
		int32_t xl = 0;
		int32_t xr = 0;
		xl = (xr = $nc(hnd->dhnd)->xMin);
		$var($ProcessPath$Edge, curEdge, activeList->head);
		while (curEdge != nullptr) {
			counter += curEdge->dir;
			if (((int32_t)(counter & (uint32_t)counterMask)) != 0 && !drawing) {
				xl = $sr(curEdge->x + ProcessPath::MDP_MULT - 1, ProcessPath::MDP_PREC);
				drawing = true;
			}
			if (((int32_t)(counter & (uint32_t)counterMask)) == 0 && drawing) {
				xr = $sr(curEdge->x - 1, ProcessPath::MDP_PREC);
				if (xl <= xr) {
					$nc(hnd->dhnd)->drawScanline(xl, xr, $sr(y, ProcessPath::MDP_PREC));
				}
				drawing = false;
			}
			curEdge->x += curEdge->dx;
			$assign(curEdge, curEdge->next);
		}
		if (drawing && xl <= rightBnd) {
			$nc(hnd->dhnd)->drawScanline(xl, rightBnd, $sr(y, ProcessPath::MDP_PREC));
		}
	}
}

void clinit$ProcessPath($Class* class$) {
	$init($Float);
	ProcessPath::UPPER_BND = $Float::MAX_VALUE / 4.0f;
	ProcessPath::LOWER_BND = -ProcessPath::UPPER_BND;
	ProcessPath::CALC_UBND = (float)$sl(1, 30 - ProcessPath::MDP_PREC);
	ProcessPath::CALC_LBND = -ProcessPath::CALC_UBND;
	ProcessPath::EPSF = $div(((float)ProcessPath::EPSFX), ProcessPath::MDP_MULT);
	$assignStatic(ProcessPath::noopEndSubPathHandler, $new($ProcessPath$1));
}

ProcessPath::ProcessPath() {
}

$Class* ProcessPath::load$($String* name, bool initialize) {
	$loadClass(ProcessPath, name, initialize, &_ProcessPath_ClassInfo_, clinit$ProcessPath, allocate$ProcessPath);
	return class$;
}

$Class* ProcessPath::class$ = nullptr;

		} // loops
	} // java2d
} // sun