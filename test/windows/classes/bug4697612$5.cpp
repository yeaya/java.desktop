#include <bug4697612$5.h>

#include <bug4697612.h>
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
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug4697612$5_FieldInfo_[] = {
	{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$5, val$result)},
	{}
};

$MethodInfo _bug4697612$5_MethodInfo_[] = {
	{"<init>", "([I)V", "()V", 0, $method(static_cast<void(bug4697612$5::*)($ints*)>(&bug4697612$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4697612$5_EnclosingMethodInfo_ = {
	"bug4697612",
	"getTextCaretPosition",
	"()I"
};

$InnerClassInfo _bug4697612$5_InnerClassesInfo_[] = {
	{"bug4697612$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4697612$5_ClassInfo_ = {
	$ACC_SUPER,
	"bug4697612$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4697612$5_FieldInfo_,
	_bug4697612$5_MethodInfo_,
	nullptr,
	&_bug4697612$5_EnclosingMethodInfo_,
	_bug4697612$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4697612"
};

$Object* allocate$bug4697612$5($Class* clazz) {
	return $of($alloc(bug4697612$5));
}

void bug4697612$5::init$($ints* val$result) {
	$set(this, val$result, val$result);
}

void bug4697612$5::run() {
	$init($bug4697612);
	$nc(this->val$result)->set(0, $nc($bug4697612::text)->getCaretPosition());
}

bug4697612$5::bug4697612$5() {
}

$Class* bug4697612$5::load$($String* name, bool initialize) {
	$loadClass(bug4697612$5, name, initialize, &_bug4697612$5_ClassInfo_, allocate$bug4697612$5);
	return class$;
}

$Class* bug4697612$5::class$ = nullptr;