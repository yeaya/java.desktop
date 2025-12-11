#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$LazyWindowsIcon.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Image.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/UIDefaults.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$LazyWindowsIcon_FieldInfo_[] = {
	{"nativeImage", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$LazyWindowsIcon, nativeImage)},
	{"resource", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$LazyWindowsIcon, resource)},
	{}
};

$MethodInfo _WindowsLookAndFeel$LazyWindowsIcon_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$LazyWindowsIcon::*)($String*,$String*)>(&WindowsLookAndFeel$LazyWindowsIcon::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$LazyWindowsIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$LazyWindowsIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "LazyWindowsIcon", $PRIVATE | $STATIC},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WindowsLookAndFeel$LazyWindowsIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$LazyWindowsIcon",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_WindowsLookAndFeel$LazyWindowsIcon_FieldInfo_,
	_WindowsLookAndFeel$LazyWindowsIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$LazyWindowsIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$LazyWindowsIcon($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$LazyWindowsIcon));
}

void WindowsLookAndFeel$LazyWindowsIcon::init$($String* nativeImage, $String* resource) {
	$set(this, nativeImage, nativeImage);
	$set(this, resource, resource);
}

$Object* WindowsLookAndFeel$LazyWindowsIcon::createValue($UIDefaults* table) {
	if (this->nativeImage != nullptr) {
		$var($Image, image, $cast($Image, $ShellFolder::get(this->nativeImage)));
		if (image != nullptr) {
			return $of($new($ImageIcon, image));
		}
	}
	$load($WindowsLookAndFeel);
	return $of($SwingUtilities2::makeIcon($of(this)->getClass(), $WindowsLookAndFeel::class$, this->resource));
}

WindowsLookAndFeel$LazyWindowsIcon::WindowsLookAndFeel$LazyWindowsIcon() {
}

$Class* WindowsLookAndFeel$LazyWindowsIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$LazyWindowsIcon, name, initialize, &_WindowsLookAndFeel$LazyWindowsIcon_ClassInfo_, allocate$WindowsLookAndFeel$LazyWindowsIcon);
	return class$;
}

$Class* WindowsLookAndFeel$LazyWindowsIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com