#include <com/apple/laf/AquaTabbedPaneContrastUI.h>

#include <apple/laf/JRSUIConstants$SegmentLeadingSeparator.h>
#include <apple/laf/JRSUIConstants$SegmentTrailingSeparator.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTIVE
#undef DISABLED
#undef INACTIVE
#undef NO
#undef PRESSED
#undef YES

using $JRSUIConstants$SegmentLeadingSeparator = ::apple::laf::JRSUIConstants$SegmentLeadingSeparator;
using $JRSUIConstants$SegmentTrailingSeparator = ::apple::laf::JRSUIConstants$SegmentTrailingSeparator;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $AquaTabbedPaneUI$MouseHandler = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaTabbedPaneContrastUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneContrastUI::*)()>(&AquaTabbedPaneContrastUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTabbedPaneContrastUI::createUI))},
	{"getNonSelectedTabTitleColor", "()Ljava/awt/Color;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Color*(*)()>(&AquaTabbedPaneContrastUI::getNonSelectedTabTitleColor))},
	{"getSegmentLeadingSeparator", "(IIZ)Lapple/laf/JRSUIConstants$SegmentLeadingSeparator;", nullptr, $PROTECTED},
	{"getSegmentTrailingSeparator", "(IIZ)Lapple/laf/JRSUIConstants$SegmentTrailingSeparator;", nullptr, $PROTECTED},
	{"getSelectedTabTitleColor", "(ZZ)Ljava/awt/Color;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Color*(*)(bool,bool)>(&AquaTabbedPaneContrastUI::getSelectedTabTitleColor))},
	{"getSelectedTabTitleShadowColor", "(Z)Ljava/awt/Color;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Color*(*)(bool)>(&AquaTabbedPaneContrastUI::getSelectedTabTitleShadowColor))},
	{"getState", "(IZZ)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"isPressedAt", "(I)Z", nullptr, $PROTECTED},
	{"paintTitle", "(Ljava/awt/Graphics2D;Ljava/awt/Font;Ljava/awt/FontMetrics;Ljava/awt/Rectangle;ILjava/lang/String;)V", nullptr, $PROTECTED},
	{"shouldRepaintSelectedTabOnMouseDown", "()Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaTabbedPaneContrastUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneContrastUI",
	"com.apple.laf.AquaTabbedPaneUI",
	nullptr,
	nullptr,
	_AquaTabbedPaneContrastUI_MethodInfo_
};

$Object* allocate$AquaTabbedPaneContrastUI($Class* clazz) {
	return $of($alloc(AquaTabbedPaneContrastUI));
}

$ComponentUI* AquaTabbedPaneContrastUI::createUI($JComponent* c) {
	$init(AquaTabbedPaneContrastUI);
	return $new(AquaTabbedPaneContrastUI);
}

void AquaTabbedPaneContrastUI::init$() {
	$AquaTabbedPaneUI::init$();
}

void AquaTabbedPaneContrastUI::paintTitle($Graphics2D* g2d, $Font* font, $FontMetrics* metrics, $Rectangle* textRect, int32_t tabIndex, $String* title) {
	$useLocalCurrentObjectStackCache();
	$var($View, v, getTextViewForTab(tabIndex));
	if (v != nullptr) {
		v->paint(g2d, textRect);
		return;
	}
	if (title == nullptr) {
		return;
	}
	$var($Color, color, $nc(this->tabPane)->getForegroundAt(tabIndex));
	if ($instanceOf($UIResource, color)) {
		$nc(g2d)->setColor($(getNonSelectedTabTitleColor()));
		if ($nc(this->tabPane)->getSelectedIndex() == tabIndex) {
			bool pressed = isPressedAt(tabIndex);
			bool var$0 = $nc(this->tabPane)->isEnabled();
			bool enabled = var$0 && $nc(this->tabPane)->isEnabledAt(tabIndex);
			$var($Color, textColor, getSelectedTabTitleColor(enabled, pressed));
			$var($Color, shadowColor, getSelectedTabTitleShadowColor(enabled));
			$AquaUtils::paintDropShadowText(g2d, this->tabPane, font, metrics, $nc(textRect)->x, textRect->y, 0, 1, textColor, shadowColor, title);
			return;
		}
	} else {
		$nc(g2d)->setColor(color);
	}
	$nc(g2d)->setFont(font);
	$SwingUtilities2::drawString(static_cast<$JComponent*>(this->tabPane), static_cast<$Graphics*>(g2d), title, $nc(textRect)->x, textRect->y + $nc(metrics)->getAscent());
}

$Color* AquaTabbedPaneContrastUI::getSelectedTabTitleColor(bool enabled, bool pressed) {
	$init(AquaTabbedPaneContrastUI);
	if (enabled && pressed) {
		return $UIManager::getColor("TabbedPane.selectedTabTitlePressedColor"_s);
	} else if (!enabled) {
		return $UIManager::getColor("TabbedPane.selectedTabTitleDisabledColor"_s);
	} else {
		return $UIManager::getColor("TabbedPane.selectedTabTitleNormalColor"_s);
	}
}

$Color* AquaTabbedPaneContrastUI::getSelectedTabTitleShadowColor(bool enabled) {
	$init(AquaTabbedPaneContrastUI);
	return enabled ? $UIManager::getColor("TabbedPane.selectedTabTitleShadowNormalColor"_s) : $UIManager::getColor("TabbedPane.selectedTabTitleShadowDisabledColor"_s);
}

$Color* AquaTabbedPaneContrastUI::getNonSelectedTabTitleColor() {
	$init(AquaTabbedPaneContrastUI);
	return $UIManager::getColor("TabbedPane.nonSelectedTabTitleNormalColor"_s);
}

bool AquaTabbedPaneContrastUI::isPressedAt(int32_t index) {
	return $nc(($cast($AquaTabbedPaneUI$MouseHandler, this->mouseListener)))->trackingTab == index;
}

bool AquaTabbedPaneContrastUI::shouldRepaintSelectedTabOnMouseDown() {
	return true;
}

$JRSUIConstants$State* AquaTabbedPaneContrastUI::getState(int32_t index, bool frameActive, bool isSelected) {
	if (!frameActive) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if (!$nc(this->tabPane)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	if (this->pressedTab == index) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PRESSED;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

$JRSUIConstants$SegmentTrailingSeparator* AquaTabbedPaneContrastUI::getSegmentTrailingSeparator(int32_t index, int32_t selectedIndex, bool isLeftToRight) {
	if (isTabBeforeSelectedTab(index, selectedIndex, isLeftToRight)) {
		$init($JRSUIConstants$SegmentTrailingSeparator);
		return $JRSUIConstants$SegmentTrailingSeparator::NO;
	}
	$init($JRSUIConstants$SegmentTrailingSeparator);
	return $JRSUIConstants$SegmentTrailingSeparator::YES;
}

$JRSUIConstants$SegmentLeadingSeparator* AquaTabbedPaneContrastUI::getSegmentLeadingSeparator(int32_t index, int32_t selectedIndex, bool isLeftToRight) {
	if (index == selectedIndex) {
		$init($JRSUIConstants$SegmentLeadingSeparator);
		return $JRSUIConstants$SegmentLeadingSeparator::YES;
	}
	$init($JRSUIConstants$SegmentLeadingSeparator);
	return $JRSUIConstants$SegmentLeadingSeparator::NO;
}

AquaTabbedPaneContrastUI::AquaTabbedPaneContrastUI() {
}

$Class* AquaTabbedPaneContrastUI::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneContrastUI, name, initialize, &_AquaTabbedPaneContrastUI_ClassInfo_, allocate$AquaTabbedPaneContrastUI);
	return class$;
}

$Class* AquaTabbedPaneContrastUI::class$ = nullptr;

		} // laf
	} // apple
} // com