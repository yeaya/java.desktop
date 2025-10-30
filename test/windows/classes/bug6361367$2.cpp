#include <bug6361367$2.h>

#include <bug6361367.h>
#include <java/awt/Window.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6361367 = ::bug6361367;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $JFrame = ::javax::swing::JFrame;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug6361367$2_FieldInfo_[] = {
	{"val$textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(bug6361367$2, val$textComponent)},
	{"val$ref", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $FINAL | $SYNTHETIC, $field(bug6361367$2, val$ref)},
	{}
};

$MethodInfo _bug6361367$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;Ljavax/swing/text/JTextComponent;)V", "()V", 0, $method(static_cast<void(bug6361367$2::*)($AtomicReference*,$JTextComponent*)>(&bug6361367$2::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _bug6361367$2_EnclosingMethodInfo_ = {
	"bug6361367",
	"test",
	"(Ljava/lang/Class;)Z"
};

$InnerClassInfo _bug6361367$2_InnerClassesInfo_[] = {
	{"bug6361367$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6361367$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6361367$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_bug6361367$2_FieldInfo_,
	_bug6361367$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_bug6361367$2_EnclosingMethodInfo_,
	_bug6361367$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6361367"
};

$Object* allocate$bug6361367$2($Class* clazz) {
	return $of($alloc(bug6361367$2));
}

void bug6361367$2::init$($AtomicReference* val$ref, $JTextComponent* val$textComponent) {
	$set(this, val$ref, val$ref);
	$set(this, val$textComponent, val$textComponent);
}

$Object* bug6361367$2::call() {
	$var($JFrame, frame, $cast($JFrame, $nc(this->val$ref)->get()));
	if (frame != nullptr) {
		frame->dispose();
	}
	return $of($nc(this->val$textComponent)->getText());
}

bug6361367$2::bug6361367$2() {
}

$Class* bug6361367$2::load$($String* name, bool initialize) {
	$loadClass(bug6361367$2, name, initialize, &_bug6361367$2_ClassInfo_, allocate$bug6361367$2);
	return class$;
}

$Class* bug6361367$2::class$ = nullptr;