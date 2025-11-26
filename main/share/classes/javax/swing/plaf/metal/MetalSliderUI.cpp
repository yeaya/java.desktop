#include <javax/swing/plaf/metal/MetalSliderUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicSliderUI$ScrollListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalSliderUI$MetalPropertyListener.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef SAFE_HORIZ_THUMB_ICON
#undef SAFE_VERT_THUMB_ICON
#undef SLIDER_FILL
#undef TICK_BUFFER
#undef VERTICAL

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicSliderUI$PropertyChangeHandler;
using $BasicSliderUI$ScrollListener = ::javax::swing::plaf::basic::BasicSliderUI$ScrollListener;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalSliderUI$MetalPropertyListener = ::javax::swing::plaf::metal::MetalSliderUI$MetalPropertyListener;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalSliderUI_FieldInfo_[] = {
	{"TICK_BUFFER", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(MetalSliderUI, TICK_BUFFER)},
	{"filledSlider", "Z", nullptr, $PROTECTED, $field(MetalSliderUI, filledSlider)},
	{"thumbColor", "Ljava/awt/Color;", nullptr, $PROTECTED | $STATIC, $staticField(MetalSliderUI, thumbColor)},
	{"highlightColor", "Ljava/awt/Color;", nullptr, $PROTECTED | $STATIC, $staticField(MetalSliderUI, highlightColor)},
	{"darkShadowColor", "Ljava/awt/Color;", nullptr, $PROTECTED | $STATIC, $staticField(MetalSliderUI, darkShadowColor)},
	{"trackWidth", "I", nullptr, $PROTECTED | $STATIC, $staticField(MetalSliderUI, trackWidth)},
	{"tickLength", "I", nullptr, $PROTECTED | $STATIC, $staticField(MetalSliderUI, tickLength)},
	{"safeLength", "I", nullptr, $PRIVATE, $field(MetalSliderUI, safeLength)},
	{"horizThumbIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $STATIC, $staticField(MetalSliderUI, horizThumbIcon)},
	{"vertThumbIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $STATIC, $staticField(MetalSliderUI, vertThumbIcon)},
	{"SAFE_HORIZ_THUMB_ICON", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalSliderUI, SAFE_HORIZ_THUMB_ICON)},
	{"SAFE_VERT_THUMB_ICON", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalSliderUI, SAFE_VERT_THUMB_ICON)},
	{"SLIDER_FILL", "Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $field(MetalSliderUI, SLIDER_FILL)},
	{}
};

$MethodInfo _MetalSliderUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalSliderUI::*)()>(&MetalSliderUI::init$))},
	{"createPropertyChangeListener", "(Ljavax/swing/JSlider;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalSliderUI::createUI))},
	{"getHorizThumbIcon", "()Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalSliderUI::getHorizThumbIcon))},
	{"getPaintTrackRect", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(MetalSliderUI::*)()>(&MetalSliderUI::getPaintTrackRect))},
	{"getThumbOverhang", "()I", nullptr, $PROTECTED},
	{"getThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getTickLength", "()I", nullptr, $PUBLIC},
	{"getTrackLength", "()I", nullptr, $PROTECTED},
	{"getTrackWidth", "()I", nullptr, $PROTECTED},
	{"getVertThumbIcon", "()Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalSliderUI::getVertThumbIcon))},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"oceanPaintTrack", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalSliderUI::*)($Graphics*)>(&MetalSliderUI::oceanPaintTrack))},
	{"paintFocus", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintMajorTickForHorizSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMajorTickForVertSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMinorTickForHorizSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMinorTickForVertSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintThumb", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTrack", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"prepareFilledSliderField", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalSliderUI::*)()>(&MetalSliderUI::prepareFilledSliderField))},
	{"scrollDueToClickInTrack", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalSliderUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalSliderUI$MetalPropertyListener", "javax.swing.plaf.metal.MetalSliderUI", "MetalPropertyListener", $PROTECTED},
	{}
};

$ClassInfo _MetalSliderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalSliderUI",
	"javax.swing.plaf.basic.BasicSliderUI",
	nullptr,
	_MetalSliderUI_FieldInfo_,
	_MetalSliderUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalSliderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalSliderUI$MetalPropertyListener"
};

$Object* allocate$MetalSliderUI($Class* clazz) {
	return $of($alloc(MetalSliderUI));
}

$Color* MetalSliderUI::thumbColor = nullptr;
$Color* MetalSliderUI::highlightColor = nullptr;
$Color* MetalSliderUI::darkShadowColor = nullptr;
int32_t MetalSliderUI::trackWidth = 0;
int32_t MetalSliderUI::tickLength = 0;
$Icon* MetalSliderUI::horizThumbIcon = nullptr;
$Icon* MetalSliderUI::vertThumbIcon = nullptr;
$Icon* MetalSliderUI::SAFE_HORIZ_THUMB_ICON = nullptr;
$Icon* MetalSliderUI::SAFE_VERT_THUMB_ICON = nullptr;

$ComponentUI* MetalSliderUI::createUI($JComponent* c) {
	$init(MetalSliderUI);
	return $new(MetalSliderUI);
}

void MetalSliderUI::init$() {
	$BasicSliderUI::init$(nullptr);
	this->filledSlider = false;
	$set(this, SLIDER_FILL, "JSlider.isFilled"_s);
}

$Icon* MetalSliderUI::getHorizThumbIcon() {
	$init(MetalSliderUI);
	if ($System::getSecurityManager() != nullptr) {
		return MetalSliderUI::SAFE_HORIZ_THUMB_ICON;
	} else {
		return MetalSliderUI::horizThumbIcon;
	}
}

$Icon* MetalSliderUI::getVertThumbIcon() {
	$init(MetalSliderUI);
	if ($System::getSecurityManager() != nullptr) {
		return MetalSliderUI::SAFE_VERT_THUMB_ICON;
	} else {
		return MetalSliderUI::vertThumbIcon;
	}
}

void MetalSliderUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	MetalSliderUI::trackWidth = $nc(($cast($Integer, $($UIManager::get("Slider.trackWidth"_s)))))->intValue();
	MetalSliderUI::tickLength = (this->safeLength = $nc(($cast($Integer, $($UIManager::get("Slider.majorTickLength"_s)))))->intValue());
	$assignStatic(MetalSliderUI::horizThumbIcon, ($assignStatic(MetalSliderUI::SAFE_HORIZ_THUMB_ICON, $UIManager::getIcon("Slider.horizontalThumbIcon"_s))));
	$assignStatic(MetalSliderUI::vertThumbIcon, ($assignStatic(MetalSliderUI::SAFE_VERT_THUMB_ICON, $UIManager::getIcon("Slider.verticalThumbIcon"_s))));
	$BasicSliderUI::installUI(c);
	$assignStatic(MetalSliderUI::thumbColor, $UIManager::getColor("Slider.thumb"_s));
	$assignStatic(MetalSliderUI::highlightColor, $UIManager::getColor("Slider.highlight"_s));
	$assignStatic(MetalSliderUI::darkShadowColor, $UIManager::getColor("Slider.darkShadow"_s));
	$nc(this->scrollListener)->setScrollByBlock(false);
	prepareFilledSliderField();
}

$PropertyChangeListener* MetalSliderUI::createPropertyChangeListener($JSlider* slider) {
	return $new($MetalSliderUI$MetalPropertyListener, this);
}

void MetalSliderUI::prepareFilledSliderField() {
	this->filledSlider = $MetalLookAndFeel::usingOcean();
	$var($Object, sliderFillProp, $nc(this->slider)->getClientProperty(this->SLIDER_FILL));
	if (sliderFillProp != nullptr) {
		this->filledSlider = $nc(($cast($Boolean, sliderFillProp)))->booleanValue();
	}
}

