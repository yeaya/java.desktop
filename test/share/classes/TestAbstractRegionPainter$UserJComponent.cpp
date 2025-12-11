#include <TestAbstractRegionPainter$UserJComponent.h>

#include <TestAbstractRegionPainter.h>
#include <java/awt/Color.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef TEST_COLOR
#undef USER_COLOR

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

$FieldInfo _TestAbstractRegionPainter$UserJComponent_FieldInfo_[] = {
	{"USER_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestAbstractRegionPainter$UserJComponent, USER_COLOR)},
	{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestAbstractRegionPainter$UserJComponent, TEST_COLOR)},
	{"color", "Ljava/awt/Color;", nullptr, 0, $field(TestAbstractRegionPainter$UserJComponent, color)},
	{}
};

$MethodInfo _TestAbstractRegionPainter$UserJComponent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestAbstractRegionPainter$UserJComponent::*)()>(&TestAbstractRegionPainter$UserJComponent::init$))},
	{"getUserColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"setUserColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestAbstractRegionPainter$UserJComponent_InnerClassesInfo_[] = {
	{"TestAbstractRegionPainter$UserJComponent", "TestAbstractRegionPainter", "UserJComponent", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestAbstractRegionPainter$UserJComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestAbstractRegionPainter$UserJComponent",
	"javax.swing.JComponent",
	nullptr,
	_TestAbstractRegionPainter$UserJComponent_FieldInfo_,
	_TestAbstractRegionPainter$UserJComponent_MethodInfo_,
	nullptr,
	nullptr,
	_TestAbstractRegionPainter$UserJComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestAbstractRegionPainter"
};

$Object* allocate$TestAbstractRegionPainter$UserJComponent($Class* clazz) {
	return $of($alloc(TestAbstractRegionPainter$UserJComponent));
}

$Color* TestAbstractRegionPainter$UserJComponent::USER_COLOR = nullptr;
$Color* TestAbstractRegionPainter$UserJComponent::TEST_COLOR = nullptr;

void TestAbstractRegionPainter$UserJComponent::init$() {
	$JComponent::init$();
	$set(this, color, TestAbstractRegionPainter$UserJComponent::USER_COLOR);
}

$Color* TestAbstractRegionPainter$UserJComponent::getUserColor() {
	return this->color;
}

void TestAbstractRegionPainter$UserJComponent::setUserColor($Color* color) {
	$set(this, color, color);
}

void clinit$TestAbstractRegionPainter$UserJComponent($Class* class$) {
	$assignStatic(TestAbstractRegionPainter$UserJComponent::USER_COLOR, $new($Color, 10, 20, 30));
	$assignStatic(TestAbstractRegionPainter$UserJComponent::TEST_COLOR, $new($Color, 15, 25, 35));
}

TestAbstractRegionPainter$UserJComponent::TestAbstractRegionPainter$UserJComponent() {
}

$Class* TestAbstractRegionPainter$UserJComponent::load$($String* name, bool initialize) {
	$loadClass(TestAbstractRegionPainter$UserJComponent, name, initialize, &_TestAbstractRegionPainter$UserJComponent_ClassInfo_, clinit$TestAbstractRegionPainter$UserJComponent, allocate$TestAbstractRegionPainter$UserJComponent);
	return class$;
}

$Class* TestAbstractRegionPainter$UserJComponent::class$ = nullptr;