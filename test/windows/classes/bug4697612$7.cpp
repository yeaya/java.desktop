#include <bug4697612$7.h>

#include <bug4697612.h>
#include <java/awt/Point.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;

$FieldInfo _bug4697612$7_FieldInfo_[] = {
	{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$7, val$result)},
	{}
};

$MethodInfo _bug4697612$7_MethodInfo_[] = {
	{"<init>", "([I)V", "()V", 0, $method(static_cast<void(bug4697612$7::*)($ints*)>(&bug4697612$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4697612$7_EnclosingMethodInfo_ = {
	"bug4697612",
	"getScrollerViewPosition",
	"()I"
};

$InnerClassInfo _bug4697612$7_InnerClassesInfo_[] = {
	{"bug4697612$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4697612$7_ClassInfo_ = {
	$ACC_SUPER,
	"bug4697612$7",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4697612$7_FieldInfo_,
	_bug4697612$7_MethodInfo_,
	nullptr,
	&_bug4697612$7_EnclosingMethodInfo_,
	_bug4697612$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4697612"
};

$Object* allocate$bug4697612$7($Class* clazz) {
	return $of($alloc(bug4697612$7));
}

void bug4697612$7::init$($ints* val$result) {
	$set(this, val$result, val$result);
}

void bug4697612$7::run() {
	$init($bug4697612);
	$nc(this->val$result)->set(0, $nc($($nc($($nc($bug4697612::scroller)->getViewport()))->getViewPosition()))->y);
}

bug4697612$7::bug4697612$7() {
}

$Class* bug4697612$7::load$($String* name, bool initialize) {
	$loadClass(bug4697612$7, name, initialize, &_bug4697612$7_ClassInfo_, allocate$bug4697612$7);
	return class$;
}

$Class* bug4697612$7::class$ = nullptr;