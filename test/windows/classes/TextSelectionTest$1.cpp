#include <TextSelectionTest$1.h>

#include <TextSelectionTest.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TextSelectionTest = ::TextSelectionTest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$MethodInfo _TextSelectionTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TextSelectionTest$1::*)()>(&TextSelectionTest$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TextSelectionTest$1_EnclosingMethodInfo_ = {
	"TextSelectionTest",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _TextSelectionTest$1_InnerClassesInfo_[] = {
	{"TextSelectionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextSelectionTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"TextSelectionTest$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_TextSelectionTest$1_MethodInfo_,
	nullptr,
	&_TextSelectionTest$1_EnclosingMethodInfo_,
	_TextSelectionTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TextSelectionTest"
};

$Object* allocate$TextSelectionTest$1($Class* clazz) {
	return $of($alloc(TextSelectionTest$1));
}

void TextSelectionTest$1::init$() {
	$WindowAdapter::init$();
}

void TextSelectionTest$1::windowClosing($WindowEvent* e) {
	$init($TextSelectionTest);
	$nc($TextSelectionTest::latch)->countDown();
}

TextSelectionTest$1::TextSelectionTest$1() {
}

$Class* TextSelectionTest$1::load$($String* name, bool initialize) {
	$loadClass(TextSelectionTest$1, name, initialize, &_TextSelectionTest$1_ClassInfo_, allocate$TextSelectionTest$1);
	return class$;
}

$Class* TextSelectionTest$1::class$ = nullptr;