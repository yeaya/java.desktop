#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI$MnemonicListener.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BASICMENUITEMUI_MAX_TEXT_OFFSET
#undef GUTTER_OFFSET_KEY
#undef MP_POPUPBACKGROUND
#undef MP_POPUPGUTTER
#undef NORMAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsPopupMenuUI$MnemonicListener = ::com::sun::java::swing::plaf::windows::WindowsPopupMenuUI$MnemonicListener;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsPopupMenuUI_FieldInfo_[] = {
	{"mnemonicListener", "Lcom/sun/java/swing/plaf/windows/WindowsPopupMenuUI$MnemonicListener;", nullptr, $STATIC, $staticField(WindowsPopupMenuUI, mnemonicListener)},
	{"GUTTER_OFFSET_KEY", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(WindowsPopupMenuUI, GUTTER_OFFSET_KEY)},
	{}
};

$MethodInfo _WindowsPopupMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsPopupMenuUI::*)()>(&WindowsPopupMenuUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsPopupMenuUI::createUI))},
	{"getGutterWidth", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&WindowsPopupMenuUI::getGutterWidth))},
	{"getPopup", "(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;", nullptr, $PUBLIC},
	{"getSpanAfterGutter", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&WindowsPopupMenuUI::getSpanAfterGutter))},
	{"getSpanBeforeGutter", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&WindowsPopupMenuUI::getSpanBeforeGutter))},
	{"getTextOffset", "(Ljavax/swing/JComponent;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($JComponent*)>(&WindowsPopupMenuUI::getTextOffset))},
	{"installListeners", "()V", nullptr, $PUBLIC},
	{"isLeftToRight", "(Ljavax/swing/JComponent;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($JComponent*)>(&WindowsPopupMenuUI::isLeftToRight))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsPopupMenuUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsPopupMenuUI$MnemonicListener", "com.sun.java.swing.plaf.windows.WindowsPopupMenuUI", "MnemonicListener", $STATIC},
	{}
};

$ClassInfo _WindowsPopupMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsPopupMenuUI",
	"javax.swing.plaf.basic.BasicPopupMenuUI",
	nullptr,
	_WindowsPopupMenuUI_FieldInfo_,
	_WindowsPopupMenuUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsPopupMenuUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsPopupMenuUI$MnemonicListener"
};

$Object* allocate$WindowsPopupMenuUI($Class* clazz) {
	return $of($alloc(WindowsPopupMenuUI));
}

$WindowsPopupMenuUI$MnemonicListener* WindowsPopupMenuUI::mnemonicListener = nullptr;
$Object* WindowsPopupMenuUI::GUTTER_OFFSET_KEY = nullptr;

void WindowsPopupMenuUI::init$() {
	$BasicPopupMenuUI::init$();
}

$ComponentUI* WindowsPopupMenuUI::createUI($JComponent* c) {
	$init(WindowsPopupMenuUI);
	return $new(WindowsPopupMenuUI);
}

void WindowsPopupMenuUI::installListeners() {
	$BasicPopupMenuUI::installListeners();
	if (!$UIManager::getBoolean("Button.showMnemonics"_s) && WindowsPopupMenuUI::mnemonicListener == nullptr) {
		$assignStatic(WindowsPopupMenuUI::mnemonicListener, $new($WindowsPopupMenuUI$MnemonicListener));
		$nc($($MenuSelectionManager::defaultManager()))->addChangeListener(WindowsPopupMenuUI::mnemonicListener);
	}
}

$Popup* WindowsPopupMenuUI::getPopup($JPopupMenu* popupMenu, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($PopupFactory, popupFactory, $PopupFactory::getSharedInstance());
	return $nc(popupFactory)->getPopup($($nc(popupMenu)->getInvoker()), popupMenu, x, y);
}

