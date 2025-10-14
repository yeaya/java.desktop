#include <bug4697612$3.h>

#include <bug4697612.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
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
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTextArea = ::javax::swing::JTextArea;

$FieldInfo _bug4697612$3_FieldInfo_[] = {
	{"this$0", "Lbug4697612;", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$3, this$0)},
	{}
};

$MethodInfo _bug4697612$3_MethodInfo_[] = {
	{"<init>", "(Lbug4697612;)V", nullptr, 0, $method(static_cast<void(bug4697612$3::*)($bug4697612*)>(&bug4697612$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4697612$3_EnclosingMethodInfo_ = {
	"bug4697612",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4697612$3_InnerClassesInfo_[] = {
	{"bug4697612$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4697612$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4697612$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4697612$3_FieldInfo_,
	_bug4697612$3_MethodInfo_,
	nullptr,
	&_bug4697612$3_EnclosingMethodInfo_,
	_bug4697612$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4697612"
};

$Object* allocate$bug4697612$3($Class* clazz) {
	return $of($alloc(bug4697612$3));
}

void bug4697612$3::init$($bug4697612* this$0) {
	$set(this, this$0, this$0);
}

void bug4697612$3::run() {
	$init($bug4697612);
	$nc($bug4697612::text)->setFont($($nc($($nc($bug4697612::text)->getFont()))->deriveFont($bug4697612::fontHeight)));
}

bug4697612$3::bug4697612$3() {
}

$Class* bug4697612$3::load$($String* name, bool initialize) {
	$loadClass(bug4697612$3, name, initialize, &_bug4697612$3_ClassInfo_, allocate$bug4697612$3);
	return class$;
}

$Class* bug4697612$3::class$ = nullptr;