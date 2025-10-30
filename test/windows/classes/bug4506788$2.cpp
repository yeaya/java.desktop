#include <bug4506788$2.h>

#include <bug4506788.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug4506788 = ::bug4506788;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JEditorPane = ::javax::swing::JEditorPane;

$FieldInfo _bug4506788$2_FieldInfo_[] = {
	{"this$0", "Lbug4506788;", nullptr, $FINAL | $SYNTHETIC, $field(bug4506788$2, this$0)},
	{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug4506788$2, val$result)},
	{}
};

$MethodInfo _bug4506788$2_MethodInfo_[] = {
	{"<init>", "(Lbug4506788;[Ljava/awt/Point;)V", "()V", 0, $method(static_cast<void(bug4506788$2::*)($bug4506788*,$PointArray*)>(&bug4506788$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4506788$2_EnclosingMethodInfo_ = {
	"bug4506788",
	"getJEPLocOnScreen",
	"()Ljava/awt/Point;"
};

$InnerClassInfo _bug4506788$2_InnerClassesInfo_[] = {
	{"bug4506788$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4506788$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4506788$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4506788$2_FieldInfo_,
	_bug4506788$2_MethodInfo_,
	nullptr,
	&_bug4506788$2_EnclosingMethodInfo_,
	_bug4506788$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4506788"
};

$Object* allocate$bug4506788$2($Class* clazz) {
	return $of($alloc(bug4506788$2));
}

void bug4506788$2::init$($bug4506788* this$0, $PointArray* val$result) {
	$set(this, this$0, this$0);
	$set(this, val$result, val$result);
}

void bug4506788$2::run() {
	$nc(this->val$result)->set(0, $($nc(this->this$0->jep)->getLocationOnScreen()));
}

bug4506788$2::bug4506788$2() {
}

$Class* bug4506788$2::load$($String* name, bool initialize) {
	$loadClass(bug4506788$2, name, initialize, &_bug4506788$2_ClassInfo_, allocate$bug4506788$2);
	return class$;
}

$Class* bug4506788$2::class$ = nullptr;