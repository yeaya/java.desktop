#include <com/sun/java/swing/plaf/windows/WindowsTabbedPaneUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL_KEYS
#undef BOTTOM
#undef FORWARD_TRAVERSAL_KEYS
#undef HOT
#undef LEFT
#undef NORMAL
#undef RIGHT
#undef SELECTED
#undef SHIFT_MASK
#undef TABP_PANE
#undef TABP_TABITEM
#undef TABP_TABITEMLEFTEDGE
#undef TABP_TABITEMRIGHTEDGE
#undef TOP
#undef VK_TAB

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsTabbedPaneUI_FieldInfo_[] = {
	{"managingFocusForwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE | $STATIC, $staticField(WindowsTabbedPaneUI, managingFocusForwardTraversalKeys)},
	{"managingFocusBackwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE | $STATIC, $staticField(WindowsTabbedPaneUI, managingFocusBackwardTraversalKeys)},
	{"contentOpaque", "Z", nullptr, $PRIVATE, $field(WindowsTabbedPaneUI, contentOpaque)},
	{}
};

$MethodInfo _WindowsTabbedPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTabbedPaneUI::*)()>(&WindowsTabbedPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsTabbedPaneUI::createUI))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paintContentBorder", "(Ljava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"paintRotatedSkin", "(Ljava/awt/Graphics;Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;IIIIILcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsTabbedPaneUI::*)($Graphics*,$XPStyle$Skin*,int32_t,int32_t,int32_t,int32_t,int32_t,$TMSchema$State*)>(&WindowsTabbedPaneUI::paintRotatedSkin))},
	{"paintTabBackground", "(Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintTabBorder", "(Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"setRolloverTab", "(I)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _WindowsTabbedPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTabbedPaneUI",
	"javax.swing.plaf.basic.BasicTabbedPaneUI",
	nullptr,
	_WindowsTabbedPaneUI_FieldInfo_,
	_WindowsTabbedPaneUI_MethodInfo_
};

$Object* allocate$WindowsTabbedPaneUI($Class* clazz) {
	return $of($alloc(WindowsTabbedPaneUI));
}


$Set* WindowsTabbedPaneUI::managingFocusForwardTraversalKeys = nullptr;

$Set* WindowsTabbedPaneUI::managingFocusBackwardTraversalKeys = nullptr;

void WindowsTabbedPaneUI::init$() {
	$BasicTabbedPaneUI::init$();
	this->contentOpaque = true;
}

void WindowsTabbedPaneUI::installDefaults() {
	$BasicTabbedPaneUI::installDefaults();
	this->contentOpaque = $UIManager::getBoolean("TabbedPane.contentOpaque"_s);
	if (WindowsTabbedPaneUI::managingFocusForwardTraversalKeys == nullptr) {
		$assignStatic(WindowsTabbedPaneUI::managingFocusForwardTraversalKeys, $new($HashSet));
		$nc(WindowsTabbedPaneUI::managingFocusForwardTraversalKeys)->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, 0)));
	}
	$nc(this->tabPane)->setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, WindowsTabbedPaneUI::managingFocusForwardTraversalKeys);
	if (WindowsTabbedPaneUI::managingFocusBackwardTraversalKeys == nullptr) {
		$assignStatic(WindowsTabbedPaneUI::managingFocusBackwardTraversalKeys, $new($HashSet));
		$nc(WindowsTabbedPaneUI::managingFocusBackwardTraversalKeys)->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::SHIFT_MASK)));
	}
	$nc(this->tabPane)->setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, WindowsTabbedPaneUI::managingFocusBackwardTraversalKeys);
}

void WindowsTabbedPaneUI::uninstallDefaults() {
	$nc(this->tabPane)->setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, nullptr);
	$nc(this->tabPane)->setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, nullptr);
	$BasicTabbedPaneUI::uninstallDefaults();
}

$ComponentUI* WindowsTabbedPaneUI::createUI($JComponent* c) {
	$init(WindowsTabbedPaneUI);
	return $new(WindowsTabbedPaneUI);
}

void WindowsTabbedPaneUI::setRolloverTab(int32_t index) {
	if ($XPStyle::getXP() != nullptr) {
		int32_t oldRolloverTab = getRolloverTab();
		$BasicTabbedPaneUI::setRolloverTab(index);
		$var($Rectangle, r1, nullptr);
		$var($Rectangle, r2, nullptr);
		if ((oldRolloverTab >= 0) && (oldRolloverTab < $nc(this->tabPane)->getTabCount())) {
			$assign(r1, getTabBounds(this->tabPane, oldRolloverTab));
		}
		if (index >= 0) {
			$assign(r2, getTabBounds(this->tabPane, index));
		}
		if (r1 != nullptr) {
			if (r2 != nullptr) {
				$nc(this->tabPane)->repaint($(r1->union$(r2)));
			} else {
				$nc(this->tabPane)->repaint(r1);
			}
		} else if (r2 != nullptr) {
			$nc(this->tabPane)->repaint(r2);
		}
	}
}

