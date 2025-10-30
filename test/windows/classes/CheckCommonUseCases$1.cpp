#include <CheckCommonUseCases$1.h>

#include <CheckCommonUseCases.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

using $CheckCommonUseCases = ::CheckCommonUseCases;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;

$FieldInfo _CheckCommonUseCases$1_FieldInfo_[] = {
	{"val$update", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(CheckCommonUseCases$1, val$update)},
	{"val$remove", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(CheckCommonUseCases$1, val$remove)},
	{"val$insert", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(CheckCommonUseCases$1, val$insert)},
	{}
};

$MethodInfo _CheckCommonUseCases$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicInteger;Ljava/util/concurrent/atomic/AtomicInteger;Ljava/util/concurrent/atomic/AtomicInteger;)V", "()V", 0, $method(static_cast<void(CheckCommonUseCases$1::*)($AtomicInteger*,$AtomicInteger*,$AtomicInteger*)>(&CheckCommonUseCases$1::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CheckCommonUseCases$1_EnclosingMethodInfo_ = {
	"CheckCommonUseCases",
	"countListeners",
	"(Ljavax/swing/JPasswordField;)V"
};

$InnerClassInfo _CheckCommonUseCases$1_InnerClassesInfo_[] = {
	{"CheckCommonUseCases$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckCommonUseCases$1_ClassInfo_ = {
	$ACC_SUPER,
	"CheckCommonUseCases$1",
	"java.lang.Object",
	"javax.swing.event.DocumentListener",
	_CheckCommonUseCases$1_FieldInfo_,
	_CheckCommonUseCases$1_MethodInfo_,
	nullptr,
	&_CheckCommonUseCases$1_EnclosingMethodInfo_,
	_CheckCommonUseCases$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CheckCommonUseCases"
};

$Object* allocate$CheckCommonUseCases$1($Class* clazz) {
	return $of($alloc(CheckCommonUseCases$1));
}

void CheckCommonUseCases$1::init$($AtomicInteger* val$insert, $AtomicInteger* val$remove, $AtomicInteger* val$update) {
	$set(this, val$insert, val$insert);
	$set(this, val$remove, val$remove);
	$set(this, val$update, val$update);
}

void CheckCommonUseCases$1::insertUpdate($DocumentEvent* e) {
	$nc(this->val$insert)->incrementAndGet();
	$nc($System::err)->println($$str({"e = "_s, e}));
}

void CheckCommonUseCases$1::removeUpdate($DocumentEvent* e) {
	$nc(this->val$remove)->incrementAndGet();
	$nc($System::err)->println($$str({"e = "_s, e}));
}

void CheckCommonUseCases$1::changedUpdate($DocumentEvent* e) {
	$nc(this->val$update)->incrementAndGet();
	$nc($System::err)->println($$str({"e = "_s, e}));
}

CheckCommonUseCases$1::CheckCommonUseCases$1() {
}

$Class* CheckCommonUseCases$1::load$($String* name, bool initialize) {
	$loadClass(CheckCommonUseCases$1, name, initialize, &_CheckCommonUseCases$1_ClassInfo_, allocate$CheckCommonUseCases$1);
	return class$;
}

$Class* CheckCommonUseCases$1::class$ = nullptr;