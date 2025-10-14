#include <bug6432565$1.h>

#include <bug6432565.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $CharSequenceArray = $Array<::java::lang::CharSequence>;
using $bug6432565 = ::bug6432565;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $SwingWorker = ::javax::swing::SwingWorker;

$MethodInfo _bug6432565$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6432565$1::*)()>(&bug6432565$1::init$))},
	{"doInBackground", "()Ljava/lang/Void;", nullptr, $PROTECTED},
	{"done", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _bug6432565$1_EnclosingMethodInfo_ = {
	"bug6432565",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6432565$1_InnerClassesInfo_[] = {
	{"bug6432565$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6432565$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6432565$1",
	"javax.swing.SwingWorker",
	nullptr,
	nullptr,
	_bug6432565$1_MethodInfo_,
	"Ljavax/swing/SwingWorker<Ljava/lang/Void;Ljava/lang/CharSequence;>;",
	&_bug6432565$1_EnclosingMethodInfo_,
	_bug6432565$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6432565"
};

$Object* allocate$bug6432565$1($Class* clazz) {
	return $of($alloc(bug6432565$1));
}

void bug6432565$1::init$() {
	$SwingWorker::init$();
}

$Object* bug6432565$1::doInBackground() {
	publish($$new($StringArray, {"hello"_s}));
	publish($$new($CharSequenceArray, {static_cast<$CharSequence*>($$new($StringBuilder, "world"_s))}));
	return $of(nullptr);
}

void bug6432565$1::done() {
	$init($bug6432565);
	$nc($bug6432565::isDone)->set(true);
}

bug6432565$1::bug6432565$1() {
}

$Class* bug6432565$1::load$($String* name, bool initialize) {
	$loadClass(bug6432565$1, name, initialize, &_bug6432565$1_ClassInfo_, allocate$bug6432565$1);
	return class$;
}

$Class* bug6432565$1::class$ = nullptr;