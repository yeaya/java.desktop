#include <com/apple/laf/AquaMenuItemUI.h>

#include <com/apple/laf/AquaMenuItemUI$1.h>
#include <com/apple/laf/AquaMenuItemUI$IndeterminateListener.h>
#include <com/apple/laf/AquaMenuPainter$Client.h>
#include <com/apple/laf/AquaMenuPainter.h>
#include <com/apple/laf/AquaUtils$Selectable.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

#undef INDETERMINATE_LISTENER

using $AquaMenuItemUI$1 = ::com::apple::laf::AquaMenuItemUI$1;
using $AquaMenuItemUI$IndeterminateListener = ::com::apple::laf::AquaMenuItemUI$IndeterminateListener;
using $AquaMenuPainter = ::com::apple::laf::AquaMenuPainter;
using $AquaMenuPainter$Client = ::com::apple::laf::AquaMenuPainter$Client;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$Selectable = ::com::apple::laf::AquaUtils$Selectable;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaMenuItemUI_FieldInfo_[] = {
	{"kPlain", "I", nullptr, $STATIC | $FINAL, $constField(AquaMenuItemUI, kPlain)},
	{"kCheckBox", "I", nullptr, $STATIC | $FINAL, $constField(AquaMenuItemUI, kCheckBox)},
	{"kRadioButton", "I", nullptr, $STATIC | $FINAL, $constField(AquaMenuItemUI, kRadioButton)},
	{"sPropertyPrefixes", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaMenuItemUI, sPropertyPrefixes)},
	{"fIsScreenMenuItem", "Z", nullptr, 0, $field(AquaMenuItemUI, fIsScreenMenuItem)},
	{"fIsIndeterminate", "Z", nullptr, 0, $field(AquaMenuItemUI, fIsIndeterminate)},
	{"fType", "I", nullptr, 0, $field(AquaMenuItemUI, fType)},
	{"INDETERMINATE_LISTENER", "Lcom/apple/laf/AquaMenuItemUI$IndeterminateListener;", nullptr, $STATIC | $FINAL, $staticField(AquaMenuItemUI, INDETERMINATE_LISTENER)},
	{}
};

