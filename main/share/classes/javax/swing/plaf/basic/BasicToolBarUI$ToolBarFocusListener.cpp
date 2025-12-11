#include <javax/swing/plaf/basic/BasicToolBarUI$ToolBarFocusListener.h>

#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$Handler = ::javax::swing::plaf::basic::BasicToolBarUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$ToolBarFocusListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$ToolBarFocusListener, this$0)},
	{}
};

$MethodInfo _BasicToolBarUI$ToolBarFocusListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicToolBarUI$ToolBarFocusListener::*)($BasicToolBarUI*)>(&BasicToolBarUI$ToolBarFocusListener::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolBarUI$ToolBarFocusListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$ToolBarFocusListener", "javax.swing.plaf.basic.BasicToolBarUI", "ToolBarFocusListener", $PROTECTED},
	{}
};

$ClassInfo _BasicToolBarUI$ToolBarFocusListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$ToolBarFocusListener",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_BasicToolBarUI$ToolBarFocusListener_FieldInfo_,
	_BasicToolBarUI$ToolBarFocusListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI$ToolBarFocusListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$ToolBarFocusListener($Class* clazz) {
	return $of($alloc(BasicToolBarUI$ToolBarFocusListener));
}

void BasicToolBarUI$ToolBarFocusListener::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicToolBarUI$ToolBarFocusListener::focusGained($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusGained(e);
}

void BasicToolBarUI$ToolBarFocusListener::focusLost($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusLost(e);
}

BasicToolBarUI$ToolBarFocusListener::BasicToolBarUI$ToolBarFocusListener() {
}

$Class* BasicToolBarUI$ToolBarFocusListener::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$ToolBarFocusListener, name, initialize, &_BasicToolBarUI$ToolBarFocusListener_ClassInfo_, allocate$BasicToolBarUI$ToolBarFocusListener);
	return class$;
}

$Class* BasicToolBarUI$ToolBarFocusListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax