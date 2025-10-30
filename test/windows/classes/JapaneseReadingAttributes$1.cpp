#include <JapaneseReadingAttributes$1.h>

#include <JapaneseReadingAttributes.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $JapaneseReadingAttributes = ::JapaneseReadingAttributes;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;

$MethodInfo _JapaneseReadingAttributes$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JapaneseReadingAttributes$1::*)()>(&JapaneseReadingAttributes$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JapaneseReadingAttributes$1_EnclosingMethodInfo_ = {
	"JapaneseReadingAttributes",
	"setupUI",
	"()V"
};

$InnerClassInfo _JapaneseReadingAttributes$1_InnerClassesInfo_[] = {
	{"JapaneseReadingAttributes$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JapaneseReadingAttributes$1_ClassInfo_ = {
	$ACC_SUPER,
	"JapaneseReadingAttributes$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_JapaneseReadingAttributes$1_MethodInfo_,
	nullptr,
	&_JapaneseReadingAttributes$1_EnclosingMethodInfo_,
	_JapaneseReadingAttributes$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JapaneseReadingAttributes"
};

$Object* allocate$JapaneseReadingAttributes$1($Class* clazz) {
	return $of($alloc(JapaneseReadingAttributes$1));
}

void JapaneseReadingAttributes$1::init$() {
	$WindowAdapter::init$();
}

void JapaneseReadingAttributes$1::windowClosing($WindowEvent* e) {
	$init($JapaneseReadingAttributes);
	$nc($JapaneseReadingAttributes::testStartLatch)->countDown();
}

void JapaneseReadingAttributes$1::windowOpened($WindowEvent* e) {
	$init($JapaneseReadingAttributes);
	$nc($JapaneseReadingAttributes::textFieldMain)->requestFocusInWindow();
}

JapaneseReadingAttributes$1::JapaneseReadingAttributes$1() {
}

$Class* JapaneseReadingAttributes$1::load$($String* name, bool initialize) {
	$loadClass(JapaneseReadingAttributes$1, name, initialize, &_JapaneseReadingAttributes$1_ClassInfo_, allocate$JapaneseReadingAttributes$1);
	return class$;
}

$Class* JapaneseReadingAttributes$1::class$ = nullptr;