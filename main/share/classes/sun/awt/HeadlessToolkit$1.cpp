#include <sun/awt/HeadlessToolkit$1.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _HeadlessToolkit$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessToolkit$1::*)()>(&HeadlessToolkit$1::init$))},
	{"clearGlobalFocusOwner", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{"getCurrentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getCurrentFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"setCurrentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setCurrentFocusedWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadlessToolkit$1_EnclosingMethodInfo_ = {
	"sun.awt.HeadlessToolkit",
	nullptr,
	nullptr
};

$InnerClassInfo _HeadlessToolkit$1_InnerClassesInfo_[] = {
	{"sun.awt.HeadlessToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessToolkit$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.HeadlessToolkit$1",
	"java.lang.Object",
	"java.awt.peer.KeyboardFocusManagerPeer",
	nullptr,
	_HeadlessToolkit$1_MethodInfo_,
	nullptr,
	&_HeadlessToolkit$1_EnclosingMethodInfo_,
	_HeadlessToolkit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.HeadlessToolkit"
};

$Object* allocate$HeadlessToolkit$1($Class* clazz) {
	return $of($alloc(HeadlessToolkit$1));
}

void HeadlessToolkit$1::init$() {
}

void HeadlessToolkit$1::setCurrentFocusedWindow($Window* win) {
}

$Window* HeadlessToolkit$1::getCurrentFocusedWindow() {
	return nullptr;
}

void HeadlessToolkit$1::setCurrentFocusOwner($Component* comp) {
}

$Component* HeadlessToolkit$1::getCurrentFocusOwner() {
	return nullptr;
}

void HeadlessToolkit$1::clearGlobalFocusOwner($Window* activeWindow) {
}

HeadlessToolkit$1::HeadlessToolkit$1() {
}

$Class* HeadlessToolkit$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessToolkit$1, name, initialize, &_HeadlessToolkit$1_ClassInfo_, allocate$HeadlessToolkit$1);
	return class$;
}

$Class* HeadlessToolkit$1::class$ = nullptr;

	} // awt
} // sun