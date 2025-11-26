#include <TestBadBreak$1$1.h>

#include <TestBadBreak$1.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $TestBadBreak$1 = ::TestBadBreak$1;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

$FieldInfo _TestBadBreak$1$1_FieldInfo_[] = {
	{"this$0", "LTestBadBreak$1;", nullptr, $FINAL | $SYNTHETIC, $field(TestBadBreak$1$1, this$0)},
	{}
};

$MethodInfo _TestBadBreak$1$1_MethodInfo_[] = {
	{"<init>", "(LTestBadBreak$1;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TestBadBreak$1$1::*)($TestBadBreak$1*,$String*)>(&TestBadBreak$1$1::init$))},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _TestBadBreak$1$1_EnclosingMethodInfo_ = {
	"TestBadBreak$1",
	"run",
	"()V"
};

$InnerClassInfo _TestBadBreak$1$1_InnerClassesInfo_[] = {
	{"TestBadBreak$1", nullptr, nullptr, 0},
	{"TestBadBreak$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestBadBreak$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestBadBreak$1$1",
	"javax.swing.JLabel",
	nullptr,
	_TestBadBreak$1$1_FieldInfo_,
	_TestBadBreak$1$1_MethodInfo_,
	nullptr,
	&_TestBadBreak$1$1_EnclosingMethodInfo_,
	_TestBadBreak$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestBadBreak"
};

$Object* allocate$TestBadBreak$1$1($Class* clazz) {
	return $of($alloc(TestBadBreak$1$1));
}

void TestBadBreak$1$1::init$($TestBadBreak$1* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$JLabel::init$(arg0);
}

void TestBadBreak$1$1::paintComponent($Graphics* g) {
	$var($Graphics2D, g2d, $nc(this->this$0->val$i1)->createGraphics());
	$JLabel::paintComponent(g2d);
	$nc(g2d)->dispose();
}

TestBadBreak$1$1::TestBadBreak$1$1() {
}

$Class* TestBadBreak$1$1::load$($String* name, bool initialize) {
	$loadClass(TestBadBreak$1$1, name, initialize, &_TestBadBreak$1$1_ClassInfo_, allocate$TestBadBreak$1$1);
	return class$;
}

$Class* TestBadBreak$1$1::class$ = nullptr;