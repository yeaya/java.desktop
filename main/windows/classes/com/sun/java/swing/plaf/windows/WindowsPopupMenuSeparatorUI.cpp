#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuSeparatorUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuSeparatorUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

#undef GUTTER_OFFSET_KEY
#undef MP_POPUPSEPARATOR
#undef NORMAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsPopupMenuUI = ::com::sun::java::swing::plaf::windows::WindowsPopupMenuUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $BasicPopupMenuSeparatorUI = ::javax::swing::plaf::basic::BasicPopupMenuSeparatorUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsPopupMenuSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsPopupMenuSeparatorUI::*)()>(&WindowsPopupMenuSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsPopupMenuSeparatorUI::createUI))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsPopupMenuSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsPopupMenuSeparatorUI",
	"javax.swing.plaf.basic.BasicPopupMenuSeparatorUI",
	nullptr,
	nullptr,
	_WindowsPopupMenuSeparatorUI_MethodInfo_
};

$Object* allocate$WindowsPopupMenuSeparatorUI($Class* clazz) {
	return $of($alloc(WindowsPopupMenuSeparatorUI));
}

void WindowsPopupMenuSeparatorUI::init$() {
	$BasicPopupMenuSeparatorUI::init$();
}

$ComponentUI* WindowsPopupMenuSeparatorUI::createUI($JComponent* c) {
	$init(WindowsPopupMenuSeparatorUI);
	return $new(WindowsPopupMenuSeparatorUI);
}

void WindowsPopupMenuSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, s, $nc(c)->getSize());
	$var($XPStyle, xp, $XPStyle::getXP());
	if ($WindowsMenuItemUI::isVistaPainting(xp)) {
		int32_t x = 1;
		$var($Component, parent, c->getParent());
		if ($instanceOf($JComponent, parent)) {
			$init($WindowsPopupMenuUI);
			$var($Object, gutterOffsetObject, $nc(($cast($JComponent, parent)))->getClientProperty($WindowsPopupMenuUI::GUTTER_OFFSET_KEY));
			if ($instanceOf($Integer, gutterOffsetObject)) {
				int32_t var$0 = $nc(($cast($Integer, gutterOffsetObject)))->intValue();
				x = var$0 - c->getX();
				x += $WindowsPopupMenuUI::getGutterWidth();
			}
		}
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, $nc(xp)->getSkin(c, $TMSchema$Part::MP_POPUPSEPARATOR));
		int32_t skinHeight = $nc(skin)->getHeight();
		int32_t y = ($nc(s)->height - skinHeight) / 2;
		$init($TMSchema$State);
		skin->paintSkin(g, x, y, s->width - x - 1, skinHeight, $TMSchema$State::NORMAL);
	} else {
		int32_t y = $nc(s)->height / 2;
		$nc(g)->setColor($(c->getForeground()));
		g->drawLine(1, y - 1, s->width - 2, y - 1);
		g->setColor($(c->getBackground()));
		g->drawLine(1, y, s->width - 2, y);
	}
}

$Dimension* WindowsPopupMenuSeparatorUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int32_t fontHeight = 0;
	$var($Font, font, $nc(c)->getFont());
	if (font != nullptr) {
		fontHeight = $nc($(c->getFontMetrics(font)))->getHeight();
	}
	return $new($Dimension, 0, fontHeight / 2 + 2);
}

WindowsPopupMenuSeparatorUI::WindowsPopupMenuSeparatorUI() {
}

$Class* WindowsPopupMenuSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(WindowsPopupMenuSeparatorUI, name, initialize, &_WindowsPopupMenuSeparatorUI_ClassInfo_, allocate$WindowsPopupMenuSeparatorUI);
	return class$;
}

$Class* WindowsPopupMenuSeparatorUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com