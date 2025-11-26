#include <bug6608456$2.h>

#include <bug6608456.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $bug6608456 = ::bug6608456;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $JComponent = ::javax::swing::JComponent;

$FieldInfo _bug6608456$2_FieldInfo_[] = {
	{"val$component", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(bug6608456$2, val$component)},
	{}
};

$MethodInfo _bug6608456$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent;)V", "()V", 0, $method(static_cast<void(bug6608456$2::*)($JComponent*)>(&bug6608456$2::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6608456$2_EnclosingMethodInfo_ = {
	"bug6608456",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6608456$2_InnerClassesInfo_[] = {
	{"bug6608456$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6608456$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6608456$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_bug6608456$2_FieldInfo_,
	_bug6608456$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_bug6608456$2_EnclosingMethodInfo_,
	_bug6608456$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6608456"
};

$Object* allocate$bug6608456$2($Class* clazz) {
	return $of($alloc(bug6608456$2));
}

void bug6608456$2::init$($JComponent* val$component) {
	$set(this, val$component, val$component);
}

$Object* bug6608456$2::call() {
	$nc(this->val$component)->repaint();
	return $of(nullptr);
}

bug6608456$2::bug6608456$2() {
}

$Class* bug6608456$2::load$($String* name, bool initialize) {
	$loadClass(bug6608456$2, name, initialize, &_bug6608456$2_ClassInfo_, allocate$bug6608456$2);
	return class$;
}

$Class* bug6608456$2::class$ = nullptr;