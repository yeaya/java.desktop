#include <javax/swing/plaf/nimbus/ImageScalingHelper.h>

#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/nimbus/ImageScalingHelper$PaintType.h>
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

using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageScalingHelper$PaintType = ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _ImageScalingHelper_FieldInfo_[] = {
	{"EMPTY_INSETS", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageScalingHelper, EMPTY_INSETS)},
	{"PAINT_TOP_LEFT", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_TOP_LEFT)},
	{"PAINT_TOP", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_TOP)},
	{"PAINT_TOP_RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_TOP_RIGHT)},
	{"PAINT_LEFT", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_LEFT)},
	{"PAINT_CENTER", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_CENTER)},
	{"PAINT_RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_RIGHT)},
	{"PAINT_BOTTOM_RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_BOTTOM_RIGHT)},
	{"PAINT_BOTTOM", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_BOTTOM)},
	{"PAINT_BOTTOM_LEFT", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_BOTTOM_LEFT)},
	{"PAINT_ALL", "I", nullptr, $STATIC | $FINAL, $constField(ImageScalingHelper, PAINT_ALL)},
	{}
};

$MethodInfo _ImageScalingHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImageScalingHelper::*)()>(&ImageScalingHelper::init$))},
	{"drawChunk", "(Ljava/awt/Image;Ljava/awt/Graphics;ZIIIIIIIIZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Image*,$Graphics*,bool,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool)>(&ImageScalingHelper::drawChunk))},
	{"drawImage", "(Ljava/awt/Image;Ljava/awt/Graphics;IIIIIIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Image*,$Graphics*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ImageScalingHelper::drawImage))},
	{"paint", "(Ljava/awt/Graphics;IIIILjava/awt/Image;Ljava/awt/Insets;Ljava/awt/Insets;Ljavax/swing/plaf/nimbus/ImageScalingHelper$PaintType;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,$Image*,$Insets*,$Insets*,$ImageScalingHelper$PaintType*,int32_t)>(&ImageScalingHelper::paint))},
	{}
};

$InnerClassInfo _ImageScalingHelper_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.ImageScalingHelper$PaintType", "javax.swing.plaf.nimbus.ImageScalingHelper", "PaintType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ImageScalingHelper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ImageScalingHelper",
	"java.lang.Object",
	nullptr,
	_ImageScalingHelper_FieldInfo_,
	_ImageScalingHelper_MethodInfo_,
	nullptr,
	nullptr,
	_ImageScalingHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.ImageScalingHelper$PaintType"
};

$Object* allocate$ImageScalingHelper($Class* clazz) {
	return $of($alloc(ImageScalingHelper));
}

$Insets* ImageScalingHelper::EMPTY_INSETS = nullptr;

void ImageScalingHelper::init$() {
}

void ImageScalingHelper::paint($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $Image* image, $Insets* sInsets$renamed, $Insets* dInsets$renamed, $ImageScalingHelper$PaintType* paintType, int32_t mask) {
	$init(ImageScalingHelper);
	$var($Insets, sInsets, sInsets$renamed);
	$var($Insets, dInsets, dInsets$renamed);
	bool var$0 = image == nullptr || $nc(image)->getWidth(nullptr) <= 0;
	if (var$0 || $nc(image)->getHeight(nullptr) <= 0) {
		return;
	}
	if (sInsets == nullptr) {
		$assign(sInsets, ImageScalingHelper::EMPTY_INSETS);
	}
	if (dInsets == nullptr) {
		$assign(dInsets, ImageScalingHelper::EMPTY_INSETS);
	}
	int32_t iw = $nc(image)->getWidth(nullptr);
	int32_t ih = image->getHeight(nullptr);
	$init($ImageScalingHelper$PaintType);
	if (paintType == $ImageScalingHelper$PaintType::CENTER) {
		$nc(g)->drawImage(image, x + (w - iw) / 2, y + (h - ih) / 2, nullptr);
	} else {
		if (paintType == $ImageScalingHelper$PaintType::TILE) {
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
			bool stretch = (paintType == $ImageScalingHelper$PaintType::PAINT9_STRETCH);
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_ALL)) != 0) {
				mask = (int32_t)((ImageScalingHelper::PAINT_ALL - 1) & (uint32_t)~mask);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_LEFT)) != 0) {
				drawChunk(image, g, stretch, x, y + dt, x + dl, y + h - db, 0, st, sl, ih - sb, false);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_TOP_LEFT)) != 0) {
				drawImage(image, g, x, y, x + dl, y + dt, 0, 0, sl, st);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_TOP)) != 0) {
				drawChunk(image, g, stretch, x + dl, y, x + w - dr, y + dt, sl, 0, iw - sr, st, true);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_TOP_RIGHT)) != 0) {
				drawImage(image, g, x + w - dr, y, x + w, y + dt, iw - sr, 0, iw, st);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_RIGHT)) != 0) {
				drawChunk(image, g, stretch, x + w - dr, y + dt, x + w, y + h - db, iw - sr, st, iw, ih - sb, false);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_BOTTOM_RIGHT)) != 0) {
				drawImage(image, g, x + w - dr, y + h - db, x + w, y + h, iw - sr, ih - sb, iw, ih);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_BOTTOM)) != 0) {
				drawChunk(image, g, stretch, x + dl, y + h - db, x + w - dr, y + h, sl, ih - sb, iw - sr, ih, true);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_BOTTOM_LEFT)) != 0) {
				drawImage(image, g, x, y + h - db, x + dl, y + h, 0, ih - sb, sl, ih);
			}
			if (((int32_t)(mask & (uint32_t)ImageScalingHelper::PAINT_CENTER)) != 0) {
				drawImage(image, g, x + dl, y + dt, x + w - dr, y + h - db, sl, st, iw - sr, ih - sb);
			}
		}
	}
}

void ImageScalingHelper::drawChunk($Image* image, $Graphics* g, bool stretch, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, bool xDirection) {
	$init(ImageScalingHelper);
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

void ImageScalingHelper::drawImage($Image* image, $Graphics* g, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2) {
	$init(ImageScalingHelper);
	if (dx2 - dx1 <= 0 || dy2 - dy1 <= 0 || sx2 - sx1 <= 0 || sy2 - sy1 <= 0) {
		return;
	}
	$nc(g)->drawImage(image, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, nullptr);
}

void clinit$ImageScalingHelper($Class* class$) {
	$assignStatic(ImageScalingHelper::EMPTY_INSETS, $new($Insets, 0, 0, 0, 0));
}

ImageScalingHelper::ImageScalingHelper() {
}

$Class* ImageScalingHelper::load$($String* name, bool initialize) {
	$loadClass(ImageScalingHelper, name, initialize, &_ImageScalingHelper_ClassInfo_, clinit$ImageScalingHelper, allocate$ImageScalingHelper);
	return class$;
}

$Class* ImageScalingHelper::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax