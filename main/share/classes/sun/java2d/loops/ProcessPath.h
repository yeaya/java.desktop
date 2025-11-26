#ifndef _sun_java2d_loops_ProcessPath_h_
#define _sun_java2d_loops_ProcessPath_h_
//$ class sun.java2d.loops.ProcessPath
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Float.h>

#pragma push_macro("CALC_LBND")
#undef CALC_LBND
#pragma push_macro("CALC_UBND")
#undef CALC_UBND
#pragma push_macro("CLIP")
#undef CLIP
#pragma push_macro("CLIPCLAMP")
#undef CLIPCLAMP
#pragma push_macro("CRES_INVISIBLE")
#undef CRES_INVISIBLE
#pragma push_macro("CRES_MAX_CLIPPED")
#undef CRES_MAX_CLIPPED
#pragma push_macro("CRES_MIN_CLIPPED")
#undef CRES_MIN_CLIPPED
#pragma push_macro("CRES_NOT_CLIPPED")
#undef CRES_NOT_CLIPPED
#pragma push_macro("CUB_A_MDP_MULT")
#undef CUB_A_MDP_MULT
#pragma push_macro("CUB_A_SHIFT")
#undef CUB_A_SHIFT
#pragma push_macro("CUB_B_MDP_MULT")
#undef CUB_B_MDP_MULT
#pragma push_macro("CUB_B_SHIFT")
#undef CUB_B_SHIFT
#pragma push_macro("CUB_C_MDP_MULT")
#undef CUB_C_MDP_MULT
#pragma push_macro("CUB_C_SHIFT")
#undef CUB_C_SHIFT
#pragma push_macro("DF_CUB_COUNT")
#undef DF_CUB_COUNT
#pragma push_macro("DF_CUB_DEC_BND")
#undef DF_CUB_DEC_BND
#pragma push_macro("DF_CUB_INC_BND")
#undef DF_CUB_INC_BND
#pragma push_macro("DF_CUB_SHIFT")
#undef DF_CUB_SHIFT
#pragma push_macro("DF_CUB_STEPS")
#undef DF_CUB_STEPS
#pragma push_macro("DF_MAX_POINT")
#undef DF_MAX_POINT
#pragma push_macro("DF_QUAD_COUNT")
#undef DF_QUAD_COUNT
#pragma push_macro("DF_QUAD_DEC_BND")
#undef DF_QUAD_DEC_BND
#pragma push_macro("DF_QUAD_INC_BND")
#undef DF_QUAD_INC_BND
#pragma push_macro("DF_QUAD_SHIFT")
#undef DF_QUAD_SHIFT
#pragma push_macro("DF_QUAD_STEPS")
#undef DF_QUAD_STEPS
#pragma push_macro("EPSF")
#undef EPSF
#pragma push_macro("EPSFX")
#undef EPSFX
#pragma push_macro("FWD_PREC")
#undef FWD_PREC
#pragma push_macro("IS_CLIPPED")
#undef IS_CLIPPED
#pragma push_macro("LINE_MAX")
#undef LINE_MAX
#pragma push_macro("LINE_MIN")
#undef LINE_MIN
#pragma push_macro("LOWER_BND")
#undef LOWER_BND
#pragma push_macro("LOWER_OUT_BND")
#undef LOWER_OUT_BND
#pragma push_macro("MAX_CUB_SIZE")
#undef MAX_CUB_SIZE
#pragma push_macro("MAX_QUAD_SIZE")
#undef MAX_QUAD_SIZE
#pragma push_macro("MDP_F_MASK")
#undef MDP_F_MASK
#pragma push_macro("MDP_HALF_MULT")
#undef MDP_HALF_MULT
#pragma push_macro("MDP_MULT")
#undef MDP_MULT
#pragma push_macro("MDP_PREC")
#undef MDP_PREC
#pragma push_macro("MDP_W_MASK")
#undef MDP_W_MASK
#pragma push_macro("PH_MODE_DRAW_CLIP")
#undef PH_MODE_DRAW_CLIP
#pragma push_macro("PH_MODE_FILL_CLIP")
#undef PH_MODE_FILL_CLIP
#pragma push_macro("QUAD_A_MDP_MULT")
#undef QUAD_A_MDP_MULT
#pragma push_macro("QUAD_A_SHIFT")
#undef QUAD_A_SHIFT
#pragma push_macro("QUAD_B_MDP_MULT")
#undef QUAD_B_MDP_MULT
#pragma push_macro("QUAD_B_SHIFT")
#undef QUAD_B_SHIFT
#pragma push_macro("TESTANDCLIP")
#undef TESTANDCLIP
#pragma push_macro("UPPER_BND")
#undef UPPER_BND
#pragma push_macro("UPPER_OUT_BND")
#undef UPPER_OUT_BND

namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Float;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class ProcessPath$DrawHandler;
			class ProcessPath$EndSubPathHandler;
			class ProcessPath$FillProcessHandler;
			class ProcessPath$ProcessHandler;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath : public ::java::lang::Object {
	$class(ProcessPath, 0, ::java::lang::Object)
public:
	ProcessPath();
	void init$();
	static float CLIP(float a1, float b1, float a2, float b2, double t);
	static int32_t CLIP(int32_t a1, int32_t b1, int32_t a2, int32_t b2, double t);
	static int32_t CLIPCLAMP(float LINE_MIN, float LINE_MAX, $floats* c, int32_t a1, int32_t b1, int32_t a2, int32_t b2, int32_t a3, int32_t b3);
	static int32_t CLIPCLAMP(int32_t LINE_MIN, int32_t LINE_MAX, $ints* c, int32_t a1, int32_t b1, int32_t a2, int32_t b2, int32_t a3, int32_t b3);
	static void DrawMonotonicCubic(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, $floats* coords, bool checkBounds, $ints* pixelInfo);
	static void DrawMonotonicQuad(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, $floats* coords, bool checkBounds, $ints* pixelInfo);
	static void FillPolygon(::sun::java2d::loops::ProcessPath$FillProcessHandler* hnd, int32_t fillRule);
	static bool IS_CLIPPED(int32_t res);
	static void ProcessCubic(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo);
	static void ProcessFirstMonotonicPartOfCubic(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo, float t);
	static void ProcessFirstMonotonicPartOfQuad(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo, float t);
	static void ProcessLine(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, float x1, float y1, float x2, float y2, $ints* pixelInfo);
	static void ProcessMonotonicCubic(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo);
	static void ProcessMonotonicQuad(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo);
	static void ProcessQuad(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, $floats* coords, $ints* pixelInfo);
	static int32_t TESTANDCLIP(float LINE_MIN, float LINE_MAX, $floats* c, int32_t a1, int32_t b1, int32_t a2, int32_t b2);
	static int32_t TESTANDCLIP(int32_t LINE_MIN, int32_t LINE_MAX, $ints* c, int32_t a1, int32_t b1, int32_t a2, int32_t b2);
	static bool doProcessPath(::sun::java2d::loops::ProcessPath$ProcessHandler* hnd, ::java::awt::geom::Path2D$Float* p2df, float transXf, float transYf);
	static bool drawPath(::sun::java2d::loops::ProcessPath$DrawHandler* dhnd, ::sun::java2d::loops::ProcessPath$EndSubPathHandler* endSubPath, ::java::awt::geom::Path2D$Float* p2df, int32_t transX, int32_t transY);
	static bool drawPath(::sun::java2d::loops::ProcessPath$DrawHandler* dhnd, ::java::awt::geom::Path2D$Float* p2df, int32_t transX, int32_t transY);
	static bool fillPath(::sun::java2d::loops::ProcessPath$DrawHandler* dhnd, ::java::awt::geom::Path2D$Float* p2df, int32_t transX, int32_t transY);
	static const int32_t PH_MODE_DRAW_CLIP = 0;
	static const int32_t PH_MODE_FILL_CLIP = 1;
	static ::sun::java2d::loops::ProcessPath$EndSubPathHandler* noopEndSubPathHandler;
	static float UPPER_BND;
	static float LOWER_BND;
	static const int32_t FWD_PREC = 7;
	static const int32_t MDP_PREC = 10;
	static const int32_t MDP_MULT = 1024; // 1 << MDP_PREC
	static const int32_t MDP_HALF_MULT = 512; // MDP_MULT >> 1
	static const int32_t UPPER_OUT_BND = 1048576; // 1 << (30 - MDP_PREC)
	static const int32_t LOWER_OUT_BND = -UPPER_OUT_BND;
	static float CALC_UBND;
	static float CALC_LBND;
	static const int32_t EPSFX = 1;
	static float EPSF;
	static const int32_t MDP_W_MASK = -MDP_MULT;
	static const int32_t MDP_F_MASK = 1023; // MDP_MULT - 1
	static const int32_t MAX_CUB_SIZE = 256;
	static const int32_t MAX_QUAD_SIZE = 1024;
	static const int32_t DF_CUB_STEPS = 3;
	static const int32_t DF_QUAD_STEPS = 2;
	static const int32_t DF_CUB_SHIFT = 6; // FWD_PREC + DF_CUB_STEPS * 3 - MDP_PREC
	static const int32_t DF_QUAD_SHIFT = 1; // FWD_PREC + DF_QUAD_STEPS * 2 - MDP_PREC
	static const int32_t DF_CUB_COUNT = (1 << DF_CUB_STEPS);
	static const int32_t DF_QUAD_COUNT = (1 << DF_QUAD_STEPS);
	static const int32_t DF_CUB_DEC_BND = 262144; // 1 << DF_CUB_STEPS * 3 + FWD_PREC + 2
	static const int32_t DF_CUB_INC_BND = 32768; // 1 << DF_CUB_STEPS * 3 + FWD_PREC - 1
	static const int32_t DF_QUAD_DEC_BND = 8192; // 1 << DF_QUAD_STEPS * 2 + FWD_PREC + 2
	static const int32_t DF_QUAD_INC_BND = 1024; // 1 << DF_QUAD_STEPS * 2 + FWD_PREC - 1
	static const int32_t CUB_A_SHIFT = FWD_PREC;
	static const int32_t CUB_B_SHIFT = (DF_CUB_STEPS + FWD_PREC + 1);
	static const int32_t CUB_C_SHIFT = (DF_CUB_STEPS * 2 + FWD_PREC);
	static const int32_t CUB_A_MDP_MULT = (1 << CUB_A_SHIFT);
	static const int32_t CUB_B_MDP_MULT = (1 << CUB_B_SHIFT);
	static const int32_t CUB_C_MDP_MULT = (1 << CUB_C_SHIFT);
	static const int32_t QUAD_A_SHIFT = FWD_PREC;
	static const int32_t QUAD_B_SHIFT = (DF_QUAD_STEPS + FWD_PREC);
	static const int32_t QUAD_A_MDP_MULT = (1 << QUAD_A_SHIFT);
	static const int32_t QUAD_B_MDP_MULT = (1 << QUAD_B_SHIFT);
	static const int32_t CRES_MIN_CLIPPED = 0;
	static const int32_t CRES_MAX_CLIPPED = 1;
	static const int32_t CRES_NOT_CLIPPED = 3;
	static const int32_t CRES_INVISIBLE = 4;
	static const int32_t DF_MAX_POINT = 256;
};

		} // loops
	} // java2d
} // sun

