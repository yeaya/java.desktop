#ifndef _sun_java2d_pipe_BufferedOpCodes_h_
#define _sun_java2d_pipe_BufferedOpCodes_h_
//$ class sun.java2d.pipe.BufferedOpCodes
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BEGIN_SHAPE_CLIP")
#undef BEGIN_SHAPE_CLIP
#pragma push_macro("BLIT")
#undef BLIT
#pragma push_macro("COPY_AREA")
#undef COPY_AREA
#pragma push_macro("DISABLE_CONVOLVE_OP")
#undef DISABLE_CONVOLVE_OP
#pragma push_macro("DISABLE_LOOKUP_OP")
#undef DISABLE_LOOKUP_OP
#pragma push_macro("DISABLE_RESCALE_OP")
#undef DISABLE_RESCALE_OP
#pragma push_macro("DISPOSE_CONFIG")
#undef DISPOSE_CONFIG
#pragma push_macro("DISPOSE_SURFACE")
#undef DISPOSE_SURFACE
#pragma push_macro("DRAW_AAPARALLELOGRAM")
#undef DRAW_AAPARALLELOGRAM
#pragma push_macro("DRAW_GLYPH_LIST")
#undef DRAW_GLYPH_LIST
#pragma push_macro("DRAW_LINE")
#undef DRAW_LINE
#pragma push_macro("DRAW_PARALLELOGRAM")
#undef DRAW_PARALLELOGRAM
#pragma push_macro("DRAW_PIXEL")
#undef DRAW_PIXEL
#pragma push_macro("DRAW_POLY")
#undef DRAW_POLY
#pragma push_macro("DRAW_RECT")
#undef DRAW_RECT
#pragma push_macro("DRAW_SCANLINES")
#undef DRAW_SCANLINES
#pragma push_macro("ENABLE_CONVOLVE_OP")
#undef ENABLE_CONVOLVE_OP
#pragma push_macro("ENABLE_LOOKUP_OP")
#undef ENABLE_LOOKUP_OP
#pragma push_macro("ENABLE_RESCALE_OP")
#undef ENABLE_RESCALE_OP
#pragma push_macro("END_SHAPE_CLIP")
#undef END_SHAPE_CLIP
#pragma push_macro("FILL_AAPARALLELOGRAM")
#undef FILL_AAPARALLELOGRAM
#pragma push_macro("FILL_PARALLELOGRAM")
#undef FILL_PARALLELOGRAM
#pragma push_macro("FILL_RECT")
#undef FILL_RECT
#pragma push_macro("FILL_SPANS")
#undef FILL_SPANS
#pragma push_macro("FLUSH_SURFACE")
#undef FLUSH_SURFACE
#pragma push_macro("INVALIDATE_CONTEXT")
#undef INVALIDATE_CONTEXT
#pragma push_macro("MASK_BLIT")
#undef MASK_BLIT
#pragma push_macro("MASK_FILL")
#undef MASK_FILL
#pragma push_macro("NOOP")
#undef NOOP
#pragma push_macro("RESET_CLIP")
#undef RESET_CLIP
#pragma push_macro("RESET_COMPOSITE")
#undef RESET_COMPOSITE
#pragma push_macro("RESET_PAINT")
#undef RESET_PAINT
#pragma push_macro("RESET_TRANSFORM")
#undef RESET_TRANSFORM
#pragma push_macro("RESTORE_DEVICES")
#undef RESTORE_DEVICES
#pragma push_macro("SET_ALPHA_COMPOSITE")
#undef SET_ALPHA_COMPOSITE
#pragma push_macro("SET_COLOR")
#undef SET_COLOR
#pragma push_macro("SET_GRADIENT_PAINT")
#undef SET_GRADIENT_PAINT
#pragma push_macro("SET_LINEAR_GRADIENT_PAINT")
#undef SET_LINEAR_GRADIENT_PAINT
#pragma push_macro("SET_RADIAL_GRADIENT_PAINT")
#undef SET_RADIAL_GRADIENT_PAINT
#pragma push_macro("SET_RECT_CLIP")
#undef SET_RECT_CLIP
#pragma push_macro("SET_SCRATCH_SURFACE")
#undef SET_SCRATCH_SURFACE
#pragma push_macro("SET_SHAPE_CLIP_SPANS")
#undef SET_SHAPE_CLIP_SPANS
#pragma push_macro("SET_SURFACES")
#undef SET_SURFACES
#pragma push_macro("SET_TEXTURE_PAINT")
#undef SET_TEXTURE_PAINT
#pragma push_macro("SET_TRANSFORM")
#undef SET_TRANSFORM
#pragma push_macro("SET_XOR_COMPOSITE")
#undef SET_XOR_COMPOSITE
#pragma push_macro("SURFACE_TO_SW_BLIT")
#undef SURFACE_TO_SW_BLIT
#pragma push_macro("SWAP_BUFFERS")
#undef SWAP_BUFFERS
#pragma push_macro("SYNC")
#undef SYNC

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedOpCodes : public ::java::lang::Object {
	$class(BufferedOpCodes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BufferedOpCodes();
	void init$();
	static const int32_t DRAW_LINE = 10;
	static const int32_t DRAW_RECT = 11;
	static const int32_t DRAW_POLY = 12;
	static const int32_t DRAW_PIXEL = 13;
	static const int32_t DRAW_SCANLINES = 14;
	static const int32_t DRAW_PARALLELOGRAM = 15;
	static const int32_t DRAW_AAPARALLELOGRAM = 16;
	static const int32_t FILL_RECT = 20;
	static const int32_t FILL_SPANS = 21;
	static const int32_t FILL_PARALLELOGRAM = 22;
	static const int32_t FILL_AAPARALLELOGRAM = 23;
	static const int32_t COPY_AREA = 30;
	static const int32_t BLIT = 31;
	static const int32_t MASK_FILL = 32;
	static const int32_t MASK_BLIT = 33;
	static const int32_t SURFACE_TO_SW_BLIT = 34;
	static const int32_t DRAW_GLYPH_LIST = 40;
	static const int32_t SET_RECT_CLIP = 51;
	static const int32_t BEGIN_SHAPE_CLIP = 52;
	static const int32_t SET_SHAPE_CLIP_SPANS = 53;
	static const int32_t END_SHAPE_CLIP = 54;
	static const int32_t RESET_CLIP = 55;
	static const int32_t SET_ALPHA_COMPOSITE = 56;
	static const int32_t SET_XOR_COMPOSITE = 57;
	static const int32_t RESET_COMPOSITE = 58;
	static const int32_t SET_TRANSFORM = 59;
	static const int32_t RESET_TRANSFORM = 60;
	static const int32_t SET_SURFACES = 70;
	static const int32_t SET_SCRATCH_SURFACE = 71;
	static const int32_t FLUSH_SURFACE = 72;
	static const int32_t DISPOSE_SURFACE = 73;
	static const int32_t DISPOSE_CONFIG = 74;
	static const int32_t INVALIDATE_CONTEXT = 75;
	static const int32_t SYNC = 76;
	static const int32_t RESTORE_DEVICES = 77;
	static const int32_t SWAP_BUFFERS = 80;
	static const int32_t NOOP = 90;
	static const int32_t RESET_PAINT = 100;
	static const int32_t SET_COLOR = 101;
	static const int32_t SET_GRADIENT_PAINT = 102;
	static const int32_t SET_LINEAR_GRADIENT_PAINT = 103;
	static const int32_t SET_RADIAL_GRADIENT_PAINT = 104;
	static const int32_t SET_TEXTURE_PAINT = 105;
	static const int32_t ENABLE_CONVOLVE_OP = 120;
	static const int32_t DISABLE_CONVOLVE_OP = 121;
	static const int32_t ENABLE_RESCALE_OP = 122;
	static const int32_t DISABLE_RESCALE_OP = 123;
	static const int32_t ENABLE_LOOKUP_OP = 124;
	static const int32_t DISABLE_LOOKUP_OP = 125;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("BEGIN_SHAPE_CLIP")
#pragma pop_macro("BLIT")
#pragma pop_macro("COPY_AREA")
#pragma pop_macro("DISABLE_CONVOLVE_OP")
#pragma pop_macro("DISABLE_LOOKUP_OP")
#pragma pop_macro("DISABLE_RESCALE_OP")
#pragma pop_macro("DISPOSE_CONFIG")
#pragma pop_macro("DISPOSE_SURFACE")
#pragma pop_macro("DRAW_AAPARALLELOGRAM")
#pragma pop_macro("DRAW_GLYPH_LIST")
#pragma pop_macro("DRAW_LINE")
#pragma pop_macro("DRAW_PARALLELOGRAM")
#pragma pop_macro("DRAW_PIXEL")
#pragma pop_macro("DRAW_POLY")
#pragma pop_macro("DRAW_RECT")
#pragma pop_macro("DRAW_SCANLINES")
#pragma pop_macro("ENABLE_CONVOLVE_OP")
#pragma pop_macro("ENABLE_LOOKUP_OP")
#pragma pop_macro("ENABLE_RESCALE_OP")
#pragma pop_macro("END_SHAPE_CLIP")
#pragma pop_macro("FILL_AAPARALLELOGRAM")
#pragma pop_macro("FILL_PARALLELOGRAM")
#pragma pop_macro("FILL_RECT")
#pragma pop_macro("FILL_SPANS")
#pragma pop_macro("FLUSH_SURFACE")
#pragma pop_macro("INVALIDATE_CONTEXT")
#pragma pop_macro("MASK_BLIT")
#pragma pop_macro("MASK_FILL")
#pragma pop_macro("NOOP")
#pragma pop_macro("RESET_CLIP")
#pragma pop_macro("RESET_COMPOSITE")
#pragma pop_macro("RESET_PAINT")
#pragma pop_macro("RESET_TRANSFORM")
#pragma pop_macro("RESTORE_DEVICES")
#pragma pop_macro("SET_ALPHA_COMPOSITE")
#pragma pop_macro("SET_COLOR")
#pragma pop_macro("SET_GRADIENT_PAINT")
#pragma pop_macro("SET_LINEAR_GRADIENT_PAINT")
#pragma pop_macro("SET_RADIAL_GRADIENT_PAINT")
#pragma pop_macro("SET_RECT_CLIP")
#pragma pop_macro("SET_SCRATCH_SURFACE")
#pragma pop_macro("SET_SHAPE_CLIP_SPANS")
#pragma pop_macro("SET_SURFACES")
#pragma pop_macro("SET_TEXTURE_PAINT")
#pragma pop_macro("SET_TRANSFORM")
#pragma pop_macro("SET_XOR_COMPOSITE")
#pragma pop_macro("SURFACE_TO_SW_BLIT")
#pragma pop_macro("SWAP_BUFFERS")
#pragma pop_macro("SYNC")

#endif // _sun_java2d_pipe_BufferedOpCodes_h_