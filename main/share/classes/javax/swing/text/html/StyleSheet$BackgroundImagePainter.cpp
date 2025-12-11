#include <javax/swing/text/html/StyleSheet$BackgroundImagePainter.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$BackgroundPosition.h>
#include <javax/swing/text/html/CSS$Value.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef BACKGROUND_POSITION
#undef BACKGROUND_REPEAT
#undef BACKGROUND_REPEAT_X
#undef BACKGROUND_REPEAT_Y

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$BackgroundPosition = ::javax::swing::text::html::CSS$BackgroundPosition;
using $CSS$Value = ::javax::swing::text::html::CSS$Value;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$BackgroundImagePainter_FieldInfo_[] = {
	{"backgroundImage", "Ljavax/swing/ImageIcon;", nullptr, 0, $field(StyleSheet$BackgroundImagePainter, backgroundImage)},
	{"hPosition", "F", nullptr, 0, $field(StyleSheet$BackgroundImagePainter, hPosition)},
	{"vPosition", "F", nullptr, 0, $field(StyleSheet$BackgroundImagePainter, vPosition)},
	{"flags", "S", nullptr, 0, $field(StyleSheet$BackgroundImagePainter, flags)},
	{"paintX", "I", nullptr, $PRIVATE, $field(StyleSheet$BackgroundImagePainter, paintX)},
	{"paintY", "I", nullptr, $PRIVATE, $field(StyleSheet$BackgroundImagePainter, paintY)},
	{"paintMaxX", "I", nullptr, $PRIVATE, $field(StyleSheet$BackgroundImagePainter, paintMaxX)},
	{"paintMaxY", "I", nullptr, $PRIVATE, $field(StyleSheet$BackgroundImagePainter, paintMaxY)},
	{}
};

$MethodInfo _StyleSheet$BackgroundImagePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/CSS;Ljavax/swing/text/html/StyleSheet;)V", nullptr, 0, $method(static_cast<void(StyleSheet$BackgroundImagePainter::*)($AttributeSet*,$CSS*,$StyleSheet*)>(&StyleSheet$BackgroundImagePainter::init$))},
	{"paint", "(Ljava/awt/Graphics;FFFFLjavax/swing/text/View;)V", nullptr, 0},
	{"updatePaintCoordinates", "(Ljava/awt/Rectangle;II)Z", nullptr, $PRIVATE, $method(static_cast<bool(StyleSheet$BackgroundImagePainter::*)($Rectangle*,int32_t,int32_t)>(&StyleSheet$BackgroundImagePainter::updatePaintCoordinates))},
	{}
};

$InnerClassInfo _StyleSheet$BackgroundImagePainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$BackgroundImagePainter", "javax.swing.text.html.StyleSheet", "BackgroundImagePainter", $STATIC},
	{}
};

$ClassInfo _StyleSheet$BackgroundImagePainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.StyleSheet$BackgroundImagePainter",
	"java.lang.Object",
	"java.io.Serializable",
	_StyleSheet$BackgroundImagePainter_FieldInfo_,
	_StyleSheet$BackgroundImagePainter_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$BackgroundImagePainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$BackgroundImagePainter($Class* clazz) {
	return $of($alloc(StyleSheet$BackgroundImagePainter));
}

void StyleSheet$BackgroundImagePainter::init$($AttributeSet* a, $CSS* css, $StyleSheet* ss) {
	$useLocalCurrentObjectStackCache();
	$set(this, backgroundImage, $nc(ss)->getBackgroundImage(a));
	$init($CSS$Attribute);
	$var($CSS$BackgroundPosition, pos, $cast($CSS$BackgroundPosition, $nc(a)->getAttribute($CSS$Attribute::BACKGROUND_POSITION)));
	if (pos != nullptr) {
		this->hPosition = pos->getHorizontalPosition();
		this->vPosition = pos->getVerticalPosition();
		if (pos->isHorizontalPositionRelativeToSize()) {
			this->flags |= 4;
		} else if (pos->isHorizontalPositionRelativeToFontSize()) {
			this->hPosition *= $CSS::getFontSize(a, 12, ss);
		}
		if (pos->isVerticalPositionRelativeToSize()) {
			this->flags |= 8;
		} else if (pos->isVerticalPositionRelativeToFontSize()) {
			this->vPosition *= $CSS::getFontSize(a, 12, ss);
		}
	}
	$var($CSS$Value, repeats, $cast($CSS$Value, a->getAttribute($CSS$Attribute::BACKGROUND_REPEAT)));
	$init($CSS$Value);
	if (repeats == nullptr || repeats == $CSS$Value::BACKGROUND_REPEAT) {
		this->flags |= 3;
	} else {
		if (repeats == $CSS$Value::BACKGROUND_REPEAT_X) {
			this->flags |= 1;
		} else {
			if (repeats == $CSS$Value::BACKGROUND_REPEAT_Y) {
				this->flags |= 2;
			}
		}
	}
}

void StyleSheet$BackgroundImagePainter::paint($Graphics* g, float x, float y, float w, float h, $View* v) {
	$var($Rectangle, clip, $nc(g)->getClipRect());
	if (clip != nullptr) {
		g->clipRect($cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h));
	}
	if (((int32_t)(this->flags & (uint32_t)3)) == 0) {
		int32_t width = $nc(this->backgroundImage)->getIconWidth();
		int32_t height = $nc(this->backgroundImage)->getIconWidth();
		if (((int32_t)(this->flags & (uint32_t)4)) == 4) {
			this->paintX = $cast(int32_t, (x + w * this->hPosition - (float)width * this->hPosition));
		} else {
			this->paintX = $cast(int32_t, x) + $cast(int32_t, this->hPosition);
		}
		if (((int32_t)(this->flags & (uint32_t)8)) == 8) {
			this->paintY = $cast(int32_t, (y + h * this->vPosition - (float)height * this->vPosition));
		} else {
			this->paintY = $cast(int32_t, y) + $cast(int32_t, this->vPosition);
		}
		if (clip == nullptr || !((this->paintX + width <= $nc(clip)->x) || (this->paintY + height <= $nc(clip)->y) || (this->paintX >= $nc(clip)->x + clip->width) || (this->paintY >= $nc(clip)->y + clip->height))) {
			$nc(this->backgroundImage)->paintIcon(nullptr, g, this->paintX, this->paintY);
		}
	} else {
		int32_t width = $nc(this->backgroundImage)->getIconWidth();
		int32_t height = $nc(this->backgroundImage)->getIconHeight();
		if (width > 0 && height > 0) {
			this->paintX = $cast(int32_t, x);
			this->paintY = $cast(int32_t, y);
			this->paintMaxX = $cast(int32_t, (x + w));
			this->paintMaxY = $cast(int32_t, (y + h));
			if (updatePaintCoordinates(clip, width, height)) {
				while (this->paintX < this->paintMaxX) {
					int32_t ySpot = this->paintY;
					while (ySpot < this->paintMaxY) {
						$nc(this->backgroundImage)->paintIcon(nullptr, g, this->paintX, ySpot);
						ySpot += height;
					}
					this->paintX += width;
				}
			}
		}
	}
	if (clip != nullptr) {
		g->setClip(clip->x, clip->y, clip->width, clip->height);
	}
}

bool StyleSheet$BackgroundImagePainter::updatePaintCoordinates($Rectangle* clip, int32_t width, int32_t height) {
	if (((int32_t)(this->flags & (uint32_t)3)) == 1) {
		this->paintMaxY = this->paintY + 1;
	} else if (((int32_t)(this->flags & (uint32_t)3)) == 2) {
		this->paintMaxX = this->paintX + 1;
	}
	if (clip != nullptr) {
		if (((int32_t)(this->flags & (uint32_t)3)) == 1 && ((this->paintY + height <= clip->y) || (this->paintY > clip->y + clip->height))) {
			return false;
		}
		if (((int32_t)(this->flags & (uint32_t)3)) == 2 && ((this->paintX + width <= clip->x) || (this->paintX > clip->x + clip->width))) {
			return false;
		}
		if (((int32_t)(this->flags & (uint32_t)1)) == 1) {
			if ((clip->x + clip->width) < this->paintMaxX) {
				if ($mod((clip->x + clip->width - this->paintX), width) == 0) {
					this->paintMaxX = clip->x + clip->width;
				} else {
					this->paintMaxX = ($div((clip->x + clip->width - this->paintX), width) + 1) * width + this->paintX;
				}
			}
			if (clip->x > this->paintX) {
				this->paintX = $div((clip->x - this->paintX), width) * width + this->paintX;
			}
		}
		if (((int32_t)(this->flags & (uint32_t)2)) == 2) {
			if ((clip->y + clip->height) < this->paintMaxY) {
				if ($mod((clip->y + clip->height - this->paintY), height) == 0) {
					this->paintMaxY = clip->y + clip->height;
				} else {
					this->paintMaxY = ($div((clip->y + clip->height - this->paintY), height) + 1) * height + this->paintY;
				}
			}
			if (clip->y > this->paintY) {
				this->paintY = $div((clip->y - this->paintY), height) * height + this->paintY;
			}
		}
	}
	return true;
}

StyleSheet$BackgroundImagePainter::StyleSheet$BackgroundImagePainter() {
}

$Class* StyleSheet$BackgroundImagePainter::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$BackgroundImagePainter, name, initialize, &_StyleSheet$BackgroundImagePainter_ClassInfo_, allocate$StyleSheet$BackgroundImagePainter);
	return class$;
}

$Class* StyleSheet$BackgroundImagePainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax