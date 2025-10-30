#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$CheckBoxIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$CheckBoxMenuItemIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$FrameButtonIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$MenuArrowIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$MenuItemArrowIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$MenuItemCheckIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$RadioButtonIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$RadioButtonMenuItemIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$ResizeIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

#undef WP_CLOSEBUTTON
#undef WP_MAXBUTTON
#undef WP_MINBUTTON
#undef WP_RESTOREBUTTON

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $WindowsIconFactory$CheckBoxIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$CheckBoxIcon;
using $WindowsIconFactory$CheckBoxMenuItemIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$CheckBoxMenuItemIcon;
using $WindowsIconFactory$FrameButtonIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$FrameButtonIcon;
using $WindowsIconFactory$MenuArrowIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$MenuArrowIcon;
using $WindowsIconFactory$MenuItemArrowIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$MenuItemArrowIcon;
using $WindowsIconFactory$MenuItemCheckIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$MenuItemCheckIcon;
using $WindowsIconFactory$RadioButtonIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$RadioButtonIcon;
using $WindowsIconFactory$RadioButtonMenuItemIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$RadioButtonMenuItemIcon;
using $WindowsIconFactory$ResizeIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$ResizeIcon;
using $WindowsIconFactory$VistaMenuItemCheckIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsIconFactory_FieldInfo_[] = {
	{"frame_closeIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, frame_closeIcon)},
	{"frame_iconifyIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, frame_iconifyIcon)},
	{"frame_maxIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, frame_maxIcon)},
	{"frame_minIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, frame_minIcon)},
	{"frame_resizeIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, frame_resizeIcon)},
	{"checkBoxIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, checkBoxIcon)},
	{"radioButtonIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, radioButtonIcon)},
	{"checkBoxMenuItemIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, checkBoxMenuItemIcon)},
	{"radioButtonMenuItemIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, radioButtonMenuItemIcon)},
	{"menuItemCheckIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, menuItemCheckIcon)},
	{"menuItemArrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, menuItemArrowIcon)},
	{"menuArrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, menuArrowIcon)},
	{"menuItemCheckIconFactory", "Lcom/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsIconFactory, menuItemCheckIconFactory)},
	{}
};

$MethodInfo _WindowsIconFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsIconFactory::*)()>(&WindowsIconFactory::init$))},
	{"createFrameCloseIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::createFrameCloseIcon))},
	{"createFrameIconifyIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::createFrameIconifyIcon))},
	{"createFrameMaximizeIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::createFrameMaximizeIcon))},
	{"createFrameMinimizeIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::createFrameMinimizeIcon))},
	{"createFrameResizeIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::createFrameResizeIcon))},
	{"getCheckBoxIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::getCheckBoxIcon))},
	{"getCheckBoxMenuItemIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::getCheckBoxMenuItemIcon))},
	{"getMenuArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::getMenuArrowIcon))},
	{"getMenuItemArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::getMenuItemArrowIcon))},
	{"getMenuItemCheckIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::getMenuItemCheckIcon))},
	{"getMenuItemCheckIconFactory", "()Lcom/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<$WindowsIconFactory$VistaMenuItemCheckIconFactory*(*)()>(&WindowsIconFactory::getMenuItemCheckIconFactory))},
	{"getRadioButtonIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::getRadioButtonIcon))},
	{"getRadioButtonMenuItemIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsIconFactory::getRadioButtonMenuItemIcon))},
	{}
};

$InnerClassInfo _WindowsIconFactory_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "VistaMenuItemCheckIconFactory", $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuArrowIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuItemArrowIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuItemCheckIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "MenuItemCheckIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$RadioButtonMenuItemIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "RadioButtonMenuItemIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxMenuItemIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "CheckBoxMenuItemIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$RadioButtonIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "RadioButtonIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "CheckBoxIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$ResizeIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "ResizeIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$FrameButtonIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "FrameButtonIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory",
	"java.lang.Object",
	"java.io.Serializable",
	_WindowsIconFactory_FieldInfo_,
	_WindowsIconFactory_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory,com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuArrowIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuItemArrowIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$MenuItemCheckIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$RadioButtonMenuItemIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxMenuItemIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$RadioButtonIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$ResizeIcon,com.sun.java.swing.plaf.windows.WindowsIconFactory$FrameButtonIcon"
};

$Object* allocate$WindowsIconFactory($Class* clazz) {
	return $of($alloc(WindowsIconFactory));
}

$Icon* WindowsIconFactory::frame_closeIcon = nullptr;
$Icon* WindowsIconFactory::frame_iconifyIcon = nullptr;
$Icon* WindowsIconFactory::frame_maxIcon = nullptr;
$Icon* WindowsIconFactory::frame_minIcon = nullptr;
$Icon* WindowsIconFactory::frame_resizeIcon = nullptr;
$Icon* WindowsIconFactory::checkBoxIcon = nullptr;
$Icon* WindowsIconFactory::radioButtonIcon = nullptr;
$Icon* WindowsIconFactory::checkBoxMenuItemIcon = nullptr;
$Icon* WindowsIconFactory::radioButtonMenuItemIcon = nullptr;
$Icon* WindowsIconFactory::menuItemCheckIcon = nullptr;
$Icon* WindowsIconFactory::menuItemArrowIcon = nullptr;
$Icon* WindowsIconFactory::menuArrowIcon = nullptr;
$WindowsIconFactory$VistaMenuItemCheckIconFactory* WindowsIconFactory::menuItemCheckIconFactory = nullptr;

void WindowsIconFactory::init$() {
}

$Icon* WindowsIconFactory::getMenuItemCheckIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::menuItemCheckIcon == nullptr) {
		$assignStatic(WindowsIconFactory::menuItemCheckIcon, $new($WindowsIconFactory$MenuItemCheckIcon));
	}
	return WindowsIconFactory::menuItemCheckIcon;
}

$Icon* WindowsIconFactory::getMenuItemArrowIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::menuItemArrowIcon == nullptr) {
		$assignStatic(WindowsIconFactory::menuItemArrowIcon, $new($WindowsIconFactory$MenuItemArrowIcon));
	}
	return WindowsIconFactory::menuItemArrowIcon;
}

$Icon* WindowsIconFactory::getMenuArrowIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::menuArrowIcon == nullptr) {
		$assignStatic(WindowsIconFactory::menuArrowIcon, $new($WindowsIconFactory$MenuArrowIcon));
	}
	return WindowsIconFactory::menuArrowIcon;
}

$Icon* WindowsIconFactory::getCheckBoxIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::checkBoxIcon == nullptr) {
		$assignStatic(WindowsIconFactory::checkBoxIcon, $new($WindowsIconFactory$CheckBoxIcon));
	}
	return WindowsIconFactory::checkBoxIcon;
}

$Icon* WindowsIconFactory::getRadioButtonIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::radioButtonIcon == nullptr) {
		$assignStatic(WindowsIconFactory::radioButtonIcon, $new($WindowsIconFactory$RadioButtonIcon));
	}
	return WindowsIconFactory::radioButtonIcon;
}

$Icon* WindowsIconFactory::getCheckBoxMenuItemIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::checkBoxMenuItemIcon == nullptr) {
		$assignStatic(WindowsIconFactory::checkBoxMenuItemIcon, $new($WindowsIconFactory$CheckBoxMenuItemIcon));
	}
	return WindowsIconFactory::checkBoxMenuItemIcon;
}

$Icon* WindowsIconFactory::getRadioButtonMenuItemIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::radioButtonMenuItemIcon == nullptr) {
		$assignStatic(WindowsIconFactory::radioButtonMenuItemIcon, $new($WindowsIconFactory$RadioButtonMenuItemIcon));
	}
	return WindowsIconFactory::radioButtonMenuItemIcon;
}

$WindowsIconFactory$VistaMenuItemCheckIconFactory* WindowsIconFactory::getMenuItemCheckIconFactory() {
	$load(WindowsIconFactory);
	$synchronized(class$) {
		$init(WindowsIconFactory);
		if (WindowsIconFactory::menuItemCheckIconFactory == nullptr) {
			$assignStatic(WindowsIconFactory::menuItemCheckIconFactory, $new($WindowsIconFactory$VistaMenuItemCheckIconFactory));
		}
		return WindowsIconFactory::menuItemCheckIconFactory;
	}
}

$Icon* WindowsIconFactory::createFrameCloseIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::frame_closeIcon == nullptr) {
		$init($TMSchema$Part);
		$assignStatic(WindowsIconFactory::frame_closeIcon, $new($WindowsIconFactory$FrameButtonIcon, $TMSchema$Part::WP_CLOSEBUTTON));
	}
	return WindowsIconFactory::frame_closeIcon;
}

$Icon* WindowsIconFactory::createFrameIconifyIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::frame_iconifyIcon == nullptr) {
		$init($TMSchema$Part);
		$assignStatic(WindowsIconFactory::frame_iconifyIcon, $new($WindowsIconFactory$FrameButtonIcon, $TMSchema$Part::WP_MINBUTTON));
	}
	return WindowsIconFactory::frame_iconifyIcon;
}

$Icon* WindowsIconFactory::createFrameMaximizeIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::frame_maxIcon == nullptr) {
		$init($TMSchema$Part);
		$assignStatic(WindowsIconFactory::frame_maxIcon, $new($WindowsIconFactory$FrameButtonIcon, $TMSchema$Part::WP_MAXBUTTON));
	}
	return WindowsIconFactory::frame_maxIcon;
}

$Icon* WindowsIconFactory::createFrameMinimizeIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::frame_minIcon == nullptr) {
		$init($TMSchema$Part);
		$assignStatic(WindowsIconFactory::frame_minIcon, $new($WindowsIconFactory$FrameButtonIcon, $TMSchema$Part::WP_RESTOREBUTTON));
	}
	return WindowsIconFactory::frame_minIcon;
}

$Icon* WindowsIconFactory::createFrameResizeIcon() {
	$init(WindowsIconFactory);
	if (WindowsIconFactory::frame_resizeIcon == nullptr) {
		$assignStatic(WindowsIconFactory::frame_resizeIcon, $new($WindowsIconFactory$ResizeIcon));
	}
	return WindowsIconFactory::frame_resizeIcon;
}

WindowsIconFactory::WindowsIconFactory() {
}

$Class* WindowsIconFactory::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory, name, initialize, &_WindowsIconFactory_ClassInfo_, allocate$WindowsIconFactory);
	return class$;
}

$Class* WindowsIconFactory::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com