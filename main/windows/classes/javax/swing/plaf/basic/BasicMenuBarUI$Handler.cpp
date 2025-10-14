#include <javax/swing/plaf/basic/BasicMenuBarUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/event/ContainerEvent.h>
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
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $SingleSelectionModel = ::javax::swing::SingleSelectionModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuBarUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicMenuBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuBarUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicMenuBarUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuBarUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuBarUI$Handler::*)($BasicMenuBarUI*)>(&BasicMenuBarUI$Handler::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuBarUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuBarUI$Handler", "javax.swing.plaf.basic.BasicMenuBarUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicMenuBarUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuBarUI$Handler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.awt.event.ContainerListener",
	_BasicMenuBarUI$Handler_FieldInfo_,
	_BasicMenuBarUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuBarUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuBarUI"
};

$Object* allocate$BasicMenuBarUI$Handler($Class* clazz) {
	return $of($alloc(BasicMenuBarUI$Handler));
}

int32_t BasicMenuBarUI$Handler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicMenuBarUI$Handler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicMenuBarUI$Handler::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicMenuBarUI$Handler::toString() {
	 return this->$ChangeListener::toString();
}

void BasicMenuBarUI$Handler::finalize() {
	this->$ChangeListener::finalize();
}

void BasicMenuBarUI$Handler::init$($BasicMenuBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicMenuBarUI$Handler::stateChanged($ChangeEvent* e) {
	int32_t i = 0;
	int32_t c = 0;
	for (i = 0, c = $nc(this->this$0->menuBar)->getMenuCount(); i < c; ++i) {
		$var($JMenu, menu, $nc(this->this$0->menuBar)->getMenu(i));
		if (menu != nullptr && menu->isSelected()) {
			$nc($($nc(this->this$0->menuBar)->getSelectionModel()))->setSelectedIndex(i);
			break;
		}
	}
}

void BasicMenuBarUI$Handler::componentAdded($ContainerEvent* e) {
	$var($Component, c, $nc(e)->getChild());
	if ($instanceOf($JMenu, c)) {
		$nc($($nc(($cast($JMenu, c)))->getModel()))->addChangeListener(this->this$0->changeListener);
	}
}

void BasicMenuBarUI$Handler::componentRemoved($ContainerEvent* e) {
	$var($Component, c, $nc(e)->getChild());
	if ($instanceOf($JMenu, c)) {
		$nc($($nc(($cast($JMenu, c)))->getModel()))->removeChangeListener(this->this$0->changeListener);
	}
}

BasicMenuBarUI$Handler::BasicMenuBarUI$Handler() {
}

$Class* BasicMenuBarUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicMenuBarUI$Handler, name, initialize, &_BasicMenuBarUI$Handler_ClassInfo_, allocate$BasicMenuBarUI$Handler);
	return class$;
}

$Class* BasicMenuBarUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax