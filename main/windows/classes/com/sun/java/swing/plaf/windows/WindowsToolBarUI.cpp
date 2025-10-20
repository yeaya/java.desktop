#include <com/sun/java/swing/plaf/windows/WindowsToolBarUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsButtonUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolBarUI.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

#undef TP_TOOLBAR

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsButtonUI = ::com::sun::java::swing::plaf::windows::WindowsButtonUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsToolBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsToolBarUI::*)()>(&WindowsToolBarUI::init$))},
	{"createNonRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"createRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsToolBarUI::createUI))},
	{"getRolloverBorder", "(Ljavax/swing/AbstractButton;)Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsToolBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsToolBarUI",
	"javax.swing.plaf.basic.BasicToolBarUI",
	nullptr,
	nullptr,
	_WindowsToolBarUI_MethodInfo_
};

$Object* allocate$WindowsToolBarUI($Class* clazz) {
	return $of($alloc(WindowsToolBarUI));
}

void WindowsToolBarUI::init$() {
	$BasicToolBarUI::init$();
}

$ComponentUI* WindowsToolBarUI::createUI($JComponent* c) {
	$init(WindowsToolBarUI);
	return $new(WindowsToolBarUI);
}

void WindowsToolBarUI::installDefaults() {
	if ($XPStyle::getXP() != nullptr) {
		setRolloverBorders(true);
	}
	$BasicToolBarUI::installDefaults();
}

$Border* WindowsToolBarUI::createRolloverBorder() {
	if ($XPStyle::getXP() != nullptr) {
		return $new($EmptyBorder, 3, 3, 3, 3);
	} else {
		return $BasicToolBarUI::createRolloverBorder();
	}
}

$Border* WindowsToolBarUI::createNonRolloverBorder() {
	if ($XPStyle::getXP() != nullptr) {
		return $new($EmptyBorder, 3, 3, 3, 3);
	} else {
		return $BasicToolBarUI::createNonRolloverBorder();
	}
}

void WindowsToolBarUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$var($Graphics, var$0, g);
		int32_t var$1 = $nc(c)->getWidth();
		$nc($(xp->getSkin(c, $TMSchema$Part::TP_TOOLBAR)))->paintSkin(var$0, 0, 0, var$1, c->getHeight(), nullptr, true);
	} else {
		$BasicToolBarUI::paint(g, c);
	}
}

$Border* WindowsToolBarUI::getRolloverBorder($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		return xp->getBorder(b, $($WindowsButtonUI::getXPButtonType(b)));
	} else {
		return $BasicToolBarUI::getRolloverBorder(b);
	}
}

WindowsToolBarUI::WindowsToolBarUI() {
}

$Class* WindowsToolBarUI::load$($String* name, bool initialize) {
	$loadClass(WindowsToolBarUI, name, initialize, &_WindowsToolBarUI_ClassInfo_, allocate$WindowsToolBarUI);
	return class$;
}

$Class* WindowsToolBarUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com