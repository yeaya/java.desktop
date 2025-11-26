#include <java/beans/Statement$1.h>

#include <jcpp.h>

using $ExceptionListener = ::java::beans::ExceptionListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _Statement$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Statement$1::*)()>(&Statement$1::init$))},
	{"exceptionThrown", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Statement$1_EnclosingMethodInfo_ = {
	"java.beans.Statement",
	nullptr,
	nullptr
};

$InnerClassInfo _Statement$1_InnerClassesInfo_[] = {
	{"java.beans.Statement$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Statement$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.Statement$1",
	"java.lang.Object",
	"java.beans.ExceptionListener",
	nullptr,
	_Statement$1_MethodInfo_,
	nullptr,
	&_Statement$1_EnclosingMethodInfo_,
	_Statement$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.Statement"
};

$Object* allocate$Statement$1($Class* clazz) {
	return $of($alloc(Statement$1));
}

void Statement$1::init$() {
}

void Statement$1::exceptionThrown($Exception* e) {
	$nc($System::err)->println($of(e));
	$nc($System::err)->println("Continuing ..."_s);
}

Statement$1::Statement$1() {
}

$Class* Statement$1::load$($String* name, bool initialize) {
	$loadClass(Statement$1, name, initialize, &_Statement$1_ClassInfo_, allocate$Statement$1);
	return class$;
}

$Class* Statement$1::class$ = nullptr;

	} // beans
} // java