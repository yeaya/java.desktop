#include <NestedWorkers.h>

#include <NestedWorkers$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

#undef MAX_LEVEL

using $NestedWorkers$1 = ::NestedWorkers$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingWorker = ::javax::swing::SwingWorker;

$FieldInfo _NestedWorkers_FieldInfo_[] = {
	{"MAX_LEVEL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NestedWorkers, MAX_LEVEL)},
	{"level", "I", nullptr, $PRIVATE, $field(NestedWorkers, level)},
	{}
};

$MethodInfo _NestedWorkers_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(NestedWorkers::*)(int32_t)>(&NestedWorkers::init$))},
	{"doInBackground", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NestedWorkers::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _NestedWorkers_InnerClassesInfo_[] = {
	{"NestedWorkers$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NestedWorkers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NestedWorkers",
	"javax.swing.SwingWorker",
	nullptr,
	_NestedWorkers_FieldInfo_,
	_NestedWorkers_MethodInfo_,
	"Ljavax/swing/SwingWorker<Ljava/lang/String;Ljava/lang/Void;>;",
	nullptr,
	_NestedWorkers_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NestedWorkers$1"
};

$Object* allocate$NestedWorkers($Class* clazz) {
	return $of($alloc(NestedWorkers));
}

void NestedWorkers::init$(int32_t level) {
	$SwingWorker::init$();
	this->level = level;
}

$Object* NestedWorkers::doInBackground() {
	if (this->level < NestedWorkers::MAX_LEVEL) {
		$var($SwingWorker, nested, $new(NestedWorkers, this->level + 1));
		nested->execute();
		nested->get();
	}
	$init($System);
	$nc($System::out)->println($$str({"doInBackground "_s, $$str(this->level), " is complete"_s}));
	return $of($String::valueOf(this->level));
}

void NestedWorkers::main($StringArray* args) {
	$init(NestedWorkers);
	$SwingUtilities::invokeAndWait($$new($NestedWorkers$1));
}

NestedWorkers::NestedWorkers() {
}

$Class* NestedWorkers::load$($String* name, bool initialize) {
	$loadClass(NestedWorkers, name, initialize, &_NestedWorkers_ClassInfo_, allocate$NestedWorkers);
	return class$;
}

$Class* NestedWorkers::class$ = nullptr;