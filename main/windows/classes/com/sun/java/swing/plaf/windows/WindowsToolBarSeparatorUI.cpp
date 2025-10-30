#include <com/sun/java/swing/plaf/windows/WindowsToolBarSeparatorUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <javax/swing/plaf/basic/BasicToolBarSeparatorUI.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TP_SEPARATOR
#undef TP_SEPARATORVERT
#undef VERTICAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;
using $BasicToolBarSeparatorUI = ::javax::swing::plaf::basic::BasicToolBarSeparatorUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsToolBarSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsToolBarSeparatorUI::*)()>(&WindowsToolBarSeparatorUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsToolBarSeparatorUI::createUI))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsToolBarSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsToolBarSeparatorUI",
	"javax.swing.plaf.basic.BasicToolBarSeparatorUI",
	nullptr,
	nullptr,
	_WindowsToolBarSeparatorUI_MethodInfo_
};

$Object* allocate$WindowsToolBarSeparatorUI($Class* clazz) {
	return $of($alloc(WindowsToolBarSeparatorUI));
}

void WindowsToolBarSeparatorUI::init$() {
	$BasicToolBarSeparatorUI::init$();
}

$ComponentUI* WindowsToolBarSeparatorUI::createUI($JComponent* c) {
	$init(WindowsToolBarSeparatorUI);
	return $new(WindowsToolBarSeparatorUI);
}

$Dimension* WindowsToolBarSeparatorUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $nc(($cast($JToolBar$Separator, c)))->getSeparatorSize());
	if (size != nullptr) {
		$assign(size, size->getSize());
	} else {
		$assign(size, $new($Dimension, 6, 6));
		$var($XPStyle, xp, $XPStyle::getXP());
		if (xp != nullptr) {
			bool vertical = $nc(($cast($JSeparator, c)))->getOrientation() == $SwingConstants::VERTICAL;
			$init($TMSchema$Part);
			$TMSchema$Part* part = vertical ? $TMSchema$Part::TP_SEPARATOR : $TMSchema$Part::TP_SEPARATORVERT;
			$var($XPStyle$Skin, skin, xp->getSkin(c, part));
			size->width = $nc(skin)->getWidth();
			size->height = skin->getHeight();
		}
		if ($nc(($cast($JSeparator, c)))->getOrientation() == $SwingConstants::VERTICAL) {
			size->height = 0;
		} else {
			size->width = 0;
		}
	}
	return size;
}

$Dimension* WindowsToolBarSeparatorUI::getMaximumSize($JComponent* c) {
	$var($Dimension, pref, getPreferredSize(c));
	if ($nc(($cast($JSeparator, c)))->getOrientation() == $SwingConstants::VERTICAL) {
		return $new($Dimension, $nc(pref)->width, $Short::MAX_VALUE);
	} else {
		return $new($Dimension, $Short::MAX_VALUE, $nc(pref)->height);
	}
}

void WindowsToolBarSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	bool vertical = $nc(($cast($JSeparator, c)))->getOrientation() == $SwingConstants::VERTICAL;
	$var($Dimension, size, $nc(c)->getSize());
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$TMSchema$Part* part = vertical ? $TMSchema$Part::TP_SEPARATOR : $TMSchema$Part::TP_SEPARATORVERT;
		$var($XPStyle$Skin, skin, xp->getSkin(c, part));
		int32_t dx = vertical ? ($nc(size)->width - $nc(skin)->getWidth()) / 2 : 0;
		int32_t dy = vertical ? 0 : (size->height - skin->getHeight()) / 2;
		int32_t dw = vertical ? skin->getWidth() : size->width;
		int32_t dh = vertical ? size->height : skin->getHeight();
		skin->paintSkin(g, dx, dy, dw, dh, nullptr);
	} else {
		$var($Color, temp, $nc(g)->getColor());
		$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
		$var($Color, shadow, $nc(table)->getColor("ToolBar.shadow"_s));
		$var($Color, highlight, table->getColor("ToolBar.highlight"_s));
		if (vertical) {
			int32_t x = ($nc(size)->width / 2) - 1;
			g->setColor(shadow);
			g->drawLine(x, 2, x, size->height - 2);
			g->setColor(highlight);
			g->drawLine(x + 1, 2, x + 1, size->height - 2);
		} else {
			int32_t y = ($nc(size)->height / 2) - 1;
			g->setColor(shadow);
			g->drawLine(2, y, size->width - 2, y);
			g->setColor(highlight);
			g->drawLine(2, y + 1, size->width - 2, y + 1);
		}
		g->setColor(temp);
	}
}

WindowsToolBarSeparatorUI::WindowsToolBarSeparatorUI() {
}

$Class* WindowsToolBarSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(WindowsToolBarSeparatorUI, name, initialize, &_WindowsToolBarSeparatorUI_ClassInfo_, allocate$WindowsToolBarSeparatorUI);
	return class$;
}

$Class* WindowsToolBarSeparatorUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com