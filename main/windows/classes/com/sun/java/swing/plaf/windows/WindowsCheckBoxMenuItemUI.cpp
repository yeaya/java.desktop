#include <com/sun/java/swing/plaf/windows/WindowsCheckBoxMenuItemUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsCheckBoxMenuItemUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicCheckBoxMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

using $WindowsCheckBoxMenuItemUI$1 = ::com::sun::java::swing::plaf::windows::WindowsCheckBoxMenuItemUI$1;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsMenuItemUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $BasicCheckBoxMenuItemUI = ::javax::swing::plaf::basic::BasicCheckBoxMenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsCheckBoxMenuItemUI_FieldInfo_[] = {
	{"accessor", "Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;", nullptr, $FINAL, $field(WindowsCheckBoxMenuItemUI, accessor)},
	{}
};

$MethodInfo _WindowsCheckBoxMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsCheckBoxMenuItemUI::*)()>(&WindowsCheckBoxMenuItemUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsCheckBoxMenuItemUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(WindowsCheckBoxMenuItemUI*)>(&WindowsCheckBoxMenuItemUI::access$000))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsCheckBoxMenuItemUI::createUI))},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsCheckBoxMenuItemUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsCheckBoxMenuItemUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsCheckBoxMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsCheckBoxMenuItemUI",
	"javax.swing.plaf.basic.BasicCheckBoxMenuItemUI",
	nullptr,
	_WindowsCheckBoxMenuItemUI_FieldInfo_,
	_WindowsCheckBoxMenuItemUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsCheckBoxMenuItemUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsCheckBoxMenuItemUI$1"
};

$Object* allocate$WindowsCheckBoxMenuItemUI($Class* clazz) {
	return $of($alloc(WindowsCheckBoxMenuItemUI));
}

$JMenuItem* WindowsCheckBoxMenuItemUI::access$000(WindowsCheckBoxMenuItemUI* x0) {
	$init(WindowsCheckBoxMenuItemUI);
	return $nc(x0)->menuItem;
}

void WindowsCheckBoxMenuItemUI::init$() {
	$BasicCheckBoxMenuItemUI::init$();
	$set(this, accessor, $new($WindowsCheckBoxMenuItemUI$1, this));
}

$ComponentUI* WindowsCheckBoxMenuItemUI::createUI($JComponent* b) {
	$init(WindowsCheckBoxMenuItemUI);
	return $new(WindowsCheckBoxMenuItemUI);
}

void WindowsCheckBoxMenuItemUI::paintBackground($Graphics* g, $JMenuItem* menuItem, $Color* bgColor) {
	if ($WindowsMenuItemUI::isVistaPainting()) {
		$WindowsMenuItemUI::paintBackground(this->accessor, g, menuItem, bgColor);
		return;
	}
	$BasicCheckBoxMenuItemUI::paintBackground(g, menuItem, bgColor);
}

void WindowsCheckBoxMenuItemUI::paintText($Graphics* g, $JMenuItem* menuItem, $Rectangle* textRect, $String* text) {
	$useLocalCurrentObjectStackCache();
	if ($WindowsMenuItemUI::isVistaPainting()) {
		$WindowsMenuItemUI::paintText(this->accessor, g, menuItem, textRect, text);
		return;
	}
	$var($ButtonModel, model, $nc(menuItem)->getModel());
	$var($Color, oldColor, $nc(g)->getColor());
	bool var$0 = $nc(model)->isEnabled();
	if (var$0 && model->isArmed()) {
		g->setColor(this->selectionForeground);
	}
	$WindowsGraphicsUtils::paintText(g, menuItem, textRect, text, 0);
	g->setColor(oldColor);
}

WindowsCheckBoxMenuItemUI::WindowsCheckBoxMenuItemUI() {
}

$Class* WindowsCheckBoxMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(WindowsCheckBoxMenuItemUI, name, initialize, &_WindowsCheckBoxMenuItemUI_ClassInfo_, allocate$WindowsCheckBoxMenuItemUI);
	return class$;
}

$Class* WindowsCheckBoxMenuItemUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com