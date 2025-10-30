#include <sun/awt/windows/WChoicePeer$1.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <sun/awt/windows/WChoicePeer.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WChoicePeer = ::sun::awt::windows::WChoicePeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WChoicePeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WChoicePeer;", nullptr, $FINAL | $SYNTHETIC, $field(WChoicePeer$1, this$0)},
	{}
};

$MethodInfo _WChoicePeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WChoicePeer;)V", nullptr, 0, $method(static_cast<void(WChoicePeer$1::*)($WChoicePeer*)>(&WChoicePeer$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WChoicePeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WChoicePeer",
	"initialize",
	"()V"
};

$InnerClassInfo _WChoicePeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WChoicePeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WChoicePeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WChoicePeer$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_WChoicePeer$1_FieldInfo_,
	_WChoicePeer$1_MethodInfo_,
	nullptr,
	&_WChoicePeer$1_EnclosingMethodInfo_,
	_WChoicePeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WChoicePeer"
};

$Object* allocate$WChoicePeer$1($Class* clazz) {
	return $of($alloc(WChoicePeer$1));
}

void WChoicePeer$1::init$($WChoicePeer* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void WChoicePeer$1::windowIconified($WindowEvent* e) {
	this->this$0->closeList();
}

void WChoicePeer$1::windowClosing($WindowEvent* e) {
	this->this$0->closeList();
}

WChoicePeer$1::WChoicePeer$1() {
}

$Class* WChoicePeer$1::load$($String* name, bool initialize) {
	$loadClass(WChoicePeer$1, name, initialize, &_WChoicePeer$1_ClassInfo_, allocate$WChoicePeer$1);
	return class$;
}

$Class* WChoicePeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun