#include <com/apple/laf/AquaScrollBarUI$ModelListener.h>

#include <com/apple/laf/AquaScrollBarUI.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $AquaScrollBarUI = ::com::apple::laf::AquaScrollBarUI;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaScrollBarUI$ModelListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaScrollBarUI$ModelListener, this$0)},
	{}
};

$MethodInfo _AquaScrollBarUI$ModelListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaScrollBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaScrollBarUI$ModelListener::*)($AquaScrollBarUI*)>(&AquaScrollBarUI$ModelListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaScrollBarUI$ModelListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollBarUI$ModelListener", "com.apple.laf.AquaScrollBarUI", "ModelListener", $PROTECTED},
	{}
};

$ClassInfo _AquaScrollBarUI$ModelListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaScrollBarUI$ModelListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_AquaScrollBarUI$ModelListener_FieldInfo_,
	_AquaScrollBarUI$ModelListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaScrollBarUI$ModelListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollBarUI"
};

$Object* allocate$AquaScrollBarUI$ModelListener($Class* clazz) {
	return $of($alloc(AquaScrollBarUI$ModelListener));
}

void AquaScrollBarUI$ModelListener::init$($AquaScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaScrollBarUI$ModelListener::stateChanged($ChangeEvent* e) {
	this->this$0->layoutContainer(this->this$0->fScrollBar);
}

AquaScrollBarUI$ModelListener::AquaScrollBarUI$ModelListener() {
}

$Class* AquaScrollBarUI$ModelListener::load$($String* name, bool initialize) {
	$loadClass(AquaScrollBarUI$ModelListener, name, initialize, &_AquaScrollBarUI$ModelListener_ClassInfo_, allocate$AquaScrollBarUI$ModelListener);
	return class$;
}

$Class* AquaScrollBarUI$ModelListener::class$ = nullptr;

		} // laf
	} // apple
} // com