$MethodInfo _AquaMenuItemUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(AquaMenuItemUI::*)(int32_t)>(&AquaMenuItemUI::init$))},
	{"access$000", "(Lcom/apple/laf/AquaMenuItemUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(AquaMenuItemUI*)>(&AquaMenuItemUI::access$000))},
	{"access$100", "(Lcom/apple/laf/AquaMenuItemUI;)Ljavax/swing/JMenuItem;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JMenuItem*(*)(AquaMenuItemUI*)>(&AquaMenuItemUI::access$100))},
	{"access$202", "(Lcom/apple/laf/AquaMenuItemUI;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(AquaMenuItemUI*,$Icon*)>(&AquaMenuItemUI::access$202))},
	{"access$302", "(Lcom/apple/laf/AquaMenuItemUI;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(AquaMenuItemUI*,$Icon*)>(&AquaMenuItemUI::access$302))},
	{"addListeners", "()V", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaMenuItemUI::createUI))},
	{"doClick", "(Ljavax/swing/MenuSelectionManager;)V", nullptr, $PROTECTED},
	{"getPreferredMenuItemSize", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;I)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC},
	{"paintMenuItem", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/awt/Color;Ljava/awt/Color;I)V", nullptr, $PROTECTED},
	{"removeListeners", "()V", nullptr, $PROTECTED},
	{"setIsScreenMenu", "(Z)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateListenersForScreenMenuItem", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaMenuItemUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuPainter$Client", "com.apple.laf.AquaMenuPainter", "Client", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaMenuItemUI$IndeterminateListener", "com.apple.laf.AquaMenuItemUI", "IndeterminateListener", $STATIC},
	{"com.apple.laf.AquaMenuItemUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaMenuItemUI",
	"javax.swing.plaf.basic.BasicMenuItemUI",
	"com.apple.laf.AquaMenuPainter$Client",
	_AquaMenuItemUI_FieldInfo_,
	_AquaMenuItemUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMenuItemUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuItemUI$IndeterminateListener,com.apple.laf.AquaMenuItemUI$1"
};

$Object* allocate$AquaMenuItemUI($Class* clazz) {
	return $of($alloc(AquaMenuItemUI));
}

int32_t AquaMenuItemUI::hashCode() {
	 return this->$BasicMenuItemUI::hashCode();
}

bool AquaMenuItemUI::equals(Object$* arg0) {
	 return this->$BasicMenuItemUI::equals(arg0);
}

$Object* AquaMenuItemUI::clone() {
	 return this->$BasicMenuItemUI::clone();
}

$String* AquaMenuItemUI::toString() {
	 return this->$BasicMenuItemUI::toString();
}

void AquaMenuItemUI::finalize() {
	this->$BasicMenuItemUI::finalize();
}

$StringArray* AquaMenuItemUI::sPropertyPrefixes = nullptr;
$AquaMenuItemUI$IndeterminateListener* AquaMenuItemUI::INDETERMINATE_LISTENER = nullptr;

$Icon* AquaMenuItemUI::access$302(AquaMenuItemUI* x0, $Icon* x1) {
	$init(AquaMenuItemUI);
	return $set($nc(x0), checkIcon, x1);
}

$Icon* AquaMenuItemUI::access$202(AquaMenuItemUI* x0, $Icon* x1) {
	$init(AquaMenuItemUI);
	return $set($nc(x0), checkIcon, x1);
}

$JMenuItem* AquaMenuItemUI::access$100(AquaMenuItemUI* x0) {
	$init(AquaMenuItemUI);
	return $nc(x0)->menuItem;
}

$JMenuItem* AquaMenuItemUI::access$000(AquaMenuItemUI* x0) {
	$init(AquaMenuItemUI);
	return $nc(x0)->menuItem;
}

void AquaMenuItemUI::init$(int32_t type) {
	$BasicMenuItemUI::init$();
	this->fIsScreenMenuItem = false;
	this->fIsIndeterminate = false;
	this->fType = type;
}

$ComponentUI* AquaMenuItemUI::createUI($JComponent* c) {
	$init(AquaMenuItemUI);
	int32_t type = AquaMenuItemUI::kPlain;
	if ($instanceOf($JCheckBoxMenuItem, c)) {
		type = AquaMenuItemUI::kCheckBox;
	}
	if ($instanceOf($JRadioButtonMenuItem, c)) {
		type = AquaMenuItemUI::kRadioButton;
	}
	return $new(AquaMenuItemUI, type);
}

$String* AquaMenuItemUI::getPropertyPrefix() {
	return $nc(AquaMenuItemUI::sPropertyPrefixes)->get(this->fType);
}

void AquaMenuItemUI::installListeners() {
	$BasicMenuItemUI::installListeners();
	$AquaMenuItemUI$IndeterminateListener::install(this->menuItem);
}

void AquaMenuItemUI::uninstallListeners() {
	$AquaMenuItemUI$IndeterminateListener::uninstall(this->menuItem);
	$BasicMenuItemUI::uninstallListeners();
}

void AquaMenuItemUI::updateListenersForScreenMenuItem() {
	setIsScreenMenu(true);
}

void AquaMenuItemUI::setIsScreenMenu(bool isScreenMenuItem) {
	if (this->fIsScreenMenuItem != isScreenMenuItem) {
		this->fIsScreenMenuItem = isScreenMenuItem;
		if (this->fIsScreenMenuItem) {
			removeListeners();
		} else {
			addListeners();
		}
	}
}

void AquaMenuItemUI::removeListeners() {
	$nc(this->menuItem)->removeMouseListener(this->mouseInputListener);
	$nc(this->menuItem)->removeMouseMotionListener(this->mouseInputListener);
	$nc(this->menuItem)->removeMenuDragMouseListener(this->menuDragMouseListener);
}

void AquaMenuItemUI::addListeners() {
	$nc(this->menuItem)->addMouseListener(this->mouseInputListener);
	$nc(this->menuItem)->addMouseMotionListener(this->mouseInputListener);
	$nc(this->menuItem)->addMenuDragMouseListener(this->menuDragMouseListener);
}

void AquaMenuItemUI::paintMenuItem($Graphics* g, $JComponent* c, $Icon* localCheckIcon, $Icon* localArrowIcon, $Color* background, $Color* foreground, int32_t localDefaultTextIconGap) {
	$nc($($AquaMenuPainter::instance()))->paintMenuItem(this, g, c, localCheckIcon, localArrowIcon, background, foreground, this->disabledForeground, this->selectionForeground, localDefaultTextIconGap, this->acceleratorFont);
}

$Dimension* AquaMenuItemUI::getPreferredMenuItemSize($JComponent* c, $Icon* localCheckIcon, $Icon* localArrowIcon, int32_t localDefaultTextIconGap) {
	return $nc($($AquaMenuPainter::instance()))->getPreferredMenuItemSize(c, localCheckIcon, localArrowIcon, localDefaultTextIconGap, this->acceleratorFont);
}

void AquaMenuItemUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if ($nc(c)->isOpaque()) {
		$var($Color, oldColor, $nc(g)->getColor());
		g->setColor($(c->getBackground()));
		int32_t var$0 = c->getWidth();
		g->fillRect(0, 0, var$0, c->getHeight());
		g->setColor(oldColor);
	}
	paint(g, c);
}

void AquaMenuItemUI::paintBackground($Graphics* g, $JComponent* c, int32_t menuWidth, int32_t menuHeight) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JMenuBar, $($nc(c)->getParent()))) {
		return;
	}
	$var($Color, oldColor, $nc(g)->getColor());
	g->setColor($($nc(c)->getBackground()));
	g->fillRect(0, 0, menuWidth, menuHeight);
	if ($nc(($cast($JMenuItem, c)))->isBorderPainted()) {
		if ($nc($(($cast($JMenuItem, c))->getModel()))->isArmed()) {
			$nc($($AquaMenuPainter::instance()))->paintSelectedMenuItemBackground(g, menuWidth, menuHeight);
		}
	} else if ($nc($(($cast($JMenuItem, c))->getModel()))->isArmed()) {
		$var($Color, holdc, g->getColor());
		$init($Color);
		g->setColor($Color::black);
		g->fillRect(0, 0, menuWidth, menuHeight);
		g->setColor(holdc);
	} else {
		$init($Color);
		g->setColor($Color::green);
		g->fillRect(0, 0, menuWidth, menuHeight);
	}
	g->setColor(oldColor);
}

void AquaMenuItemUI::doClick($MenuSelectionManager* msm) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $nc(this->menuItem)->getSize());
	$AquaUtils::blinkMenu($$new($AquaMenuItemUI$1, this, size));
	$BasicMenuItemUI::doClick(msm);
}

void clinit$AquaMenuItemUI($Class* class$) {
	$assignStatic(AquaMenuItemUI::sPropertyPrefixes, $new($StringArray, {
		"MenuItem"_s,
		"CheckBoxMenuItem"_s,
		"RadioButtonMenuItem"_s
	}));
	$assignStatic(AquaMenuItemUI::INDETERMINATE_LISTENER, $new($AquaMenuItemUI$IndeterminateListener));
}

AquaMenuItemUI::AquaMenuItemUI() {
}

$Class* AquaMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(AquaMenuItemUI, name, initialize, &_AquaMenuItemUI_ClassInfo_, clinit$AquaMenuItemUI, allocate$AquaMenuItemUI);
	return class$;
}

$Class* AquaMenuItemUI::class$ = nullptr;

		} // laf
	} // apple
} // com