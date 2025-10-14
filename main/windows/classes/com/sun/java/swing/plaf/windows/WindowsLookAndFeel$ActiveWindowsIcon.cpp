#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon.h>

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Image.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo$WindowsVersion.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/ImageIconUIResource.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef WINDOWS
#undef WINDOWS_XP

using $WindowsDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsLookAndFeel$ActiveWindowsIcon$1 = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$ActiveWindowsIcon$1;
using $WindowsLookAndFeel$TriggerDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $OSInfo$WindowsVersion = ::sun::awt::OSInfo$WindowsVersion;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $ImageIconUIResource = ::sun::swing::ImageIconUIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$ActiveWindowsIcon_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$ActiveWindowsIcon, this$0)},
	{"icon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$ActiveWindowsIcon, icon)},
	{"nativeImageName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$ActiveWindowsIcon, nativeImageName)},
	{"fallbackName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$ActiveWindowsIcon, fallbackName)},
	{"desktopProperty", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$ActiveWindowsIcon, desktopProperty)},
	{}
};

$MethodInfo _WindowsLookAndFeel$ActiveWindowsIcon_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$ActiveWindowsIcon::*)($WindowsLookAndFeel*,$String*,$String*,$String*)>(&WindowsLookAndFeel$ActiveWindowsIcon::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$ActiveWindowsIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "ActiveWindowsIcon", $PRIVATE},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsLookAndFeel$ActiveWindowsIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_WindowsLookAndFeel$ActiveWindowsIcon_FieldInfo_,
	_WindowsLookAndFeel$ActiveWindowsIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$ActiveWindowsIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$ActiveWindowsIcon($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$ActiveWindowsIcon));
}

void WindowsLookAndFeel$ActiveWindowsIcon::init$($WindowsLookAndFeel* this$0, $String* desktopPropertyName, $String* nativeImageName, $String* fallbackName) {
	$set(this, this$0, this$0);
	$set(this, nativeImageName, nativeImageName);
	$set(this, fallbackName, fallbackName);
	$init($OSInfo$OSType);
	bool var$0 = $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
	if (var$0 && $nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_XP) < 0) {
		$set(this, desktopProperty, $new($WindowsLookAndFeel$ActiveWindowsIcon$1, this, desktopPropertyName, this$0));
	}
}

$Object* WindowsLookAndFeel$ActiveWindowsIcon::createValue($UIDefaults* table) {
	if (this->icon == nullptr) {
		$var($Image, image, $cast($Image, $ShellFolder::get(this->nativeImageName)));
		if (image != nullptr) {
			$set(this, icon, $new($ImageIconUIResource, image));
		}
	}
	if (this->icon == nullptr && this->fallbackName != nullptr) {
		$load($WindowsLookAndFeel);
		$load($BasicLookAndFeel);
		$var($UIDefaults$LazyValue, fallback, $cast($UIDefaults$LazyValue, $SwingUtilities2::makeIcon($WindowsLookAndFeel::class$, $BasicLookAndFeel::class$, this->fallbackName)));
		$set(this, icon, $cast($Icon, $nc(fallback)->createValue(table)));
	}
	return $of(this->icon);
}

WindowsLookAndFeel$ActiveWindowsIcon::WindowsLookAndFeel$ActiveWindowsIcon() {
}

$Class* WindowsLookAndFeel$ActiveWindowsIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$ActiveWindowsIcon, name, initialize, &_WindowsLookAndFeel$ActiveWindowsIcon_ClassInfo_, allocate$WindowsLookAndFeel$ActiveWindowsIcon);
	return class$;
}

$Class* WindowsLookAndFeel$ActiveWindowsIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com