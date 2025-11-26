#include <Test6632810.h>

#include <Test6632810$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test6632810$1 = ::Test6632810$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _Test6632810_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6632810::*)()>(&Test6632810::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6632810::main))},
	{}
};

$InnerClassInfo _Test6632810_InnerClassesInfo_[] = {
	{"Test6632810$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6632810_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6632810",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test6632810_MethodInfo_,
	nullptr,
	nullptr,
	_Test6632810_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6632810$1"
};

$Object* allocate$Test6632810($Class* clazz) {
	return $of($alloc(Test6632810));
}

void Test6632810::init$() {
}

void Test6632810::main($StringArray* args) {
	$SwingUtilities::invokeLater($$new($Test6632810$1));
}

Test6632810::Test6632810() {
}

$Class* Test6632810::load$($String* name, bool initialize) {
	$loadClass(Test6632810, name, initialize, &_Test6632810_ClassInfo_, allocate$Test6632810);
	return class$;
}

$Class* Test6632810::class$ = nullptr;