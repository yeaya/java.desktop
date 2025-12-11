#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper$1.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPopupMenuUI$MenuKeyboardHelper = ::javax::swing::plaf::basic::BasicPopupMenuUI$MenuKeyboardHelper;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI$MenuKeyboardHelper$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MenuKeyboardHelper$1, this$0)},
	{}
};

$MethodInfo _BasicPopupMenuUI$MenuKeyboardHelper$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper;)V", nullptr, 0, $method(static_cast<void(BasicPopupMenuUI$MenuKeyboardHelper$1::*)($BasicPopupMenuUI$MenuKeyboardHelper*)>(&BasicPopupMenuUI$MenuKeyboardHelper$1::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicPopupMenuUI$MenuKeyboardHelper$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper",
	nullptr,
	nullptr
};

$InnerClassInfo _BasicPopupMenuUI$MenuKeyboardHelper$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper", "javax.swing.plaf.basic.BasicPopupMenuUI", "MenuKeyboardHelper", $STATIC},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicPopupMenuUI$MenuKeyboardHelper$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper$1",
	"java.awt.event.FocusAdapter",
	nullptr,
	_BasicPopupMenuUI$MenuKeyboardHelper$1_FieldInfo_,
	_BasicPopupMenuUI$MenuKeyboardHelper$1_MethodInfo_,
	nullptr,
	&_BasicPopupMenuUI$MenuKeyboardHelper$1_EnclosingMethodInfo_,
	_BasicPopupMenuUI$MenuKeyboardHelper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI"
};

$Object* allocate$BasicPopupMenuUI$MenuKeyboardHelper$1($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI$MenuKeyboardHelper$1));
}

void BasicPopupMenuUI$MenuKeyboardHelper$1::init$($BasicPopupMenuUI$MenuKeyboardHelper* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void BasicPopupMenuUI$MenuKeyboardHelper$1::focusGained($FocusEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($Component, opposite, $nc(ev)->getOppositeComponent());
	if (opposite != nullptr) {
		$set(this->this$0, lastFocused, opposite);
	}
	$nc($(ev->getComponent()))->removeFocusListener(this);
}

BasicPopupMenuUI$MenuKeyboardHelper$1::BasicPopupMenuUI$MenuKeyboardHelper$1() {
}

$Class* BasicPopupMenuUI$MenuKeyboardHelper$1::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI$MenuKeyboardHelper$1, name, initialize, &_BasicPopupMenuUI$MenuKeyboardHelper$1_ClassInfo_, allocate$BasicPopupMenuUI$MenuKeyboardHelper$1);
	return class$;
}

$Class* BasicPopupMenuUI$MenuKeyboardHelper$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax