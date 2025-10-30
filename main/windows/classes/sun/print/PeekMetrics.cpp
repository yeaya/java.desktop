#include <sun/print/PeekMetrics.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <jcpp.h>

#undef SRC
#undef SRC_OVER

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $TextLayout = ::java::awt::font::TextLayout;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$FieldInfo _PeekMetrics_FieldInfo_[] = {
	{"mHasNonSolidColors", "Z", nullptr, $PRIVATE, $field(PeekMetrics, mHasNonSolidColors)},
	{"mHasCompositing", "Z", nullptr, $PRIVATE, $field(PeekMetrics, mHasCompositing)},
	{"mHasText", "Z", nullptr, $PRIVATE, $field(PeekMetrics, mHasText)},
	{"mHasImages", "Z", nullptr, $PRIVATE, $field(PeekMetrics, mHasImages)},
	{}
};

$MethodInfo _PeekMetrics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PeekMetrics::*)()>(&PeekMetrics::init$))},
	{"checkAlpha", "(Ljava/awt/Composite;)V", nullptr, $PRIVATE, $method(static_cast<void(PeekMetrics::*)($Composite*)>(&PeekMetrics::checkAlpha))},
	{"checkDrawingMode", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(PeekMetrics::*)($Graphics2D*)>(&PeekMetrics::checkDrawingMode))},
	{"checkPaint", "(Ljava/awt/Paint;)V", nullptr, $PRIVATE, $method(static_cast<void(PeekMetrics::*)($Paint*)>(&PeekMetrics::checkPaint))},
	{"clear", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC},
	{"draw", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Graphics2D;Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Graphics2D;Ljava/awt/image/RenderedImage;)V", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Graphics2D;Ljava/awt/image/renderable/RenderableImage;)V", nullptr, $PUBLIC},
	{"drawText", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC},
	{"drawText", "(Ljava/awt/Graphics2D;Ljava/awt/font/TextLayout;)V", nullptr, $PUBLIC},
	{"fill", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC},
	{"hasCompositing", "()Z", nullptr, $PUBLIC},
	{"hasImages", "()Z", nullptr, $PUBLIC},
	{"hasNonSolidColors", "()Z", nullptr, $PUBLIC},
	{"hasText", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PeekMetrics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PeekMetrics",
	"java.lang.Object",
	nullptr,
	_PeekMetrics_FieldInfo_,
	_PeekMetrics_MethodInfo_
};

$Object* allocate$PeekMetrics($Class* clazz) {
	return $of($alloc(PeekMetrics));
}

void PeekMetrics::init$() {
}

bool PeekMetrics::hasNonSolidColors() {
	return this->mHasNonSolidColors;
}

bool PeekMetrics::hasCompositing() {
	return this->mHasCompositing;
}

bool PeekMetrics::hasText() {
	return this->mHasText;
}

bool PeekMetrics::hasImages() {
	return this->mHasImages;
}

void PeekMetrics::fill($Graphics2D* g) {
	checkDrawingMode(g);
}

void PeekMetrics::draw($Graphics2D* g) {
	checkDrawingMode(g);
}

void PeekMetrics::clear($Graphics2D* g) {
	checkPaint($($nc(g)->getBackground()));
}

void PeekMetrics::drawText($Graphics2D* g) {
	this->mHasText = true;
	checkDrawingMode(g);
}

void PeekMetrics::drawText($Graphics2D* g, $TextLayout* textLayout) {
	this->mHasText = true;
	checkDrawingMode(g);
}

void PeekMetrics::drawImage($Graphics2D* g, $Image* image) {
	this->mHasImages = true;
}

void PeekMetrics::drawImage($Graphics2D* g, $RenderedImage* image) {
	this->mHasImages = true;
}

void PeekMetrics::drawImage($Graphics2D* g, $RenderableImage* image) {
	this->mHasImages = true;
}

void PeekMetrics::checkDrawingMode($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	checkPaint($($nc(g)->getPaint()));
	checkAlpha($($nc(g)->getComposite()));
}

void PeekMetrics::checkPaint($Paint* paint) {
	if ($instanceOf($Color, paint)) {
		if ($nc(($cast($Color, paint)))->getAlpha() < 255) {
			this->mHasNonSolidColors = true;
		}
	} else {
		this->mHasNonSolidColors = true;
	}
}

void PeekMetrics::checkAlpha($Composite* composite) {
	if ($instanceOf($AlphaComposite, composite)) {
		$var($AlphaComposite, alphaComposite, $cast($AlphaComposite, composite));
		float alpha = $nc(alphaComposite)->getAlpha();
		int32_t rule = alphaComposite->getRule();
		if (alpha != 1.0 || (rule != $AlphaComposite::SRC && rule != $AlphaComposite::SRC_OVER)) {
			this->mHasCompositing = true;
		}
	} else {
		this->mHasCompositing = true;
	}
}

PeekMetrics::PeekMetrics() {
}

$Class* PeekMetrics::load$($String* name, bool initialize) {
	$loadClass(PeekMetrics, name, initialize, &_PeekMetrics_ClassInfo_, allocate$PeekMetrics);
	return class$;
}

$Class* PeekMetrics::class$ = nullptr;

	} // print
} // sun