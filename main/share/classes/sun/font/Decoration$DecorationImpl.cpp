#include <sun/font/Decoration$DecorationImpl.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/Area.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/Decoration$Label.h>
#include <sun/font/Decoration.h>
#include <sun/font/Underline.h>
#include <jcpp.h>

#undef BLACK
#undef CAP_BUTT
#undef JOIN_MITER
#undef WHITE

using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $Area = ::java::awt::geom::Area;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $Decoration = ::sun::font::Decoration;
using $Decoration$Label = ::sun::font::Decoration$Label;
using $Underline = ::sun::font::Underline;

namespace sun {
	namespace font {

$FieldInfo _Decoration$DecorationImpl_FieldInfo_[] = {
	{"fgPaint", "Ljava/awt/Paint;", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, fgPaint)},
	{"bgPaint", "Ljava/awt/Paint;", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, bgPaint)},
	{"swapColors", "Z", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, swapColors)},
	{"strikethrough", "Z", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, strikethrough)},
	{"stdUnderline", "Lsun/font/Underline;", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, stdUnderline)},
	{"imUnderline", "Lsun/font/Underline;", nullptr, $PRIVATE, $field(Decoration$DecorationImpl, imUnderline)},
	{}
};

$MethodInfo _Decoration$DecorationImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Paint;Ljava/awt/Paint;ZZLsun/font/Underline;Lsun/font/Underline;)V", nullptr, 0, $method(static_cast<void(Decoration$DecorationImpl::*)($Paint*,$Paint*,bool,bool,$Underline*,$Underline*)>(&Decoration$DecorationImpl::init$))},
	{"areEqual", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&Decoration$DecorationImpl::areEqual))},
	{"drawTextAndDecorations", "(Lsun/font/Decoration$Label;Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC},
	{"drawTextAndEmbellishments", "(Lsun/font/Decoration$Label;Ljava/awt/Graphics2D;FF)V", nullptr, $PRIVATE, $method(static_cast<void(Decoration$DecorationImpl::*)($Decoration$Label*,$Graphics2D*,float,float)>(&Decoration$DecorationImpl::drawTextAndEmbellishments))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getOutline", "(Lsun/font/Decoration$Label;FF)Ljava/awt/Shape;", nullptr, 0},
	{"getUnderlineMaxY", "(Lsun/font/CoreMetrics;)F", nullptr, $PRIVATE, $method(static_cast<float(Decoration$DecorationImpl::*)($CoreMetrics*)>(&Decoration$DecorationImpl::getUnderlineMaxY))},
	{"getVisualBounds", "(Lsun/font/Decoration$Label;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Decoration$DecorationImpl_InnerClassesInfo_[] = {
	{"sun.font.Decoration$DecorationImpl", "sun.font.Decoration", "DecorationImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Decoration$DecorationImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.Decoration$DecorationImpl",
	"sun.font.Decoration",
	nullptr,
	_Decoration$DecorationImpl_FieldInfo_,
	_Decoration$DecorationImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Decoration$DecorationImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.Decoration"
};

$Object* allocate$Decoration$DecorationImpl($Class* clazz) {
	return $of($alloc(Decoration$DecorationImpl));
}

void Decoration$DecorationImpl::init$($Paint* foreground, $Paint* background, bool swapColors, bool strikethrough, $Underline* stdUnderline, $Underline* imUnderline) {
	$Decoration::init$();
	$set(this, fgPaint, nullptr);
	$set(this, bgPaint, nullptr);
	this->swapColors = false;
	this->strikethrough = false;
	$set(this, stdUnderline, nullptr);
	$set(this, imUnderline, nullptr);
	$set(this, fgPaint, foreground);
	$set(this, bgPaint, background);
	this->swapColors = swapColors;
	this->strikethrough = strikethrough;
	$set(this, stdUnderline, stdUnderline);
	$set(this, imUnderline, imUnderline);
}

bool Decoration$DecorationImpl::areEqual(Object$* lhs, Object$* rhs) {
	$init(Decoration$DecorationImpl);
	if (lhs == nullptr) {
		return rhs == nullptr;
	} else {
		return $nc($of(lhs))->equals(rhs);
	}
}

bool Decoration$DecorationImpl::equals(Object$* rhs) {
	if ($equals(rhs, this)) {
		return true;
	}
	if (rhs == nullptr) {
		return false;
	}
	$var(Decoration$DecorationImpl, other, nullptr);
	try {
		$assign(other, $cast(Decoration$DecorationImpl, rhs));
	} catch ($ClassCastException& e) {
		return false;
	}
	if (!(this->swapColors == $nc(other)->swapColors && this->strikethrough == other->strikethrough)) {
		return false;
	}
	if (!areEqual(this->stdUnderline, $nc(other)->stdUnderline)) {
		return false;
	}
	if (!areEqual(this->fgPaint, $nc(other)->fgPaint)) {
		return false;
	}
	if (!areEqual(this->bgPaint, $nc(other)->bgPaint)) {
		return false;
	}
	return areEqual(this->imUnderline, $nc(other)->imUnderline);
}

int32_t Decoration$DecorationImpl::hashCode() {
	int32_t hc = 1;
	if (this->strikethrough) {
		hc |= 2;
	}
	if (this->swapColors) {
		hc |= 4;
	}
	if (this->stdUnderline != nullptr) {
		hc += $nc($of(this->stdUnderline))->hashCode();
	}
	return hc;
}

float Decoration$DecorationImpl::getUnderlineMaxY($CoreMetrics* cm) {
	float maxY = (float)0;
	if (this->stdUnderline != nullptr) {
		float ulBottom = $nc(cm)->underlineOffset;
		ulBottom += $nc(this->stdUnderline)->getLowerDrawLimit(cm->underlineThickness);
		maxY = $Math::max(maxY, ulBottom);
	}
	if (this->imUnderline != nullptr) {
		float ulBottom = $nc(cm)->underlineOffset;
		ulBottom += $nc(this->imUnderline)->getLowerDrawLimit(cm->underlineThickness);
		maxY = $Math::max(maxY, ulBottom);
	}
	return maxY;
}

void Decoration$DecorationImpl::drawTextAndEmbellishments($Decoration$Label* label, $Graphics2D* g2d, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$nc(label)->handleDraw(g2d, x, y);
	if (!this->strikethrough && this->stdUnderline == nullptr && this->imUnderline == nullptr) {
		return;
	}
	float x1 = x;
	float x2 = x1 + (float)$nc($(label->getLogicalBounds()))->getWidth();
	$var($CoreMetrics, cm, label->getCoreMetrics());
	if (this->strikethrough) {
		$var($Stroke, savedStroke, $nc(g2d)->getStroke());
		g2d->setStroke($$new($BasicStroke, $nc(cm)->strikethroughThickness, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_MITER));
		float strikeY = y + $nc(cm)->strikethroughOffset;
		g2d->draw($$new($Line2D$Float, x1, strikeY, x2, strikeY));
		g2d->setStroke(savedStroke);
	}
	float ulOffset = $nc(cm)->underlineOffset;
	float ulThickness = cm->underlineThickness;
	if (this->stdUnderline != nullptr) {
		$nc(this->stdUnderline)->drawUnderline(g2d, ulThickness, x1, x2, y + ulOffset);
	}
	if (this->imUnderline != nullptr) {
		$nc(this->imUnderline)->drawUnderline(g2d, ulThickness, x1, x2, y + ulOffset);
	}
}

void Decoration$DecorationImpl::drawTextAndDecorations($Decoration$Label* label, $Graphics2D* g2d, float x, float y) {
	$useLocalCurrentObjectStackCache();
	if (this->fgPaint == nullptr && this->bgPaint == nullptr && this->swapColors == false) {
		drawTextAndEmbellishments(label, g2d, x, y);
	} else {
		$var($Paint, savedPaint, $nc(g2d)->getPaint());
		$var($Paint, foreground, nullptr);
		$var($Paint, background, nullptr);
		if (this->swapColors) {
			$assign(background, this->fgPaint == nullptr ? savedPaint : this->fgPaint);
			if (this->bgPaint == nullptr) {
				if ($instanceOf($Color, background)) {
					$var($Color, bg, $cast($Color, background));
					int32_t var$1 = 33 * $nc(bg)->getRed();
					int32_t var$0 = var$1 + 53 * bg->getGreen();
					int32_t brightness = var$0 + 14 * bg->getBlue();
					$assign(foreground, brightness > 18500 ? static_cast<$Paint*>($Color::BLACK) : static_cast<$Paint*>($Color::WHITE));
				} else {
					$init($Color);
					$assign(foreground, $Color::WHITE);
				}
			} else {
				$assign(foreground, this->bgPaint);
			}
		} else {
			$assign(foreground, this->fgPaint == nullptr ? savedPaint : this->fgPaint);
			$assign(background, this->bgPaint);
		}
		if (background != nullptr) {
			$var($Rectangle2D, bgArea, $nc(label)->getLogicalBounds());
			float var$2 = x + (float)$nc(bgArea)->getX();
			float var$3 = y + (float)bgArea->getY();
			float var$4 = (float)bgArea->getWidth();
			$assign(bgArea, $new($Rectangle2D$Float, var$2, var$3, var$4, (float)bgArea->getHeight()));
			g2d->setPaint(background);
			g2d->fill(bgArea);
		}
		g2d->setPaint(foreground);
		drawTextAndEmbellishments(label, g2d, x, y);
		g2d->setPaint(savedPaint);
	}
}

$Rectangle2D* Decoration$DecorationImpl::getVisualBounds($Decoration$Label* label) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, visBounds, $nc(label)->handleGetVisualBounds());
	if (this->swapColors || this->bgPaint != nullptr || this->strikethrough || this->stdUnderline != nullptr || this->imUnderline != nullptr) {
		float minX = (float)0;
		$var($Rectangle2D, lb, label->getLogicalBounds());
		float minY = (float)0;
		float maxY = (float)0;
		if (this->swapColors || this->bgPaint != nullptr) {
			minY = (float)$nc(lb)->getY();
			maxY = minY + (float)lb->getHeight();
		}
		maxY = $Math::max(maxY, getUnderlineMaxY($(label->getCoreMetrics())));
		$var($Rectangle2D, ab, $new($Rectangle2D$Float, minX, minY, (float)$nc(lb)->getWidth(), maxY - minY));
		$nc(visBounds)->add(ab);
	}
	return visBounds;
}

$Shape* Decoration$DecorationImpl::getOutline($Decoration$Label* label, float x, float y) {
	$useLocalCurrentObjectStackCache();
	if (!this->strikethrough && this->stdUnderline == nullptr && this->imUnderline == nullptr) {
		return $nc(label)->handleGetOutline(x, y);
	}
	$var($CoreMetrics, cm, $nc(label)->getCoreMetrics());
	float ulThickness = $nc(cm)->underlineThickness;
	float ulOffset = cm->underlineOffset;
	$var($Rectangle2D, lb, label->getLogicalBounds());
	float x1 = x;
	float x2 = x1 + (float)$nc(lb)->getWidth();
	$var($Area, area, nullptr);
	if (this->stdUnderline != nullptr) {
		$var($Shape, ul, $nc(this->stdUnderline)->getUnderlineShape(ulThickness, x1, x2, y + ulOffset));
		$assign(area, $new($Area, ul));
	}
	if (this->strikethrough) {
		$var($Stroke, stStroke, $new($BasicStroke, cm->strikethroughThickness, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_MITER));
		float shiftY = y + cm->strikethroughOffset;
		$var($Line2D, line, $new($Line2D$Float, x1, shiftY, x2, shiftY));
		$var($Area, slArea, $new($Area, $(stStroke->createStrokedShape(line))));
		if (area == nullptr) {
			$assign(area, slArea);
		} else {
			$nc(area)->add(slArea);
		}
	}
	if (this->imUnderline != nullptr) {
		$var($Shape, ul, $nc(this->imUnderline)->getUnderlineShape(ulThickness, x1, x2, y + ulOffset));
		$var($Area, ulArea, $new($Area, ul));
		if (area == nullptr) {
			$assign(area, ulArea);
		} else {
			$nc(area)->add(ulArea);
		}
	}
	$nc(area)->add($$new($Area, $(label->handleGetOutline(x, y))));
	return $new($GeneralPath, static_cast<$Shape*>(area));
}

$String* Decoration$DecorationImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Decoration::toString()));
	sb->append("["_s);
	if (this->fgPaint != nullptr) {
		sb->append($$str({"fgPaint: "_s, this->fgPaint}));
	}
	if (this->bgPaint != nullptr) {
		sb->append($$str({" bgPaint: "_s, this->bgPaint}));
	}
	if (this->swapColors) {
		sb->append(" swapColors: true"_s);
	}
	if (this->strikethrough) {
		sb->append(" strikethrough: true"_s);
	}
	if (this->stdUnderline != nullptr) {
		sb->append($$str({" stdUnderline: "_s, this->stdUnderline}));
	}
	if (this->imUnderline != nullptr) {
		sb->append($$str({" imUnderline: "_s, this->imUnderline}));
	}
	sb->append("]"_s);
	return sb->toString();
}

Decoration$DecorationImpl::Decoration$DecorationImpl() {
}

$Class* Decoration$DecorationImpl::load$($String* name, bool initialize) {
	$loadClass(Decoration$DecorationImpl, name, initialize, &_Decoration$DecorationImpl_ClassInfo_, allocate$Decoration$DecorationImpl);
	return class$;
}

$Class* Decoration$DecorationImpl::class$ = nullptr;

	} // font
} // sun