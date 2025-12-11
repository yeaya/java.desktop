#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$SkinIcon.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/AssertionError.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $AssertionError = ::java::lang::AssertionError;
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

$FieldInfo _WindowsLookAndFeel$SkinIcon_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsLookAndFeel$SkinIcon, $assertionsDisabled)},
	{"part", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PRIVATE | $FINAL, $field(WindowsLookAndFeel$SkinIcon, part)},
	{"state", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PRIVATE | $FINAL, $field(WindowsLookAndFeel$SkinIcon, state)},
	{}
};

$MethodInfo _WindowsLookAndFeel$SkinIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$SkinIcon::*)($TMSchema$Part*,$TMSchema$State*)>(&WindowsLookAndFeel$SkinIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$SkinIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$SkinIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "SkinIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$SkinIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$SkinIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource",
	_WindowsLookAndFeel$SkinIcon_FieldInfo_,
	_WindowsLookAndFeel$SkinIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$SkinIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$SkinIcon($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$SkinIcon));
}

int32_t WindowsLookAndFeel$SkinIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsLookAndFeel$SkinIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsLookAndFeel$SkinIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsLookAndFeel$SkinIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsLookAndFeel$SkinIcon::finalize() {
	this->$Icon::finalize();
}

bool WindowsLookAndFeel$SkinIcon::$assertionsDisabled = false;

void WindowsLookAndFeel$SkinIcon::init$($TMSchema$Part* part, $TMSchema$State* state) {
	$set(this, part, part);
	$set(this, state, state);
}

void WindowsLookAndFeel$SkinIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (!WindowsLookAndFeel$SkinIcon::$assertionsDisabled && !(xp != nullptr)) {
		$throwNew($AssertionError);
	}
	if (xp != nullptr) {
		$var($XPStyle$Skin, skin, xp->getSkin(nullptr, this->part));
		$nc(skin)->paintSkin(g, x, y, this->state);
	}
}

int32_t WindowsLookAndFeel$SkinIcon::getIconWidth() {
	$useLocalCurrentObjectStackCache();
	int32_t width = 0;
	$var($XPStyle, xp, $XPStyle::getXP());
	if (!WindowsLookAndFeel$SkinIcon::$assertionsDisabled && !(xp != nullptr)) {
		$throwNew($AssertionError);
	}
	if (xp != nullptr) {
		$var($XPStyle$Skin, skin, xp->getSkin(nullptr, this->part));
		width = $nc(skin)->getWidth();
	}
	return width;
}

int32_t WindowsLookAndFeel$SkinIcon::getIconHeight() {
	$useLocalCurrentObjectStackCache();
	int32_t height = 0;
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$var($XPStyle$Skin, skin, xp->getSkin(nullptr, this->part));
		height = $nc(skin)->getHeight();
	}
	return height;
}

void clinit$WindowsLookAndFeel$SkinIcon($Class* class$) {
	$load($WindowsLookAndFeel);
	WindowsLookAndFeel$SkinIcon::$assertionsDisabled = !$WindowsLookAndFeel::class$->desiredAssertionStatus();
}

WindowsLookAndFeel$SkinIcon::WindowsLookAndFeel$SkinIcon() {
}

$Class* WindowsLookAndFeel$SkinIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$SkinIcon, name, initialize, &_WindowsLookAndFeel$SkinIcon_ClassInfo_, clinit$WindowsLookAndFeel$SkinIcon, allocate$WindowsLookAndFeel$SkinIcon);
	return class$;
}

$Class* WindowsLookAndFeel$SkinIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com