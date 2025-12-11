#include <GUIUndFrame$2.h>

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

$FieldInfo _GUIUndFrame$2_FieldInfo_[] = {
	{"this$0", "LGUIUndFrame;", nullptr, $FINAL | $SYNTHETIC, $field(GUIUndFrame$2, this$0)},
	{}
};

$MethodInfo _GUIUndFrame$2_MethodInfo_[] = {
	{"<init>", "(LGUIUndFrame;)V", nullptr, 0, $method(static_cast<void(GUIUndFrame$2::*)($GUIUndFrame*)>(&GUIUndFrame$2::init$))},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GUIUndFrame$2_EnclosingMethodInfo_ = {
	"GUIUndFrame",
	"<init>",
	"()V"
};

$InnerClassInfo _GUIUndFrame$2_InnerClassesInfo_[] = {
	{"GUIUndFrame$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GUIUndFrame$2_ClassInfo_ = {
	$ACC_SUPER,
	"GUIUndFrame$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_GUIUndFrame$2_FieldInfo_,
	_GUIUndFrame$2_MethodInfo_,
	nullptr,
	&_GUIUndFrame$2_EnclosingMethodInfo_,
	_GUIUndFrame$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GUIUndFrame"
};

$Object* allocate$GUIUndFrame$2($Class* clazz) {
	return $of($alloc(GUIUndFrame$2));
}

void GUIUndFrame$2::init$($GUIUndFrame* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void GUIUndFrame$2::windowActivated($WindowEvent* e) {
	$set(this->this$0, comp, nullptr);
	$set(this->this$0, comp, $nc(e)->getComponent());
	if ($equals(e->getComponent(), this->this$0->jframe3)) {
		this->this$0->win_act = true;
	}
}

void GUIUndFrame$2::windowIconified($WindowEvent* e) {
	this->this$0->win_ico = true;
}

void GUIUndFrame$2::windowDeiconified($WindowEvent* e) {
	this->this$0->win_deico = true;
}

void GUIUndFrame$2::windowDeactivated($WindowEvent* e) {
	this->this$0->win_deact = true;
}

void GUIUndFrame$2::windowClosed($WindowEvent* e) {
	this->this$0->win_close = true;
}

GUIUndFrame$2::GUIUndFrame$2() {
}

$Class* GUIUndFrame$2::load$($String* name, bool initialize) {
	$loadClass(GUIUndFrame$2, name, initialize, &_GUIUndFrame$2_ClassInfo_, allocate$GUIUndFrame$2);
	return class$;
}

$Class* GUIUndFrame$2::class$ = nullptr;