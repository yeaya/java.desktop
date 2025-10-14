#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>
#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI$1.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicRadioButtonMenuItemUI.h>
#include <jcpp.h>

using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsMenuItemUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor;
using $WindowsRadioButtonMenuItemUI$1 = ::com::sun::java::swing::plaf::windows::WindowsRadioButtonMenuItemUI$1;
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
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicRadioButtonMenuItemUI = ::javax::swing::plaf::basic::BasicRadioButtonMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsRadioButtonMenuItemUI_FieldInfo_[] = {
	{"accessor", "Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor;", nullptr, $FINAL, $field(WindowsRadioButtonMenuItemUI, accessor)},
	{}
};

$MethodInfo _WindowsRadioButtonMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsRadioButtonMenuItemUI::*)()>(&WindowsRadioButtonMenuItemUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(WindowsRadioButtonMenuItemUI*)>(&WindowsRadioButtonMenuItemUI::access$000))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsRadioButtonMenuItemUI::createUI))},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsRadioButtonMenuItemUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsRadioButtonMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI",
	"javax.swing.plaf.basic.BasicRadioButtonMenuItemUI",
	nullptr,
	_WindowsRadioButtonMenuItemUI_FieldInfo_,
	_WindowsRadioButtonMenuItemUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsRadioButtonMenuItemUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI$1"
};

$Object* allocate$WindowsRadioButtonMenuItemUI($Class* clazz) {
	return $of($alloc(WindowsRadioButtonMenuItemUI));
}

$JMenuItem* WindowsRadioButtonMenuItemUI::access$000(WindowsRadioButtonMenuItemUI* x0) {
	$init(WindowsRadioButtonMenuItemUI);
	return $nc(x0)->menuItem;
}

void WindowsRadioButtonMenuItemUI::init$() {
	$BasicRadioButtonMenuItemUI::init$();
	$set(this, accessor, $new($WindowsRadioButtonMenuItemUI$1, this));
}

$ComponentUI* WindowsRadioButtonMenuItemUI::createUI($JComponent* b) {
	$init(WindowsRadioButtonMenuItemUI);
	return $new(WindowsRadioButtonMenuItemUI);
}

void WindowsRadioButtonMenuItemUI::paintBackground($Graphics* g, $JMenuItem* menuItem, $Color* bgColor) {
	if ($WindowsMenuItemUI::isVistaPainting()) {
		$WindowsMenuItemUI::paintBackground(this->accessor, g, menuItem, bgColor);
		return;
	}
	$BasicRadioButtonMenuItemUI::paintBackground(g, menuItem, bgColor);
}

void WindowsRadioButtonMenuItemUI::paintText($Graphics* g, $JMenuItem* menuItem, $Rectangle* textRect, $String* text) {
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

WindowsRadioButtonMenuItemUI::WindowsRadioButtonMenuItemUI() {
}

$Class* WindowsRadioButtonMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(WindowsRadioButtonMenuItemUI, name, initialize, &_WindowsRadioButtonMenuItemUI_ClassInfo_, allocate$WindowsRadioButtonMenuItemUI);
	return class$;
}

$Class* WindowsRadioButtonMenuItemUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com