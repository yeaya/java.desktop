#include <sun/awt/Win32GraphicsDevice$1.h>

#include <java/awt/Window.h>
#include <java/awt/event/WindowListener.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;

namespace sun {
	namespace awt {

$FieldInfo _Win32GraphicsDevice$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/Win32GraphicsDevice;", nullptr, $FINAL | $SYNTHETIC, $field(Win32GraphicsDevice$1, this$0)},
	{"val$w", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(Win32GraphicsDevice$1, val$w)},
	{}
};

$MethodInfo _Win32GraphicsDevice$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/Win32GraphicsDevice;Ljava/awt/Window;)V", "()V", 0, $method(static_cast<void(Win32GraphicsDevice$1::*)($Win32GraphicsDevice*,$Window*)>(&Win32GraphicsDevice$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32GraphicsDevice$1_EnclosingMethodInfo_ = {
	"sun.awt.Win32GraphicsDevice",
	"addFSWindowListener",
	"(Ljava/awt/Window;)V"
};

$InnerClassInfo _Win32GraphicsDevice$1_InnerClassesInfo_[] = {
	{"sun.awt.Win32GraphicsDevice$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32GraphicsDevice$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.Win32GraphicsDevice$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Win32GraphicsDevice$1_FieldInfo_,
	_Win32GraphicsDevice$1_MethodInfo_,
	nullptr,
	&_Win32GraphicsDevice$1_EnclosingMethodInfo_,
	_Win32GraphicsDevice$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.Win32GraphicsDevice"
};

$Object* allocate$Win32GraphicsDevice$1($Class* clazz) {
	return $of($alloc(Win32GraphicsDevice$1));
}

void Win32GraphicsDevice$1::init$($Win32GraphicsDevice* this$0, $Window* val$w) {
	$set(this, this$0, this$0);
	$set(this, val$w, val$w);
}

void Win32GraphicsDevice$1::run() {
	$nc(this->val$w)->addWindowListener(this->this$0->fsWindowListener);
}

Win32GraphicsDevice$1::Win32GraphicsDevice$1() {
}

$Class* Win32GraphicsDevice$1::load$($String* name, bool initialize) {
	$loadClass(Win32GraphicsDevice$1, name, initialize, &_Win32GraphicsDevice$1_ClassInfo_, allocate$Win32GraphicsDevice$1);
	return class$;
}

$Class* Win32GraphicsDevice$1::class$ = nullptr;

	} // awt
} // sun