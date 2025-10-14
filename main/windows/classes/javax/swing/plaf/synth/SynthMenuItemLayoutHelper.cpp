#include <javax/swing/plaf/synth/SynthMenuItemLayoutHelper.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/text/View.h>
#include <sun/swing/MenuItemLayoutHelper$ColumnAlignment.h>
#include <sun/swing/MenuItemLayoutHelper$LayoutResult.h>
#include <sun/swing/MenuItemLayoutHelper$RectSize.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <jcpp.h>

#undef LEFT
#undef LTR_ALIGNMENT_1
#undef LTR_ALIGNMENT_2
#undef MAX_ACC_OR_ARROW_WIDTH
#undef MAX_CHECK_WIDTH
#undef MAX_ICON_WIDTH
#undef MAX_LABEL_WIDTH
#undef MAX_TEXT_WIDTH
#undef RIGHT
#undef RTL_ALIGNMENT_1
#undef RTL_ALIGNMENT_2
#undef X_AXIS
#undef Y_AXIS

using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $View = ::javax::swing::text::View;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;
using $MenuItemLayoutHelper$ColumnAlignment = ::sun::swing::MenuItemLayoutHelper$ColumnAlignment;
using $MenuItemLayoutHelper$LayoutResult = ::sun::swing::MenuItemLayoutHelper$LayoutResult;
using $MenuItemLayoutHelper$RectSize = ::sun::swing::MenuItemLayoutHelper$RectSize;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthMenuItemLayoutHelper_FieldInfo_[] = {
	{"MAX_ACC_OR_ARROW_WIDTH", "Lsun/swing/StringUIClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SynthMenuItemLayoutHelper, MAX_ACC_OR_ARROW_WIDTH)},
	{"LTR_ALIGNMENT_1", "Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SynthMenuItemLayoutHelper, LTR_ALIGNMENT_1)},
	{"LTR_ALIGNMENT_2", "Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SynthMenuItemLayoutHelper, LTR_ALIGNMENT_2)},
	{"RTL_ALIGNMENT_1", "Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SynthMenuItemLayoutHelper, RTL_ALIGNMENT_1)},
	{"RTL_ALIGNMENT_2", "Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SynthMenuItemLayoutHelper, RTL_ALIGNMENT_2)},
	{"context", "Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $field(SynthMenuItemLayoutHelper, context)},
	{"accContext", "Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $field(SynthMenuItemLayoutHelper, accContext)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthMenuItemLayoutHelper, style)},
	{"accStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthMenuItemLayoutHelper, accStyle)},
	{"gu", "Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PRIVATE, $field(SynthMenuItemLayoutHelper, gu)},
	{"accGu", "Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PRIVATE, $field(SynthMenuItemLayoutHelper, accGu)},
	{"alignAcceleratorText", "Z", nullptr, $PRIVATE, $field(SynthMenuItemLayoutHelper, alignAcceleratorText$)},
	{"maxAccOrArrowWidth", "I", nullptr, $PRIVATE, $field(SynthMenuItemLayoutHelper, maxAccOrArrowWidth)},
	{}
};

$MethodInfo _SynthMenuItemLayoutHelper_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/JMenuItem;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/awt/Rectangle;ILjava/lang/String;ZZLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SynthMenuItemLayoutHelper::*)($SynthContext*,$SynthContext*,$JMenuItem*,$Icon*,$Icon*,$Rectangle*,int32_t,$String*,bool,bool,$String*)>(&SynthMenuItemLayoutHelper::init$))},
	{"alignAcceleratorText", "()Z", nullptr, $PUBLIC},
	{"calcMaxWidths", "()V", nullptr, $PROTECTED},
	{"calcWidthsAndHeights", "()V", nullptr, $PROTECTED},
	{"getAccContext", "()Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getAccGraphicsUtils", "()Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PUBLIC},
	{"getAccStyle", "()Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC},
	{"getAlignAcceleratorText", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SynthMenuItemLayoutHelper::*)($String*)>(&SynthMenuItemLayoutHelper::getAlignAcceleratorText))},
	{"getContext", "()Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getGraphicsUtils", "()Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PUBLIC},
	{"getLTRColumnAlignment", "()Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC},
	{"getMaxAccOrArrowWidth", "()I", nullptr, $PUBLIC},
	{"getRTLColumnAlignment", "()Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC},
	{"getStyle", "()Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC},
	{"layoutIconAndTextInLabelRect", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PROTECTED},
	{"prepareForLayout", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SynthMenuItemLayoutHelper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthMenuItemLayoutHelper",
	"sun.swing.MenuItemLayoutHelper",
	nullptr,
	_SynthMenuItemLayoutHelper_FieldInfo_,
	_SynthMenuItemLayoutHelper_MethodInfo_
};

$Object* allocate$SynthMenuItemLayoutHelper($Class* clazz) {
	return $of($alloc(SynthMenuItemLayoutHelper));
}

$StringUIClientPropertyKey* SynthMenuItemLayoutHelper::MAX_ACC_OR_ARROW_WIDTH = nullptr;
$MenuItemLayoutHelper$ColumnAlignment* SynthMenuItemLayoutHelper::LTR_ALIGNMENT_1 = nullptr;
$MenuItemLayoutHelper$ColumnAlignment* SynthMenuItemLayoutHelper::LTR_ALIGNMENT_2 = nullptr;
$MenuItemLayoutHelper$ColumnAlignment* SynthMenuItemLayoutHelper::RTL_ALIGNMENT_1 = nullptr;
$MenuItemLayoutHelper$ColumnAlignment* SynthMenuItemLayoutHelper::RTL_ALIGNMENT_2 = nullptr;

void SynthMenuItemLayoutHelper::init$($SynthContext* context, $SynthContext* accContext, $JMenuItem* mi, $Icon* checkIcon, $Icon* arrowIcon, $Rectangle* viewRect, int32_t gap, $String* accDelimiter, bool isLeftToRight, bool useCheckAndArrow, $String* propertyPrefix) {
	$MenuItemLayoutHelper::init$();
	$set(this, context, context);
	$set(this, accContext, accContext);
	$set(this, style, $nc(context)->getStyle());
	$set(this, accStyle, $nc(accContext)->getStyle());
	$set(this, gu, $nc(this->style)->getGraphicsUtils(context));
	$set(this, accGu, $nc(this->accStyle)->getGraphicsUtils(accContext));
	this->alignAcceleratorText$ = getAlignAcceleratorText(propertyPrefix);
	$var($JMenuItem, var$0, mi);
	$var($Icon, var$1, checkIcon);
	$var($Icon, var$2, arrowIcon);
	$var($Rectangle, var$3, viewRect);
	int32_t var$4 = gap;
	$var($String, var$5, accDelimiter);
	bool var$6 = isLeftToRight;
	$var($Font, var$7, $nc(this->style)->getFont(context));
	reset(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $($nc(this->accStyle)->getFont(accContext)), useCheckAndArrow, propertyPrefix);
	setLeadingGap(0);
}

bool SynthMenuItemLayoutHelper::getAlignAcceleratorText($String* propertyPrefix) {
	return $nc(this->style)->getBoolean(this->context, $$str({propertyPrefix, ".alignAcceleratorText"_s}), true);
}

void SynthMenuItemLayoutHelper::calcWidthsAndHeights() {
	if (getIcon() != nullptr) {
		$nc($(getIconSize()))->setWidth($SynthGraphicsUtils::getIconWidth($(getIcon()), this->context));
		$nc($(getIconSize()))->setHeight($SynthGraphicsUtils::getIconHeight($(getIcon()), this->context));
	}
	if (!$nc($(getAccText()))->isEmpty()) {
		$var($SynthContext, var$0, getAccContext());
		$var($Font, var$1, $nc($(getAccFontMetrics()))->getFont());
		$var($FontMetrics, var$2, getAccFontMetrics());
		$nc($(getAccSize()))->setWidth($nc(this->accGu)->computeStringWidth(var$0, var$1, var$2, $(getAccText())));
		$nc($(getAccSize()))->setHeight($nc($(getAccFontMetrics()))->getHeight());
	}
	if (getText() == nullptr) {
		setText(""_s);
	} else if (!$nc($(getText()))->isEmpty()) {
		if (getHtmlView() != nullptr) {
			$nc($(getTextSize()))->setWidth($cast(int32_t, $nc($(getHtmlView()))->getPreferredSpan($View::X_AXIS)));
			$nc($(getTextSize()))->setHeight($cast(int32_t, $nc($(getHtmlView()))->getPreferredSpan($View::Y_AXIS)));
		} else {
			$var($SynthContext, var$3, this->context);
			$var($Font, var$4, $nc($(getFontMetrics()))->getFont());
			$var($FontMetrics, var$5, getFontMetrics());
			$nc($(getTextSize()))->setWidth($nc(this->gu)->computeStringWidth(var$3, var$4, var$5, $(getText())));
			$nc($(getTextSize()))->setHeight($nc($(getFontMetrics()))->getHeight());
		}
	}
	if (useCheckAndArrow()) {
		if (getCheckIcon() != nullptr) {
			$nc($(getCheckSize()))->setWidth($SynthGraphicsUtils::getIconWidth($(getCheckIcon()), this->context));
			$nc($(getCheckSize()))->setHeight($SynthGraphicsUtils::getIconHeight($(getCheckIcon()), this->context));
		}
		if (getArrowIcon() != nullptr) {
			$nc($(getArrowSize()))->setWidth($SynthGraphicsUtils::getIconWidth($(getArrowIcon()), this->context));
			$nc($(getArrowSize()))->setHeight($SynthGraphicsUtils::getIconHeight($(getArrowIcon()), this->context));
		}
	}
	if (isColumnLayout()) {
		int32_t var$7 = $nc($(getIconSize()))->getWidth();
		int32_t var$6 = var$7 + $nc($(getTextSize()))->getWidth();
		$nc($(getLabelSize()))->setWidth(var$6 + getGap());
		$nc($(getLabelSize()))->setHeight($MenuItemLayoutHelper::max($$new($ints, {
			$nc($(getCheckSize()))->getHeight(),
			$nc($(getIconSize()))->getHeight(),
			$nc($(getTextSize()))->getHeight(),
			$nc($(getAccSize()))->getHeight(),
			$nc($(getArrowSize()))->getHeight()
		})));
	} else {
		$var($Rectangle, textRect, $new($Rectangle));
		$var($Rectangle, iconRect, $new($Rectangle));
		$var($SynthContext, var$8, this->context);
		$var($FontMetrics, var$9, getFontMetrics());
		$var($String, var$10, getText());
		$var($Icon, var$11, getIcon());
		int32_t var$12 = getHorizontalAlignment();
		int32_t var$13 = getVerticalAlignment();
		int32_t var$14 = getHorizontalTextPosition();
		int32_t var$15 = getVerticalTextPosition();
		$var($Rectangle, var$16, getViewRect());
		$var($Rectangle, var$17, iconRect);
		$var($Rectangle, var$18, textRect);
		$nc(this->gu)->layoutText(var$8, var$9, var$10, var$11, var$12, var$13, var$14, var$15, var$16, var$17, var$18, getGap());
		textRect->width += getLeftTextExtraWidth();
		$var($Rectangle, labelRect, iconRect->union$(textRect));
		$nc($(getLabelSize()))->setHeight($nc(labelRect)->height);
		$nc($(getLabelSize()))->setWidth($nc(labelRect)->width);
	}
}

void SynthMenuItemLayoutHelper::calcMaxWidths() {
	$init($MenuItemLayoutHelper);
	calcMaxWidth($(getCheckSize()), $MenuItemLayoutHelper::MAX_CHECK_WIDTH);
	this->maxAccOrArrowWidth = calcMaxValue(SynthMenuItemLayoutHelper::MAX_ACC_OR_ARROW_WIDTH, $nc($(getArrowSize()))->getWidth());
	this->maxAccOrArrowWidth = calcMaxValue(SynthMenuItemLayoutHelper::MAX_ACC_OR_ARROW_WIDTH, $nc($(getAccSize()))->getWidth());
	if (isColumnLayout()) {
		calcMaxWidth($(getIconSize()), $MenuItemLayoutHelper::MAX_ICON_WIDTH);
		calcMaxWidth($(getTextSize()), $MenuItemLayoutHelper::MAX_TEXT_WIDTH);
		int32_t curGap = getGap();
		bool var$0 = ($nc($(getIconSize()))->getMaxWidth() == 0);
		if (var$0 || ($nc($(getTextSize()))->getMaxWidth() == 0)) {
			curGap = 0;
		}
		int32_t var$1 = $nc($(getIconSize()))->getMaxWidth();
		$nc($(getLabelSize()))->setMaxWidth(calcMaxValue($MenuItemLayoutHelper::MAX_LABEL_WIDTH, var$1 + $nc($(getTextSize()))->getMaxWidth() + curGap));
	} else {
		$nc($(getIconSize()))->setMaxWidth(getParentIntProperty($MenuItemLayoutHelper::MAX_ICON_WIDTH));
		calcMaxWidth($(getLabelSize()), $MenuItemLayoutHelper::MAX_LABEL_WIDTH);
		int32_t var$2 = $nc($(getLabelSize()))->getMaxWidth();
		int32_t candidateTextWidth = var$2 - $nc($(getIconSize()))->getMaxWidth();
		if ($nc($(getIconSize()))->getMaxWidth() > 0) {
			candidateTextWidth -= getGap();
		}
		$nc($(getTextSize()))->setMaxWidth(calcMaxValue($MenuItemLayoutHelper::MAX_TEXT_WIDTH, candidateTextWidth));
	}
}

$SynthContext* SynthMenuItemLayoutHelper::getContext() {
	return this->context;
}

$SynthContext* SynthMenuItemLayoutHelper::getAccContext() {
	return this->accContext;
}

$SynthStyle* SynthMenuItemLayoutHelper::getStyle() {
	return this->style;
}

$SynthStyle* SynthMenuItemLayoutHelper::getAccStyle() {
	return this->accStyle;
}

$SynthGraphicsUtils* SynthMenuItemLayoutHelper::getGraphicsUtils() {
	return this->gu;
}

$SynthGraphicsUtils* SynthMenuItemLayoutHelper::getAccGraphicsUtils() {
	return this->accGu;
}

bool SynthMenuItemLayoutHelper::alignAcceleratorText() {
	return this->alignAcceleratorText$;
}

int32_t SynthMenuItemLayoutHelper::getMaxAccOrArrowWidth() {
	return this->maxAccOrArrowWidth;
}

void SynthMenuItemLayoutHelper::prepareForLayout($MenuItemLayoutHelper$LayoutResult* lr) {
	$nc($($nc(lr)->getCheckRect()))->width = $nc($(getCheckSize()))->getMaxWidth();
	bool var$0 = useCheckAndArrow();
	if (var$0 && (!""_s->equals($(getAccText())))) {
		$nc($(lr->getAccRect()))->width = this->maxAccOrArrowWidth;
	} else {
		$nc($(lr->getArrowRect()))->width = this->maxAccOrArrowWidth;
	}
}

$MenuItemLayoutHelper$ColumnAlignment* SynthMenuItemLayoutHelper::getLTRColumnAlignment() {
	if (alignAcceleratorText()) {
		return SynthMenuItemLayoutHelper::LTR_ALIGNMENT_2;
	} else {
		return SynthMenuItemLayoutHelper::LTR_ALIGNMENT_1;
	}
}

$MenuItemLayoutHelper$ColumnAlignment* SynthMenuItemLayoutHelper::getRTLColumnAlignment() {
	if (alignAcceleratorText()) {
		return SynthMenuItemLayoutHelper::RTL_ALIGNMENT_2;
	} else {
		return SynthMenuItemLayoutHelper::RTL_ALIGNMENT_1;
	}
}

void SynthMenuItemLayoutHelper::layoutIconAndTextInLabelRect($MenuItemLayoutHelper$LayoutResult* lr) {
	$nc(lr)->setTextRect($$new($Rectangle));
	lr->setIconRect($$new($Rectangle));
	$var($SynthContext, var$0, this->context);
	$var($FontMetrics, var$1, getFontMetrics());
	$var($String, var$2, getText());
	$var($Icon, var$3, getIcon());
	int32_t var$4 = getHorizontalAlignment();
	int32_t var$5 = getVerticalAlignment();
	int32_t var$6 = getHorizontalTextPosition();
	int32_t var$7 = getVerticalTextPosition();
	$var($Rectangle, var$8, lr->getLabelRect());
	$var($Rectangle, var$9, lr->getIconRect());
	$var($Rectangle, var$10, lr->getTextRect());
	$nc(this->gu)->layoutText(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, getGap());
}

void clinit$SynthMenuItemLayoutHelper($Class* class$) {
	$assignStatic(SynthMenuItemLayoutHelper::MAX_ACC_OR_ARROW_WIDTH, $new($StringUIClientPropertyKey, "maxAccOrArrowWidth"_s));
	$assignStatic(SynthMenuItemLayoutHelper::LTR_ALIGNMENT_1, $new($MenuItemLayoutHelper$ColumnAlignment, $SwingConstants::LEFT, $SwingConstants::LEFT, $SwingConstants::LEFT, $SwingConstants::RIGHT, $SwingConstants::RIGHT));
	$assignStatic(SynthMenuItemLayoutHelper::LTR_ALIGNMENT_2, $new($MenuItemLayoutHelper$ColumnAlignment, $SwingConstants::LEFT, $SwingConstants::LEFT, $SwingConstants::LEFT, $SwingConstants::LEFT, $SwingConstants::RIGHT));
	$assignStatic(SynthMenuItemLayoutHelper::RTL_ALIGNMENT_1, $new($MenuItemLayoutHelper$ColumnAlignment, $SwingConstants::RIGHT, $SwingConstants::RIGHT, $SwingConstants::RIGHT, $SwingConstants::LEFT, $SwingConstants::LEFT));
	$assignStatic(SynthMenuItemLayoutHelper::RTL_ALIGNMENT_2, $new($MenuItemLayoutHelper$ColumnAlignment, $SwingConstants::RIGHT, $SwingConstants::RIGHT, $SwingConstants::RIGHT, $SwingConstants::RIGHT, $SwingConstants::LEFT));
}

SynthMenuItemLayoutHelper::SynthMenuItemLayoutHelper() {
}

$Class* SynthMenuItemLayoutHelper::load$($String* name, bool initialize) {
	$loadClass(SynthMenuItemLayoutHelper, name, initialize, &_SynthMenuItemLayoutHelper_ClassInfo_, clinit$SynthMenuItemLayoutHelper, allocate$SynthMenuItemLayoutHelper);
	return class$;
}

$Class* SynthMenuItemLayoutHelper::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax