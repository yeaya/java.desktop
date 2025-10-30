#include <javax/swing/plaf/basic/BasicComboBoxUI$ItemHandler.h>

#include <java/awt/event/ItemEvent.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI$ItemHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$ItemHandler, this$0)},
	{}
};

$MethodInfo _BasicComboBoxUI$ItemHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxUI$ItemHandler::*)($BasicComboBoxUI*)>(&BasicComboBoxUI$ItemHandler::init$))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxUI$ItemHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$ItemHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "ItemHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicComboBoxUI$ItemHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$ItemHandler",
	"java.lang.Object",
	"java.awt.event.ItemListener",
	_BasicComboBoxUI$ItemHandler_FieldInfo_,
	_BasicComboBoxUI$ItemHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$ItemHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$ItemHandler($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$ItemHandler));
}

void BasicComboBoxUI$ItemHandler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$ItemHandler::itemStateChanged($ItemEvent* e) {
}

BasicComboBoxUI$ItemHandler::BasicComboBoxUI$ItemHandler() {
}

$Class* BasicComboBoxUI$ItemHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$ItemHandler, name, initialize, &_BasicComboBoxUI$ItemHandler_ClassInfo_, allocate$BasicComboBoxUI$ItemHandler);
	return class$;
}

$Class* BasicComboBoxUI$ItemHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax