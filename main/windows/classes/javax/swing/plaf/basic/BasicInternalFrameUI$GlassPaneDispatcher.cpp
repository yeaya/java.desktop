#include <javax/swing/plaf/basic/BasicInternalFrameUI$GlassPaneDispatcher.h>

#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $BasicInternalFrameUI$Handler = ::javax::swing::plaf::basic::BasicInternalFrameUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameUI$GlassPaneDispatcher_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$GlassPaneDispatcher, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameUI$GlassPaneDispatcher_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicInternalFrameUI$GlassPaneDispatcher::*)($BasicInternalFrameUI*)>(&BasicInternalFrameUI$GlassPaneDispatcher::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameUI$GlassPaneDispatcher_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameUI$GlassPaneDispatcher", "javax.swing.plaf.basic.BasicInternalFrameUI", "GlassPaneDispatcher", $PROTECTED},
	{}
};

$ClassInfo _BasicInternalFrameUI$GlassPaneDispatcher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameUI$GlassPaneDispatcher",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_BasicInternalFrameUI$GlassPaneDispatcher_FieldInfo_,
	_BasicInternalFrameUI$GlassPaneDispatcher_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameUI$GlassPaneDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameUI"
};

$Object* allocate$BasicInternalFrameUI$GlassPaneDispatcher($Class* clazz) {
	return $of($alloc(BasicInternalFrameUI$GlassPaneDispatcher));
}

void BasicInternalFrameUI$GlassPaneDispatcher::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mousePressed($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mousePressed(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseEntered($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseEntered(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseMoved($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseMoved(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseExited($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseExited(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseClicked($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseClicked(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseReleased($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseReleased(e);
}

void BasicInternalFrameUI$GlassPaneDispatcher::mouseDragged($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseDragged(e);
}

BasicInternalFrameUI$GlassPaneDispatcher::BasicInternalFrameUI$GlassPaneDispatcher() {
}

$Class* BasicInternalFrameUI$GlassPaneDispatcher::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameUI$GlassPaneDispatcher, name, initialize, &_BasicInternalFrameUI$GlassPaneDispatcher_ClassInfo_, allocate$BasicInternalFrameUI$GlassPaneDispatcher);
	return class$;
}

$Class* BasicInternalFrameUI$GlassPaneDispatcher::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax