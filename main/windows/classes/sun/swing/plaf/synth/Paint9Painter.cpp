#include <sun/swing/plaf/synth/Paint9Painter.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/CachedPainter.h>
#include <sun/swing/plaf/synth/Paint9Painter$PaintType.h>
#include <jcpp.h>

#undef CENTER
#undef EMPTY_INSETS
#undef PAINT9_STRETCH
#undef PAINT_ALL
#undef PAINT_BOTTOM
#undef PAINT_BOTTOM_LEFT
#undef PAINT_BOTTOM_RIGHT
#undef PAINT_CENTER
#undef PAINT_LEFT
#undef PAINT_RIGHT
#undef PAINT_TOP
#undef PAINT_TOP_LEFT
#undef PAINT_TOP_RIGHT
#undef TILE
#undef TRANSLUCENT
#undef TYPE_INT_ARGB

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CachedPainter = ::sun::swing::CachedPainter;
using $Paint9Painter$PaintType = ::sun::swing::plaf::synth::Paint9Painter$PaintType;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _Paint9Painter_FieldInfo_[] = {
	{"EMPTY_INSETS", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Paint9Painter, EMPTY_INSETS)},
	{"PAINT_TOP_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_TOP_LEFT)},
	{"PAINT_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_TOP)},
	{"PAINT_TOP_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_TOP_RIGHT)},
	{"PAINT_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_LEFT)},
	{"PAINT_CENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_CENTER)},
	{"PAINT_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_RIGHT)},
	{"PAINT_BOTTOM_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_BOTTOM_RIGHT)},
	{"PAINT_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_BOTTOM)},
	{"PAINT_BOTTOM_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_BOTTOM_LEFT)},
	{"PAINT_ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Paint9Painter, PAINT_ALL)},
	{}
};

$MethodInfo _Paint9Painter_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Paint9Painter::*)(int32_t)>(&Paint9Painter::init$))},
	{"createImage", "(Ljava/awt/Component;IILjava/awt/GraphicsConfiguration;[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PROTECTED},
	{"drawChunk", "(Ljava/awt/Image;Ljava/awt/Graphics;ZIIIIIIIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(Paint9Painter::*)($Image*,$Graphics*,bool,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool)>(&Paint9Painter::drawChunk))},
	{"drawImage", "(Ljava/awt/Image;Ljava/awt/Graphics;IIIIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(Paint9Painter::*)($Image*,$Graphics*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&Paint9Painter::drawImage))},
	{"paint", "(Ljava/awt/Component;Ljava/awt/Graphics;IIIILjava/awt/Image;Ljava/awt/Insets;Ljava/awt/Insets;Lsun/swing/plaf/synth/Paint9Painter$PaintType;I)V", nullptr, $PUBLIC},
	{"paint9", "(Ljava/awt/Graphics;IIIILjava/awt/Image;Ljava/awt/Insets;Ljava/awt/Insets;Lsun/swing/plaf/synth/Paint9Painter$PaintType;I)V", nullptr, $PROTECTED},
	{"paintToImage", "(Ljava/awt/Component;Ljava/awt/Image;Ljava/awt/Graphics;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"validImage", "(Ljava/awt/Image;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Image*)>(&Paint9Painter::validImage))},
	{}
};

$InnerClassInfo _Paint9Painter_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.Paint9Painter$PaintType", "sun.swing.plaf.synth.Paint9Painter", "PaintType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Paint9Painter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.Paint9Painter",
	"sun.swing.CachedPainter",
	nullptr,
	_Paint9Painter_FieldInfo_,
	_Paint9Painter_MethodInfo_,
	nullptr,
	nullptr,
	_Paint9Painter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.Paint9Painter$PaintType"
};

$Object* allocate$Paint9Painter($Class* clazz) {
	return $of($alloc(Paint9Painter));
}

$Insets* Paint9Painter::EMPTY_INSETS = nullptr;

bool Paint9Painter::validImage($Image* image) {
	$init(Paint9Painter);
	bool var$0 = image != nullptr && image->getWidth(nullptr) > 0;
	return (var$0 && image->getHeight(nullptr) > 0);
}

void Paint9Painter::init$(int32_t cacheCount) {
	$CachedPainter::init$(cacheCount);
}

void Paint9Painter::paint($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Image* source, $Insets* sInsets, $Insets* dInsets, $Paint9Painter$PaintType* type, int32_t mask) {
	if (source == nullptr) {
		return;
	}
	$CachedPainter::paint(c, g, x, y, w, h, $$new($ObjectArray, {
		$of(source),
		$of(sInsets),
		$of(dInsets),
		$of(type),
		$($of($Integer::valueOf(mask)))
	}));
}

void Paint9Painter::paintToImage($Component* c, $Image* destImage, $Graphics* g, int32_t w, int32_t h, $ObjectArray* args) {
	int32_t argIndex = 0;
	while (argIndex < $nc(args)->length) {
		$var($Image, image, $cast($Image, args->get(argIndex++)));
		$var($Insets, sInsets, $cast($Insets, args->get(argIndex++)));
		$var($Insets, dInsets, $cast($Insets, args->get(argIndex++)));
		$Paint9Painter$PaintType* type = $cast($Paint9Painter$PaintType, args->get(argIndex++));
		int32_t mask = $nc(($cast($Integer, args->get(argIndex++))))->intValue();
		paint9(g, 0, 0, w, h, image, sInsets, dInsets, type, mask);
	}
}

void Paint9Painter::paint9($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Image* image, $Insets* sInsets$renamed, $Insets* dInsets$renamed, $Paint9Painter$PaintType* type, int32_t componentMask) {
	$var($Insets, sInsets, sInsets$renamed);
	$var($Insets, dInsets, dInsets$renamed);
	if (!validImage(image)) {
		return;
	}
	if (sInsets == nullptr) {
		$assign(sInsets, Paint9Painter::EMPTY_INSETS);
	}
	if (dInsets == nullptr) {
		$assign(dInsets, Paint9Painter::EMPTY_INSETS);
	}
	int32_t iw = $nc(image)->getWidth(nullptr);
	int32_t ih = image->getHeight(nullptr);
	$init($Paint9Painter$PaintType);
	if (type == $Paint9Painter$PaintType::CENTER) {
		$nc(g)->drawImage(image, x + (w - iw) / 2, y + (h - ih) / 2, nullptr);
	} else {
		if (type == $Paint9Painter$PaintType::TILE) {
			int32_t lastIY = 0;
			{
				int32_t yCounter = y;
				int32_t maxY = y + h;
				for (; yCounter < maxY; yCounter += (ih - lastIY), lastIY = 0) {
					int32_t lastIX = 0;
					{
						int32_t xCounter = x;
						int32_t maxX = x + w;
						for (; xCounter < maxX; xCounter += (iw - lastIX), lastIX = 0) {
							int32_t dx2 = $Math::min(maxX, xCounter + iw - lastIX);
							int32_t dy2 = $Math::min(maxY, yCounter + ih - lastIY);
							$nc(g)->drawImage(image, xCounter, yCounter, dx2, dy2, lastIX, lastIY, lastIX + dx2 - xCounter, lastIY + dy2 - yCounter, nullptr);
						}
					}
				}
			}
		} else {
			int32_t st = $nc(sInsets)->top;
			int32_t sl = sInsets->left;
			int32_t sb = sInsets->bottom;
			int32_t sr = sInsets->right;
			int32_t dt = $nc(dInsets)->top;
			int32_t dl = dInsets->left;
			int32_t db = dInsets->bottom;
			int32_t dr = dInsets->right;
			if (st + sb > ih) {
				db = (dt = (sb = (st = $Math::max(0, ih / 2))));
			}
			if (sl + sr > iw) {
				dl = (dr = (sl = (sr = $Math::max(0, iw / 2))));
			}
			if (dt + db > h) {
				dt = (db = $Math::max(0, h / 2 - 1));
			}
			if (dl + dr > w) {
				dl = (dr = $Math::max(0, w / 2 - 1));
			}
			bool stretch = (type == $Paint9Painter$PaintType::PAINT9_STRETCH);
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_ALL)) != 0) {
				componentMask = (int32_t)((Paint9Painter::PAINT_ALL - 1) & (uint32_t)~componentMask);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_LEFT)) != 0) {
				drawChunk(image, g, stretch, x, y + dt, x + dl, y + h - db, 0, st, sl, ih - sb, false);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_TOP_LEFT)) != 0) {
				drawImage(image, g, x, y, x + dl, y + dt, 0, 0, sl, st);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_TOP)) != 0) {
				drawChunk(image, g, stretch, x + dl, y, x + w - dr, y + dt, sl, 0, iw - sr, st, true);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_TOP_RIGHT)) != 0) {
				drawImage(image, g, x + w - dr, y, x + w, y + dt, iw - sr, 0, iw, st);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_RIGHT)) != 0) {
				drawChunk(image, g, stretch, x + w - dr, y + dt, x + w, y + h - db, iw - sr, st, iw, ih - sb, false);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_BOTTOM_RIGHT)) != 0) {
				drawImage(image, g, x + w - dr, y + h - db, x + w, y + h, iw - sr, ih - sb, iw, ih);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_BOTTOM)) != 0) {
				drawChunk(image, g, stretch, x + dl, y + h - db, x + w - dr, y + h, sl, ih - sb, iw - sr, ih, true);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_BOTTOM_LEFT)) != 0) {
				drawImage(image, g, x, y + h - db, x + dl, y + h, 0, ih - sb, sl, ih);
			}
			if (((int32_t)(componentMask & (uint32_t)Paint9Painter::PAINT_CENTER)) != 0) {
				drawImage(image, g, x + dl, y + dt, x + w - dr, y + h - db, sl, st, iw - sr, ih - sb);
			}
		}
	}
}

void Paint9Painter::drawImage($Image* image, $Graphics* g, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2) {
	if (dx2 - dx1 <= 0 || dy2 - dy1 <= 0 || sx2 - sx1 <= 0 || sy2 - sy1 <= 0) {
		return;
	}
	$nc(g)->drawImage(image, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, nullptr);
}

void Paint9Painter::drawChunk($Image* image, $Graphics* g, bool stretch, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, bool xDirection) {
	if (dx2 - dx1 <= 0 || dy2 - dy1 <= 0 || sx2 - sx1 <= 0 || sy2 - sy1 <= 0) {
		return;
	}
	if (stretch) {
		$nc(g)->drawImage(image, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, nullptr);
	} else {
		int32_t xSize = sx2 - sx1;
		int32_t ySize = sy2 - sy1;
		int32_t deltaX = 0;
		int32_t deltaY = 0;
		if (xDirection) {
			deltaX = xSize;
			deltaY = 0;
		} else {
			deltaX = 0;
			deltaY = ySize;
		}
		while (dx1 < dx2 && dy1 < dy2) {
			int32_t newDX2 = $Math::min(dx2, dx1 + xSize);
			int32_t newDY2 = $Math::min(dy2, dy1 + ySize);
			$nc(g)->drawImage(image, dx1, dy1, newDX2, newDY2, sx1, sy1, sx1 + newDX2 - dx1, sy1 + newDY2 - dy1, nullptr);
			dx1 += deltaX;
			dy1 += deltaY;
		}
	}
}

$Image* Paint9Painter::createImage($Component* c, int32_t w, int32_t h, $GraphicsConfiguration* config, $ObjectArray* args) {
	if (config == nullptr) {
		return $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB);
	}
	return $nc(config)->createCompatibleImage(w, h, $Transparency::TRANSLUCENT);
}

void clinit$Paint9Painter($Class* class$) {
	$assignStatic(Paint9Painter::EMPTY_INSETS, $new($Insets, 0, 0, 0, 0));
}

Paint9Painter::Paint9Painter() {
}

$Class* Paint9Painter::load$($String* name, bool initialize) {
	$loadClass(Paint9Painter, name, initialize, &_Paint9Painter_ClassInfo_, clinit$Paint9Painter, allocate$Paint9Painter);
	return class$;
}

$Class* Paint9Painter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun