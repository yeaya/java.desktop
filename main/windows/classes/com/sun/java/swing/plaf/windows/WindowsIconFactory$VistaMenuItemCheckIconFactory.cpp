#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <jcpp.h>

#undef MP_POPUPCHECK
#undef OFFSET

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $MenuItemCheckIconFactory = ::sun::swing::MenuItemCheckIconFactory;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsIconFactory$VistaMenuItemCheckIconFactory_FieldInfo_[] = {
	{"OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsIconFactory$VistaMenuItemCheckIconFactory, OFFSET)},
	{}
};

$MethodInfo _WindowsIconFactory$VistaMenuItemCheckIconFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsIconFactory$VistaMenuItemCheckIconFactory::*)()>(&WindowsIconFactory$VistaMenuItemCheckIconFactory::init$))},
	{"getIcon", "(Ljavax/swing/JMenuItem;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getIcon", "(Ljava/lang/String;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&WindowsIconFactory$VistaMenuItemCheckIconFactory::getIconWidth))},
	{"getType", "(Ljava/awt/Component;)Ljava/lang/Class;", "(Ljava/awt/Component;)Ljava/lang/Class<+Ljavax/swing/JMenuItem;>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($Component*)>(&WindowsIconFactory$VistaMenuItemCheckIconFactory::getType))},
	{"getType", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<+Ljavax/swing/JMenuItem;>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($String*)>(&WindowsIconFactory$VistaMenuItemCheckIconFactory::getType))},
	{"isCompatible", "(Ljava/lang/Object;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$VistaMenuItemCheckIconFactory_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "VistaMenuItemCheckIconFactory", $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory", "VistaMenuItemCheckIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$VistaMenuItemCheckIconFactory_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory",
	"java.lang.Object",
	"sun.swing.MenuItemCheckIconFactory",
	_WindowsIconFactory$VistaMenuItemCheckIconFactory_FieldInfo_,
	_WindowsIconFactory$VistaMenuItemCheckIconFactory_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$VistaMenuItemCheckIconFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$VistaMenuItemCheckIconFactory($Class* clazz) {
	return $of($alloc(WindowsIconFactory$VistaMenuItemCheckIconFactory));
}

void WindowsIconFactory$VistaMenuItemCheckIconFactory::init$() {
}

$Icon* WindowsIconFactory$VistaMenuItemCheckIconFactory::getIcon($JMenuItem* component) {
	return $new($WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, component);
}

bool WindowsIconFactory$VistaMenuItemCheckIconFactory::isCompatible(Object$* icon, $String* prefix) {
	return $instanceOf($WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, icon) && $nc(($cast($WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, icon)))->type == getType(prefix);
}

$Icon* WindowsIconFactory$VistaMenuItemCheckIconFactory::getIcon($String* type) {
	return $new($WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, type);
}

int32_t WindowsIconFactory$VistaMenuItemCheckIconFactory::getIconWidth() {
	$init(WindowsIconFactory$VistaMenuItemCheckIconFactory);
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	$init($TMSchema$Part);
	return ((xp != nullptr) ? $nc($($nc(xp)->getSkin(nullptr, $TMSchema$Part::MP_POPUPCHECK)))->getWidth() : 16) + 2 * WindowsIconFactory$VistaMenuItemCheckIconFactory::OFFSET;
}

$Class* WindowsIconFactory$VistaMenuItemCheckIconFactory::getType($Component* c) {
	$init(WindowsIconFactory$VistaMenuItemCheckIconFactory);
	$Class* rv = nullptr;
	if ($instanceOf($JCheckBoxMenuItem, c)) {
		$load($JCheckBoxMenuItem);
		rv = $JCheckBoxMenuItem::class$;
	} else if ($instanceOf($JRadioButtonMenuItem, c)) {
		$load($JRadioButtonMenuItem);
		rv = $JRadioButtonMenuItem::class$;
	} else if ($instanceOf($JMenu, c)) {
		$load($JMenu);
		rv = $JMenu::class$;
	} else if ($instanceOf($JMenuItem, c)) {
		$load($JMenuItem);
		rv = $JMenuItem::class$;
	}
	return rv;
}

$Class* WindowsIconFactory$VistaMenuItemCheckIconFactory::getType($String* type) {
	$init(WindowsIconFactory$VistaMenuItemCheckIconFactory);
	$Class* rv = nullptr;
	if (type == "CheckBoxMenuItem"_s) {
		$load($JCheckBoxMenuItem);
		rv = $JCheckBoxMenuItem::class$;
	} else if (type == "RadioButtonMenuItem"_s) {
		$load($JRadioButtonMenuItem);
		rv = $JRadioButtonMenuItem::class$;
	} else if (type == "Menu"_s) {
		$load($JMenu);
		rv = $JMenu::class$;
	} else if (type == "MenuItem"_s) {
		$load($JMenuItem);
		rv = $JMenuItem::class$;
	} else {
		$load($JMenuItem);
		rv = $JMenuItem::class$;
	}
	return rv;
}

WindowsIconFactory$VistaMenuItemCheckIconFactory::WindowsIconFactory$VistaMenuItemCheckIconFactory() {
}

$Class* WindowsIconFactory$VistaMenuItemCheckIconFactory::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$VistaMenuItemCheckIconFactory, name, initialize, &_WindowsIconFactory$VistaMenuItemCheckIconFactory_ClassInfo_, allocate$WindowsIconFactory$VistaMenuItemCheckIconFactory);
	return class$;
}

$Class* WindowsIconFactory$VistaMenuItemCheckIconFactory::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com