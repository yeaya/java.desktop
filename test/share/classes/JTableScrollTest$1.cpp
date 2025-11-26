#include <JTableScrollTest$1.h>

#include <JTableScrollTest.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $JTableScrollTest = ::JTableScrollTest;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

class JTableScrollTest$1$$Lambda$createTable : public $Runnable {
	$class(JTableScrollTest$1$$Lambda$createTable, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		$JTableScrollTest::createTable();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTableScrollTest$1$$Lambda$createTable>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JTableScrollTest$1$$Lambda$createTable::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTableScrollTest$1$$Lambda$createTable::*)()>(&JTableScrollTest$1$$Lambda$createTable::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTableScrollTest$1$$Lambda$createTable::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTableScrollTest$1$$Lambda$createTable",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JTableScrollTest$1$$Lambda$createTable::load$($String* name, bool initialize) {
	$loadClass(JTableScrollTest$1$$Lambda$createTable, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTableScrollTest$1$$Lambda$createTable::class$ = nullptr;

$MethodInfo _JTableScrollTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTableScrollTest$1::*)()>(&JTableScrollTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTableScrollTest$1_EnclosingMethodInfo_ = {
	"JTableScrollTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JTableScrollTest$1_InnerClassesInfo_[] = {
	{"JTableScrollTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTableScrollTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JTableScrollTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JTableScrollTest$1_MethodInfo_,
	nullptr,
	&_JTableScrollTest$1_EnclosingMethodInfo_,
	_JTableScrollTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTableScrollTest"
};

$Object* allocate$JTableScrollTest$1($Class* clazz) {
	return $of($alloc(JTableScrollTest$1));
}

void JTableScrollTest$1::init$() {
}

void JTableScrollTest$1::run() {
	$JTableScrollTest::doTest(static_cast<$Runnable*>($$new(JTableScrollTest$1$$Lambda$createTable)));
}

JTableScrollTest$1::JTableScrollTest$1() {
}

$Class* JTableScrollTest$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JTableScrollTest$1$$Lambda$createTable::classInfo$.name)) {
			return JTableScrollTest$1$$Lambda$createTable::load$(name, initialize);
		}
	}
	$loadClass(JTableScrollTest$1, name, initialize, &_JTableScrollTest$1_ClassInfo_, allocate$JTableScrollTest$1);
	return class$;
}

$Class* JTableScrollTest$1::class$ = nullptr;