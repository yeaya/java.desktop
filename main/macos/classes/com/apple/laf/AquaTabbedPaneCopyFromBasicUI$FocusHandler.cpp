#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$FocusHandler.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$Handler = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$Handler;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$FocusHandler::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$FocusHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$FocusHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$FocusHandler",
	"java.awt.event.FocusAdapter",
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$FocusHandler_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$FocusHandler($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$FocusHandler));
}

void AquaTabbedPaneCopyFromBasicUI$FocusHandler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void AquaTabbedPaneCopyFromBasicUI$FocusHandler::focusGained($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusGained(e);
}

void AquaTabbedPaneCopyFromBasicUI$FocusHandler::focusLost($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusLost(e);
}

AquaTabbedPaneCopyFromBasicUI$FocusHandler::AquaTabbedPaneCopyFromBasicUI$FocusHandler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$FocusHandler, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$FocusHandler_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$FocusHandler);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com