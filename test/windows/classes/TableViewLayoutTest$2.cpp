#include <TableViewLayoutTest$2.h>

#include <TableViewLayoutTest.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _TableViewLayoutTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TableViewLayoutTest$2::*)()>(&TableViewLayoutTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TableViewLayoutTest$2_EnclosingMethodInfo_ = {
	"TableViewLayoutTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TableViewLayoutTest$2_InnerClassesInfo_[] = {
	{"TableViewLayoutTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TableViewLayoutTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"TableViewLayoutTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TableViewLayoutTest$2_MethodInfo_,
	nullptr,
	&_TableViewLayoutTest$2_EnclosingMethodInfo_,
	_TableViewLayoutTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TableViewLayoutTest"
};

$Object* allocate$TableViewLayoutTest$2($Class* clazz) {
	return $of($alloc(TableViewLayoutTest$2));
}

void TableViewLayoutTest$2::init$() {
}

void TableViewLayoutTest$2::run() {
	$init($TableViewLayoutTest);
	$assignStatic($TableViewLayoutTest::frame, $new($TableViewLayoutTest));
	$nc($TableViewLayoutTest::frame)->setVisible(true);
}

TableViewLayoutTest$2::TableViewLayoutTest$2() {
}

$Class* TableViewLayoutTest$2::load$($String* name, bool initialize) {
	$loadClass(TableViewLayoutTest$2, name, initialize, &_TableViewLayoutTest$2_ClassInfo_, allocate$TableViewLayoutTest$2);
	return class$;
}

$Class* TableViewLayoutTest$2::class$ = nullptr;