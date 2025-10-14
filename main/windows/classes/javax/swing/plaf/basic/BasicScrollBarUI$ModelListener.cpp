#include <javax/swing/plaf/basic/BasicScrollBarUI$ModelListener.h>

#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollBarUI$ModelListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollBarUI$ModelListener, this$0)},
	{}
};

$MethodInfo _BasicScrollBarUI$ModelListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicScrollBarUI$ModelListener::*)($BasicScrollBarUI*)>(&BasicScrollBarUI$ModelListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollBarUI$ModelListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollBarUI$ModelListener", "javax.swing.plaf.basic.BasicScrollBarUI", "ModelListener", $PROTECTED},
	{}
};

$ClassInfo _BasicScrollBarUI$ModelListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollBarUI$ModelListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_BasicScrollBarUI$ModelListener_FieldInfo_,
	_BasicScrollBarUI$ModelListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollBarUI$ModelListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollBarUI"
};

$Object* allocate$BasicScrollBarUI$ModelListener($Class* clazz) {
	return $of($alloc(BasicScrollBarUI$ModelListener));
}

void BasicScrollBarUI$ModelListener::init$($BasicScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollBarUI$ModelListener::stateChanged($ChangeEvent* e) {
	if (!this->this$0->useCachedValue) {
		this->this$0->scrollBarValue = $nc(this->this$0->scrollbar)->getValue();
	}
	this->this$0->layoutContainer(this->this$0->scrollbar);
	this->this$0->useCachedValue = false;
}

BasicScrollBarUI$ModelListener::BasicScrollBarUI$ModelListener() {
}

$Class* BasicScrollBarUI$ModelListener::load$($String* name, bool initialize) {
	$loadClass(BasicScrollBarUI$ModelListener, name, initialize, &_BasicScrollBarUI$ModelListener_ClassInfo_, allocate$BasicScrollBarUI$ModelListener);
	return class$;
}

$Class* BasicScrollBarUI$ModelListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax