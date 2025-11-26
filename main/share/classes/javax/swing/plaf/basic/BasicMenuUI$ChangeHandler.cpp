#include <javax/swing/plaf/basic/BasicMenuUI$ChangeHandler.h>

#include <java/awt/Component.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuUI$ChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuUI$ChangeHandler, this$0)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PUBLIC, $field(BasicMenuUI$ChangeHandler, menu)},
	{"ui", "Ljavax/swing/plaf/basic/BasicMenuUI;", nullptr, $PUBLIC, $field(BasicMenuUI$ChangeHandler, ui)},
	{"isSelected", "Z", nullptr, $PUBLIC, $field(BasicMenuUI$ChangeHandler, isSelected)},
	{"wasFocused", "Ljava/awt/Component;", nullptr, $PUBLIC, $field(BasicMenuUI$ChangeHandler, wasFocused)},
	{}
};

$MethodInfo _BasicMenuUI$ChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuUI;Ljavax/swing/JMenu;Ljavax/swing/plaf/basic/BasicMenuUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicMenuUI$ChangeHandler::*)($BasicMenuUI*,$JMenu*,$BasicMenuUI*)>(&BasicMenuUI$ChangeHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuUI$ChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler", "javax.swing.plaf.basic.BasicMenuUI", "ChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicMenuUI$ChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_BasicMenuUI$ChangeHandler_FieldInfo_,
	_BasicMenuUI$ChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuUI$ChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuUI"
};

$Object* allocate$BasicMenuUI$ChangeHandler($Class* clazz) {
	return $of($alloc(BasicMenuUI$ChangeHandler));
}

void BasicMenuUI$ChangeHandler::init$($BasicMenuUI* this$0, $JMenu* m, $BasicMenuUI* ui) {
	$set(this, this$0, this$0);
	this->isSelected = false;
	$set(this, menu, m);
	$set(this, ui, ui);
}

void BasicMenuUI$ChangeHandler::stateChanged($ChangeEvent* e) {
}

BasicMenuUI$ChangeHandler::BasicMenuUI$ChangeHandler() {
}

$Class* BasicMenuUI$ChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicMenuUI$ChangeHandler, name, initialize, &_BasicMenuUI$ChangeHandler_ClassInfo_, allocate$BasicMenuUI$ChangeHandler);
	return class$;
}

$Class* BasicMenuUI$ChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax