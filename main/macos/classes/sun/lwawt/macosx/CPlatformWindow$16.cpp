#include <sun/lwawt/macosx/CPlatformWindow$16.h>

#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPlatformWindow$16_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $FINAL | $SYNTHETIC, $field(CPlatformWindow$16, this$0)},
	{}
};

$MethodInfo _CPlatformWindow$16_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, 0, $method(static_cast<void(CPlatformWindow$16::*)($CPlatformWindow*)>(&CPlatformWindow$16::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$16_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	"flushBuffers",
	"()V"
};

$InnerClassInfo _CPlatformWindow$16_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$16", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPlatformWindow$16_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$16",
	"java.lang.Object",
	"java.lang.Runnable",
	_CPlatformWindow$16_FieldInfo_,
	_CPlatformWindow$16_MethodInfo_,
	nullptr,
	&_CPlatformWindow$16_EnclosingMethodInfo_,
	_CPlatformWindow$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$16($Class* clazz) {
	return $of($alloc(CPlatformWindow$16));
}

void CPlatformWindow$16::init$($CPlatformWindow* this$0) {
	$set(this, this$0, this$0);
}

void CPlatformWindow$16::run() {
}

CPlatformWindow$16::CPlatformWindow$16() {
}

$Class* CPlatformWindow$16::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$16, name, initialize, &_CPlatformWindow$16_ClassInfo_, allocate$CPlatformWindow$16);
	return class$;
}

$Class* CPlatformWindow$16::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun