#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$CollapsedIcon.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$ExpandedIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsTreeUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

#undef CLOSED

using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsTreeUI$ExpandedIcon = ::com::sun::java::swing::plaf::windows::WindowsTreeUI$ExpandedIcon;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsTreeUI$CollapsedIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTreeUI$CollapsedIcon::*)()>(&WindowsTreeUI$CollapsedIcon::init$))},
	{"createCollapsedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsTreeUI$CollapsedIcon::createCollapsedIcon))},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTreeUI$CollapsedIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTreeUI$CollapsedIcon", "com.sun.java.swing.plaf.windows.WindowsTreeUI", "CollapsedIcon", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsTreeUI$ExpandedIcon", "com.sun.java.swing.plaf.windows.WindowsTreeUI", "ExpandedIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsTreeUI$CollapsedIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTreeUI$CollapsedIcon",
	"com.sun.java.swing.plaf.windows.WindowsTreeUI$ExpandedIcon",
	nullptr,
	nullptr,
	_WindowsTreeUI$CollapsedIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTreeUI$CollapsedIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTreeUI"
};

$Object* allocate$WindowsTreeUI$CollapsedIcon($Class* clazz) {
	return $of($alloc(WindowsTreeUI$CollapsedIcon));
}

void WindowsTreeUI$CollapsedIcon::init$() {
	$WindowsTreeUI$ExpandedIcon::init$();
}

$Icon* WindowsTreeUI$CollapsedIcon::createCollapsedIcon() {
	$init(WindowsTreeUI$CollapsedIcon);
	return $new(WindowsTreeUI$CollapsedIcon);
}

void WindowsTreeUI$CollapsedIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($XPStyle$Skin, skin, getSkin(c));
	if (skin != nullptr) {
		$init($TMSchema$State);
		skin->paintSkin(g, x, y, $TMSchema$State::CLOSED);
	} else {
		$WindowsTreeUI$ExpandedIcon::paintIcon(c, g, x, y);
		$nc(g)->drawLine(x + 4, y + 2, x + 4, y + (9 - 3));
	}
}

WindowsTreeUI$CollapsedIcon::WindowsTreeUI$CollapsedIcon() {
}

$Class* WindowsTreeUI$CollapsedIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsTreeUI$CollapsedIcon, name, initialize, &_WindowsTreeUI$CollapsedIcon_ClassInfo_, allocate$WindowsTreeUI$CollapsedIcon);
	return class$;
}

$Class* WindowsTreeUI$CollapsedIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com