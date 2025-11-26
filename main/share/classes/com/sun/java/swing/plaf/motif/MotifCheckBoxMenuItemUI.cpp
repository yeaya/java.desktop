#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI.h>

#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI$ChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI$MouseInputHandler.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicCheckBoxMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

using $MotifCheckBoxMenuItemUI$ChangeHandler = ::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI$ChangeHandler;
using $MotifCheckBoxMenuItemUI$MouseInputHandler = ::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI$MouseInputHandler;
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
using $BasicCheckBoxMenuItemUI = ::javax::swing::plaf::basic::BasicCheckBoxMenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifCheckBoxMenuItemUI_FieldInfo_[] = {
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(MotifCheckBoxMenuItemUI, changeListener)},
	{}
};

$MethodInfo _MotifCheckBoxMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifCheckBoxMenuItemUI::*)()>(&MotifCheckBoxMenuItemUI::init$))},
	{"createChangeListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifCheckBoxMenuItemUI::createUI))},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifCheckBoxMenuItemUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI", "MouseInputHandler", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI", "ChangeHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifCheckBoxMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI",
	"javax.swing.plaf.basic.BasicCheckBoxMenuItemUI",
	nullptr,
	_MotifCheckBoxMenuItemUI_FieldInfo_,
	_MotifCheckBoxMenuItemUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifCheckBoxMenuItemUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$MouseInputHandler,com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler"
};

$Object* allocate$MotifCheckBoxMenuItemUI($Class* clazz) {
	return $of($alloc(MotifCheckBoxMenuItemUI));
}

void MotifCheckBoxMenuItemUI::init$() {
	$BasicCheckBoxMenuItemUI::init$();
}

$ComponentUI* MotifCheckBoxMenuItemUI::createUI($JComponent* b) {
	$init(MotifCheckBoxMenuItemUI);
	return $new(MotifCheckBoxMenuItemUI);
}

void MotifCheckBoxMenuItemUI::installListeners() {
	$BasicCheckBoxMenuItemUI::installListeners();
	$set(this, changeListener, createChangeListener(this->menuItem));
	$nc(this->menuItem)->addChangeListener(this->changeListener);
}

void MotifCheckBoxMenuItemUI::uninstallListeners() {
	$BasicCheckBoxMenuItemUI::uninstallListeners();
	$nc(this->menuItem)->removeChangeListener(this->changeListener);
}

$ChangeListener* MotifCheckBoxMenuItemUI::createChangeListener($JComponent* c) {
	return $new($MotifCheckBoxMenuItemUI$ChangeHandler, this);
}

$MouseInputListener* MotifCheckBoxMenuItemUI::createMouseInputListener($JComponent* c) {
	return $new($MotifCheckBoxMenuItemUI$MouseInputHandler, this);
}

MotifCheckBoxMenuItemUI::MotifCheckBoxMenuItemUI() {
}

$Class* MotifCheckBoxMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(MotifCheckBoxMenuItemUI, name, initialize, &_MotifCheckBoxMenuItemUI_ClassInfo_, allocate$MotifCheckBoxMenuItemUI);
	return class$;
}

$Class* MotifCheckBoxMenuItemUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com