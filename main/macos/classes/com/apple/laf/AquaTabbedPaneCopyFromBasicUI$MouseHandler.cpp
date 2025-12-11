#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$MouseHandler.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$Handler = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$Handler;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$MouseHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$MouseHandler, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$MouseHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$MouseHandler::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$MouseHandler::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$MouseHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$MouseHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "MouseHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$MouseHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$MouseHandler",
	"java.awt.event.MouseAdapter",
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$MouseHandler_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$MouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$MouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$MouseHandler($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$MouseHandler));
}

void AquaTabbedPaneCopyFromBasicUI$MouseHandler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void AquaTabbedPaneCopyFromBasicUI$MouseHandler::mousePressed($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mousePressed(e);
}

AquaTabbedPaneCopyFromBasicUI$MouseHandler::AquaTabbedPaneCopyFromBasicUI$MouseHandler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$MouseHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$MouseHandler, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$MouseHandler_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$MouseHandler);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$MouseHandler::class$ = nullptr;

		} // laf
	} // apple
} // com