void WindowsTabbedPaneUI::paintContentBorder($Graphics* g, int32_t tabPlacement, int32_t selectedIndex) {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr && (this->contentOpaque || $nc(this->tabPane)->isOpaque())) {
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, $nc(xp)->getSkin(this->tabPane, $TMSchema$Part::TABP_PANE));
		if (skin != nullptr) {
			$var($Insets, insets, $nc(this->tabPane)->getInsets());
			$var($Insets, tabAreaInsets, $UIManager::getInsets("TabbedPane.tabAreaInsets"_s));
			int32_t x = $nc(insets)->left;
			int32_t y = insets->top;
			int32_t w = $nc(this->tabPane)->getWidth() - insets->right - insets->left;
			int32_t h = $nc(this->tabPane)->getHeight() - insets->top - insets->bottom;
			if (tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT) {
				int32_t tabWidth = calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
				if (tabPlacement == $SwingConstants::LEFT) {
					x += (tabWidth - $nc(tabAreaInsets)->bottom);
				}
				w -= (tabWidth - $nc(tabAreaInsets)->bottom);
			} else {
				int32_t tabHeight = calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
				if (tabPlacement == $SwingConstants::TOP) {
					y += (tabHeight - $nc(tabAreaInsets)->bottom);
				}
				h -= (tabHeight - $nc(tabAreaInsets)->bottom);
			}
			paintRotatedSkin(g, skin, tabPlacement, x, y, w, h, nullptr);
			return;
		}
	}
	$BasicTabbedPaneUI::paintContentBorder(g, tabPlacement, selectedIndex);
}

void WindowsTabbedPaneUI::paintTabBackground($Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) {
	if ($XPStyle::getXP() == nullptr) {
		$BasicTabbedPaneUI::paintTabBackground(g, tabPlacement, tabIndex, x, y, w, h, isSelected);
	}
}

void WindowsTabbedPaneUI::paintTabBorder($Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$TMSchema$Part* part = nullptr;
		int32_t tabCount = $nc(this->tabPane)->getTabCount();
		int32_t tabRun = getRunForTab(tabCount, tabIndex);
		if ($nc(this->tabRuns)->get(tabRun) == tabIndex) {
			$init($TMSchema$Part);
			part = $TMSchema$Part::TABP_TABITEMLEFTEDGE;
		} else if (tabCount > 1 && lastTabInRun(tabCount, tabRun) == tabIndex) {
			$init($TMSchema$Part);
			part = $TMSchema$Part::TABP_TABITEMRIGHTEDGE;
			if (isSelected) {
				if (tabPlacement == $SwingConstants::TOP || tabPlacement == $SwingConstants::BOTTOM) {
					++w;
				} else {
					++h;
				}
			}
		} else {
			$init($TMSchema$Part);
			part = $TMSchema$Part::TABP_TABITEM;
		}
		$init($TMSchema$State);
		$TMSchema$State* state = $TMSchema$State::NORMAL;
		if (isSelected) {
			state = $TMSchema$State::SELECTED;
		} else if (tabIndex == getRolloverTab()) {
			state = $TMSchema$State::HOT;
		}
		paintRotatedSkin(g, $(xp->getSkin(this->tabPane, part)), tabPlacement, x, y, w, h, state);
	} else {
		$BasicTabbedPaneUI::paintTabBorder(g, tabPlacement, tabIndex, x, y, w, h, isSelected);
	}
}

void WindowsTabbedPaneUI::paintRotatedSkin($Graphics* g, $XPStyle$Skin* skin, int32_t tabPlacement, int32_t x, int32_t y, int32_t w, int32_t h, $TMSchema$State* state) {
	$var($Graphics2D, g2d, $cast($Graphics2D, $nc(g)->create()));
	$nc(g2d)->translate(x, y);
	switch (tabPlacement) {
	case $SwingConstants::RIGHT:
		{
			g2d->translate(w, 0);
			g2d->rotate($Math::toRadians(90.0));
			$nc(skin)->paintSkin(g2d, 0, 0, h, w, state);
			break;
		}
	case $SwingConstants::LEFT:
		{
			g2d->scale(-1.0, 1.0);
			g2d->rotate($Math::toRadians(90.0));
			$nc(skin)->paintSkin(g2d, 0, 0, h, w, state);
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			g2d->translate(0, h);
			g2d->scale(-1.0, 1.0);
			g2d->rotate($Math::toRadians(180.0));
			$nc(skin)->paintSkin(g2d, 0, 0, w, h, state);
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			$nc(skin)->paintSkin(g2d, 0, 0, w, h, state);
		}
	}
	g2d->dispose();
}

WindowsTabbedPaneUI::WindowsTabbedPaneUI() {
}

$Class* WindowsTabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(WindowsTabbedPaneUI, name, initialize, &_WindowsTabbedPaneUI_ClassInfo_, allocate$WindowsTabbedPaneUI);
	return class$;
}

$Class* WindowsTabbedPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com