#pragma pop_macro("CALC_LBND")
#pragma pop_macro("CALC_UBND")
#pragma pop_macro("CLIP")
#pragma pop_macro("CLIPCLAMP")
#pragma pop_macro("CRES_INVISIBLE")
#pragma pop_macro("CRES_MAX_CLIPPED")
#pragma pop_macro("CRES_MIN_CLIPPED")
#pragma pop_macro("CRES_NOT_CLIPPED")
#pragma pop_macro("CUB_A_MDP_MULT")
#pragma pop_macro("CUB_A_SHIFT")
#pragma pop_macro("CUB_B_MDP_MULT")
#pragma pop_macro("CUB_B_SHIFT")
#pragma pop_macro("CUB_C_MDP_MULT")
#pragma pop_macro("CUB_C_SHIFT")
#pragma pop_macro("DF_CUB_COUNT")
#pragma pop_macro("DF_CUB_DEC_BND")
#pragma pop_macro("DF_CUB_INC_BND")
#pragma pop_macro("DF_CUB_SHIFT")
#pragma pop_macro("DF_CUB_STEPS")
#pragma pop_macro("DF_MAX_POINT")
#pragma pop_macro("DF_QUAD_COUNT")
#pragma pop_macro("DF_QUAD_DEC_BND")
#pragma pop_macro("DF_QUAD_INC_BND")
#pragma pop_macro("DF_QUAD_SHIFT")
#pragma pop_macro("DF_QUAD_STEPS")
#pragma pop_macro("EPSF")
#pragma pop_macro("EPSFX")
#pragma pop_macro("FWD_PREC")
#pragma pop_macro("IS_CLIPPED")
#pragma pop_macro("LINE_MAX")
#pragma pop_macro("LINE_MIN")
#pragma pop_macro("LOWER_BND")
#pragma pop_macro("LOWER_OUT_BND")
#pragma pop_macro("MAX_CUB_SIZE")
#pragma pop_macro("MAX_QUAD_SIZE")
#pragma pop_macro("MDP_F_MASK")
#pragma pop_macro("MDP_HALF_MULT")
#pragma pop_macro("MDP_MULT")
#pragma pop_macro("MDP_PREC")
#pragma pop_macro("MDP_W_MASK")
#pragma pop_macro("PH_MODE_DRAW_CLIP")
#pragma pop_macro("PH_MODE_FILL_CLIP")
#pragma pop_macro("QUAD_A_MDP_MULT")
#pragma pop_macro("QUAD_A_SHIFT")
#pragma pop_macro("QUAD_B_MDP_MULT")
#pragma pop_macro("QUAD_B_SHIFT")
#pragma pop_macro("TESTANDCLIP")
#pragma pop_macro("UPPER_BND")
#pragma pop_macro("UPPER_OUT_BND")

#endif // _sun_java2d_loops_ProcessPath_h_