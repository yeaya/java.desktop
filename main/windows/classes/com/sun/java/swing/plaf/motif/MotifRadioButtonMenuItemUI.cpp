#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI.h>

#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI$ChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI$MouseInputHandler.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicRadioButtonMenuItemUI.h>
#include <jcpp.h>

using $MotifRadioButtonMenuItemUI$ChangeHandler = ::com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI$ChangeHandler;
using $MotifRadioButtonMenuItemUI$MouseInputHandler = ::com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI$MouseInputHandler;
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
using $BasicRadioButtonMenuItemUI = ::javax::swing::plaf::basic::BasicRadioButtonMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifRadioButtonMenuItemUI_FieldInfo_[] = {
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(MotifRadioButtonMenuItemUI, changeListener)},
	{}
};

$MethodInfo _MotifRadioButtonMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifRadioButtonMenuItemUI::*)()>(&MotifRadioButtonMenuItemUI::init$))},
	{"createChangeListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifRadioButtonMenuItemUI::createUI))},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifRadioButtonMenuItemUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI", "MouseInputHandler", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI", "ChangeHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifRadioButtonMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI",
	"javax.swing.plaf.basic.BasicRadioButtonMenuItemUI",
	nullptr,
	_MotifRadioButtonMenuItemUI_FieldInfo_,
	_MotifRadioButtonMenuItemUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifRadioButtonMenuItemUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$MouseInputHandler,com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$ChangeHandler"
};

$Object* allocate$MotifRadioButtonMenuItemUI($Class* clazz) {
	return $of($alloc(MotifRadioButtonMenuItemUI));
}

void MotifRadioButtonMenuItemUI::init$() {
	$BasicRadioButtonMenuItemUI::init$();
}

$ComponentUI* MotifRadioButtonMenuItemUI::createUI($JComponent* b) {
	$init(MotifRadioButtonMenuItemUI);
	return $new(MotifRadioButtonMenuItemUI);
}

void MotifRadioButtonMenuItemUI::installListeners() {
	$BasicRadioButtonMenuItemUI::installListeners();
	$set(this, changeListener, createChangeListener(this->menuItem));
	$nc(this->menuItem)->addChangeListener(this->changeListener);
}

void MotifRadioButtonMenuItemUI::uninstallListeners() {
	$BasicRadioButtonMenuItemUI::uninstallListeners();
	$nc(this->menuItem)->removeChangeListener(this->changeListener);
}

$ChangeListener* MotifRadioButtonMenuItemUI::createChangeListener($JComponent* c) {
	return $new($MotifRadioButtonMenuItemUI$ChangeHandler, this);
}

$MouseInputListener* MotifRadioButtonMenuItemUI::createMouseInputListener($JComponent* c) {
	return $new($MotifRadioButtonMenuItemUI$MouseInputHandler, this);
}

MotifRadioButtonMenuItemUI::MotifRadioButtonMenuItemUI() {
}

$Class* MotifRadioButtonMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(MotifRadioButtonMenuItemUI, name, initialize, &_MotifRadioButtonMenuItemUI_ClassInfo_, allocate$MotifRadioButtonMenuItemUI);
	return class$;
}

$Class* MotifRadioButtonMenuItemUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com