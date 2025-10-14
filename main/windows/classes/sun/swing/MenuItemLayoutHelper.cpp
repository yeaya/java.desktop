#include <sun/swing/MenuItemLayoutHelper.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <sun/swing/MenuItemCheckIconFactory.h>
#include <sun/swing/MenuItemLayoutHelper$ColumnAlignment.h>
#include <sun/swing/MenuItemLayoutHelper$LayoutResult.h>
#include <sun/swing/MenuItemLayoutHelper$RectSize.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BASICMENUITEMUI_MAX_TEXT_OFFSET
#undef BOTTOM
#undef CENTER
#undef LEADING
#undef LEFT
#undef LEFT_ALIGNMENT
#undef MAX_ACC_WIDTH
#undef MAX_ARROW_WIDTH
#undef MAX_CHECK_WIDTH
#undef MAX_ICON_WIDTH
#undef MAX_LABEL_WIDTH
#undef MAX_TEXT_WIDTH
#undef MAX_VALUE
#undef MIN_VALUE
#undef RIGHT
#undef RIGHT_ALIGNMENT
#undef TOP
#undef TRAILING
#undef X_AXIS
#undef Y_AXIS

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Rectangle = ::java::awt::Rectangle;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;
using $MenuItemCheckIconFactory = ::sun::swing::MenuItemCheckIconFactory;
using $MenuItemLayoutHelper$ColumnAlignment = ::sun::swing::MenuItemLayoutHelper$ColumnAlignment;
using $MenuItemLayoutHelper$LayoutResult = ::sun::swing::MenuItemLayoutHelper$LayoutResult;
using $MenuItemLayoutHelper$RectSize = ::sun::swing::MenuItemLayoutHelper$RectSize;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace sun {
	namespace swing {

$FieldInfo _MenuItemLayoutHelper_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MenuItemLayoutHelper, $assertionsDisabled)},
	{"MAX_ARROW_WIDTH", "Lsun/swing/StringUIClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MenuItemLayoutHelper, MAX_ARROW_WIDTH)},
	{"MAX_CHECK_WIDTH", "Lsun/swing/StringUIClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MenuItemLayoutHelper, MAX_CHECK_WIDTH)},
	{"MAX_ICON_WIDTH", "Lsun/swing/StringUIClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MenuItemLayoutHelper, MAX_ICON_WIDTH)},
	{"MAX_TEXT_WIDTH", "Lsun/swing/StringUIClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MenuItemLayoutHelper, MAX_TEXT_WIDTH)},
	{"MAX_ACC_WIDTH", "Lsun/swing/StringUIClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MenuItemLayoutHelper, MAX_ACC_WIDTH)},
	{"MAX_LABEL_WIDTH", "Lsun/swing/StringUIClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MenuItemLayoutHelper, MAX_LABEL_WIDTH)},
	{"mi", "Ljavax/swing/JMenuItem;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, mi)},
	{"miParent", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, miParent)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, font)},
	{"accFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, accFont)},
	{"fm", "Ljava/awt/FontMetrics;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, fm)},
	{"accFm", "Ljava/awt/FontMetrics;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, accFm)},
	{"icon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, icon)},
	{"checkIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, checkIcon)},
	{"arrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, arrowIcon)},
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, text)},
	{"accText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, accText)},
	{"isColumnLayout", "Z", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, isColumnLayout$)},
	{"useCheckAndArrow", "Z", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, useCheckAndArrow$)},
	{"isLeftToRight", "Z", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, isLeftToRight$)},
	{"isTopLevelMenu", "Z", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, isTopLevelMenu$)},
	{"htmlView", "Ljavax/swing/text/View;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, htmlView)},
	{"verticalAlignment", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, verticalAlignment)},
	{"horizontalAlignment", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, horizontalAlignment)},
	{"verticalTextPosition", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, verticalTextPosition)},
	{"horizontalTextPosition", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, horizontalTextPosition)},
	{"gap", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, gap)},
	{"leadingGap", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, leadingGap)},
	{"afterCheckIconGap", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, afterCheckIconGap)},
	{"minTextOffset", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, minTextOffset)},
	{"leftTextExtraWidth", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, leftTextExtraWidth)},
	{"viewRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, viewRect)},
	{"iconSize", "Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, iconSize)},
	{"textSize", "Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, textSize)},
	{"accSize", "Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, accSize)},
	{"checkSize", "Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, checkSize)},
	{"arrowSize", "Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, arrowSize)},
	{"labelSize", "Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PRIVATE, $field(MenuItemLayoutHelper, labelSize)},
	{}
};

$MethodInfo _MenuItemLayoutHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MenuItemLayoutHelper::*)()>(&MenuItemLayoutHelper::init$))},
	{"<init>", "(Ljavax/swing/JMenuItem;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/awt/Rectangle;ILjava/lang/String;ZLjava/awt/Font;Ljava/awt/Font;ZLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MenuItemLayoutHelper::*)($JMenuItem*,$Icon*,$Icon*,$Rectangle*,int32_t,$String*,bool,$Font*,$Font*,bool,$String*)>(&MenuItemLayoutHelper::init$))},
	{"addMaxWidth", "(Lsun/swing/MenuItemLayoutHelper$RectSize;ILjava/awt/Dimension;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MenuItemLayoutHelper$RectSize*,int32_t,$Dimension*)>(&MenuItemLayoutHelper::addMaxWidth))},
	{"addWidth", "(IILjava/awt/Dimension;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,$Dimension*)>(&MenuItemLayoutHelper::addWidth))},
	{"alignAccCheckAndArrowVertically", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*)>(&MenuItemLayoutHelper::alignAccCheckAndArrowVertically))},
	{"alignRect", "(Ljava/awt/Rectangle;II)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($Rectangle*,int32_t,int32_t)>(&MenuItemLayoutHelper::alignRect))},
	{"alignRects", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*,$MenuItemLayoutHelper$ColumnAlignment*)>(&MenuItemLayoutHelper::alignRects))},
	{"calcExtraWidths", "()V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)()>(&MenuItemLayoutHelper::calcExtraWidths))},
	{"calcLabelYPosition", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*)>(&MenuItemLayoutHelper::calcLabelYPosition))},
	{"calcMaxTextOffset", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($Rectangle*)>(&MenuItemLayoutHelper::calcMaxTextOffset))},
	{"calcMaxValue", "(Ljava/lang/Object;I)I", nullptr, $PROTECTED},
	{"calcMaxWidth", "(Lsun/swing/MenuItemLayoutHelper$RectSize;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"calcMaxWidths", "()V", nullptr, $PROTECTED},
	{"calcTextAndIconYPositions", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*)>(&MenuItemLayoutHelper::calcTextAndIconYPositions))},
	{"calcWidthsAndHeights", "()V", nullptr, $PROTECTED},
	{"calcXPositionsLTR", "(III[Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(MenuItemLayoutHelper::*)(int32_t,int32_t,int32_t,$RectangleArray*)>(&MenuItemLayoutHelper::calcXPositionsLTR))},
	{"calcXPositionsRTL", "(III[Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(MenuItemLayoutHelper::*)(int32_t,int32_t,int32_t,$RectangleArray*)>(&MenuItemLayoutHelper::calcXPositionsRTL))},
	{"clearUsedClientProperties", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*)>(&MenuItemLayoutHelper::clearUsedClientProperties))},
	{"clearUsedParentClientProperties", "(Ljavax/swing/JMenuItem;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JMenuItem*)>(&MenuItemLayoutHelper::clearUsedParentClientProperties))},
	{"createLayoutResult", "()Lsun/swing/MenuItemLayoutHelper$LayoutResult;", nullptr, $PRIVATE, $method(static_cast<$MenuItemLayoutHelper$LayoutResult*(MenuItemLayoutHelper::*)()>(&MenuItemLayoutHelper::createLayoutResult))},
	{"createMaxRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)()>(&MenuItemLayoutHelper::createMaxRect))},
	{"doLTRColumnLayout", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*,$MenuItemLayoutHelper$ColumnAlignment*)>(&MenuItemLayoutHelper::doLTRColumnLayout))},
	{"doLTRComplexLayout", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*,$MenuItemLayoutHelper$ColumnAlignment*)>(&MenuItemLayoutHelper::doLTRComplexLayout))},
	{"doRTLColumnLayout", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*,$MenuItemLayoutHelper$ColumnAlignment*)>(&MenuItemLayoutHelper::doRTLColumnLayout))},
	{"doRTLComplexLayout", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*,$MenuItemLayoutHelper$ColumnAlignment*)>(&MenuItemLayoutHelper::doRTLComplexLayout))},
	{"fixVerticalAlignment", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)($MenuItemLayoutHelper$LayoutResult*,$Rectangle*)>(&MenuItemLayoutHelper::fixVerticalAlignment))},
	{"getAccFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getAccFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getAccSize", "()Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PUBLIC},
	{"getAccText", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MenuItemLayoutHelper::*)($String*)>(&MenuItemLayoutHelper::getAccText))},
	{"getAccText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAfterCheckIconGap", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MenuItemLayoutHelper::*)($String*)>(&MenuItemLayoutHelper::getAfterCheckIconGap))},
	{"getAfterCheckIconGap", "()I", nullptr, $PUBLIC},
	{"getArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getArrowSize", "()Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PUBLIC},
	{"getCheckIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getCheckOffset", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MenuItemLayoutHelper::*)($String*)>(&MenuItemLayoutHelper::getCheckOffset))},
	{"getCheckSize", "()Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGap", "()I", nullptr, $PUBLIC},
	{"getHorizontalAlignment", "()I", nullptr, $PUBLIC},
	{"getHorizontalTextPosition", "()I", nullptr, $PUBLIC},
	{"getHtmlView", "()Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getIcon", "(Ljava/lang/String;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(static_cast<$Icon*(MenuItemLayoutHelper::*)($String*)>(&MenuItemLayoutHelper::getIcon))},
	{"getIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getIconSize", "()Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PUBLIC},
	{"getLTRColumnAlignment", "()Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC},
	{"getLabelSize", "()Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PUBLIC},
	{"getLeadingGap", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MenuItemLayoutHelper::*)($String*)>(&MenuItemLayoutHelper::getLeadingGap))},
	{"getLeadingGap", "()I", nullptr, $PUBLIC},
	{"getLeftExtraWidth", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MenuItemLayoutHelper::*)($String*)>(&MenuItemLayoutHelper::getLeftExtraWidth))},
	{"getLeftTextExtraWidth", "()I", nullptr, $PUBLIC},
	{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"getMenuItemParent", "(Ljavax/swing/JMenuItem;)Ljavax/swing/JComponent;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JComponent*(*)($JMenuItem*)>(&MenuItemLayoutHelper::getMenuItemParent))},
	{"getMenuItemParent", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getMinTextOffset", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MenuItemLayoutHelper::*)($String*)>(&MenuItemLayoutHelper::getMinTextOffset))},
	{"getMinTextOffset", "()I", nullptr, $PUBLIC},
	{"getParentIntProperty", "(Ljava/lang/Object;)I", nullptr, $PROTECTED},
	{"getRTLColumnAlignment", "()Lsun/swing/MenuItemLayoutHelper$ColumnAlignment;", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextSize", "()Lsun/swing/MenuItemLayoutHelper$RectSize;", nullptr, $PUBLIC},
	{"getVerticalAlignment", "()I", nullptr, $PUBLIC},
	{"getVerticalTextPosition", "()I", nullptr, $PUBLIC},
	{"getViewRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"isColumnLayout", "(ZLjavax/swing/JMenuItem;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(bool,$JMenuItem*)>(&MenuItemLayoutHelper::isColumnLayout))},
	{"isColumnLayout", "(ZIII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(bool,int32_t,int32_t,int32_t)>(&MenuItemLayoutHelper::isColumnLayout))},
	{"isColumnLayout", "()Z", nullptr, $PUBLIC},
	{"isLeftToRight", "()Z", nullptr, $PUBLIC},
	{"isTopLevelMenu", "()Z", nullptr, $PUBLIC},
	{"layoutIconAndTextInLabelRect", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PROTECTED},
	{"layoutMenuItem", "()Lsun/swing/MenuItemLayoutHelper$LayoutResult;", nullptr, $PUBLIC},
	{"max", "([I)I", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<int32_t(*)($ints*)>(&MenuItemLayoutHelper::max))},
	{"prepareForLayout", "(Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PROTECTED},
	{"reset", "(Ljavax/swing/JMenuItem;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/awt/Rectangle;ILjava/lang/String;ZLjava/awt/Font;Ljava/awt/Font;ZLjava/lang/String;)V", nullptr, $PROTECTED},
	{"setAccFont", "(Ljava/awt/Font;)V", nullptr, $PROTECTED},
	{"setAccFontMetrics", "(Ljava/awt/FontMetrics;)V", nullptr, $PROTECTED},
	{"setAccSize", "(Lsun/swing/MenuItemLayoutHelper$RectSize;)V", nullptr, $PROTECTED},
	{"setAccText", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"setAfterCheckIconGap", "(I)V", nullptr, $PROTECTED},
	{"setArrowIcon", "(Ljavax/swing/Icon;)V", nullptr, $PROTECTED},
	{"setArrowSize", "(Lsun/swing/MenuItemLayoutHelper$RectSize;)V", nullptr, $PROTECTED},
	{"setCheckIcon", "(Ljavax/swing/Icon;)V", nullptr, $PROTECTED},
	{"setCheckSize", "(Lsun/swing/MenuItemLayoutHelper$RectSize;)V", nullptr, $PROTECTED},
	{"setColumnLayout", "(Z)V", nullptr, $PROTECTED},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PROTECTED},
	{"setFontMetrics", "(Ljava/awt/FontMetrics;)V", nullptr, $PROTECTED},
	{"setGap", "(I)V", nullptr, $PROTECTED},
	{"setHorizontalAlignment", "(I)V", nullptr, $PROTECTED},
	{"setHorizontalTextPosition", "(I)V", nullptr, $PROTECTED},
	{"setHtmlView", "(Ljavax/swing/text/View;)V", nullptr, $PROTECTED},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PROTECTED},
	{"setIconSize", "(Lsun/swing/MenuItemLayoutHelper$RectSize;)V", nullptr, $PROTECTED},
	{"setLabelSize", "(Lsun/swing/MenuItemLayoutHelper$RectSize;)V", nullptr, $PROTECTED},
	{"setLeadingGap", "(I)V", nullptr, $PROTECTED},
	{"setLeftToRight", "(Z)V", nullptr, $PROTECTED},
	{"setMenuItem", "(Ljavax/swing/JMenuItem;)V", nullptr, $PROTECTED},
	{"setMenuItemParent", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"setMinTextOffset", "(I)V", nullptr, $PROTECTED},
	{"setOriginalWidths", "()V", nullptr, $PRIVATE, $method(static_cast<void(MenuItemLayoutHelper::*)()>(&MenuItemLayoutHelper::setOriginalWidths))},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"setTextSize", "(Lsun/swing/MenuItemLayoutHelper$RectSize;)V", nullptr, $PROTECTED},
	{"setTopLevelMenu", "(Z)V", nullptr, $PROTECTED},
	{"setUseCheckAndArrow", "(Z)V", nullptr, $PROTECTED},
	{"setVerticalAlignment", "(I)V", nullptr, $PROTECTED},
	{"setVerticalTextPosition", "(I)V", nullptr, $PROTECTED},
	{"setViewRect", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"useCheckAndArrow", "()Z", nullptr, $PUBLIC},
	{"useCheckAndArrow", "(Ljavax/swing/JMenuItem;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JMenuItem*)>(&MenuItemLayoutHelper::useCheckAndArrow))},
	{}
};

$InnerClassInfo _MenuItemLayoutHelper_InnerClassesInfo_[] = {
	{"sun.swing.MenuItemLayoutHelper$RectSize", "sun.swing.MenuItemLayoutHelper", "RectSize", $PUBLIC | $STATIC},
	{"sun.swing.MenuItemLayoutHelper$ColumnAlignment", "sun.swing.MenuItemLayoutHelper", "ColumnAlignment", $PUBLIC | $STATIC},
	{"sun.swing.MenuItemLayoutHelper$LayoutResult", "sun.swing.MenuItemLayoutHelper", "LayoutResult", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MenuItemLayoutHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.MenuItemLayoutHelper",
	"java.lang.Object",
	nullptr,
	_MenuItemLayoutHelper_FieldInfo_,
	_MenuItemLayoutHelper_MethodInfo_,
	nullptr,
	nullptr,
	_MenuItemLayoutHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.MenuItemLayoutHelper$RectSize,sun.swing.MenuItemLayoutHelper$ColumnAlignment,sun.swing.MenuItemLayoutHelper$LayoutResult"
};

$Object* allocate$MenuItemLayoutHelper($Class* clazz) {
	return $of($alloc(MenuItemLayoutHelper));
}

bool MenuItemLayoutHelper::$assertionsDisabled = false;
$StringUIClientPropertyKey* MenuItemLayoutHelper::MAX_ARROW_WIDTH = nullptr;
$StringUIClientPropertyKey* MenuItemLayoutHelper::MAX_CHECK_WIDTH = nullptr;
$StringUIClientPropertyKey* MenuItemLayoutHelper::MAX_ICON_WIDTH = nullptr;
$StringUIClientPropertyKey* MenuItemLayoutHelper::MAX_TEXT_WIDTH = nullptr;
$StringUIClientPropertyKey* MenuItemLayoutHelper::MAX_ACC_WIDTH = nullptr;
$StringUIClientPropertyKey* MenuItemLayoutHelper::MAX_LABEL_WIDTH = nullptr;

void MenuItemLayoutHelper::init$() {
}

void MenuItemLayoutHelper::init$($JMenuItem* mi, $Icon* checkIcon, $Icon* arrowIcon, $Rectangle* viewRect, int32_t gap, $String* accDelimiter, bool isLeftToRight, $Font* font, $Font* accFont, bool useCheckAndArrow, $String* propertyPrefix) {
	reset(mi, checkIcon, arrowIcon, viewRect, gap, accDelimiter, isLeftToRight, font, accFont, useCheckAndArrow, propertyPrefix);
}

void MenuItemLayoutHelper::reset($JMenuItem* mi, $Icon* checkIcon, $Icon* arrowIcon, $Rectangle* viewRect, int32_t gap, $String* accDelimiter, bool isLeftToRight, $Font* font, $Font* accFont, bool useCheckAndArrow, $String* propertyPrefix) {
	$set(this, mi, mi);
	$set(this, miParent, getMenuItemParent(mi));
	$set(this, accText, getAccText(accDelimiter));
	this->verticalAlignment = $nc(mi)->getVerticalAlignment();
	this->horizontalAlignment = mi->getHorizontalAlignment();
	this->verticalTextPosition = mi->getVerticalTextPosition();
	this->horizontalTextPosition = mi->getHorizontalTextPosition();
	this->useCheckAndArrow$ = useCheckAndArrow;
	$set(this, font, font);
	$set(this, accFont, accFont);
	$set(this, fm, mi->getFontMetrics(font));
	$set(this, accFm, mi->getFontMetrics(accFont));
	this->isLeftToRight$ = isLeftToRight;
	this->isColumnLayout$ = isColumnLayout(isLeftToRight, this->horizontalAlignment, this->horizontalTextPosition, this->verticalTextPosition);
	this->isTopLevelMenu$ = (this->miParent == nullptr) ? true : false;
	$set(this, checkIcon, checkIcon);
	$set(this, icon, getIcon(propertyPrefix));
	$set(this, arrowIcon, arrowIcon);
	$set(this, text, mi->getText());
	this->gap = gap;
	this->afterCheckIconGap = getAfterCheckIconGap(propertyPrefix);
	this->minTextOffset = getMinTextOffset(propertyPrefix);
	$init($BasicHTML);
	$set(this, htmlView, $cast($View, mi->getClientProperty($BasicHTML::propertyKey)));
	$set(this, viewRect, viewRect);
	$set(this, iconSize, $new($MenuItemLayoutHelper$RectSize));
	$set(this, textSize, $new($MenuItemLayoutHelper$RectSize));
	$set(this, accSize, $new($MenuItemLayoutHelper$RectSize));
	$set(this, checkSize, $new($MenuItemLayoutHelper$RectSize));
	$set(this, arrowSize, $new($MenuItemLayoutHelper$RectSize));
	$set(this, labelSize, $new($MenuItemLayoutHelper$RectSize));
	calcExtraWidths();
	calcWidthsAndHeights();
	setOriginalWidths();
	calcMaxWidths();
	this->leadingGap = getLeadingGap(propertyPrefix);
	calcMaxTextOffset(viewRect);
}

void MenuItemLayoutHelper::calcExtraWidths() {
	this->leftTextExtraWidth = getLeftExtraWidth(this->text);
}

int32_t MenuItemLayoutHelper::getLeftExtraWidth($String* str) {
	int32_t lsb = $SwingUtilities2::getLeftSideBearing(static_cast<$JComponent*>(this->mi), this->fm, str);
	if (lsb < 0) {
		return -lsb;
	} else {
		return 0;
	}
}

void MenuItemLayoutHelper::setOriginalWidths() {
	$nc(this->iconSize)->origWidth = $nc(this->iconSize)->width;
	$nc(this->textSize)->origWidth = $nc(this->textSize)->width;
	$nc(this->accSize)->origWidth = $nc(this->accSize)->width;
	$nc(this->checkSize)->origWidth = $nc(this->checkSize)->width;
	$nc(this->arrowSize)->origWidth = $nc(this->arrowSize)->width;
}

$String* MenuItemLayoutHelper::getAccText($String* acceleratorDelimiter) {
	$var($String, accText, ""_s);
	$var($KeyStroke, accelerator, $nc(this->mi)->getAccelerator());
	if (accelerator != nullptr) {
		int32_t modifiers = accelerator->getModifiers();
		if (modifiers > 0) {
			$assign(accText, $KeyEvent::getKeyModifiersText(modifiers));
			$plusAssign(accText, acceleratorDelimiter);
		}
		int32_t keyCode = accelerator->getKeyCode();
		if (keyCode != 0) {
			$plusAssign(accText, $($KeyEvent::getKeyText(keyCode)));
		} else {
			$plusAssign(accText, accelerator->getKeyChar());
		}
	}
	return accText;
}

$Icon* MenuItemLayoutHelper::getIcon($String* propertyPrefix) {
	$var($Icon, icon, nullptr);
	$var($MenuItemCheckIconFactory, iconFactory, $cast($MenuItemCheckIconFactory, $UIManager::get($$str({propertyPrefix, ".checkIconFactory"_s}))));
	if (!this->isColumnLayout$ || !this->useCheckAndArrow$ || iconFactory == nullptr || !$nc(iconFactory)->isCompatible(this->checkIcon, propertyPrefix)) {
		$assign(icon, $nc(this->mi)->getIcon());
	}
	return icon;
}

int32_t MenuItemLayoutHelper::getMinTextOffset($String* propertyPrefix) {
	int32_t minimumTextOffset = 0;
	$var($Object, minimumTextOffsetObject, $UIManager::get($$str({propertyPrefix, ".minimumTextOffset"_s})));
	if ($instanceOf($Integer, minimumTextOffsetObject)) {
		minimumTextOffset = $nc(($cast($Integer, minimumTextOffsetObject)))->intValue();
	}
	return minimumTextOffset;
}

int32_t MenuItemLayoutHelper::getAfterCheckIconGap($String* propertyPrefix) {
	int32_t afterCheckIconGap = this->gap;
	$var($Object, afterCheckIconGapObject, $UIManager::get($$str({propertyPrefix, ".afterCheckIconGap"_s})));
	if ($instanceOf($Integer, afterCheckIconGapObject)) {
		afterCheckIconGap = $nc(($cast($Integer, afterCheckIconGapObject)))->intValue();
	}
	return afterCheckIconGap;
}

int32_t MenuItemLayoutHelper::getLeadingGap($String* propertyPrefix) {
	if ($nc(this->checkSize)->getMaxWidth() > 0) {
		return getCheckOffset(propertyPrefix);
	} else {
		return this->gap;
	}
}

int32_t MenuItemLayoutHelper::getCheckOffset($String* propertyPrefix) {
	int32_t checkIconOffset = this->gap;
	$var($Object, checkIconOffsetObject, $UIManager::get($$str({propertyPrefix, ".checkIconOffset"_s})));
	if ($instanceOf($Integer, checkIconOffsetObject)) {
		checkIconOffset = $nc(($cast($Integer, checkIconOffsetObject)))->intValue();
	}
	return checkIconOffset;
}

void MenuItemLayoutHelper::calcWidthsAndHeights() {
	if (this->icon != nullptr) {
		$nc(this->iconSize)->width = $nc(this->icon)->getIconWidth();
		$nc(this->iconSize)->height = $nc(this->icon)->getIconHeight();
	}
	if (!$nc(this->accText)->isEmpty()) {
		$nc(this->accSize)->width = $SwingUtilities2::stringWidth(this->mi, this->accFm, this->accText);
		$nc(this->accSize)->height = $nc(this->accFm)->getHeight();
	}
	if (this->text == nullptr) {
		$set(this, text, ""_s);
	} else if (!$nc(this->text)->isEmpty()) {
		if (this->htmlView != nullptr) {
			$nc(this->textSize)->width = $cast(int32_t, $nc(this->htmlView)->getPreferredSpan($View::X_AXIS));
			$nc(this->textSize)->height = $cast(int32_t, $nc(this->htmlView)->getPreferredSpan($View::Y_AXIS));
		} else {
			$nc(this->textSize)->width = $SwingUtilities2::stringWidth(this->mi, this->fm, this->text);
			$nc(this->textSize)->height = $nc(this->fm)->getHeight();
		}
	}
	if (this->useCheckAndArrow$) {
		if (this->checkIcon != nullptr) {
			$nc(this->checkSize)->width = $nc(this->checkIcon)->getIconWidth();
			$nc(this->checkSize)->height = $nc(this->checkIcon)->getIconHeight();
		}
		if (this->arrowIcon != nullptr) {
			$nc(this->arrowSize)->width = $nc(this->arrowIcon)->getIconWidth();
			$nc(this->arrowSize)->height = $nc(this->arrowIcon)->getIconHeight();
		}
	}
	if (this->isColumnLayout$) {
		$nc(this->labelSize)->width = $nc(this->iconSize)->width + $nc(this->textSize)->width + this->gap;
		$nc(this->labelSize)->height = max($$new($ints, {
			$nc(this->checkSize)->height,
			$nc(this->iconSize)->height,
			$nc(this->textSize)->height,
			$nc(this->accSize)->height,
			$nc(this->arrowSize)->height
		}));
	} else {
		$var($Rectangle, textRect, $new($Rectangle));
		$var($Rectangle, iconRect, $new($Rectangle));
		$SwingUtilities::layoutCompoundLabel(this->mi, this->fm, this->text, this->icon, this->verticalAlignment, this->horizontalAlignment, this->verticalTextPosition, this->horizontalTextPosition, this->viewRect, iconRect, textRect, this->gap);
		textRect->width += this->leftTextExtraWidth;
		$var($Rectangle, labelRect, iconRect->union$(textRect));
		$nc(this->labelSize)->height = $nc(labelRect)->height;
		$nc(this->labelSize)->width = labelRect->width;
	}
}

void MenuItemLayoutHelper::calcMaxWidths() {
	calcMaxWidth(this->checkSize, MenuItemLayoutHelper::MAX_CHECK_WIDTH);
	calcMaxWidth(this->arrowSize, MenuItemLayoutHelper::MAX_ARROW_WIDTH);
	calcMaxWidth(this->accSize, MenuItemLayoutHelper::MAX_ACC_WIDTH);
	if (this->isColumnLayout$) {
		calcMaxWidth(this->iconSize, MenuItemLayoutHelper::MAX_ICON_WIDTH);
		calcMaxWidth(this->textSize, MenuItemLayoutHelper::MAX_TEXT_WIDTH);
		int32_t curGap = this->gap;
		bool var$0 = ($nc(this->iconSize)->getMaxWidth() == 0);
		if (var$0 || ($nc(this->textSize)->getMaxWidth() == 0)) {
			curGap = 0;
		}
		$nc(this->labelSize)->maxWidth = calcMaxValue(MenuItemLayoutHelper::MAX_LABEL_WIDTH, $nc(this->iconSize)->maxWidth + $nc(this->textSize)->maxWidth + curGap);
	} else {
		$nc(this->iconSize)->maxWidth = getParentIntProperty(MenuItemLayoutHelper::MAX_ICON_WIDTH);
		calcMaxWidth(this->labelSize, MenuItemLayoutHelper::MAX_LABEL_WIDTH);
		int32_t candidateTextWidth = $nc(this->labelSize)->maxWidth - $nc(this->iconSize)->maxWidth;
		if ($nc(this->iconSize)->maxWidth > 0) {
			candidateTextWidth -= this->gap;
		}
		$nc(this->textSize)->maxWidth = calcMaxValue(MenuItemLayoutHelper::MAX_TEXT_WIDTH, candidateTextWidth);
	}
}

void MenuItemLayoutHelper::calcMaxWidth($MenuItemLayoutHelper$RectSize* rs, Object$* key) {
	$nc(rs)->maxWidth = calcMaxValue(key, rs->width);
}

int32_t MenuItemLayoutHelper::calcMaxValue(Object$* propertyName, int32_t value) {
	int32_t maxValue = getParentIntProperty(propertyName);
	if (value > maxValue) {
		if (this->miParent != nullptr) {
			$nc(this->miParent)->putClientProperty(propertyName, $($Integer::valueOf(value)));
		}
		return value;
	} else {
		return maxValue;
	}
}

int32_t MenuItemLayoutHelper::getParentIntProperty(Object$* propertyName) {
	$var($Object, value, nullptr);
	if (this->miParent != nullptr) {
		$assign(value, $nc(this->miParent)->getClientProperty(propertyName));
	}
	if ((value == nullptr) || !($instanceOf($Integer, value))) {
		$assign(value, $Integer::valueOf(0));
	}
	return $nc(($cast($Integer, value)))->intValue();
}

bool MenuItemLayoutHelper::isColumnLayout(bool isLeftToRight, $JMenuItem* mi) {
	$init(MenuItemLayoutHelper);
	if (!MenuItemLayoutHelper::$assertionsDisabled && !(mi != nullptr)) {
		$throwNew($AssertionError);
	}
	bool var$0 = isLeftToRight;
	int32_t var$1 = $nc(mi)->getHorizontalAlignment();
	int32_t var$2 = mi->getHorizontalTextPosition();
	return isColumnLayout(var$0, var$1, var$2, mi->getVerticalTextPosition());
}

bool MenuItemLayoutHelper::isColumnLayout(bool isLeftToRight, int32_t horizontalAlignment, int32_t horizontalTextPosition, int32_t verticalTextPosition) {
	$init(MenuItemLayoutHelper);
	if (verticalTextPosition != $SwingConstants::CENTER) {
		return false;
	}
	if (isLeftToRight) {
		if (horizontalAlignment != $SwingConstants::LEADING && horizontalAlignment != $SwingConstants::LEFT) {
			return false;
		}
		if (horizontalTextPosition != $SwingConstants::TRAILING && horizontalTextPosition != $SwingConstants::RIGHT) {
			return false;
		}
	} else {
		if (horizontalAlignment != $SwingConstants::LEADING && horizontalAlignment != $SwingConstants::RIGHT) {
			return false;
		}
		if (horizontalTextPosition != $SwingConstants::TRAILING && horizontalTextPosition != $SwingConstants::LEFT) {
			return false;
		}
	}
	return true;
}

void MenuItemLayoutHelper::calcMaxTextOffset($Rectangle* viewRect) {
	if (!this->isColumnLayout$ || !this->isLeftToRight$) {
		return;
	}
	int32_t offset = $nc(viewRect)->x + this->leadingGap + $nc(this->checkSize)->maxWidth + this->afterCheckIconGap + $nc(this->iconSize)->maxWidth + this->gap;
	if ($nc(this->checkSize)->maxWidth == 0) {
		offset -= this->afterCheckIconGap;
	}
	if ($nc(this->iconSize)->maxWidth == 0) {
		offset -= this->gap;
	}
	if (offset < this->minTextOffset) {
		offset = this->minTextOffset;
	}
	$init($SwingUtilities2);
	calcMaxValue($SwingUtilities2::BASICMENUITEMUI_MAX_TEXT_OFFSET, offset);
}

$MenuItemLayoutHelper$LayoutResult* MenuItemLayoutHelper::layoutMenuItem() {
	$var($MenuItemLayoutHelper$LayoutResult, lr, createLayoutResult());
	prepareForLayout(lr);
	if (isColumnLayout()) {
		if (isLeftToRight()) {
			doLTRColumnLayout(lr, $(getLTRColumnAlignment()));
		} else {
			doRTLColumnLayout(lr, $(getRTLColumnAlignment()));
		}
	} else if (isLeftToRight()) {
		doLTRComplexLayout(lr, $(getLTRColumnAlignment()));
	} else {
		doRTLComplexLayout(lr, $(getRTLColumnAlignment()));
	}
	alignAccCheckAndArrowVertically(lr);
	return lr;
}

$MenuItemLayoutHelper$LayoutResult* MenuItemLayoutHelper::createLayoutResult() {
	$var($Rectangle, var$0, $new($Rectangle, $nc(this->iconSize)->width, $nc(this->iconSize)->height));
	$var($Rectangle, var$1, $new($Rectangle, $nc(this->textSize)->width, $nc(this->textSize)->height));
	$var($Rectangle, var$2, $new($Rectangle, $nc(this->accSize)->width, $nc(this->accSize)->height));
	$var($Rectangle, var$3, $new($Rectangle, $nc(this->checkSize)->width, $nc(this->checkSize)->height));
	$var($Rectangle, var$4, $new($Rectangle, $nc(this->arrowSize)->width, $nc(this->arrowSize)->height));
	return $new($MenuItemLayoutHelper$LayoutResult, var$0, var$1, var$2, var$3, var$4, $$new($Rectangle, $nc(this->labelSize)->width, $nc(this->labelSize)->height));
}

$MenuItemLayoutHelper$ColumnAlignment* MenuItemLayoutHelper::getLTRColumnAlignment() {
	$init($MenuItemLayoutHelper$ColumnAlignment);
	return $MenuItemLayoutHelper$ColumnAlignment::LEFT_ALIGNMENT;
}

$MenuItemLayoutHelper$ColumnAlignment* MenuItemLayoutHelper::getRTLColumnAlignment() {
	$init($MenuItemLayoutHelper$ColumnAlignment);
	return $MenuItemLayoutHelper$ColumnAlignment::RIGHT_ALIGNMENT;
}

void MenuItemLayoutHelper::prepareForLayout($MenuItemLayoutHelper$LayoutResult* lr) {
	$nc($nc(lr)->checkRect)->width = $nc(this->checkSize)->maxWidth;
	$nc(lr->accRect)->width = $nc(this->accSize)->maxWidth;
	$nc(lr->arrowRect)->width = $nc(this->arrowSize)->maxWidth;
}

void MenuItemLayoutHelper::alignAccCheckAndArrowVertically($MenuItemLayoutHelper$LayoutResult* lr) {
	$nc($nc(lr)->accRect)->y = $cast(int32_t, ($nc(lr->labelRect)->y + (float)$nc(lr->labelRect)->height / 2 - (float)$nc(lr->accRect)->height / 2));
	fixVerticalAlignment(lr, lr->accRect);
	if (this->useCheckAndArrow$) {
		$nc(lr->arrowRect)->y = $cast(int32_t, ($nc(lr->labelRect)->y + (float)$nc(lr->labelRect)->height / 2 - (float)$nc(lr->arrowRect)->height / 2));
		$nc(lr->checkRect)->y = $cast(int32_t, ($nc(lr->labelRect)->y + (float)$nc(lr->labelRect)->height / 2 - (float)$nc(lr->checkRect)->height / 2));
		fixVerticalAlignment(lr, lr->arrowRect);
		fixVerticalAlignment(lr, lr->checkRect);
	}
}

void MenuItemLayoutHelper::fixVerticalAlignment($MenuItemLayoutHelper$LayoutResult* lr, $Rectangle* r) {
	int32_t delta = 0;
	if ($nc(r)->y < $nc(this->viewRect)->y) {
		delta = $nc(this->viewRect)->y - r->y;
	} else if (r->y + r->height > $nc(this->viewRect)->y + $nc(this->viewRect)->height) {
		delta = $nc(this->viewRect)->y + $nc(this->viewRect)->height - r->y - r->height;
	}
	if (delta != 0) {
		$nc($nc(lr)->checkRect)->y += delta;
		$nc(lr->iconRect)->y += delta;
		$nc(lr->textRect)->y += delta;
		$nc(lr->accRect)->y += delta;
		$nc(lr->arrowRect)->y += delta;
		$nc(lr->labelRect)->y += delta;
	}
}

void MenuItemLayoutHelper::doLTRColumnLayout($MenuItemLayoutHelper$LayoutResult* lr, $MenuItemLayoutHelper$ColumnAlignment* alignment) {
	$nc($nc(lr)->iconRect)->width = $nc(this->iconSize)->maxWidth;
	$nc(lr->textRect)->width = $nc(this->textSize)->maxWidth;
	calcXPositionsLTR($nc(this->viewRect)->x, this->leadingGap, this->gap, $$new($RectangleArray, {
		lr->checkRect,
		lr->iconRect,
		lr->textRect
	}));
	if ($nc(lr->checkRect)->width > 0) {
		$nc(lr->iconRect)->x += this->afterCheckIconGap - this->gap;
		$nc(lr->textRect)->x += this->afterCheckIconGap - this->gap;
	}
	calcXPositionsRTL($nc(this->viewRect)->x + $nc(this->viewRect)->width, this->leadingGap, this->gap, $$new($RectangleArray, {
		lr->arrowRect,
		lr->accRect
	}));
	int32_t textOffset = $nc(lr->textRect)->x - $nc(this->viewRect)->x;
	if (!this->isTopLevelMenu$ && (textOffset < this->minTextOffset)) {
		$nc(lr->textRect)->x += this->minTextOffset - textOffset;
	}
	alignRects(lr, alignment);
	calcTextAndIconYPositions(lr);
	lr->setLabelRect($($nc(lr->textRect)->union$(lr->iconRect)));
}

void MenuItemLayoutHelper::doLTRComplexLayout($MenuItemLayoutHelper$LayoutResult* lr, $MenuItemLayoutHelper$ColumnAlignment* alignment) {
	$nc($nc(lr)->labelRect)->width = $nc(this->labelSize)->maxWidth;
	calcXPositionsLTR($nc(this->viewRect)->x, this->leadingGap, this->gap, $$new($RectangleArray, {
		lr->checkRect,
		lr->labelRect
	}));
	if ($nc(lr->checkRect)->width > 0) {
		$nc(lr->labelRect)->x += this->afterCheckIconGap - this->gap;
	}
	calcXPositionsRTL($nc(this->viewRect)->x + $nc(this->viewRect)->width, this->leadingGap, this->gap, $$new($RectangleArray, {
		lr->arrowRect,
		lr->accRect
	}));
	int32_t labelOffset = $nc(lr->labelRect)->x - $nc(this->viewRect)->x;
	if (!this->isTopLevelMenu$ && (labelOffset < this->minTextOffset)) {
		$nc(lr->labelRect)->x += this->minTextOffset - labelOffset;
	}
	alignRects(lr, alignment);
	calcLabelYPosition(lr);
	layoutIconAndTextInLabelRect(lr);
}

void MenuItemLayoutHelper::doRTLColumnLayout($MenuItemLayoutHelper$LayoutResult* lr, $MenuItemLayoutHelper$ColumnAlignment* alignment) {
	$nc($nc(lr)->iconRect)->width = $nc(this->iconSize)->maxWidth;
	$nc(lr->textRect)->width = $nc(this->textSize)->maxWidth;
	calcXPositionsRTL($nc(this->viewRect)->x + $nc(this->viewRect)->width, this->leadingGap, this->gap, $$new($RectangleArray, {
		lr->checkRect,
		lr->iconRect,
		lr->textRect
	}));
	if ($nc(lr->checkRect)->width > 0) {
		$nc(lr->iconRect)->x -= this->afterCheckIconGap - this->gap;
		$nc(lr->textRect)->x -= this->afterCheckIconGap - this->gap;
	}
	calcXPositionsLTR($nc(this->viewRect)->x, this->leadingGap, this->gap, $$new($RectangleArray, {
		lr->arrowRect,
		lr->accRect
	}));
	int32_t textOffset = ($nc(this->viewRect)->x + $nc(this->viewRect)->width) - ($nc(lr->textRect)->x + $nc(lr->textRect)->width);
	if (!this->isTopLevelMenu$ && (textOffset < this->minTextOffset)) {
		$nc(lr->textRect)->x -= this->minTextOffset - textOffset;
	}
	alignRects(lr, alignment);
	calcTextAndIconYPositions(lr);
	lr->setLabelRect($($nc(lr->textRect)->union$(lr->iconRect)));
}

void MenuItemLayoutHelper::doRTLComplexLayout($MenuItemLayoutHelper$LayoutResult* lr, $MenuItemLayoutHelper$ColumnAlignment* alignment) {
	$nc($nc(lr)->labelRect)->width = $nc(this->labelSize)->maxWidth;
	calcXPositionsRTL($nc(this->viewRect)->x + $nc(this->viewRect)->width, this->leadingGap, this->gap, $$new($RectangleArray, {
		lr->checkRect,
		lr->labelRect
	}));
	if ($nc(lr->checkRect)->width > 0) {
		$nc(lr->labelRect)->x -= this->afterCheckIconGap - this->gap;
	}
	calcXPositionsLTR($nc(this->viewRect)->x, this->leadingGap, this->gap, $$new($RectangleArray, {
		lr->arrowRect,
		lr->accRect
	}));
	int32_t labelOffset = ($nc(this->viewRect)->x + $nc(this->viewRect)->width) - ($nc(lr->labelRect)->x + $nc(lr->labelRect)->width);
	if (!this->isTopLevelMenu$ && (labelOffset < this->minTextOffset)) {
		$nc(lr->labelRect)->x -= this->minTextOffset - labelOffset;
	}
	alignRects(lr, alignment);
	calcLabelYPosition(lr);
	layoutIconAndTextInLabelRect(lr);
}

void MenuItemLayoutHelper::alignRects($MenuItemLayoutHelper$LayoutResult* lr, $MenuItemLayoutHelper$ColumnAlignment* alignment) {
	$var($Rectangle, var$0, $nc(lr)->checkRect);
	int32_t var$1 = $nc(alignment)->getCheckAlignment();
	alignRect(var$0, var$1, $nc(this->checkSize)->getOrigWidth());
	$var($Rectangle, var$2, $nc(lr)->iconRect);
	int32_t var$3 = $nc(alignment)->getIconAlignment();
	alignRect(var$2, var$3, $nc(this->iconSize)->getOrigWidth());
	$var($Rectangle, var$4, $nc(lr)->textRect);
	int32_t var$5 = $nc(alignment)->getTextAlignment();
	alignRect(var$4, var$5, $nc(this->textSize)->getOrigWidth());
	$var($Rectangle, var$6, $nc(lr)->accRect);
	int32_t var$7 = $nc(alignment)->getAccAlignment();
	alignRect(var$6, var$7, $nc(this->accSize)->getOrigWidth());
	$var($Rectangle, var$8, $nc(lr)->arrowRect);
	int32_t var$9 = $nc(alignment)->getArrowAlignment();
	alignRect(var$8, var$9, $nc(this->arrowSize)->getOrigWidth());
}

void MenuItemLayoutHelper::alignRect($Rectangle* rect, int32_t alignment, int32_t origWidth) {
	if (alignment == $SwingConstants::RIGHT) {
		$nc(rect)->x = rect->x + rect->width - origWidth;
	}
	$nc(rect)->width = origWidth;
}

void MenuItemLayoutHelper::layoutIconAndTextInLabelRect($MenuItemLayoutHelper$LayoutResult* lr) {
	$nc(lr)->setTextRect($$new($Rectangle));
	lr->setIconRect($$new($Rectangle));
	$SwingUtilities::layoutCompoundLabel(this->mi, this->fm, this->text, this->icon, this->verticalAlignment, this->horizontalAlignment, this->verticalTextPosition, this->horizontalTextPosition, lr->labelRect, lr->iconRect, lr->textRect, this->gap);
}

void MenuItemLayoutHelper::calcXPositionsLTR(int32_t startXPos, int32_t leadingGap, int32_t gap, $RectangleArray* rects) {
	int32_t curXPos = startXPos + leadingGap;
	{
		$var($RectangleArray, arr$, rects);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Rectangle, rect, arr$->get(i$));
			{
				$nc(rect)->x = curXPos;
				if (rect->width > 0) {
					curXPos += rect->width + gap;
				}
			}
		}
	}
}

void MenuItemLayoutHelper::calcXPositionsRTL(int32_t startXPos, int32_t leadingGap, int32_t gap, $RectangleArray* rects) {
	int32_t curXPos = startXPos - leadingGap;
	{
		$var($RectangleArray, arr$, rects);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Rectangle, rect, arr$->get(i$));
			{
				$nc(rect)->x = curXPos - rect->width;
				if (rect->width > 0) {
					curXPos -= rect->width + gap;
				}
			}
		}
	}
}

void MenuItemLayoutHelper::calcTextAndIconYPositions($MenuItemLayoutHelper$LayoutResult* lr) {
	if (this->verticalAlignment == $SwingUtilities::TOP) {
		$nc($nc(lr)->textRect)->y = $cast(int32_t, ($nc(this->viewRect)->y + (float)$nc(lr->labelRect)->height / 2 - (float)$nc(lr->textRect)->height / 2));
		$nc(lr->iconRect)->y = $cast(int32_t, ($nc(this->viewRect)->y + (float)$nc(lr->labelRect)->height / 2 - (float)$nc(lr->iconRect)->height / 2));
	} else if (this->verticalAlignment == $SwingUtilities::CENTER) {
		$nc($nc(lr)->textRect)->y = $cast(int32_t, ($nc(this->viewRect)->y + (float)$nc(this->viewRect)->height / 2 - (float)$nc(lr->textRect)->height / 2));
		$nc(lr->iconRect)->y = $cast(int32_t, ($nc(this->viewRect)->y + (float)$nc(this->viewRect)->height / 2 - (float)$nc(lr->iconRect)->height / 2));
	} else if (this->verticalAlignment == $SwingUtilities::BOTTOM) {
		$nc($nc(lr)->textRect)->y = $cast(int32_t, ($nc(this->viewRect)->y + $nc(this->viewRect)->height - (float)$nc(lr->labelRect)->height / 2 - (float)$nc(lr->textRect)->height / 2));
		$nc(lr->iconRect)->y = $cast(int32_t, ($nc(this->viewRect)->y + $nc(this->viewRect)->height - (float)$nc(lr->labelRect)->height / 2 - (float)$nc(lr->iconRect)->height / 2));
	}
}

void MenuItemLayoutHelper::calcLabelYPosition($MenuItemLayoutHelper$LayoutResult* lr) {
	if (this->verticalAlignment == $SwingUtilities::TOP) {
		$nc($nc(lr)->labelRect)->y = $nc(this->viewRect)->y;
	} else if (this->verticalAlignment == $SwingUtilities::CENTER) {
		$nc($nc(lr)->labelRect)->y = $cast(int32_t, ($nc(this->viewRect)->y + (float)$nc(this->viewRect)->height / 2 - (float)$nc(lr->labelRect)->height / 2));
	} else if (this->verticalAlignment == $SwingUtilities::BOTTOM) {
		$nc($nc(lr)->labelRect)->y = $nc(this->viewRect)->y + $nc(this->viewRect)->height - $nc(lr->labelRect)->height;
	}
}

$JComponent* MenuItemLayoutHelper::getMenuItemParent($JMenuItem* menuItem) {
	$init(MenuItemLayoutHelper);
	$var($Container, parent, $nc(menuItem)->getParent());
	if (($instanceOf($JComponent, parent)) && (!($instanceOf($JMenu, menuItem)) || !$nc(($cast($JMenu, menuItem)))->isTopLevelMenu())) {
		return $cast($JComponent, parent);
	} else {
		return nullptr;
	}
}

void MenuItemLayoutHelper::clearUsedParentClientProperties($JMenuItem* menuItem) {
	$init(MenuItemLayoutHelper);
	clearUsedClientProperties($(getMenuItemParent(menuItem)));
}

void MenuItemLayoutHelper::clearUsedClientProperties($JComponent* c) {
	$init(MenuItemLayoutHelper);
	if (c != nullptr) {
		c->putClientProperty(MenuItemLayoutHelper::MAX_ARROW_WIDTH, nullptr);
		c->putClientProperty(MenuItemLayoutHelper::MAX_CHECK_WIDTH, nullptr);
		c->putClientProperty(MenuItemLayoutHelper::MAX_ACC_WIDTH, nullptr);
		c->putClientProperty(MenuItemLayoutHelper::MAX_TEXT_WIDTH, nullptr);
		c->putClientProperty(MenuItemLayoutHelper::MAX_ICON_WIDTH, nullptr);
		c->putClientProperty(MenuItemLayoutHelper::MAX_LABEL_WIDTH, nullptr);
		$init($SwingUtilities2);
		c->putClientProperty($SwingUtilities2::BASICMENUITEMUI_MAX_TEXT_OFFSET, nullptr);
	}
}

int32_t MenuItemLayoutHelper::max($ints* values) {
	$init(MenuItemLayoutHelper);
	int32_t maxValue = $Integer::MIN_VALUE;
	{
		$var($ints, arr$, values);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				if (i > maxValue) {
					maxValue = i;
				}
			}
		}
	}
	return maxValue;
}

$Rectangle* MenuItemLayoutHelper::createMaxRect() {
	$init(MenuItemLayoutHelper);
	return $new($Rectangle, 0, 0, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

void MenuItemLayoutHelper::addMaxWidth($MenuItemLayoutHelper$RectSize* size, int32_t gap, $Dimension* result) {
	$init(MenuItemLayoutHelper);
	if ($nc(size)->maxWidth > 0) {
		$nc(result)->width += size->maxWidth + gap;
	}
}

void MenuItemLayoutHelper::addWidth(int32_t width, int32_t gap, $Dimension* result) {
	$init(MenuItemLayoutHelper);
	if (width > 0) {
		$nc(result)->width += width + gap;
	}
}

$JMenuItem* MenuItemLayoutHelper::getMenuItem() {
	return this->mi;
}

$JComponent* MenuItemLayoutHelper::getMenuItemParent() {
	return this->miParent;
}

$Font* MenuItemLayoutHelper::getFont() {
	return this->font;
}

$Font* MenuItemLayoutHelper::getAccFont() {
	return this->accFont;
}

$FontMetrics* MenuItemLayoutHelper::getFontMetrics() {
	return this->fm;
}

$FontMetrics* MenuItemLayoutHelper::getAccFontMetrics() {
	return this->accFm;
}

$Icon* MenuItemLayoutHelper::getIcon() {
	return this->icon;
}

$Icon* MenuItemLayoutHelper::getCheckIcon() {
	return this->checkIcon;
}

$Icon* MenuItemLayoutHelper::getArrowIcon() {
	return this->arrowIcon;
}

$String* MenuItemLayoutHelper::getText() {
	return this->text;
}

$String* MenuItemLayoutHelper::getAccText() {
	return this->accText;
}

bool MenuItemLayoutHelper::isColumnLayout() {
	return this->isColumnLayout$;
}

bool MenuItemLayoutHelper::useCheckAndArrow() {
	return this->useCheckAndArrow$;
}

bool MenuItemLayoutHelper::isLeftToRight() {
	return this->isLeftToRight$;
}

bool MenuItemLayoutHelper::isTopLevelMenu() {
	return this->isTopLevelMenu$;
}

$View* MenuItemLayoutHelper::getHtmlView() {
	return this->htmlView;
}

int32_t MenuItemLayoutHelper::getVerticalAlignment() {
	return this->verticalAlignment;
}

int32_t MenuItemLayoutHelper::getHorizontalAlignment() {
	return this->horizontalAlignment;
}

int32_t MenuItemLayoutHelper::getVerticalTextPosition() {
	return this->verticalTextPosition;
}

int32_t MenuItemLayoutHelper::getHorizontalTextPosition() {
	return this->horizontalTextPosition;
}

int32_t MenuItemLayoutHelper::getGap() {
	return this->gap;
}

int32_t MenuItemLayoutHelper::getLeadingGap() {
	return this->leadingGap;
}

int32_t MenuItemLayoutHelper::getAfterCheckIconGap() {
	return this->afterCheckIconGap;
}

int32_t MenuItemLayoutHelper::getMinTextOffset() {
	return this->minTextOffset;
}

$Rectangle* MenuItemLayoutHelper::getViewRect() {
	return this->viewRect;
}

$MenuItemLayoutHelper$RectSize* MenuItemLayoutHelper::getIconSize() {
	return this->iconSize;
}

$MenuItemLayoutHelper$RectSize* MenuItemLayoutHelper::getTextSize() {
	return this->textSize;
}

$MenuItemLayoutHelper$RectSize* MenuItemLayoutHelper::getAccSize() {
	return this->accSize;
}

$MenuItemLayoutHelper$RectSize* MenuItemLayoutHelper::getCheckSize() {
	return this->checkSize;
}

$MenuItemLayoutHelper$RectSize* MenuItemLayoutHelper::getArrowSize() {
	return this->arrowSize;
}

$MenuItemLayoutHelper$RectSize* MenuItemLayoutHelper::getLabelSize() {
	return this->labelSize;
}

void MenuItemLayoutHelper::setMenuItem($JMenuItem* mi) {
	$set(this, mi, mi);
}

void MenuItemLayoutHelper::setMenuItemParent($JComponent* miParent) {
	$set(this, miParent, miParent);
}

void MenuItemLayoutHelper::setFont($Font* font) {
	$set(this, font, font);
}

void MenuItemLayoutHelper::setAccFont($Font* accFont) {
	$set(this, accFont, accFont);
}

void MenuItemLayoutHelper::setFontMetrics($FontMetrics* fm) {
	$set(this, fm, fm);
}

void MenuItemLayoutHelper::setAccFontMetrics($FontMetrics* accFm) {
	$set(this, accFm, accFm);
}

void MenuItemLayoutHelper::setIcon($Icon* icon) {
	$set(this, icon, icon);
}

void MenuItemLayoutHelper::setCheckIcon($Icon* checkIcon) {
	$set(this, checkIcon, checkIcon);
}

void MenuItemLayoutHelper::setArrowIcon($Icon* arrowIcon) {
	$set(this, arrowIcon, arrowIcon);
}

void MenuItemLayoutHelper::setText($String* text) {
	$set(this, text, text);
}

void MenuItemLayoutHelper::setAccText($String* accText) {
	$set(this, accText, accText);
}

void MenuItemLayoutHelper::setColumnLayout(bool columnLayout) {
	this->isColumnLayout$ = columnLayout;
}

void MenuItemLayoutHelper::setUseCheckAndArrow(bool useCheckAndArrow) {
	this->useCheckAndArrow$ = useCheckAndArrow;
}

void MenuItemLayoutHelper::setLeftToRight(bool leftToRight) {
	this->isLeftToRight$ = leftToRight;
}

void MenuItemLayoutHelper::setTopLevelMenu(bool topLevelMenu) {
	this->isTopLevelMenu$ = topLevelMenu;
}

void MenuItemLayoutHelper::setHtmlView($View* htmlView) {
	$set(this, htmlView, htmlView);
}

void MenuItemLayoutHelper::setVerticalAlignment(int32_t verticalAlignment) {
	this->verticalAlignment = verticalAlignment;
}

void MenuItemLayoutHelper::setHorizontalAlignment(int32_t horizontalAlignment) {
	this->horizontalAlignment = horizontalAlignment;
}

void MenuItemLayoutHelper::setVerticalTextPosition(int32_t verticalTextPosition) {
	this->verticalTextPosition = verticalTextPosition;
}

void MenuItemLayoutHelper::setHorizontalTextPosition(int32_t horizontalTextPosition) {
	this->horizontalTextPosition = horizontalTextPosition;
}

void MenuItemLayoutHelper::setGap(int32_t gap) {
	this->gap = gap;
}

void MenuItemLayoutHelper::setLeadingGap(int32_t leadingGap) {
	this->leadingGap = leadingGap;
}

void MenuItemLayoutHelper::setAfterCheckIconGap(int32_t afterCheckIconGap) {
	this->afterCheckIconGap = afterCheckIconGap;
}

void MenuItemLayoutHelper::setMinTextOffset(int32_t minTextOffset) {
	this->minTextOffset = minTextOffset;
}

void MenuItemLayoutHelper::setViewRect($Rectangle* viewRect) {
	$set(this, viewRect, viewRect);
}

void MenuItemLayoutHelper::setIconSize($MenuItemLayoutHelper$RectSize* iconSize) {
	$set(this, iconSize, iconSize);
}

void MenuItemLayoutHelper::setTextSize($MenuItemLayoutHelper$RectSize* textSize) {
	$set(this, textSize, textSize);
}

void MenuItemLayoutHelper::setAccSize($MenuItemLayoutHelper$RectSize* accSize) {
	$set(this, accSize, accSize);
}

void MenuItemLayoutHelper::setCheckSize($MenuItemLayoutHelper$RectSize* checkSize) {
	$set(this, checkSize, checkSize);
}

void MenuItemLayoutHelper::setArrowSize($MenuItemLayoutHelper$RectSize* arrowSize) {
	$set(this, arrowSize, arrowSize);
}

void MenuItemLayoutHelper::setLabelSize($MenuItemLayoutHelper$RectSize* labelSize) {
	$set(this, labelSize, labelSize);
}

int32_t MenuItemLayoutHelper::getLeftTextExtraWidth() {
	return this->leftTextExtraWidth;
}

bool MenuItemLayoutHelper::useCheckAndArrow($JMenuItem* menuItem) {
	$init(MenuItemLayoutHelper);
	bool b = true;
	if (($instanceOf($JMenu, menuItem)) && ($nc(($cast($JMenu, menuItem)))->isTopLevelMenu())) {
		b = false;
	}
	return b;
}

void clinit$MenuItemLayoutHelper($Class* class$) {
	MenuItemLayoutHelper::$assertionsDisabled = !MenuItemLayoutHelper::class$->desiredAssertionStatus();
	$assignStatic(MenuItemLayoutHelper::MAX_ARROW_WIDTH, $new($StringUIClientPropertyKey, "maxArrowWidth"_s));
	$assignStatic(MenuItemLayoutHelper::MAX_CHECK_WIDTH, $new($StringUIClientPropertyKey, "maxCheckWidth"_s));
	$assignStatic(MenuItemLayoutHelper::MAX_ICON_WIDTH, $new($StringUIClientPropertyKey, "maxIconWidth"_s));
	$assignStatic(MenuItemLayoutHelper::MAX_TEXT_WIDTH, $new($StringUIClientPropertyKey, "maxTextWidth"_s));
	$assignStatic(MenuItemLayoutHelper::MAX_ACC_WIDTH, $new($StringUIClientPropertyKey, "maxAccWidth"_s));
	$assignStatic(MenuItemLayoutHelper::MAX_LABEL_WIDTH, $new($StringUIClientPropertyKey, "maxLabelWidth"_s));
}

MenuItemLayoutHelper::MenuItemLayoutHelper() {
}

$Class* MenuItemLayoutHelper::load$($String* name, bool initialize) {
	$loadClass(MenuItemLayoutHelper, name, initialize, &_MenuItemLayoutHelper_ClassInfo_, clinit$MenuItemLayoutHelper, allocate$MenuItemLayoutHelper);
	return class$;
}

$Class* MenuItemLayoutHelper::class$ = nullptr;

	} // swing
} // sun