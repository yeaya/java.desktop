#include <LastNodeLowerHalfDrop$2.h>

#include <LastNodeLowerHalfDrop.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $LastNodeLowerHalfDrop = ::LastNodeLowerHalfDrop;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _LastNodeLowerHalfDrop$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LastNodeLowerHalfDrop$2::*)()>(&LastNodeLowerHalfDrop$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LastNodeLowerHalfDrop$2_EnclosingMethodInfo_ = {
	"LastNodeLowerHalfDrop",
	"cleanUp",
	"()V"
};

$InnerClassInfo _LastNodeLowerHalfDrop$2_InnerClassesInfo_[] = {
	{"LastNodeLowerHalfDrop$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LastNodeLowerHalfDrop$2_ClassInfo_ = {
	$ACC_SUPER,
	"LastNodeLowerHalfDrop$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_LastNodeLowerHalfDrop$2_MethodInfo_,
	nullptr,
	&_LastNodeLowerHalfDrop$2_EnclosingMethodInfo_,
	_LastNodeLowerHalfDrop$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastNodeLowerHalfDrop"
};

$Object* allocate$LastNodeLowerHalfDrop$2($Class* clazz) {
	return $of($alloc(LastNodeLowerHalfDrop$2));
}

void LastNodeLowerHalfDrop$2::init$() {
}

void LastNodeLowerHalfDrop$2::run() {
	$init($LastNodeLowerHalfDrop);
	$nc($LastNodeLowerHalfDrop::f)->dispose();
}

LastNodeLowerHalfDrop$2::LastNodeLowerHalfDrop$2() {
}

$Class* LastNodeLowerHalfDrop$2::load$($String* name, bool initialize) {
	$loadClass(LastNodeLowerHalfDrop$2, name, initialize, &_LastNodeLowerHalfDrop$2_ClassInfo_, allocate$LastNodeLowerHalfDrop$2);
	return class$;
}

$Class* LastNodeLowerHalfDrop$2::class$ = nullptr;