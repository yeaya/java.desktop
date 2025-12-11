#include <com/apple/laf/AquaMenuUI.h>

#include <com/apple/laf/AquaMenuPainter$Client.h>
#include <com/apple/laf/AquaMenuPainter.h>
#include <com/apple/laf/AquaMenuUI$AquaMouseInputHandler.h>
#include <com/apple/laf/AquaMenuUI$MenuDragMouseHandler.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/lang/Math.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuUI$ChangeHandler.h>
#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AquaMenuPainter = ::com::apple::laf::AquaMenuPainter;
using $AquaMenuPainter$Client = ::com::apple::laf::AquaMenuPainter$Client;
using $AquaMenuUI$AquaMouseInputHandler = ::com::apple::laf::AquaMenuUI$AquaMouseInputHandler;
using $AquaMenuUI$MenuDragMouseHandler = ::com::apple::laf::AquaMenuUI$MenuDragMouseHandler;
using $Color = ::java::awt::Color;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MenuDragMouseListener = ::javax::swing::event::MenuDragMouseListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $BasicMenuUI$ChangeHandler = ::javax::swing::plaf::basic::BasicMenuUI$ChangeHandler;
using $BasicMenuUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaMenuUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaMenuUI::*)()>(&AquaMenuUI::init$))},
	{"access$000", "(Lcom/apple/laf/AquaMenuUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(AquaMenuUI*)>(&AquaMenuUI::access$000))},
	{"access$100", "(Lcom/apple/laf/AquaMenuUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(AquaMenuUI*)>(&AquaMenuUI::access$100))},
	{"access$200", "(Lcom/apple/laf/AquaMenuUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(AquaMenuUI*)>(&AquaMenuUI::access$200))},
	{"access$300", "(Lcom/apple/laf/AquaMenuUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(AquaMenuUI*)>(&AquaMenuUI::access$300))},
	{"access$400", "(Lcom/apple/laf/AquaMenuUI;Ljavax/swing/JMenu;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(AquaMenuUI*,$JMenu*)>(&AquaMenuUI::access$400))},
	{"access$500", "(Lcom/apple/laf/AquaMenuUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(AquaMenuUI*)>(&AquaMenuUI::access$500))},
	{"access$600", "(Lcom/apple/laf/AquaMenuUI;Ljavax/swing/JMenu;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(AquaMenuUI*,$JMenu*)>(&AquaMenuUI::access$600))},
	{"appendPath", "([Ljavax/swing/MenuElement;Ljavax/swing/MenuElement;)V", nullptr, $STATIC, $method(static_cast<void(*)($MenuElementArray*,$MenuElement*)>(&AquaMenuUI::appendPath))},
	{"createChangeListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createMenuDragMouseListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MenuDragMouseListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaMenuUI::createUI))},
	{"getPreferredMenuItemSize", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;I)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC},
	{"paintMenuItem", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/awt/Color;Ljava/awt/Color;I)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaMenuUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuPainter$Client", "com.apple.laf.AquaMenuPainter", "Client", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaMenuUI$AquaMouseInputHandler", "com.apple.laf.AquaMenuUI", "AquaMouseInputHandler", $PROTECTED},
	{"com.apple.laf.AquaMenuUI$MenuDragMouseHandler", "com.apple.laf.AquaMenuUI", "MenuDragMouseHandler", 0},
	{}
};

$ClassInfo _AquaMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaMenuUI",
	"javax.swing.plaf.basic.BasicMenuUI",
	"com.apple.laf.AquaMenuPainter$Client",
	nullptr,
	_AquaMenuUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMenuUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuUI$AquaMouseInputHandler,com.apple.laf.AquaMenuUI$MenuDragMouseHandler"
};

$Object* allocate$AquaMenuUI($Class* clazz) {
	return $of($alloc(AquaMenuUI));
}

int32_t AquaMenuUI::hashCode() {
	 return this->$BasicMenuUI::hashCode();
}

bool AquaMenuUI::equals(Object$* arg0) {
	 return this->$BasicMenuUI::equals(arg0);
}

$Object* AquaMenuUI::clone() {
	 return this->$BasicMenuUI::clone();
}

$String* AquaMenuUI::toString() {
	 return this->$BasicMenuUI::toString();
}

void AquaMenuUI::finalize() {
	this->$BasicMenuUI::finalize();
}

void AquaMenuUI::access$600(AquaMenuUI* x0, $JMenu* x1) {
	$init(AquaMenuUI);
	$nc(x0)->setupPostTimer(x1);
}

$JMenuItem* AquaMenuUI::access$500(AquaMenuUI* x0) {
	$init(AquaMenuUI);
	return $nc(x0)->menuItem;
}

void AquaMenuUI::access$400(AquaMenuUI* x0, $JMenu* x1) {
	$init(AquaMenuUI);
	$nc(x0)->setupPostTimer(x1);
}

$JMenuItem* AquaMenuUI::access$300(AquaMenuUI* x0) {
	$init(AquaMenuUI);
	return $nc(x0)->menuItem;
}

$JMenuItem* AquaMenuUI::access$200(AquaMenuUI* x0) {
	$init(AquaMenuUI);
	return $nc(x0)->menuItem;
}

$JMenuItem* AquaMenuUI::access$100(AquaMenuUI* x0) {
	$init(AquaMenuUI);
	return $nc(x0)->menuItem;
}

$JMenuItem* AquaMenuUI::access$000(AquaMenuUI* x0) {
	$init(AquaMenuUI);
	return $nc(x0)->menuItem;
}

void AquaMenuUI::init$() {
	$BasicMenuUI::init$();
}

$ComponentUI* AquaMenuUI::createUI($JComponent* x) {
	$init(AquaMenuUI);
	return $new(AquaMenuUI);
}

$ChangeListener* AquaMenuUI::createChangeListener($JComponent* c) {
	return $new($BasicMenuUI$ChangeHandler, this, $cast($JMenu, c), this);
}

void AquaMenuUI::installDefaults() {
	$BasicMenuUI::installDefaults();
	$nc(($cast($JMenu, this->menuItem)))->setDelay(8 * 1000 / 60);
}

void AquaMenuUI::paintMenuItem($Graphics* g, $JComponent* c, $Icon* localCheckIcon, $Icon* localArrowIcon, $Color* background, $Color* foreground, int32_t localDefaultTextIconGap) {
	$nc($($AquaMenuPainter::instance()))->paintMenuItem(this, g, c, localCheckIcon, localArrowIcon, background, foreground, this->disabledForeground, this->selectionForeground, localDefaultTextIconGap, this->acceleratorFont);
}

$Dimension* AquaMenuUI::getPreferredMenuItemSize($JComponent* c, $Icon* localCheckIcon, $Icon* localArrowIcon, int32_t localDefaultTextIconGap) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $nc($($AquaMenuPainter::instance()))->getPreferredMenuItemSize(c, localCheckIcon, localArrowIcon, localDefaultTextIconGap, this->acceleratorFont));
	if ($instanceOf($JMenuBar, $($nc(c)->getParent()))) {
		$nc(d)->height = $Math::max(d->height, 21);
	}
	return d;
}

void AquaMenuUI::paintBackground($Graphics* g, $JComponent* c, int32_t menuWidth, int32_t menuHeight) {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, $nc(c)->getParent());
	bool parentIsMenuBar = $instanceOf($JMenuBar, parent);
	$var($ButtonModel, model, $nc(($cast($JMenuItem, c)))->getModel());
	bool var$0 = $nc(model)->isArmed();
	if (var$0 || $nc(model)->isSelected()) {
		if (parentIsMenuBar) {
			$nc($($AquaMenuPainter::instance()))->paintSelectedMenuTitleBackground(g, menuWidth, menuHeight);
		} else {
			$nc($($AquaMenuPainter::instance()))->paintSelectedMenuItemBackground(g, menuWidth, menuHeight);
		}
	} else if (parentIsMenuBar) {
		$nc($($AquaMenuPainter::instance()))->paintMenuBarBackground(g, menuWidth, menuHeight, c);
	} else {
		$nc(g)->setColor($(c->getBackground()));
		g->fillRect(0, 0, menuWidth, menuHeight);
	}
}

$MouseInputListener* AquaMenuUI::createMouseInputListener($JComponent* c) {
	return $new($AquaMenuUI$AquaMouseInputHandler, this);
}

$MenuDragMouseListener* AquaMenuUI::createMenuDragMouseListener($JComponent* c) {
	return $new($AquaMenuUI$MenuDragMouseHandler, this);
}

void AquaMenuUI::appendPath($MenuElementArray* path, $MenuElement* elem) {
	$init(AquaMenuUI);
	$useLocalCurrentObjectStackCache();
	$var($MenuElementArray, newPath, $new($MenuElementArray, $nc(path)->length + 1));
	$System::arraycopy(path, 0, newPath, 0, path->length);
	newPath->set(path->length, elem);
	$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(newPath);
}

AquaMenuUI::AquaMenuUI() {
}

$Class* AquaMenuUI::load$($String* name, bool initialize) {
	$loadClass(AquaMenuUI, name, initialize, &_AquaMenuUI_ClassInfo_, allocate$AquaMenuUI);
	return class$;
}

$Class* AquaMenuUI::class$ = nullptr;

		} // laf
	} // apple
} // com