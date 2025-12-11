#include <bug6361367$1.h>

#include <bug6361367.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6361367 = ::bug6361367;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;

$FieldInfo _bug6361367$1_FieldInfo_[] = {
	{"val$ref", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $FINAL | $SYNTHETIC, $field(bug6361367$1, val$ref)},
	{"val$textComponentClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(bug6361367$1, val$textComponentClass)},
	{}
};

$MethodInfo _bug6361367$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/util/concurrent/atomic/AtomicReference;)V", "()V", 0, $method(static_cast<void(bug6361367$1::*)($Class*,$AtomicReference*)>(&bug6361367$1::init$))},
	{"call", "()Ljavax/swing/text/JTextComponent;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _bug6361367$1_EnclosingMethodInfo_ = {
	"bug6361367",
	"test",
	"(Ljava/lang/Class;)Z"
};

$InnerClassInfo _bug6361367$1_InnerClassesInfo_[] = {
	{"bug6361367$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6361367$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6361367$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_bug6361367$1_FieldInfo_,
	_bug6361367$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/swing/text/JTextComponent;>;",
	&_bug6361367$1_EnclosingMethodInfo_,
	_bug6361367$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6361367"
};

$Object* allocate$bug6361367$1($Class* clazz) {
	return $of($alloc(bug6361367$1));
}

void bug6361367$1::init$($Class* val$textComponentClass, $AtomicReference* val$ref) {
	$set(this, val$textComponentClass, val$textComponentClass);
	$set(this, val$ref, val$ref);
}

$Object* bug6361367$1::call() {
	return $of($bug6361367::initialize(this->val$textComponentClass, this->val$ref));
}

bug6361367$1::bug6361367$1() {
}

$Class* bug6361367$1::load$($String* name, bool initialize) {
	$loadClass(bug6361367$1, name, initialize, &_bug6361367$1_ClassInfo_, allocate$bug6361367$1);
	return class$;
}

$Class* bug6361367$1::class$ = nullptr;