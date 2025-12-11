#include <TestObjectView$UserJComponent.h>

#include <TestObjectView.h>
#include <java/awt/Color.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef TEST_COLOR
#undef USER_COLOR

using $Color = ::java::awt::Color;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

$FieldInfo _TestObjectView$UserJComponent_FieldInfo_[] = {
	{"USER_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestObjectView$UserJComponent, USER_COLOR)},
	{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestObjectView$UserJComponent, TEST_COLOR)},
	{"color", "Ljava/awt/Color;", nullptr, 0, $field(TestObjectView$UserJComponent, color)},
	{}
};

$MethodInfo _TestObjectView$UserJComponent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestObjectView$UserJComponent::*)()>(&TestObjectView$UserJComponent::init$))},
	{"getUserColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"setUserColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestObjectView$UserJComponent_InnerClassesInfo_[] = {
	{"TestObjectView$UserJComponent", "TestObjectView", "UserJComponent", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestObjectView$UserJComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestObjectView$UserJComponent",
	"javax.swing.JComponent",
	nullptr,
	_TestObjectView$UserJComponent_FieldInfo_,
	_TestObjectView$UserJComponent_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectView$UserJComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectView"
};

$Object* allocate$TestObjectView$UserJComponent($Class* clazz) {
	return $of($alloc(TestObjectView$UserJComponent));
}

$Color* TestObjectView$UserJComponent::USER_COLOR = nullptr;
$Color* TestObjectView$UserJComponent::TEST_COLOR = nullptr;

void TestObjectView$UserJComponent::init$() {
	$JComponent::init$();
	$set(this, color, TestObjectView$UserJComponent::USER_COLOR);
}

$Color* TestObjectView$UserJComponent::getUserColor() {
	$nc($System::out)->println("[user component] get user color"_s);
	return this->color;
}

void TestObjectView$UserJComponent::setUserColor($Color* color) {
	$nc($System::out)->println("[user component] set user color"_s);
	$set(this, color, color);
}

void clinit$TestObjectView$UserJComponent($Class* class$) {
	$assignStatic(TestObjectView$UserJComponent::USER_COLOR, $new($Color, 10, 20, 30));
	$assignStatic(TestObjectView$UserJComponent::TEST_COLOR, $new($Color, 15, 25, 35));
}

TestObjectView$UserJComponent::TestObjectView$UserJComponent() {
}

$Class* TestObjectView$UserJComponent::load$($String* name, bool initialize) {
	$loadClass(TestObjectView$UserJComponent, name, initialize, &_TestObjectView$UserJComponent_ClassInfo_, clinit$TestObjectView$UserJComponent, allocate$TestObjectView$UserJComponent);
	return class$;
}

$Class* TestObjectView$UserJComponent::class$ = nullptr;