void MetalSliderUI::paintThumb($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, knobBounds, this->thumbRect);
	$nc(g)->translate($nc(knobBounds)->x, knobBounds->y);
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		$nc($(getHorizThumbIcon()))->paintIcon(this->slider, g, 0, 0);
	} else {
		$nc($(getVertThumbIcon()))->paintIcon(this->slider, g, 0, 0);
	}
	g->translate(-$nc(knobBounds)->x, -knobBounds->y);
}

$Rectangle* MetalSliderUI::getPaintTrackRect() {
	int32_t trackLeft = 0;
	int32_t trackRight = 0;
	int32_t trackTop = 0;
	int32_t trackBottom = 0;
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		trackBottom = ($nc(this->trackRect)->height - 1) - getThumbOverhang();
		trackTop = trackBottom - (getTrackWidth() - 1);
		trackRight = $nc(this->trackRect)->width - 1;
	} else {
		if ($MetalUtils::isLeftToRight(this->slider)) {
			int32_t var$0 = ($nc(this->trackRect)->width - getThumbOverhang());
			trackLeft = var$0 - getTrackWidth();
			trackRight = ($nc(this->trackRect)->width - getThumbOverhang()) - 1;
		} else {
			trackLeft = getThumbOverhang();
			int32_t var$1 = getThumbOverhang();
			trackRight = var$1 + getTrackWidth() - 1;
		}
		trackBottom = $nc(this->trackRect)->height - 1;
	}
	return $new($Rectangle, $nc(this->trackRect)->x + trackLeft, $nc(this->trackRect)->y + trackTop, trackRight - trackLeft, trackBottom - trackTop);
}

void MetalSliderUI::paintTrack($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if ($MetalLookAndFeel::usingOcean()) {
		oceanPaintTrack(g);
		return;
	}
	$var($Color, trackColor, !$nc(this->slider)->isEnabled() ? static_cast<$Color*>($MetalLookAndFeel::getControlShadow()) : $nc(this->slider)->getForeground());
	bool leftToRight = $MetalUtils::isLeftToRight(this->slider);
	$nc(g)->translate($nc(this->trackRect)->x, $nc(this->trackRect)->y);
	int32_t trackLeft = 0;
	int32_t trackTop = 0;
	int32_t trackRight = 0;
	int32_t trackBottom = 0;
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		trackBottom = ($nc(this->trackRect)->height - 1) - getThumbOverhang();
		trackTop = trackBottom - (getTrackWidth() - 1);
		trackRight = $nc(this->trackRect)->width - 1;
	} else {
		if (leftToRight) {
			int32_t var$0 = ($nc(this->trackRect)->width - getThumbOverhang());
			trackLeft = var$0 - getTrackWidth();
			trackRight = ($nc(this->trackRect)->width - getThumbOverhang()) - 1;
		} else {
			trackLeft = getThumbOverhang();
			int32_t var$1 = getThumbOverhang();
			trackRight = var$1 + getTrackWidth() - 1;
		}
		trackBottom = $nc(this->trackRect)->height - 1;
	}
	if ($nc(this->slider)->isEnabled()) {
		g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		g->drawRect(trackLeft, trackTop, (trackRight - trackLeft) - 1, (trackBottom - trackTop) - 1);
		g->setColor($($MetalLookAndFeel::getControlHighlight()));
		g->drawLine(trackLeft + 1, trackBottom, trackRight, trackBottom);
		g->drawLine(trackRight, trackTop + 1, trackRight, trackBottom);
		g->setColor($($MetalLookAndFeel::getControlShadow()));
		g->drawLine(trackLeft + 1, trackTop + 1, trackRight - 2, trackTop + 1);
		g->drawLine(trackLeft + 1, trackTop + 1, trackLeft + 1, trackBottom - 2);
	} else {
		g->setColor($($MetalLookAndFeel::getControlShadow()));
		g->drawRect(trackLeft, trackTop, (trackRight - trackLeft) - 1, (trackBottom - trackTop) - 1);
	}
	if (this->filledSlider) {
		int32_t middleOfThumb = 0;
		int32_t fillTop = 0;
		int32_t fillLeft = 0;
		int32_t fillBottom = 0;
		int32_t fillRight = 0;
		if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
			middleOfThumb = $nc(this->thumbRect)->x + ($nc(this->thumbRect)->width / 2);
			middleOfThumb -= $nc(this->trackRect)->x;
			fillTop = !$nc(this->slider)->isEnabled() ? trackTop : trackTop + 1;
			fillBottom = !$nc(this->slider)->isEnabled() ? trackBottom - 1 : trackBottom - 2;
			if (!drawInverted()) {
				fillLeft = !$nc(this->slider)->isEnabled() ? trackLeft : trackLeft + 1;
				fillRight = middleOfThumb;
			} else {
				fillLeft = middleOfThumb;
				fillRight = !$nc(this->slider)->isEnabled() ? trackRight - 1 : trackRight - 2;
			}
		} else {
			middleOfThumb = $nc(this->thumbRect)->y + ($nc(this->thumbRect)->height / 2);
			middleOfThumb -= $nc(this->trackRect)->y;
			fillLeft = !$nc(this->slider)->isEnabled() ? trackLeft : trackLeft + 1;
			fillRight = !$nc(this->slider)->isEnabled() ? trackRight - 1 : trackRight - 2;
			if (!drawInverted()) {
				fillTop = middleOfThumb;
				fillBottom = !$nc(this->slider)->isEnabled() ? trackBottom - 1 : trackBottom - 2;
			} else {
				fillTop = !$nc(this->slider)->isEnabled() ? trackTop : trackTop + 1;
				fillBottom = middleOfThumb;
			}
		}
		if ($nc(this->slider)->isEnabled()) {
			g->setColor($($nc(this->slider)->getBackground()));
			g->drawLine(fillLeft, fillTop, fillRight, fillTop);
			g->drawLine(fillLeft, fillTop, fillLeft, fillBottom);
			g->setColor($($MetalLookAndFeel::getControlShadow()));
			g->fillRect(fillLeft + 1, fillTop + 1, fillRight - fillLeft, fillBottom - fillTop);
		} else {
			g->setColor($($MetalLookAndFeel::getControlShadow()));
			g->fillRect(fillLeft, fillTop, fillRight - fillLeft, fillBottom - fillTop);
		}
	}
	g->translate(-$nc(this->trackRect)->x, -$nc(this->trackRect)->y);
}

