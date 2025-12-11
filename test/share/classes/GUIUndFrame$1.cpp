#include <GUIUndFrame$1.h>

#include <GUIUndFrame.h>
#include <java/awt/Component.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $GUIUndFrame = ::GUIUndFrame;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GUIUndFrame$1_FieldInfo_[] = {
	{"this$0", "LGUIUndFrame;", nullptr, $FINAL | $SYNTHETIC, $field(GUIUndFrame$1, this$0)},
	{}
};

$MethodInfo _GUIUndFrame$1_MethodInfo_[] = {
	{"<init>", "(LGUIUndFrame;)V", nullptr, 0, $method(static_cast<void(GUIUndFrame$1::*)($GUIUndFrame*)>(&GUIUndFrame$1::init$))},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GUIUndFrame$1_EnclosingMethodInfo_ = {
	"GUIUndFrame",
	"<init>",
	"()V"
};

$InnerClassInfo _GUIUndFrame$1_InnerClassesInfo_[] = {
	{"GUIUndFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GUIUndFrame$1_ClassInfo_ = {
	$ACC_SUPER,
	"GUIUndFrame$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_GUIUndFrame$1_FieldInfo_,
	_GUIUndFrame$1_MethodInfo_,
	nullptr,
	&_GUIUndFrame$1_EnclosingMethodInfo_,
	_GUIUndFrame$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GUIUndFrame"
};

$Object* allocate$GUIUndFrame$1($Class* clazz) {
	return $of($alloc(GUIUndFrame$1));
}

void GUIUndFrame$1::init$($GUIUndFrame* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void GUIUndFrame$1::windowActivated($WindowEvent* e) {
	$set(this->this$0, comp, nullptr);
	$set(this->this$0, comp, $nc(e)->getComponent());
	if ($equals(e->getComponent(), this->this$0->jframe1)) {
		this->this$0->win_act = true;
	}
}

void GUIUndFrame$1::windowDeactivated($WindowEvent* e) {
	this->this$0->win_deact = true;
}

GUIUndFrame$1::GUIUndFrame$1() {
}

$Class* GUIUndFrame$1::load$($String* name, bool initialize) {
	$loadClass(GUIUndFrame$1, name, initialize, &_GUIUndFrame$1_ClassInfo_, allocate$GUIUndFrame$1);
	return class$;
}

$Class* GUIUndFrame$1::class$ = nullptr;