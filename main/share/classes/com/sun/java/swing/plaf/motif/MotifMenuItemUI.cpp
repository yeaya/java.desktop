#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI.h>

#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI$ChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI$MouseInputHandler.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

using $MotifMenuItemUI$ChangeHandler = ::com::sun::java::swing::plaf::motif::MotifMenuItemUI$ChangeHandler;
using $MotifMenuItemUI$MouseInputHandler = ::com::sun::java::swing::plaf::motif::MotifMenuItemUI$MouseInputHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifMenuItemUI_FieldInfo_[] = {
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(MotifMenuItemUI, changeListener)},
	{}
};

$MethodInfo _MotifMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifMenuItemUI::*)()>(&MotifMenuItemUI::init$))},
	{"createChangeListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifMenuItemUI::createUI))},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifMenuItemUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifMenuItemUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifMenuItemUI", "MouseInputHandler", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifMenuItemUI", "ChangeHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuItemUI",
	"javax.swing.plaf.basic.BasicMenuItemUI",
	nullptr,
	_MotifMenuItemUI_FieldInfo_,
	_MotifMenuItemUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifMenuItemUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifMenuItemUI$MouseInputHandler,com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler"
};

$Object* allocate$MotifMenuItemUI($Class* clazz) {
	return $of($alloc(MotifMenuItemUI));
}

void MotifMenuItemUI::init$() {
	$BasicMenuItemUI::init$();
}

$ComponentUI* MotifMenuItemUI::createUI($JComponent* c) {
	$init(MotifMenuItemUI);
	return $new(MotifMenuItemUI);
}

void MotifMenuItemUI::installListeners() {
	$BasicMenuItemUI::installListeners();
	$set(this, changeListener, createChangeListener(this->menuItem));
	$nc(this->menuItem)->addChangeListener(this->changeListener);
}

void MotifMenuItemUI::uninstallListeners() {
	$BasicMenuItemUI::uninstallListeners();
	$nc(this->menuItem)->removeChangeListener(this->changeListener);
}

$ChangeListener* MotifMenuItemUI::createChangeListener($JComponent* c) {
	return $new($MotifMenuItemUI$ChangeHandler, this);
}

$MouseInputListener* MotifMenuItemUI::createMouseInputListener($JComponent* c) {
	return $new($MotifMenuItemUI$MouseInputHandler, this);
}

MotifMenuItemUI::MotifMenuItemUI() {
}

$Class* MotifMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(MotifMenuItemUI, name, initialize, &_MotifMenuItemUI_ClassInfo_, allocate$MotifMenuItemUI);
	return class$;
}

$Class* MotifMenuItemUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com