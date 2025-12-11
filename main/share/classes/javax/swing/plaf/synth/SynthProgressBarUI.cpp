#include <javax/swing/plaf/synth/SynthProgressBarUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ProgressBarUI.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ENABLED
#undef HORIZONTAL
#undef PI
#undef TEXT_FOREGROUND
#undef VERTICAL

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ProgressBarUI = ::javax::swing::plaf::ProgressBarUI;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthProgressBarUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthProgressBarUI, style)},
	{"progressPadding", "I", nullptr, $PRIVATE, $field(SynthProgressBarUI, progressPadding)},
	{"rotateText", "Z", nullptr, $PRIVATE, $field(SynthProgressBarUI, rotateText)},
	{"paintOutsideClip", "Z", nullptr, $PRIVATE, $field(SynthProgressBarUI, paintOutsideClip)},
	{"tileWhenIndeterminate", "Z", nullptr, $PRIVATE, $field(SynthProgressBarUI, tileWhenIndeterminate)},
	{"tileWidth", "I", nullptr, $PRIVATE, $field(SynthProgressBarUI, tileWidth)},
	{"minBarSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(SynthProgressBarUI, minBarSize)},
	{"glowWidth", "I", nullptr, $PRIVATE, $field(SynthProgressBarUI, glowWidth)},
	{}
};

$MethodInfo _SynthProgressBarUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthProgressBarUI::*)()>(&SynthProgressBarUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthProgressBarUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBox", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthProgressBarUI::*)($JComponent*)>(&SynthProgressBarUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthProgressBarUI::*)($JComponent*,int32_t)>(&SynthProgressBarUI::getContext))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintText", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setAnimationIndex", "(I)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JProgressBar;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthProgressBarUI::*)($JProgressBar*)>(&SynthProgressBarUI::updateStyle))},
	{}
};

$ClassInfo _SynthProgressBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthProgressBarUI",
	"javax.swing.plaf.basic.BasicProgressBarUI",
	"javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener",
	_SynthProgressBarUI_FieldInfo_,
	_SynthProgressBarUI_MethodInfo_
};

$Object* allocate$SynthProgressBarUI($Class* clazz) {
	return $of($alloc(SynthProgressBarUI));
}

int32_t SynthProgressBarUI::hashCode() {
	 return this->$BasicProgressBarUI::hashCode();
}

bool SynthProgressBarUI::equals(Object$* arg0) {
	 return this->$BasicProgressBarUI::equals(arg0);
}

$Object* SynthProgressBarUI::clone() {
	 return this->$BasicProgressBarUI::clone();
}

$String* SynthProgressBarUI::toString() {
	 return this->$BasicProgressBarUI::toString();
}

void SynthProgressBarUI::finalize() {
	this->$BasicProgressBarUI::finalize();
}

void SynthProgressBarUI::init$() {
	$BasicProgressBarUI::init$();
}

$ComponentUI* SynthProgressBarUI::createUI($JComponent* x) {
	$init(SynthProgressBarUI);
	return $new(SynthProgressBarUI);
}

void SynthProgressBarUI::installListeners() {
	$BasicProgressBarUI::installListeners();
	$nc(this->progressBar)->addPropertyChangeListener(this);
}

void SynthProgressBarUI::uninstallListeners() {
	$BasicProgressBarUI::uninstallListeners();
	$nc(this->progressBar)->removePropertyChangeListener(this);
}

void SynthProgressBarUI::installDefaults() {
	updateStyle(this->progressBar);
}

void SynthProgressBarUI::updateStyle($JProgressBar* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	setCellLength($nc(this->style)->getInt(context, "ProgressBar.cellLength"_s, 1));
	setCellSpacing($nc(this->style)->getInt(context, "ProgressBar.cellSpacing"_s, 0));
	this->progressPadding = $nc(this->style)->getInt(context, "ProgressBar.progressPadding"_s, 0);
	this->paintOutsideClip = $nc(this->style)->getBoolean(context, "ProgressBar.paintOutsideClip"_s, false);
	this->rotateText = $nc(this->style)->getBoolean(context, "ProgressBar.rotateText"_s, false);
	this->tileWhenIndeterminate = $nc(this->style)->getBoolean(context, "ProgressBar.tileWhenIndeterminate"_s, false);
	this->tileWidth = $nc(this->style)->getInt(context, "ProgressBar.tileWidth"_s, 15);
	$var($String, scaleKey, $cast($String, $nc(this->progressBar)->getClientProperty("JComponent.sizeVariant"_s)));
	if (scaleKey != nullptr) {
		if ("large"_s->equals(scaleKey)) {
			this->tileWidth *= 1.15;
		} else if ("small"_s->equals(scaleKey)) {
			this->tileWidth *= 0.857;
		} else if ("mini"_s->equals(scaleKey)) {
			this->tileWidth *= 0.784;
		}
	}
	$set(this, minBarSize, $cast($Dimension, $nc(this->style)->get(context, "ProgressBar.minBarSize"_s)));
	this->glowWidth = $nc(this->style)->getInt(context, "ProgressBar.glowWidth"_s, 0);
}

void SynthProgressBarUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->progressBar, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$SynthContext* SynthProgressBarUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthProgressBarUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthProgressBarUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

int32_t SynthProgressBarUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$BasicProgressBarUI::getBaseline(c, width, height);
	bool var$0 = $nc(this->progressBar)->isStringPainted();
	if (var$0 && $nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$var($SynthContext, context, getContext(c));
		$var($Font, font, $nc($($nc(context)->getStyle()))->getFont(context));
		$var($FontMetrics, metrics, $nc(this->progressBar)->getFontMetrics(font));
		int32_t var$2 = height - $nc(metrics)->getAscent();
		int32_t var$1 = (var$2 - metrics->getDescent()) / 2;
		return var$1 + metrics->getAscent();
	}
	return -1;
}

$Rectangle* SynthProgressBarUI::getBox($Rectangle* r) {
	if (this->tileWhenIndeterminate) {
		return $SwingUtilities::calculateInnerArea(this->progressBar, r);
	} else {
		return $BasicProgressBarUI::getBox(r);
	}
}

void SynthProgressBarUI::setAnimationIndex(int32_t newValue) {
	if (this->paintOutsideClip) {
		if (getAnimationIndex() == newValue) {
			return;
		}
		$BasicProgressBarUI::setAnimationIndex(newValue);
		$nc(this->progressBar)->repaint();
	} else {
		$BasicProgressBarUI::setAnimationIndex(newValue);
	}
}

void SynthProgressBarUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	int32_t var$3 = c->getHeight();
	$nc($($nc(context)->getPainter()))->paintProgressBarBackground(var$0, var$1, 0, 0, var$2, var$3, $nc(this->progressBar)->getOrientation());
	paint(context, g);
}

void SynthProgressBarUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthProgressBarUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JProgressBar, pBar, $cast($JProgressBar, $nc(context)->getComponent()));
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
	if (!$nc(pBar)->isIndeterminate()) {
		$var($Insets, pBarInsets, pBar->getInsets());
		double percentComplete = pBar->getPercentComplete();
		if (percentComplete != 0.0) {
			if (pBar->getOrientation() == $JProgressBar::HORIZONTAL) {
				x = $nc(pBarInsets)->left + this->progressPadding;
				y = pBarInsets->top + this->progressPadding;
				width = $cast(int32_t, (percentComplete * (pBar->getWidth() - (pBarInsets->left + this->progressPadding + pBarInsets->right + this->progressPadding))));
				height = pBar->getHeight() - (pBarInsets->top + this->progressPadding + pBarInsets->bottom + this->progressPadding);
				if (!$SynthLookAndFeel::isLeftToRight(pBar)) {
					x = pBar->getWidth() - pBarInsets->right - width - this->progressPadding - this->glowWidth;
				}
			} else {
				x = $nc(pBarInsets)->left + this->progressPadding;
				width = pBar->getWidth() - (pBarInsets->left + this->progressPadding + pBarInsets->right + this->progressPadding);
				height = $cast(int32_t, (percentComplete * (pBar->getHeight() - (pBarInsets->top + this->progressPadding + pBarInsets->bottom + this->progressPadding))));
				y = pBar->getHeight() - pBarInsets->bottom - height - this->progressPadding;
				if ($SynthLookAndFeel::isLeftToRight(pBar)) {
					y -= this->glowWidth;
				}
			}
		}
	} else {
		$set(this, boxRect, getBox(this->boxRect));
		x = $nc(this->boxRect)->x + this->progressPadding;
		y = $nc(this->boxRect)->y + this->progressPadding;
		width = $nc(this->boxRect)->width - this->progressPadding - this->progressPadding;
		height = $nc(this->boxRect)->height - this->progressPadding - this->progressPadding;
	}
	if (this->tileWhenIndeterminate && $nc(pBar)->isIndeterminate()) {
		double var$0 = (double)getAnimationIndex();
		double percentComplete = var$0 / (double)getFrameCount();
		int32_t offset = $cast(int32_t, (percentComplete * this->tileWidth));
		$var($Shape, clip, $nc(g)->getClip());
		g->clipRect(x, y, width, height);
		if (pBar->getOrientation() == $JProgressBar::HORIZONTAL) {
			for (int32_t i = x - this->tileWidth + offset; i <= width; i += this->tileWidth) {
				$nc($(context->getPainter()))->paintProgressBarForeground(context, g, i, y, this->tileWidth, height, pBar->getOrientation());
			}
		} else {
			for (int32_t i = y - offset; i < height + this->tileWidth; i += this->tileWidth) {
				$nc($(context->getPainter()))->paintProgressBarForeground(context, g, x, i, width, this->tileWidth, pBar->getOrientation());
			}
		}
		g->setClip(clip);
	} else if (this->minBarSize == nullptr || (width >= $nc(this->minBarSize)->width && height >= $nc(this->minBarSize)->height)) {
		$nc($(context->getPainter()))->paintProgressBarForeground(context, g, x, y, width, height, pBar->getOrientation());
	}
	if ($nc(pBar)->isStringPainted()) {
		paintText(context, g, $(pBar->getString()));
	}
}

void SynthProgressBarUI::paintText($SynthContext* context, $Graphics* g, $String* title) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->progressBar)->isStringPainted()) {
		$var($SynthStyle, style, $nc(context)->getStyle());
		$var($Font, font, $nc(style)->getFont(context));
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(this->progressBar, g, font));
		int32_t strLength = $nc($(style->getGraphicsUtils(context)))->computeStringWidth(context, font, fm, title);
		$var($Rectangle, bounds, $nc(this->progressBar)->getBounds());
		if (this->rotateText && $nc(this->progressBar)->getOrientation() == $JProgressBar::VERTICAL) {
			$var($Graphics2D, g2, $cast($Graphics2D, g));
			$var($Point, textPos, nullptr);
			$var($AffineTransform, rotation, nullptr);
			if ($nc($($nc(this->progressBar)->getComponentOrientation()))->isLeftToRight()) {
				$init($Math);
				$assign(rotation, $AffineTransform::getRotateInstance(-$Math::PI / 2));
				int32_t var$0 = $nc(bounds)->width + $nc(fm)->getAscent();
				$assign(textPos, $new($Point, (var$0 - fm->getDescent()) / 2, (bounds->height + strLength) / 2));
			} else {
				$init($Math);
				$assign(rotation, $AffineTransform::getRotateInstance($Math::PI / 2));
				int32_t var$1 = $nc(bounds)->width - $nc(fm)->getAscent();
				$assign(textPos, $new($Point, (var$1 + fm->getDescent()) / 2, (bounds->height - strLength) / 2));
			}
			if ($nc(textPos)->x < 0) {
				return;
			}
			$assign(font, $nc(font)->deriveFont(rotation));
			$nc(g2)->setFont(font);
			$init($ColorType);
			g2->setColor($(style->getColor(context, $ColorType::TEXT_FOREGROUND)));
			$nc($(style->getGraphicsUtils(context)))->paintText(context, g, title, $nc(textPos)->x, textPos->y, -1);
		} else {
			int32_t var$2 = bounds->height;
			int32_t var$4 = $nc(fm)->getAscent();
			int32_t var$3 = (var$4 + fm->getDescent());
			$var($Rectangle, textRect, $new($Rectangle, ($nc(bounds)->width / 2) - (strLength / 2), (var$2 - var$3) / 2, 0, 0));
			if (textRect->y < 0) {
				return;
			}
			$init($ColorType);
			$nc(g)->setColor($(style->getColor(context, $ColorType::TEXT_FOREGROUND)));
			g->setFont(font);
			$nc($(style->getGraphicsUtils(context)))->paintText(context, g, title, textRect->x, textRect->y, -1);
		}
	}
}

void SynthProgressBarUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintProgressBarBorder(context, g, x, y, w, h, $nc(this->progressBar)->getOrientation());
}

void SynthProgressBarUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $SynthLookAndFeel::shouldUpdateStyle(e);
	if (var$0 || "indeterminate"_s->equals($($nc(e)->getPropertyName()))) {
		updateStyle($cast($JProgressBar, $($nc(e)->getSource())));
	}
}

$Dimension* SynthProgressBarUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	$var($Insets, border, $nc(this->progressBar)->getInsets());
	$var($FontMetrics, fontSizer, $nc(this->progressBar)->getFontMetrics($($nc(this->progressBar)->getFont())));
	$var($String, progString, $nc(this->progressBar)->getString());
	int32_t var$0 = $nc(fontSizer)->getHeight();
	int32_t stringHeight = var$0 + fontSizer->getDescent();
	if ($nc(this->progressBar)->getOrientation() == $JProgressBar::HORIZONTAL) {
		$assign(size, $new($Dimension, $(getPreferredInnerHorizontal())));
		if ($nc(this->progressBar)->isStringPainted()) {
			if (stringHeight > size->height) {
				size->height = stringHeight;
			}
			int32_t stringWidth = $SwingUtilities2::stringWidth(this->progressBar, fontSizer, progString);
			if (stringWidth > size->width) {
				size->width = stringWidth;
			}
		}
	} else {
		$assign(size, $new($Dimension, $(getPreferredInnerVertical())));
		if ($nc(this->progressBar)->isStringPainted()) {
			if (stringHeight > size->width) {
				size->width = stringHeight;
			}
			int32_t stringWidth = $SwingUtilities2::stringWidth(this->progressBar, fontSizer, progString);
			if (stringWidth > size->height) {
				size->height = stringWidth;
			}
		}
	}
	$var($String, scaleKey, $cast($String, $nc(this->progressBar)->getClientProperty("JComponent.sizeVariant"_s)));
	if (scaleKey != nullptr) {
		if ("large"_s->equals(scaleKey)) {
			$nc(size)->width *= 1.15f;
			size->height *= 1.15f;
		} else if ("small"_s->equals(scaleKey)) {
			$nc(size)->width *= 0.9f;
			size->height *= 0.9f;
		} else if ("mini"_s->equals(scaleKey)) {
			$nc(size)->width *= 0.784f;
			size->height *= 0.784f;
		}
	}
	$nc(size)->width += $nc(border)->left + border->right;
	size->height += border->top + border->bottom;
	return size;
}

SynthProgressBarUI::SynthProgressBarUI() {
}

$Class* SynthProgressBarUI::load$($String* name, bool initialize) {
	$loadClass(SynthProgressBarUI, name, initialize, &_SynthProgressBarUI_ClassInfo_, allocate$SynthProgressBarUI);
	return class$;
}

$Class* SynthProgressBarUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax