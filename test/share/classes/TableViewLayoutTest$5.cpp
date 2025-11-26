#include <TableViewLayoutTest$5.h>

#include <TableViewLayoutTest.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _TableViewLayoutTest$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TableViewLayoutTest$5::*)()>(&TableViewLayoutTest$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TableViewLayoutTest$5_EnclosingMethodInfo_ = {
	"TableViewLayoutTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TableViewLayoutTest$5_InnerClassesInfo_[] = {
	{"TableViewLayoutTest$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TableViewLayoutTest$5_ClassInfo_ = {
	$ACC_SUPER,
	"TableViewLayoutTest$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TableViewLayoutTest$5_MethodInfo_,
	nullptr,
	&_TableViewLayoutTest$5_EnclosingMethodInfo_,
	_TableViewLayoutTest$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TableViewLayoutTest"
};

$Object* allocate$TableViewLayoutTest$5($Class* clazz) {
	return $of($alloc(TableViewLayoutTest$5));
}

void TableViewLayoutTest$5::init$() {
}

void TableViewLayoutTest$5::run() {
	$init($TableViewLayoutTest);
	$nc($TableViewLayoutTest::frame)->dispose();
}

TableViewLayoutTest$5::TableViewLayoutTest$5() {
}

$Class* TableViewLayoutTest$5::load$($String* name, bool initialize) {
	$loadClass(TableViewLayoutTest$5, name, initialize, &_TableViewLayoutTest$5_ClassInfo_, allocate$TableViewLayoutTest$5);
	return class$;
}

$Class* TableViewLayoutTest$5::class$ = nullptr;