void MetalSliderUI::oceanPaintTrack($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $MetalUtils::isLeftToRight(this->slider);
	bool drawInverted = this->drawInverted();
	$var($Color, sliderAltTrackColor, $cast($Color, $UIManager::get("Slider.altTrackColor"_s)));
	$var($Rectangle, paintRect, getPaintTrackRect());
	$nc(g)->translate($nc(paintRect)->x, paintRect->y);
	int32_t w = $nc(paintRect)->width;
	int32_t h = paintRect->height;
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		int32_t middleOfThumb = $nc(this->thumbRect)->x + $nc(this->thumbRect)->width / 2 - paintRect->x;
		if ($nc(this->slider)->isEnabled()) {
			int32_t fillMinX = 0;
			int32_t fillMaxX = 0;
			if (middleOfThumb > 0) {
				g->setColor(drawInverted ? $(static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow())) : $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlDarkShadow())));
				g->drawRect(0, 0, middleOfThumb - 1, h - 1);
			}
			if (middleOfThumb < w) {
				g->setColor(drawInverted ? $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlDarkShadow())) : $(static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow())));
				g->drawRect(middleOfThumb, 0, w - middleOfThumb - 1, h - 1);
			}
			if (this->filledSlider) {
				g->setColor($($MetalLookAndFeel::getPrimaryControlShadow()));
				if (drawInverted) {
					fillMinX = middleOfThumb;
					fillMaxX = w - 2;
					g->drawLine(1, 1, middleOfThumb, 1);
				} else {
					fillMinX = 1;
					fillMaxX = middleOfThumb;
					g->drawLine(middleOfThumb, 1, w - 1, 1);
				}
				if (h == 6) {
					g->setColor($($MetalLookAndFeel::getWhite()));
					g->drawLine(fillMinX, 1, fillMaxX, 1);
					g->setColor(sliderAltTrackColor);
					g->drawLine(fillMinX, 2, fillMaxX, 2);
					g->setColor($($MetalLookAndFeel::getControlShadow()));
					g->drawLine(fillMinX, 3, fillMaxX, 3);
					g->setColor($($MetalLookAndFeel::getPrimaryControlShadow()));
					g->drawLine(fillMinX, 4, fillMaxX, 4);
				}
			}
		} else {
			g->setColor($($MetalLookAndFeel::getControlShadow()));
			if (middleOfThumb > 0) {
				if (!drawInverted && this->filledSlider) {
					g->fillRect(0, 0, middleOfThumb - 1, h - 1);
				} else {
					g->drawRect(0, 0, middleOfThumb - 1, h - 1);
				}
			}
			if (middleOfThumb < w) {
				if (drawInverted && this->filledSlider) {
					g->fillRect(middleOfThumb, 0, w - middleOfThumb - 1, h - 1);
				} else {
					g->drawRect(middleOfThumb, 0, w - middleOfThumb - 1, h - 1);
				}
			}
		}
	} else {
		int32_t middleOfThumb = $nc(this->thumbRect)->y + ($nc(this->thumbRect)->height / 2) - paintRect->y;
		if ($nc(this->slider)->isEnabled()) {
			int32_t fillMinY = 0;
			int32_t fillMaxY = 0;
			if (middleOfThumb > 0) {
				g->setColor(drawInverted ? $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlDarkShadow())) : $(static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow())));
				g->drawRect(0, 0, w - 1, middleOfThumb - 1);
			}
			if (middleOfThumb < h) {
				g->setColor(drawInverted ? $(static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow())) : $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlDarkShadow())));
				g->drawRect(0, middleOfThumb, w - 1, h - middleOfThumb - 1);
			}
			if (this->filledSlider) {
				g->setColor($($MetalLookAndFeel::getPrimaryControlShadow()));
				if (this->drawInverted()) {
					fillMinY = 1;
					fillMaxY = middleOfThumb;
					if (leftToRight) {
						g->drawLine(1, middleOfThumb, 1, h - 1);
					} else {
						g->drawLine(w - 2, middleOfThumb, w - 2, h - 1);
					}
				} else {
					fillMinY = middleOfThumb;
					fillMaxY = h - 2;
					if (leftToRight) {
						g->drawLine(1, 1, 1, middleOfThumb);
					} else {
						g->drawLine(w - 2, 1, w - 2, middleOfThumb);
					}
				}
				if (w == 6) {
					g->setColor(leftToRight ? $(static_cast<$Color*>($MetalLookAndFeel::getWhite())) : $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlShadow())));
					g->drawLine(1, fillMinY, 1, fillMaxY);
					g->setColor(leftToRight ? sliderAltTrackColor : $(static_cast<$Color*>($MetalLookAndFeel::getControlShadow())));
					g->drawLine(2, fillMinY, 2, fillMaxY);
					g->setColor(leftToRight ? $(static_cast<$Color*>($MetalLookAndFeel::getControlShadow())) : sliderAltTrackColor);
					g->drawLine(3, fillMinY, 3, fillMaxY);
					g->setColor(leftToRight ? $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlShadow())) : $(static_cast<$Color*>($MetalLookAndFeel::getWhite())));
					g->drawLine(4, fillMinY, 4, fillMaxY);
				}
			}
		} else {
			g->setColor($($MetalLookAndFeel::getControlShadow()));
			if (middleOfThumb > 0) {
				if (drawInverted && this->filledSlider) {
					g->fillRect(0, 0, w - 1, middleOfThumb - 1);
				} else {
					g->drawRect(0, 0, w - 1, middleOfThumb - 1);
				}
			}
			if (middleOfThumb < h) {
				if (!drawInverted && this->filledSlider) {
					g->fillRect(0, middleOfThumb, w - 1, h - middleOfThumb - 1);
				} else {
					g->drawRect(0, middleOfThumb, w - 1, h - middleOfThumb - 1);
				}
			}
		}
	}
	g->translate(-paintRect->x, -paintRect->y);
}

void MetalSliderUI::paintFocus($Graphics* g) {
}

$Dimension* MetalSliderUI::getThumbSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $new($Dimension));
	if ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL) {
		size->width = $nc($(getVertThumbIcon()))->getIconWidth();
		size->height = $nc($(getVertThumbIcon()))->getIconHeight();
	} else {
		size->width = $nc($(getHorizThumbIcon()))->getIconWidth();
		size->height = $nc($(getHorizThumbIcon()))->getIconHeight();
	}
	return size;
}

int32_t MetalSliderUI::getTickLength() {
	return $nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL ? this->safeLength + this->TICK_BUFFER + 1 : this->safeLength + this->TICK_BUFFER + 3;
}

int32_t MetalSliderUI::getTrackWidth() {
	double kIdealTrackWidth = 7.0;
	double kIdealThumbHeight = 16.0;
	double kWidthScalar = $div(kIdealTrackWidth, kIdealThumbHeight);
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		return $cast(int32_t, (kWidthScalar * $nc(this->thumbRect)->height));
	} else {
		return $cast(int32_t, (kWidthScalar * $nc(this->thumbRect)->width));
	}
}

int32_t MetalSliderUI::getTrackLength() {
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		return $nc(this->trackRect)->width;
	}
	return $nc(this->trackRect)->height;
}

int32_t MetalSliderUI::getThumbOverhang() {
	double var$0 = $nc($(getThumbSize()))->getHeight();
	return $cast(int32_t, (var$0 - getTrackWidth())) / 2;
}

void MetalSliderUI::scrollDueToClickInTrack(int32_t dir) {
	scrollByUnit(dir);
}

void MetalSliderUI::paintMinorTickForHorizSlider($Graphics* g, $Rectangle* tickBounds, int32_t x) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($nc(this->slider)->isEnabled() ? $($nc(this->slider)->getForeground()) : $(static_cast<$Color*>($MetalLookAndFeel::getControlShadow())));
	g->drawLine(x, this->TICK_BUFFER, x, this->TICK_BUFFER + (this->safeLength / 2));
}

void MetalSliderUI::paintMajorTickForHorizSlider($Graphics* g, $Rectangle* tickBounds, int32_t x) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($nc(this->slider)->isEnabled() ? $($nc(this->slider)->getForeground()) : $(static_cast<$Color*>($MetalLookAndFeel::getControlShadow())));
	g->drawLine(x, this->TICK_BUFFER, x, this->TICK_BUFFER + (this->safeLength - 1));
}

void MetalSliderUI::paintMinorTickForVertSlider($Graphics* g, $Rectangle* tickBounds, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($nc(this->slider)->isEnabled() ? $($nc(this->slider)->getForeground()) : $(static_cast<$Color*>($MetalLookAndFeel::getControlShadow())));
	if ($MetalUtils::isLeftToRight(this->slider)) {
		g->drawLine(this->TICK_BUFFER, y, this->TICK_BUFFER + (this->safeLength / 2), y);
	} else {
		g->drawLine(0, y, this->safeLength / 2, y);
	}
}

void MetalSliderUI::paintMajorTickForVertSlider($Graphics* g, $Rectangle* tickBounds, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($nc(this->slider)->isEnabled() ? $($nc(this->slider)->getForeground()) : $(static_cast<$Color*>($MetalLookAndFeel::getControlShadow())));
	if ($MetalUtils::isLeftToRight(this->slider)) {
		g->drawLine(this->TICK_BUFFER, y, this->TICK_BUFFER + this->safeLength, y);
	} else {
		g->drawLine(0, y, this->safeLength, y);
	}
}

MetalSliderUI::MetalSliderUI() {
}

$Class* MetalSliderUI::load$($String* name, bool initialize) {
	$loadClass(MetalSliderUI, name, initialize, &_MetalSliderUI_ClassInfo_, allocate$MetalSliderUI);
	return class$;
}

$Class* MetalSliderUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax