#include <TestBadBreak$1.h>

#include <TestBadBreak$1$1.h>
#include <TestBadBreak.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $TestBadBreak = ::TestBadBreak;
using $TestBadBreak$1$1 = ::TestBadBreak$1$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;

$FieldInfo _TestBadBreak$1_FieldInfo_[] = {
	{"val$i1", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL | $SYNTHETIC, $field(TestBadBreak$1, val$i1)},
	{"val$text", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(TestBadBreak$1, val$text)},
	{}
};

$MethodInfo _TestBadBreak$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/awt/image/BufferedImage;)V", "()V", 0, $method(static_cast<void(TestBadBreak$1::*)($String*,$BufferedImage*)>(&TestBadBreak$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestBadBreak$1_EnclosingMethodInfo_ = {
	"TestBadBreak",
	"test",
	"(Ljava/lang/String;Ljava/awt/image/BufferedImage;)V"
};

$InnerClassInfo _TestBadBreak$1_InnerClassesInfo_[] = {
	{"TestBadBreak$1", nullptr, nullptr, 0},
	{"TestBadBreak$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestBadBreak$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestBadBreak$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_TestBadBreak$1_FieldInfo_,
	_TestBadBreak$1_MethodInfo_,
	nullptr,
	&_TestBadBreak$1_EnclosingMethodInfo_,
	_TestBadBreak$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestBadBreak"
};

$Object* allocate$TestBadBreak$1($Class* clazz) {
	return $of($alloc(TestBadBreak$1));
}

void TestBadBreak$1::init$($String* val$text, $BufferedImage* val$i1) {
	$set(this, val$text, val$text);
	$set(this, val$i1, val$i1);
}

void TestBadBreak$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($TestBadBreak);
	$assignStatic($TestBadBreak::frame, $new($JFrame));
	$var($JLabel, label, $new($TestBadBreak$1$1, this, this->val$text));
	label->setOpaque(true);
	$nc($($nc($TestBadBreak::frame)->getContentPane()))->add(static_cast<$Component*>(label));
	$nc($TestBadBreak::frame)->setBounds(200, 200, 200, 90);
}

TestBadBreak$1::TestBadBreak$1() {
}

$Class* TestBadBreak$1::load$($String* name, bool initialize) {
	$loadClass(TestBadBreak$1, name, initialize, &_TestBadBreak$1_ClassInfo_, allocate$TestBadBreak$1);
	return class$;
}

$Class* TestBadBreak$1::class$ = nullptr;