int32_t WindowsPopupMenuUI::getTextOffset($JComponent* c) {
	$init(WindowsPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	int32_t rv = -1;
	$init($SwingUtilities2);
	$var($Object, maxTextOffset, $nc(c)->getClientProperty($SwingUtilities2::BASICMENUITEMUI_MAX_TEXT_OFFSET));
	if ($instanceOf($Integer, maxTextOffset)) {
		rv = $nc(($cast($Integer, maxTextOffset)))->intValue();
		int32_t menuItemOffset = 0;
		$var($Component, component, c->getComponent(0));
		if (component != nullptr) {
			menuItemOffset = component->getX();
		}
		rv += menuItemOffset;
	}
	return rv;
}

int32_t WindowsPopupMenuUI::getSpanBeforeGutter() {
	$init(WindowsPopupMenuUI);
	return 3;
}

int32_t WindowsPopupMenuUI::getSpanAfterGutter() {
	$init(WindowsPopupMenuUI);
	return 3;
}

int32_t WindowsPopupMenuUI::getGutterWidth() {
	$init(WindowsPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	int32_t rv = 2;
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, xp->getSkin(nullptr, $TMSchema$Part::MP_POPUPGUTTER));
		rv = $nc(skin)->getWidth();
	}
	return rv;
}

bool WindowsPopupMenuUI::isLeftToRight($JComponent* c) {
	$init(WindowsPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	bool leftToRight = true;
	for (int32_t i = $nc(c)->getComponentCount() - 1; i >= 0 && leftToRight; --i) {
		leftToRight = $nc($($nc($(c->getComponent(i)))->getComponentOrientation()))->isLeftToRight();
	}
	return leftToRight;
}

void WindowsPopupMenuUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if ($WindowsMenuItemUI::isVistaPainting(xp)) {
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, $nc(xp)->getSkin(c, $TMSchema$Part::MP_POPUPBACKGROUND));
		$var($Graphics, var$0, g);
		int32_t var$1 = $nc(c)->getWidth();
		$init($TMSchema$State);
		$nc(skin)->paintSkin(var$0, 0, 0, var$1, c->getHeight(), $TMSchema$State::NORMAL);
		int32_t textOffset = getTextOffset(c);
		if (textOffset >= 0 && isLeftToRight(c)) {
			$assign(skin, xp->getSkin(c, $TMSchema$Part::MP_POPUPGUTTER));
			int32_t gutterWidth = getGutterWidth();
			int32_t gutterOffset = textOffset - getSpanAfterGutter() - gutterWidth;
			$nc(c)->putClientProperty(WindowsPopupMenuUI::GUTTER_OFFSET_KEY, $($Integer::valueOf(gutterOffset)));
			$var($Insets, insets, c->getInsets());
			$nc(skin)->paintSkin(g, gutterOffset, $nc(insets)->top, gutterWidth, c->getHeight() - insets->bottom - insets->top, $TMSchema$State::NORMAL);
		} else if ($nc(c)->getClientProperty(WindowsPopupMenuUI::GUTTER_OFFSET_KEY) != nullptr) {
			c->putClientProperty(WindowsPopupMenuUI::GUTTER_OFFSET_KEY, nullptr);
		}
	} else {
		$BasicPopupMenuUI::paint(g, c);
	}
}

void clinit$WindowsPopupMenuUI($Class* class$) {
	$assignStatic(WindowsPopupMenuUI::mnemonicListener, nullptr);
	$assignStatic(WindowsPopupMenuUI::GUTTER_OFFSET_KEY, $new($StringUIClientPropertyKey, "GUTTER_OFFSET_KEY"_s));
}

WindowsPopupMenuUI::WindowsPopupMenuUI() {
}

$Class* WindowsPopupMenuUI::load$($String* name, bool initialize) {
	$loadClass(WindowsPopupMenuUI, name, initialize, &_WindowsPopupMenuUI_ClassInfo_, clinit$WindowsPopupMenuUI, allocate$WindowsPopupMenuUI);
	return class$;
}

$Class* WindowsPopupMenuUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com