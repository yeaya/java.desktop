#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$TakeFocus.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Window.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <jcpp.h>

#undef ACTIVE
#undef INACTIVE
#undef MP_BARBACKGROUND

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsMenuBarUI$1 = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI$1;
using $WindowsMenuBarUI$2 = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI$2;
using $WindowsMenuBarUI$TakeFocus = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI$TakeFocus;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Window = ::java::awt::Window;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsMenuBarUI_FieldInfo_[] = {
	{"windowListener", "Ljava/awt/event/WindowListener;", nullptr, $PRIVATE, $field(WindowsMenuBarUI, windowListener)},
	{"hierarchyListener", "Ljava/awt/event/HierarchyListener;", nullptr, $PRIVATE, $field(WindowsMenuBarUI, hierarchyListener)},
	{"window", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(WindowsMenuBarUI, window)},
	{}
};

$MethodInfo _WindowsMenuBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsMenuBarUI::*)()>(&WindowsMenuBarUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;)Ljavax/swing/JMenuBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuBar*(*)(WindowsMenuBarUI*)>(&WindowsMenuBarUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;)Ljavax/swing/JMenuBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuBar*(*)(WindowsMenuBarUI*)>(&WindowsMenuBarUI::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;)Ljavax/swing/JMenuBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuBar*(*)(WindowsMenuBarUI*)>(&WindowsMenuBarUI::access$200))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsMenuBarUI::createUI))},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installWindowListener", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsMenuBarUI::*)()>(&WindowsMenuBarUI::installWindowListener))},
	{"isActive", "(Ljavax/swing/JComponent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JComponent*)>(&WindowsMenuBarUI::isActive))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallWindowListener", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsMenuBarUI::*)()>(&WindowsMenuBarUI::uninstallWindowListener))},
	{}
};

$InnerClassInfo _WindowsMenuBarUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$TakeFocus", "com.sun.java.swing.plaf.windows.WindowsMenuBarUI", "TakeFocus", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsMenuBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI",
	"javax.swing.plaf.basic.BasicMenuBarUI",
	nullptr,
	_WindowsMenuBarUI_FieldInfo_,
	_WindowsMenuBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsMenuBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$TakeFocus,com.sun.java.swing.plaf.windows.WindowsMenuBarUI$2,com.sun.java.swing.plaf.windows.WindowsMenuBarUI$1"
};

$Object* allocate$WindowsMenuBarUI($Class* clazz) {
	return $of($alloc(WindowsMenuBarUI));
}

$JMenuBar* WindowsMenuBarUI::access$200(WindowsMenuBarUI* x0) {
	$init(WindowsMenuBarUI);
	return $nc(x0)->menuBar;
}

$JMenuBar* WindowsMenuBarUI::access$100(WindowsMenuBarUI* x0) {
	$init(WindowsMenuBarUI);
	return $nc(x0)->menuBar;
}

$JMenuBar* WindowsMenuBarUI::access$000(WindowsMenuBarUI* x0) {
	$init(WindowsMenuBarUI);
	return $nc(x0)->menuBar;
}

void WindowsMenuBarUI::init$() {
	$BasicMenuBarUI::init$();
	$set(this, windowListener, nullptr);
	$set(this, hierarchyListener, nullptr);
	$set(this, window, nullptr);
}

$ComponentUI* WindowsMenuBarUI::createUI($JComponent* x) {
	$init(WindowsMenuBarUI);
	return $new(WindowsMenuBarUI);
}

void WindowsMenuBarUI::uninstallListeners() {
	uninstallWindowListener();
	if (this->hierarchyListener != nullptr) {
		$nc(this->menuBar)->removeHierarchyListener(this->hierarchyListener);
		$set(this, hierarchyListener, nullptr);
	}
	$BasicMenuBarUI::uninstallListeners();
}

void WindowsMenuBarUI::installWindowListener() {
	if (this->windowListener == nullptr) {
		$var($Component, component, $nc(this->menuBar)->getTopLevelAncestor());
		if ($instanceOf($Window, component)) {
			$set(this, window, $cast($Window, component));
			$set(this, windowListener, $new($WindowsMenuBarUI$1, this));
			$nc(($cast($Window, component)))->addWindowListener(this->windowListener);
		}
	}
}

void WindowsMenuBarUI::uninstallWindowListener() {
	if (this->windowListener != nullptr && this->window != nullptr) {
		$nc(this->window)->removeWindowListener(this->windowListener);
	}
	$set(this, window, nullptr);
	$set(this, windowListener, nullptr);
}

void WindowsMenuBarUI::installListeners() {
	if ($WindowsLookAndFeel::isOnVista()) {
		installWindowListener();
		$set(this, hierarchyListener, $new($WindowsMenuBarUI$2, this));
		$nc(this->menuBar)->addHierarchyListener(this->hierarchyListener);
	}
	$BasicMenuBarUI::installListeners();
}

void WindowsMenuBarUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$BasicMenuBarUI::installKeyboardActions();
	$var($ActionMap, map, $SwingUtilities::getUIActionMap(this->menuBar));
	if (map == nullptr) {
		$assign(map, $new($ActionMapUIResource));
		$SwingUtilities::replaceUIActionMap(this->menuBar, map);
	}
	$nc(map)->put("takeFocus"_s, $$new($WindowsMenuBarUI$TakeFocus));
}

void WindowsMenuBarUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if ($WindowsMenuItemUI::isVistaPainting(xp)) {
		$var($XPStyle$Skin, skin, nullptr);
		$init($TMSchema$Part);
		$assign(skin, $nc(xp)->getSkin(c, $TMSchema$Part::MP_BARBACKGROUND));
		int32_t width = $nc(c)->getWidth();
		int32_t height = c->getHeight();
		$init($TMSchema$State);
		$TMSchema$State* state = isActive(c) ? $TMSchema$State::ACTIVE : $TMSchema$State::INACTIVE;
		$nc(skin)->paintSkin(g, 0, 0, width, height, state);
	} else {
		$BasicMenuBarUI::paint(g, c);
	}
}

bool WindowsMenuBarUI::isActive($JComponent* c) {
	$init(WindowsMenuBarUI);
	$useLocalCurrentObjectStackCache();
	$var($JRootPane, rootPane, $nc(c)->getRootPane());
	if (rootPane != nullptr) {
		$var($Component, component, rootPane->getParent());
		if ($instanceOf($Window, component)) {
			return $nc(($cast($Window, component)))->isActive();
		}
	}
	return true;
}

WindowsMenuBarUI::WindowsMenuBarUI() {
}

$Class* WindowsMenuBarUI::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuBarUI, name, initialize, &_WindowsMenuBarUI_ClassInfo_, allocate$WindowsMenuBarUI);
	return class$;
}

$Class* WindowsMenuBarUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com