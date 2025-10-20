#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils$SynthIconWrapper.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthMenuItemLayoutHelper.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/text/View.h>
#include <sun/swing/MenuItemLayoutHelper$LayoutResult.h>
#include <sun/swing/MenuItemLayoutHelper$RectSize.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TEXT_FOREGROUND
#undef X_AXIS

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils$SynthIconWrapper = ::javax::swing::plaf::synth::SynthGraphicsUtils$SynthIconWrapper;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthMenuItemLayoutHelper = ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $View = ::javax::swing::text::View;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;
using $MenuItemLayoutHelper$LayoutResult = ::sun::swing::MenuItemLayoutHelper$LayoutResult;
using $MenuItemLayoutHelper$RectSize = ::sun::swing::MenuItemLayoutHelper$RectSize;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthGraphicsUtils_FieldInfo_[] = {
	{"paintIconR", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthGraphicsUtils, paintIconR)},
	{"paintTextR", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthGraphicsUtils, paintTextR)},
	{"paintViewR", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthGraphicsUtils, paintViewR)},
	{"paintInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(SynthGraphicsUtils, paintInsets)},
	{"iconR", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthGraphicsUtils, iconR)},
	{"textR", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthGraphicsUtils, textR)},
	{"viewR", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthGraphicsUtils, viewR)},
	{"viewSizingInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(SynthGraphicsUtils, viewSizingInsets)},
	{}
};

$MethodInfo _SynthGraphicsUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthGraphicsUtils::*)()>(&SynthGraphicsUtils::init$))},
	{"applyInsets", "(Ljava/awt/Rectangle;Ljava/awt/Insets;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($Rectangle*,$Insets*,bool)>(&SynthGraphicsUtils::applyInsets))},
	{"computeStringWidth", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Font;Ljava/awt/FontMetrics;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"drawLine", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"drawLine", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;Ljava/awt/Graphics;IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"getIconHeight", "(Ljavax/swing/Icon;Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Icon*,$SynthContext*)>(&SynthGraphicsUtils::getIconHeight))},
	{"getIconWidth", "(Ljavax/swing/Icon;Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Icon*,$SynthContext*)>(&SynthGraphicsUtils::getIconWidth))},
	{"getMaximumCharHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Font;Ljava/lang/String;Ljavax/swing/Icon;IIIIII)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Font;Ljava/lang/String;Ljavax/swing/Icon;IIIIII)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredMenuItemSize", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;ILjava/lang/String;ZLjava/lang/String;)Ljava/awt/Dimension;", nullptr, $STATIC, $method(static_cast<$Dimension*(*)($SynthContext*,$SynthContext*,$JComponent*,$Icon*,$Icon*,int32_t,$String*,bool,$String*)>(&SynthGraphicsUtils::getPreferredMenuItemSize))},
	{"getPreferredSize", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Font;Ljava/lang/String;Ljavax/swing/Icon;IIIIII)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"layoutText", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/FontMetrics;Ljava/lang/String;Ljavax/swing/Icon;IIIILjava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($SynthContext*,$SynthContext*,$Graphics*,$Icon*,$Icon*,$String*,int32_t,$String*)>(&SynthGraphicsUtils::paint))},
	{"paintAccText", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthMenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$SynthMenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*)>(&SynthGraphicsUtils::paintAccText))},
	{"paintArrowIcon", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthMenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$SynthMenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*)>(&SynthGraphicsUtils::paintArrowIcon))},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthMenuItemLayoutHelper;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$SynthMenuItemLayoutHelper*)>(&SynthGraphicsUtils::paintBackground))},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $STATIC, $method(static_cast<void(*)($SynthContext*,$Graphics*,$JComponent*)>(&SynthGraphicsUtils::paintBackground))},
	{"paintCheckIcon", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthMenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$SynthMenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*)>(&SynthGraphicsUtils::paintCheckIcon))},
	{"paintIcon", "(Ljavax/swing/Icon;Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Icon*,$SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&SynthGraphicsUtils::paintIcon))},
	{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthMenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$SynthMenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*)>(&SynthGraphicsUtils::paintIcon))},
	{"paintMenuItem", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthMenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$SynthMenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*)>(&SynthGraphicsUtils::paintMenuItem))},
	{"paintText", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/lang/String;Ljava/awt/Rectangle;I)V", nullptr, $PUBLIC},
	{"paintText", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/lang/String;III)V", nullptr, $PUBLIC},
	{"paintText", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/lang/String;Ljavax/swing/Icon;IIIIIII)V", nullptr, $PUBLIC},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthMenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$SynthMenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*)>(&SynthGraphicsUtils::paintText))},
	{}
};

