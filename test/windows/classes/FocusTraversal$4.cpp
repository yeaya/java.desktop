#include <FocusTraversal$4.h>

#include <FocusTraversal.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $FocusTraversal = ::FocusTraversal;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _FocusTraversal$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FocusTraversal$4::*)()>(&FocusTraversal$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FocusTraversal$4_EnclosingMethodInfo_ = {
	"FocusTraversal",
	"cleanUp",
	"()V"
};

$InnerClassInfo _FocusTraversal$4_InnerClassesInfo_[] = {
	{"FocusTraversal$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FocusTraversal$4_ClassInfo_ = {
	$ACC_SUPER,
	"FocusTraversal$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_FocusTraversal$4_MethodInfo_,
	nullptr,
	&_FocusTraversal$4_EnclosingMethodInfo_,
	_FocusTraversal$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FocusTraversal"
};

$Object* allocate$FocusTraversal$4($Class* clazz) {
	return $of($alloc(FocusTraversal$4));
}

void FocusTraversal$4::init$() {
}

void FocusTraversal$4::run() {
	$init($FocusTraversal);
	$nc($FocusTraversal::frame)->dispose();
}

FocusTraversal$4::FocusTraversal$4() {
}

$Class* FocusTraversal$4::load$($String* name, bool initialize) {
	$loadClass(FocusTraversal$4, name, initialize, &_FocusTraversal$4_ClassInfo_, allocate$FocusTraversal$4);
	return class$;
}

$Class* FocusTraversal$4::class$ = nullptr;