#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$ExpandedIcon.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsTreeUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

#undef OPENED
#undef TVP_GLYPH

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsTreeUI = ::com::sun::java::swing::plaf::windows::WindowsTreeUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
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

$MethodInfo _WindowsTreeUI$ExpandedIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTreeUI$ExpandedIcon::*)()>(&WindowsTreeUI$ExpandedIcon::init$))},
	{"createExpandedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&WindowsTreeUI$ExpandedIcon::createExpandedIcon))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"getSkin", "(Ljava/awt/Component;)Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, 0},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTreeUI$ExpandedIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTreeUI$ExpandedIcon", "com.sun.java.swing.plaf.windows.WindowsTreeUI", "ExpandedIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsTreeUI$ExpandedIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTreeUI$ExpandedIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	nullptr,
	_WindowsTreeUI$ExpandedIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTreeUI$ExpandedIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTreeUI"
};

$Object* allocate$WindowsTreeUI$ExpandedIcon($Class* clazz) {
	return $of($alloc(WindowsTreeUI$ExpandedIcon));
}

int32_t WindowsTreeUI$ExpandedIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsTreeUI$ExpandedIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsTreeUI$ExpandedIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsTreeUI$ExpandedIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsTreeUI$ExpandedIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsTreeUI$ExpandedIcon::init$() {
}

$Icon* WindowsTreeUI$ExpandedIcon::createExpandedIcon() {
	$init(WindowsTreeUI$ExpandedIcon);
	return $new(WindowsTreeUI$ExpandedIcon);
}

$XPStyle$Skin* WindowsTreeUI$ExpandedIcon::getSkin($Component* c) {
	$var($XPStyle, xp, $XPStyle::getXP());
	$init($TMSchema$Part);
	return (xp != nullptr) ? $nc(xp)->getSkin(c, $TMSchema$Part::TVP_GLYPH) : ($XPStyle$Skin*)nullptr;
}

void WindowsTreeUI$ExpandedIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($XPStyle$Skin, skin, getSkin(c));
	if (skin != nullptr) {
		$init($TMSchema$State);
		skin->paintSkin(g, x, y, $TMSchema$State::OPENED);
		return;
	}
	$var($Color, backgroundColor, $nc(c)->getBackground());
	if (backgroundColor != nullptr) {
		$nc(g)->setColor(backgroundColor);
	} else {
		$init($Color);
		$nc(g)->setColor($Color::white);
	}
	$nc(g)->fillRect(x, y, 9 - 1, 9 - 1);
	$init($Color);
	g->setColor($Color::gray);
	g->drawRect(x, y, 9 - 1, 9 - 1);
	g->setColor($Color::black);
	g->drawLine(x + 2, y + 4, x + (9 - 3), y + 4);
}

int32_t WindowsTreeUI$ExpandedIcon::getIconWidth() {
	$var($XPStyle$Skin, skin, getSkin(nullptr));
	return (skin != nullptr) ? $nc(skin)->getWidth() : 9;
}

int32_t WindowsTreeUI$ExpandedIcon::getIconHeight() {
	$var($XPStyle$Skin, skin, getSkin(nullptr));
	return (skin != nullptr) ? $nc(skin)->getHeight() : 9;
}

WindowsTreeUI$ExpandedIcon::WindowsTreeUI$ExpandedIcon() {
}

$Class* WindowsTreeUI$ExpandedIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsTreeUI$ExpandedIcon, name, initialize, &_WindowsTreeUI$ExpandedIcon_ClassInfo_, allocate$WindowsTreeUI$ExpandedIcon);
	return class$;
}

$Class* WindowsTreeUI$ExpandedIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com