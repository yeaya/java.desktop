#include <bug5074573$4.h>

#include <bug5074573.h>
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
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug5074573 = ::bug5074573;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug5074573$4_FieldInfo_[] = {
	{"val$result", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug5074573$4, val$result)},
	{}
};

$MethodInfo _bug5074573$4_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(bug5074573$4::*)($StringArray*)>(&bug5074573$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug5074573$4_EnclosingMethodInfo_ = {
	"bug5074573",
	"getText",
	"()Ljava/lang/String;"
};

$InnerClassInfo _bug5074573$4_InnerClassesInfo_[] = {
	{"bug5074573$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug5074573$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug5074573$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug5074573$4_FieldInfo_,
	_bug5074573$4_MethodInfo_,
	nullptr,
	&_bug5074573$4_EnclosingMethodInfo_,
	_bug5074573$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug5074573"
};

$Object* allocate$bug5074573$4($Class* clazz) {
	return $of($alloc(bug5074573$4));
}

void bug5074573$4::init$($StringArray* val$result) {
	$set(this, val$result, val$result);
}

void bug5074573$4::run() {
	$init($bug5074573);
	$nc(this->val$result)->set(0, $($nc($bug5074573::textComponent)->getText()));
}

bug5074573$4::bug5074573$4() {
}

$Class* bug5074573$4::load$($String* name, bool initialize) {
	$loadClass(bug5074573$4, name, initialize, &_bug5074573$4_ClassInfo_, allocate$bug5074573$4);
	return class$;
}

$Class* bug5074573$4::class$ = nullptr;