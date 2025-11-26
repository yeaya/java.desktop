#include <MissingCharsKorean$1.h>

#include <MissingCharsKorean.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $MissingCharsKorean = ::MissingCharsKorean;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;

$MethodInfo _MissingCharsKorean$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MissingCharsKorean$1::*)()>(&MissingCharsKorean$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MissingCharsKorean$1_EnclosingMethodInfo_ = {
	"MissingCharsKorean",
	"setupUI",
	"()V"
};

$InnerClassInfo _MissingCharsKorean$1_InnerClassesInfo_[] = {
	{"MissingCharsKorean$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MissingCharsKorean$1_ClassInfo_ = {
	$ACC_SUPER,
	"MissingCharsKorean$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_MissingCharsKorean$1_MethodInfo_,
	nullptr,
	&_MissingCharsKorean$1_EnclosingMethodInfo_,
	_MissingCharsKorean$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MissingCharsKorean"
};

$Object* allocate$MissingCharsKorean$1($Class* clazz) {
	return $of($alloc(MissingCharsKorean$1));
}

void MissingCharsKorean$1::init$() {
	$WindowAdapter::init$();
}

void MissingCharsKorean$1::windowClosing($WindowEvent* e) {
	$init($MissingCharsKorean);
	$nc($MissingCharsKorean::testStartLatch)->countDown();
}

void MissingCharsKorean$1::windowOpened($WindowEvent* e) {
	$init($MissingCharsKorean);
	$nc($MissingCharsKorean::textFieldMain)->requestFocusInWindow();
}

MissingCharsKorean$1::MissingCharsKorean$1() {
}

$Class* MissingCharsKorean$1::load$($String* name, bool initialize) {
	$loadClass(MissingCharsKorean$1, name, initialize, &_MissingCharsKorean$1_ClassInfo_, allocate$MissingCharsKorean$1);
	return class$;
}

$Class* MissingCharsKorean$1::class$ = nullptr;