#include <RepaintOnFrameIconifiedStateChangeTest$3.h>

#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _RepaintOnFrameIconifiedStateChangeTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RepaintOnFrameIconifiedStateChangeTest$3::*)()>(&RepaintOnFrameIconifiedStateChangeTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintOnFrameIconifiedStateChangeTest$3_EnclosingMethodInfo_ = {
	"RepaintOnFrameIconifiedStateChangeTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _RepaintOnFrameIconifiedStateChangeTest$3_InnerClassesInfo_[] = {
	{"RepaintOnFrameIconifiedStateChangeTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintOnFrameIconifiedStateChangeTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintOnFrameIconifiedStateChangeTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest$3_MethodInfo_,
	nullptr,
	&_RepaintOnFrameIconifiedStateChangeTest$3_EnclosingMethodInfo_,
	_RepaintOnFrameIconifiedStateChangeTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintOnFrameIconifiedStateChangeTest"
};

$Object* allocate$RepaintOnFrameIconifiedStateChangeTest$3($Class* clazz) {
	return $of($alloc(RepaintOnFrameIconifiedStateChangeTest$3));
}

void RepaintOnFrameIconifiedStateChangeTest$3::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$3::run() {
	$init($System);
	$nc($System::out)->println("Changing states of components..."_s);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	$nc($RepaintOnFrameIconifiedStateChangeTest::label)->setText($nc($nc($RepaintOnFrameIconifiedStateChangeTest::strsForComps)->get(0))->get(1));
	$nc($RepaintOnFrameIconifiedStateChangeTest::button)->setText($nc($nc($RepaintOnFrameIconifiedStateChangeTest::strsForComps)->get(1))->get(1));
}

RepaintOnFrameIconifiedStateChangeTest$3::RepaintOnFrameIconifiedStateChangeTest$3() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$3::load$($String* name, bool initialize) {
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$3, name, initialize, &_RepaintOnFrameIconifiedStateChangeTest$3_ClassInfo_, allocate$RepaintOnFrameIconifiedStateChangeTest$3);
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$3::class$ = nullptr;