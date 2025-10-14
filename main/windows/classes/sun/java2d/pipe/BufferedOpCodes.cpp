#include <sun/java2d/pipe/BufferedOpCodes.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BEGIN_SHAPE_CLIP
#undef BLIT
#undef COPY_AREA
#undef DISABLE_CONVOLVE_OP
#undef DISABLE_LOOKUP_OP
#undef DISABLE_RESCALE_OP
#undef DISPOSE_CONFIG
#undef DISPOSE_SURFACE
#undef DRAW_AAPARALLELOGRAM
#undef DRAW_GLYPH_LIST
#undef DRAW_LINE
#undef DRAW_PARALLELOGRAM
#undef DRAW_PIXEL
#undef DRAW_POLY
#undef DRAW_RECT
#undef DRAW_SCANLINES
#undef ENABLE_CONVOLVE_OP
#undef ENABLE_LOOKUP_OP
#undef ENABLE_RESCALE_OP
#undef END_SHAPE_CLIP
#undef FILL_AAPARALLELOGRAM
#undef FILL_PARALLELOGRAM
#undef FILL_RECT
#undef FILL_SPANS
#undef FLUSH_SURFACE
#undef INVALIDATE_CONTEXT
#undef MASK_BLIT
#undef MASK_FILL
#undef NOOP
#undef RESET_CLIP
#undef RESET_COMPOSITE
#undef RESET_PAINT
#undef RESET_TRANSFORM
#undef RESTORE_DEVICES
#undef SET_ALPHA_COMPOSITE
#undef SET_COLOR
#undef SET_GRADIENT_PAINT
#undef SET_LINEAR_GRADIENT_PAINT
#undef SET_RADIAL_GRADIENT_PAINT
#undef SET_RECT_CLIP
#undef SET_SCRATCH_SURFACE
#undef SET_SHAPE_CLIP_SPANS
#undef SET_SURFACES
#undef SET_TEXTURE_PAINT
#undef SET_TRANSFORM
#undef SET_XOR_COMPOSITE
#undef SURFACE_TO_SW_BLIT
#undef SWAP_BUFFERS
#undef SYNC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _BufferedOpCodes_FieldInfo_[] = {
	{"DRAW_LINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DRAW_LINE)},
	{"DRAW_RECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DRAW_RECT)},
	{"DRAW_POLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DRAW_POLY)},
	{"DRAW_PIXEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DRAW_PIXEL)},
	{"DRAW_SCANLINES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DRAW_SCANLINES)},
	{"DRAW_PARALLELOGRAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DRAW_PARALLELOGRAM)},
	{"DRAW_AAPARALLELOGRAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DRAW_AAPARALLELOGRAM)},
	{"FILL_RECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, FILL_RECT)},
	{"FILL_SPANS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, FILL_SPANS)},
	{"FILL_PARALLELOGRAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, FILL_PARALLELOGRAM)},
	{"FILL_AAPARALLELOGRAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, FILL_AAPARALLELOGRAM)},
	{"COPY_AREA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, COPY_AREA)},
	{"BLIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, BLIT)},
	{"MASK_FILL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, MASK_FILL)},
	{"MASK_BLIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, MASK_BLIT)},
	{"SURFACE_TO_SW_BLIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SURFACE_TO_SW_BLIT)},
	{"DRAW_GLYPH_LIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DRAW_GLYPH_LIST)},
	{"SET_RECT_CLIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_RECT_CLIP)},
	{"BEGIN_SHAPE_CLIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, BEGIN_SHAPE_CLIP)},
	{"SET_SHAPE_CLIP_SPANS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_SHAPE_CLIP_SPANS)},
	{"END_SHAPE_CLIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, END_SHAPE_CLIP)},
	{"RESET_CLIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, RESET_CLIP)},
	{"SET_ALPHA_COMPOSITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_ALPHA_COMPOSITE)},
	{"SET_XOR_COMPOSITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_XOR_COMPOSITE)},
	{"RESET_COMPOSITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, RESET_COMPOSITE)},
	{"SET_TRANSFORM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_TRANSFORM)},
	{"RESET_TRANSFORM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, RESET_TRANSFORM)},
	{"SET_SURFACES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_SURFACES)},
	{"SET_SCRATCH_SURFACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_SCRATCH_SURFACE)},
	{"FLUSH_SURFACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, FLUSH_SURFACE)},
	{"DISPOSE_SURFACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DISPOSE_SURFACE)},
	{"DISPOSE_CONFIG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DISPOSE_CONFIG)},
	{"INVALIDATE_CONTEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, INVALIDATE_CONTEXT)},
	{"SYNC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SYNC)},
	{"RESTORE_DEVICES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, RESTORE_DEVICES)},
	{"SWAP_BUFFERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SWAP_BUFFERS)},
	{"NOOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, NOOP)},
	{"RESET_PAINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, RESET_PAINT)},
	{"SET_COLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_COLOR)},
	{"SET_GRADIENT_PAINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_GRADIENT_PAINT)},
	{"SET_LINEAR_GRADIENT_PAINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_LINEAR_GRADIENT_PAINT)},
	{"SET_RADIAL_GRADIENT_PAINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_RADIAL_GRADIENT_PAINT)},
	{"SET_TEXTURE_PAINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, SET_TEXTURE_PAINT)},
	{"ENABLE_CONVOLVE_OP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, ENABLE_CONVOLVE_OP)},
	{"DISABLE_CONVOLVE_OP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DISABLE_CONVOLVE_OP)},
	{"ENABLE_RESCALE_OP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, ENABLE_RESCALE_OP)},
	{"DISABLE_RESCALE_OP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DISABLE_RESCALE_OP)},
	{"ENABLE_LOOKUP_OP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, ENABLE_LOOKUP_OP)},
	{"DISABLE_LOOKUP_OP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BufferedOpCodes, DISABLE_LOOKUP_OP)},
	{}
};

$MethodInfo _BufferedOpCodes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BufferedOpCodes::*)()>(&BufferedOpCodes::init$))},
	{}
};

$ClassInfo _BufferedOpCodes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.pipe.BufferedOpCodes",
	"java.lang.Object",
	nullptr,
	_BufferedOpCodes_FieldInfo_,
	_BufferedOpCodes_MethodInfo_
};

$Object* allocate$BufferedOpCodes($Class* clazz) {
	return $of($alloc(BufferedOpCodes));
}

void BufferedOpCodes::init$() {
}

BufferedOpCodes::BufferedOpCodes() {
}

$Class* BufferedOpCodes::load$($String* name, bool initialize) {
	$loadClass(BufferedOpCodes, name, initialize, &_BufferedOpCodes_ClassInfo_, allocate$BufferedOpCodes);
	return class$;
}

$Class* BufferedOpCodes::class$ = nullptr;

		} // pipe
	} // java2d
} // sun