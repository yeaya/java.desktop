#include <javax/swing/ToolTipManager$MoveBeforeEnterListener.h>

#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <javax/swing/ToolTipManager.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseMotionAdapter = ::java::awt::event::MouseMotionAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToolTipManager = ::javax::swing::ToolTipManager;

namespace javax {
	namespace swing {

$FieldInfo _ToolTipManager$MoveBeforeEnterListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$MoveBeforeEnterListener, this$0)},
	{}
};

$MethodInfo _ToolTipManager$MoveBeforeEnterListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolTipManager$MoveBeforeEnterListener::*)($ToolTipManager*)>(&ToolTipManager$MoveBeforeEnterListener::init$))},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ToolTipManager$MoveBeforeEnterListener_InnerClassesInfo_[] = {
	{"javax.swing.ToolTipManager$MoveBeforeEnterListener", "javax.swing.ToolTipManager", "MoveBeforeEnterListener", $PRIVATE},
	{}
};

$ClassInfo _ToolTipManager$MoveBeforeEnterListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ToolTipManager$MoveBeforeEnterListener",
	"java.awt.event.MouseMotionAdapter",
	nullptr,
	_ToolTipManager$MoveBeforeEnterListener_FieldInfo_,
	_ToolTipManager$MoveBeforeEnterListener_MethodInfo_,
	nullptr,
	nullptr,
	_ToolTipManager$MoveBeforeEnterListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ToolTipManager"
};

$Object* allocate$ToolTipManager$MoveBeforeEnterListener($Class* clazz) {
	return $of($alloc(ToolTipManager$MoveBeforeEnterListener));
}

void ToolTipManager$MoveBeforeEnterListener::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
	$MouseMotionAdapter::init$();
}

void ToolTipManager$MoveBeforeEnterListener::mouseMoved($MouseEvent* e) {
	this->this$0->initiateToolTip(e);
}

ToolTipManager$MoveBeforeEnterListener::ToolTipManager$MoveBeforeEnterListener() {
}

$Class* ToolTipManager$MoveBeforeEnterListener::load$($String* name, bool initialize) {
	$loadClass(ToolTipManager$MoveBeforeEnterListener, name, initialize, &_ToolTipManager$MoveBeforeEnterListener_ClassInfo_, allocate$ToolTipManager$MoveBeforeEnterListener);
	return class$;
}

$Class* ToolTipManager$MoveBeforeEnterListener::class$ = nullptr;

	} // swing
} // javax