$InnerClassInfo _SynthGraphicsUtils_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthGraphicsUtils$SynthIconWrapper", "javax.swing.plaf.synth.SynthGraphicsUtils", "SynthIconWrapper", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthGraphicsUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthGraphicsUtils",
	"java.lang.Object",
	nullptr,
	_SynthGraphicsUtils_FieldInfo_,
	_SynthGraphicsUtils_MethodInfo_,
	nullptr,
	nullptr,
	_SynthGraphicsUtils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthGraphicsUtils$SynthIconWrapper"
};

$Object* allocate$SynthGraphicsUtils($Class* clazz) {
	return $of($alloc(SynthGraphicsUtils));
}

void SynthGraphicsUtils::init$() {
	$set(this, paintIconR, $new($Rectangle));
	$set(this, paintTextR, $new($Rectangle));
	$set(this, paintViewR, $new($Rectangle));
	$set(this, paintInsets, $new($Insets, 0, 0, 0, 0));
	$set(this, iconR, $new($Rectangle));
	$set(this, textR, $new($Rectangle));
	$set(this, viewR, $new($Rectangle));
	$set(this, viewSizingInsets, $new($Insets, 0, 0, 0, 0));
}

void SynthGraphicsUtils::drawLine($SynthContext* context, Object$* paintKey, $Graphics* g, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$nc(g)->drawLine(x1, y1, x2, y2);
}

void SynthGraphicsUtils::drawLine($SynthContext* context, Object$* paintKey, $Graphics* g, int32_t x1, int32_t y1, int32_t x2, int32_t y2, Object$* styleKey) {
	if ("dashed"_s->equals(styleKey)) {
		if (x1 == x2) {
			y1 += (y1 % 2);
			for (int32_t y = y1; y <= y2; y += 2) {
				$nc(g)->drawLine(x1, y, x2, y);
			}
		} else if (y1 == y2) {
			x1 += (x1 % 2);
			for (int32_t x = x1; x <= x2; x += 2) {
				$nc(g)->drawLine(x, y1, x, y2);
			}
		}
	} else {
		drawLine(context, paintKey, g, x1, y1, x2, y2);
	}
}

$String* SynthGraphicsUtils::layoutText($SynthContext* ss, $FontMetrics* fm, $String* text, $Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, $Rectangle* viewR, $Rectangle* iconR, $Rectangle* textR, int32_t iconTextGap) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SynthIcon, icon)) {
		$var($SynthGraphicsUtils$SynthIconWrapper, wrapper, $SynthGraphicsUtils$SynthIconWrapper::get($cast($SynthIcon, icon), ss));
		$var($String, formattedText, $SwingUtilities::layoutCompoundLabel($($nc(ss)->getComponent()), fm, text, wrapper, vAlign, hAlign, vTextPosition, hTextPosition, viewR, iconR, textR, iconTextGap));
		$SynthGraphicsUtils$SynthIconWrapper::release(wrapper);
		return formattedText;
	}
	return $SwingUtilities::layoutCompoundLabel($($nc(ss)->getComponent()), fm, text, icon, vAlign, hAlign, vTextPosition, hTextPosition, viewR, iconR, textR, iconTextGap);
}

int32_t SynthGraphicsUtils::computeStringWidth($SynthContext* ss, $Font* font, $FontMetrics* metrics, $String* text) {
	return $SwingUtilities2::stringWidth($($nc(ss)->getComponent()), metrics, text);
}

$Dimension* SynthGraphicsUtils::getMinimumSize($SynthContext* ss, $Font* font, $String* text, $Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, int32_t iconTextGap, int32_t mnemonicIndex) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $nc(ss)->getComponent());
	$var($Dimension, size, getPreferredSize(ss, font, text, icon, hAlign, vAlign, hTextPosition, vTextPosition, iconTextGap, mnemonicIndex));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getPreferredSpan($View::X_AXIS);
		$nc(size)->width -= var$0 - v->getMinimumSpan($View::X_AXIS);
	}
	return size;
}

$Dimension* SynthGraphicsUtils::getMaximumSize($SynthContext* ss, $Font* font, $String* text, $Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, int32_t iconTextGap, int32_t mnemonicIndex) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $nc(ss)->getComponent());
	$var($Dimension, size, getPreferredSize(ss, font, text, icon, hAlign, vAlign, hTextPosition, vTextPosition, iconTextGap, mnemonicIndex));
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		float var$0 = v->getMaximumSpan($View::X_AXIS);
		$nc(size)->width += var$0 - v->getPreferredSpan($View::X_AXIS);
	}
	return size;
}

int32_t SynthGraphicsUtils::getMaximumCharHeight($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, $nc($($nc(context)->getComponent()))->getFontMetrics($($nc($(context->getStyle()))->getFont(context))));
	int32_t var$0 = $nc(fm)->getAscent();
	return (var$0 + fm->getDescent());
}

$Dimension* SynthGraphicsUtils::getPreferredSize($SynthContext* ss, $Font* font, $String* text, $Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, int32_t iconTextGap, int32_t mnemonicIndex) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $nc(ss)->getComponent());
	$var($Insets, insets, $nc(c)->getInsets(this->viewSizingInsets));
	int32_t dx = $nc(insets)->left + insets->right;
	int32_t dy = insets->top + insets->bottom;
	if (icon == nullptr && (text == nullptr || font == nullptr)) {
		return $new($Dimension, dx, dy);
	} else if ((text == nullptr) || ((icon != nullptr) && (font == nullptr))) {
		int32_t var$0 = getIconWidth(icon, ss) + dx;
		return $new($Dimension, var$0, getIconHeight(icon, ss) + dy);
	} else {
		$var($FontMetrics, fm, c->getFontMetrics(font));
		$nc(this->iconR)->x = ($nc(this->iconR)->y = ($nc(this->iconR)->width = ($nc(this->iconR)->height = 0)));
		$nc(this->textR)->x = ($nc(this->textR)->y = ($nc(this->textR)->width = ($nc(this->textR)->height = 0)));
		$nc(this->viewR)->x = dx;
		$nc(this->viewR)->y = dy;
		$nc(this->viewR)->width = ($nc(this->viewR)->height = $Short::MAX_VALUE);
		layoutText(ss, fm, text, icon, hAlign, vAlign, hTextPosition, vTextPosition, this->viewR, this->iconR, this->textR, iconTextGap);
		int32_t x1 = $Math::min($nc(this->iconR)->x, $nc(this->textR)->x);
		int32_t x2 = $Math::max($nc(this->iconR)->x + $nc(this->iconR)->width, $nc(this->textR)->x + $nc(this->textR)->width);
		int32_t y1 = $Math::min($nc(this->iconR)->y, $nc(this->textR)->y);
		int32_t y2 = $Math::max($nc(this->iconR)->y + $nc(this->iconR)->height, $nc(this->textR)->y + $nc(this->textR)->height);
		$var($Dimension, rv, $new($Dimension, x2 - x1, y2 - y1));
		rv->width += dx;
		rv->height += dy;
		return rv;
	}
}

void SynthGraphicsUtils::paintText($SynthContext* ss, $Graphics* g, $String* text, $Rectangle* bounds, int32_t mnemonicIndex) {
	paintText(ss, g, text, $nc(bounds)->x, bounds->y, mnemonicIndex);
}

void SynthGraphicsUtils::paintText($SynthContext* ss, $Graphics* g, $String* text, int32_t x, int32_t y, int32_t mnemonicIndex) {
	$useLocalCurrentObjectStackCache();
	if (text != nullptr) {
		$var($JComponent, c, $nc(ss)->getComponent());
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(c, g));
		y += $nc(fm)->getAscent();
		$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemonicIndex, x, y);
	}
}

void SynthGraphicsUtils::paintText($SynthContext* ss, $Graphics* g, $String* text, $Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, int32_t iconTextGap, int32_t mnemonicIndex, int32_t textOffset) {
	$useLocalCurrentObjectStackCache();
	if ((icon == nullptr) && (text == nullptr)) {
		return;
	}
	$var($JComponent, c, $nc(ss)->getComponent());
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(c, g));
	$var($Insets, insets, $SynthLookAndFeel::getPaintingInsets(ss, this->paintInsets));
	$nc(this->paintViewR)->x = $nc(insets)->left;
	$nc(this->paintViewR)->y = insets->top;
	$nc(this->paintViewR)->width = $nc(c)->getWidth() - (insets->left + insets->right);
	$nc(this->paintViewR)->height = c->getHeight() - (insets->top + insets->bottom);
	$nc(this->paintIconR)->x = ($nc(this->paintIconR)->y = ($nc(this->paintIconR)->width = ($nc(this->paintIconR)->height = 0)));
	$nc(this->paintTextR)->x = ($nc(this->paintTextR)->y = ($nc(this->paintTextR)->width = ($nc(this->paintTextR)->height = 0)));
	$var($String, clippedText, layoutText(ss, fm, text, icon, hAlign, vAlign, hTextPosition, vTextPosition, this->paintViewR, this->paintIconR, this->paintTextR, iconTextGap));
	if (icon != nullptr) {
		$var($Color, color, $nc(g)->getColor());
		bool var$0 = $nc($(ss->getStyle()))->getBoolean(ss, "TableHeader.alignSorterArrow"_s, false);
		if (var$0 && "TableHeader.renderer"_s->equals($(c->getName()))) {
			$nc(this->paintIconR)->x = $nc(this->paintViewR)->width - $nc(this->paintIconR)->width;
		} else {
			$nc(this->paintIconR)->x += textOffset;
		}
		$nc(this->paintIconR)->y += textOffset;
		paintIcon(icon, ss, g, $nc(this->paintIconR)->x, $nc(this->paintIconR)->y, $nc(this->paintIconR)->width, $nc(this->paintIconR)->height);
		g->setColor(color);
	}
	if (text != nullptr) {
		$init($BasicHTML);
		$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, this->paintTextR);
		} else {
			$nc(this->paintTextR)->x += textOffset;
			$nc(this->paintTextR)->y += textOffset;
			paintText(ss, g, clippedText, this->paintTextR, mnemonicIndex);
		}
	}
}

int32_t SynthGraphicsUtils::getIconWidth($Icon* icon, $SynthContext* context) {
	if (icon == nullptr) {
		return 0;
	}
	if ($instanceOf($SynthIcon, icon)) {
		return $nc(($cast($SynthIcon, icon)))->getIconWidth(context);
	}
	return $nc(icon)->getIconWidth();
}

int32_t SynthGraphicsUtils::getIconHeight($Icon* icon, $SynthContext* context) {
	if (icon == nullptr) {
		return 0;
	}
	if ($instanceOf($SynthIcon, icon)) {
		return $nc(($cast($SynthIcon, icon)))->getIconHeight(context);
	}
	return $nc(icon)->getIconHeight();
}

void SynthGraphicsUtils::paintIcon($Icon* icon, $SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if ($instanceOf($SynthIcon, icon)) {
		$nc(($cast($SynthIcon, icon)))->paintIcon(context, g, x, y, width, height);
	} else if (icon != nullptr) {
		icon->paintIcon($($nc(context)->getComponent()), g, x, y);
	}
}

$Dimension* SynthGraphicsUtils::getPreferredMenuItemSize($SynthContext* context, $SynthContext* accContext, $JComponent* c, $Icon* checkIcon, $Icon* arrowIcon, int32_t defaultTextIconGap, $String* acceleratorDelimiter, bool useCheckAndArrow, $String* propertyPrefix) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, mi, $cast($JMenuItem, c));
	$var($SynthContext, var$0, context);
	$var($SynthContext, var$1, accContext);
	$var($JMenuItem, var$2, mi);
	$var($Icon, var$3, checkIcon);
	$var($Icon, var$4, arrowIcon);
	$var($Rectangle, var$5, $MenuItemLayoutHelper::createMaxRect());
	int32_t var$6 = defaultTextIconGap;
	$var($String, var$7, acceleratorDelimiter);
	$var($SynthMenuItemLayoutHelper, lh, $new($SynthMenuItemLayoutHelper, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $SynthLookAndFeel::isLeftToRight(mi), useCheckAndArrow, propertyPrefix));
	$var($Dimension, result, $new($Dimension));
	int32_t gap = lh->getGap();
	result->width = 0;
	$MenuItemLayoutHelper::addMaxWidth($(lh->getCheckSize()), gap, result);
	$MenuItemLayoutHelper::addMaxWidth($(lh->getLabelSize()), gap, result);
	$MenuItemLayoutHelper::addWidth(lh->getMaxAccOrArrowWidth(), 5 * gap, result);
	result->width -= gap;
	result->height = $MenuItemLayoutHelper::max($$new($ints, {
		$nc($(lh->getCheckSize()))->getHeight(),
		$nc($(lh->getLabelSize()))->getHeight(),
		$nc($(lh->getAccSize()))->getHeight(),
		$nc($(lh->getArrowSize()))->getHeight()
	}));
	$var($Insets, insets, $nc($(lh->getMenuItem()))->getInsets());
	if (insets != nullptr) {
		result->width += insets->left + insets->right;
		result->height += insets->top + insets->bottom;
	}
	if (result->width % 2 == 0) {
		++result->width;
	}
	if (result->height % 2 == 0) {
		++result->height;
	}
	return result;
}

void SynthGraphicsUtils::applyInsets($Rectangle* rect, $Insets* insets, bool leftToRight) {
	if (insets != nullptr) {
		$nc(rect)->x += (leftToRight ? insets->left : insets->right);
		rect->y += insets->top;
		rect->width -= (leftToRight ? insets->right : insets->left) + rect->x;
		rect->height -= (insets->bottom + rect->y);
	}
}

void SynthGraphicsUtils::paint($SynthContext* context, $SynthContext* accContext, $Graphics* g, $Icon* checkIcon, $Icon* arrowIcon, $String* acceleratorDelimiter, int32_t defaultTextIconGap, $String* propertyPrefix) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, mi, $cast($JMenuItem, $nc(context)->getComponent()));
	$var($SynthStyle, style, context->getStyle());
	$nc(g)->setFont($($nc(style)->getFont(context)));
	int32_t var$0 = $nc(mi)->getWidth();
	$var($Rectangle, viewRect, $new($Rectangle, 0, 0, var$0, mi->getHeight()));
	bool leftToRight = $SynthLookAndFeel::isLeftToRight(mi);
	applyInsets(viewRect, $($nc(mi)->getInsets()), leftToRight);
	$var($SynthMenuItemLayoutHelper, lh, $new($SynthMenuItemLayoutHelper, context, accContext, mi, checkIcon, arrowIcon, viewRect, defaultTextIconGap, acceleratorDelimiter, leftToRight, $MenuItemLayoutHelper::useCheckAndArrow(mi), propertyPrefix));
	$var($MenuItemLayoutHelper$LayoutResult, lr, lh->layoutMenuItem());
	paintMenuItem(g, lh, lr);
}

void SynthGraphicsUtils::paintMenuItem($Graphics* g, $SynthMenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr) {
	$useLocalCurrentObjectStackCache();
	$var($Font, holdf, $nc(g)->getFont());
	$var($Color, holdc, g->getColor());
	paintCheckIcon(g, lh, lr);
	paintIcon(g, lh, lr);
	paintText(g, lh, lr);
	paintAccText(g, lh, lr);
	paintArrowIcon(g, lh, lr);
	g->setColor(holdc);
	g->setFont(holdf);
}

void SynthGraphicsUtils::paintBackground($Graphics* g, $SynthMenuItemLayoutHelper* lh) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, var$0, $nc(lh)->getContext());
	$var($Graphics, var$1, g);
	paintBackground(var$0, var$1, $(lh->getMenuItem()));
}

void SynthGraphicsUtils::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintMenuItemBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthGraphicsUtils::paintIcon($Graphics* g, $SynthMenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr) {
	$useLocalCurrentObjectStackCache();
	if ($nc(lh)->getIcon() != nullptr) {
		$var($Icon, icon, nullptr);
		$var($JMenuItem, mi, lh->getMenuItem());
		$var($ButtonModel, model, $nc(mi)->getModel());
		if (!$nc(model)->isEnabled()) {
			$assign(icon, mi->getDisabledIcon());
		} else {
			bool var$1 = model->isPressed();
			if (var$1 && model->isArmed()) {
				$assign(icon, mi->getPressedIcon());
				if (icon == nullptr) {
					$assign(icon, mi->getIcon());
				}
			} else {
				$assign(icon, mi->getIcon());
			}
		}
		if (icon != nullptr) {
			$var($Rectangle, iconRect, $nc(lr)->getIconRect());
			paintIcon(icon, $(lh->getContext()), g, $nc(iconRect)->x, iconRect->y, iconRect->width, iconRect->height);
		}
	}
}

void SynthGraphicsUtils::paintCheckIcon($Graphics* g, $SynthMenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr) {
	$useLocalCurrentObjectStackCache();
	if ($nc(lh)->getCheckIcon() != nullptr) {
		$var($Rectangle, checkRect, $nc(lr)->getCheckRect());
		$var($Icon, var$0, lh->getCheckIcon());
		paintIcon(var$0, $(lh->getContext()), g, $nc(checkRect)->x, checkRect->y, checkRect->width, checkRect->height);
	}
}

void SynthGraphicsUtils::paintAccText($Graphics* g, $SynthMenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr) {
	$useLocalCurrentObjectStackCache();
	$var($String, accText, $nc(lh)->getAccText());
	if (accText != nullptr && !accText->isEmpty()) {
		$init($ColorType);
		$nc(g)->setColor($($nc($(lh->getAccStyle()))->getColor($(lh->getAccContext()), $ColorType::TEXT_FOREGROUND)));
		g->setFont($($nc($(lh->getAccStyle()))->getFont($(lh->getAccContext()))));
		$var($SynthContext, var$0, lh->getAccContext());
		$var($Graphics, var$1, g);
		$var($String, var$2, accText);
		int32_t var$3 = $nc($($nc(lr)->getAccRect()))->x;
		$nc($(lh->getAccGraphicsUtils()))->paintText(var$0, var$1, var$2, var$3, $nc($(lr->getAccRect()))->y, -1);
	}
}

void SynthGraphicsUtils::paintText($Graphics* g, $SynthMenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(lh)->getText()))->isEmpty()) {
		if (lh->getHtmlView() != nullptr) {
			$nc($(lh->getHtmlView()))->paint(g, $($nc(lr)->getTextRect()));
		} else {
			$init($ColorType);
			$nc(g)->setColor($($nc($(lh->getStyle()))->getColor($(lh->getContext()), $ColorType::TEXT_FOREGROUND)));
			g->setFont($($nc($(lh->getStyle()))->getFont($(lh->getContext()))));
			$var($SynthContext, var$0, lh->getContext());
			$var($Graphics, var$1, g);
			$var($String, var$2, lh->getText());
			int32_t var$3 = $nc($($nc(lr)->getTextRect()))->x;
			int32_t var$4 = $nc($(lr->getTextRect()))->y;
			$nc($(lh->getGraphicsUtils()))->paintText(var$0, var$1, var$2, var$3, var$4, $nc($(lh->getMenuItem()))->getDisplayedMnemonicIndex());
		}
	}
}

void SynthGraphicsUtils::paintArrowIcon($Graphics* g, $SynthMenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr) {
	$useLocalCurrentObjectStackCache();
	if ($nc(lh)->getArrowIcon() != nullptr) {
		$var($Rectangle, arrowRect, $nc(lr)->getArrowRect());
		$var($Icon, var$0, lh->getArrowIcon());
		paintIcon(var$0, $(lh->getContext()), g, $nc(arrowRect)->x, arrowRect->y, arrowRect->width, arrowRect->height);
	}
}

SynthGraphicsUtils::SynthGraphicsUtils() {
}

$Class* SynthGraphicsUtils::load$($String* name, bool initialize) {
	$loadClass(SynthGraphicsUtils, name, initialize, &_SynthGraphicsUtils_ClassInfo_, allocate$SynthGraphicsUtils);
	return class$;
}

$Class* SynthGraphicsUtils::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax