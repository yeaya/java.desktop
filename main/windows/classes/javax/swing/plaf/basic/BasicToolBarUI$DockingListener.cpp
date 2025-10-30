#include <javax/swing/plaf/basic/BasicToolBarUI$DockingListener.h>

#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$Handler = ::javax::swing::plaf::basic::BasicToolBarUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$DockingListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$DockingListener, this$0)},
	{"toolBar", "Ljavax/swing/JToolBar;", nullptr, $PROTECTED, $field(BasicToolBarUI$DockingListener, toolBar)},
	{"isDragging", "Z", nullptr, $PROTECTED, $field(BasicToolBarUI$DockingListener, isDragging)},
	{"origin", "Ljava/awt/Point;", nullptr, $PROTECTED, $field(BasicToolBarUI$DockingListener, origin)},
	{}
};

$MethodInfo _BasicToolBarUI$DockingListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljavax/swing/JToolBar;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicToolBarUI$DockingListener::*)($BasicToolBarUI*,$JToolBar*)>(&BasicToolBarUI$DockingListener::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolBarUI$DockingListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$DockingListener", "javax.swing.plaf.basic.BasicToolBarUI", "DockingListener", $PUBLIC},
	{}
};

$ClassInfo _BasicToolBarUI$DockingListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$DockingListener",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_BasicToolBarUI$DockingListener_FieldInfo_,
	_BasicToolBarUI$DockingListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI$DockingListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$DockingListener($Class* clazz) {
	return $of($alloc(BasicToolBarUI$DockingListener));
}

void BasicToolBarUI$DockingListener::init$($BasicToolBarUI* this$0, $JToolBar* t) {
	$set(this, this$0, this$0);
	this->isDragging = false;
	$set(this, origin, nullptr);
	$set(this, toolBar, t);
	$set($nc($(this$0->getHandler())), tb, t);
}

void BasicToolBarUI$DockingListener::mouseClicked($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseClicked(e);
}

void BasicToolBarUI$DockingListener::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$set($nc($(this->this$0->getHandler())), tb, this->toolBar);
	$nc($(this->this$0->getHandler()))->mousePressed(e);
	this->isDragging = $nc($(this->this$0->getHandler()))->isDragging;
}

void BasicToolBarUI$DockingListener::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$set($nc($(this->this$0->getHandler())), tb, this->toolBar);
	$nc($(this->this$0->getHandler()))->isDragging = this->isDragging;
	$set($nc($(this->this$0->getHandler())), origin, this->origin);
	$nc($(this->this$0->getHandler()))->mouseReleased(e);
	this->isDragging = $nc($(this->this$0->getHandler()))->isDragging;
	$set(this, origin, $nc($(this->this$0->getHandler()))->origin);
}

void BasicToolBarUI$DockingListener::mouseEntered($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseEntered(e);
}

void BasicToolBarUI$DockingListener::mouseExited($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseExited(e);
}

void BasicToolBarUI$DockingListener::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$set($nc($(this->this$0->getHandler())), tb, this->toolBar);
	$set($nc($(this->this$0->getHandler())), origin, this->origin);
	$nc($(this->this$0->getHandler()))->mouseDragged(e);
	this->isDragging = $nc($(this->this$0->getHandler()))->isDragging;
	$set(this, origin, $nc($(this->this$0->getHandler()))->origin);
}

void BasicToolBarUI$DockingListener::mouseMoved($MouseEvent* e) {
	$nc($(this->this$0->getHandler()))->mouseMoved(e);
}

BasicToolBarUI$DockingListener::BasicToolBarUI$DockingListener() {
}

$Class* BasicToolBarUI$DockingListener::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$DockingListener, name, initialize, &_BasicToolBarUI$DockingListener_ClassInfo_, allocate$BasicToolBarUI$DockingListener);
	return class$;
}

$Class* BasicToolBarUI$DockingListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax