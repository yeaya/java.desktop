#include <TestTooltipBackgroundColor$1$1.h>

#include <TestTooltipBackgroundColor$1.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $TestTooltipBackgroundColor$1 = ::TestTooltipBackgroundColor$1;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;

$FieldInfo _TestTooltipBackgroundColor$1$1_FieldInfo_[] = {
	{"this$0", "LTestTooltipBackgroundColor$1;", nullptr, $FINAL | $SYNTHETIC, $field(TestTooltipBackgroundColor$1$1, this$0)},
	{}
};

$MethodInfo _TestTooltipBackgroundColor$1$1_MethodInfo_[] = {
	{"<init>", "(LTestTooltipBackgroundColor$1;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TestTooltipBackgroundColor$1$1::*)($TestTooltipBackgroundColor$1*,$String*)>(&TestTooltipBackgroundColor$1$1::init$))},
	{"getToolTipLocation", "(Ljava/awt/event/MouseEvent;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestTooltipBackgroundColor$1$1_EnclosingMethodInfo_ = {
	"TestTooltipBackgroundColor$1",
	"run",
	"()V"
};

$InnerClassInfo _TestTooltipBackgroundColor$1$1_InnerClassesInfo_[] = {
	{"TestTooltipBackgroundColor$1", nullptr, nullptr, 0},
	{"TestTooltipBackgroundColor$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTooltipBackgroundColor$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestTooltipBackgroundColor$1$1",
	"javax.swing.JLabel",
	nullptr,
	_TestTooltipBackgroundColor$1$1_FieldInfo_,
	_TestTooltipBackgroundColor$1$1_MethodInfo_,
	nullptr,
	&_TestTooltipBackgroundColor$1$1_EnclosingMethodInfo_,
	_TestTooltipBackgroundColor$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestTooltipBackgroundColor"
};

$Object* allocate$TestTooltipBackgroundColor$1$1($Class* clazz) {
	return $of($alloc(TestTooltipBackgroundColor$1$1));
}

void TestTooltipBackgroundColor$1$1::init$($TestTooltipBackgroundColor$1* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$JLabel::init$(arg0);
}

$Point* TestTooltipBackgroundColor$1$1::getToolTipLocation($MouseEvent* event) {
	return $new($Point, 0, 0);
}

TestTooltipBackgroundColor$1$1::TestTooltipBackgroundColor$1$1() {
}

$Class* TestTooltipBackgroundColor$1$1::load$($String* name, bool initialize) {
	$loadClass(TestTooltipBackgroundColor$1$1, name, initialize, &_TestTooltipBackgroundColor$1$1_ClassInfo_, allocate$TestTooltipBackgroundColor$1$1);
	return class$;
}

$Class* TestTooltipBackgroundColor$1$1::class$ = nullptr;