#include <sun/swing/JLightweightFrame$1.h>

#include <sun/swing/JLightweightFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;

namespace sun {
	namespace swing {

$MethodInfo _JLightweightFrame$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JLightweightFrame$1::*)()>(&JLightweightFrame$1::init$))},
	{"updateCursor", "(Lsun/swing/JLightweightFrame;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JLightweightFrame$1_EnclosingMethodInfo_ = {
	"sun.swing.JLightweightFrame",
	nullptr,
	nullptr
};

$InnerClassInfo _JLightweightFrame$1_InnerClassesInfo_[] = {
	{"sun.swing.JLightweightFrame$1", nullptr, nullptr, 0},
	{"sun.swing.SwingAccessor$JLightweightFrameAccessor", "sun.swing.SwingAccessor", "JLightweightFrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JLightweightFrame$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.JLightweightFrame$1",
	"java.lang.Object",
	"sun.swing.SwingAccessor$JLightweightFrameAccessor",
	nullptr,
	_JLightweightFrame$1_MethodInfo_,
	nullptr,
	&_JLightweightFrame$1_EnclosingMethodInfo_,
	_JLightweightFrame$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.JLightweightFrame"
};

$Object* allocate$JLightweightFrame$1($Class* clazz) {
	return $of($alloc(JLightweightFrame$1));
}

void JLightweightFrame$1::init$() {
}

void JLightweightFrame$1::updateCursor($JLightweightFrame* frame) {
	$nc(frame)->updateClientCursor();
}

JLightweightFrame$1::JLightweightFrame$1() {
}

$Class* JLightweightFrame$1::load$($String* name, bool initialize) {
	$loadClass(JLightweightFrame$1, name, initialize, &_JLightweightFrame$1_ClassInfo_, allocate$JLightweightFrame$1);
	return class$;
}

$Class* JLightweightFrame$1::class$ = nullptr;

	} // swing
} // sun