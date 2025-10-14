#include <TestTransferHandler$UserJComponent.h>

#include <TestTransferHandler.h>
#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef TEST_COLOR
#undef USER_COLOR

using $TestTransferHandler = ::TestTransferHandler;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

$FieldInfo _TestTransferHandler$UserJComponent_FieldInfo_[] = {
	{"USER_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestTransferHandler$UserJComponent, USER_COLOR)},
	{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestTransferHandler$UserJComponent, TEST_COLOR)},
	{"color", "Ljava/awt/Color;", nullptr, 0, $field(TestTransferHandler$UserJComponent, color)},
	{}
};

$MethodInfo _TestTransferHandler$UserJComponent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTransferHandler$UserJComponent::*)()>(&TestTransferHandler$UserJComponent::init$))},
	{"getUserColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"setUserColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestTransferHandler$UserJComponent_InnerClassesInfo_[] = {
	{"TestTransferHandler$UserJComponent", "TestTransferHandler", "UserJComponent", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestTransferHandler$UserJComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestTransferHandler$UserJComponent",
	"javax.swing.JComponent",
	nullptr,
	_TestTransferHandler$UserJComponent_FieldInfo_,
	_TestTransferHandler$UserJComponent_MethodInfo_,
	nullptr,
	nullptr,
	_TestTransferHandler$UserJComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestTransferHandler"
};

$Object* allocate$TestTransferHandler$UserJComponent($Class* clazz) {
	return $of($alloc(TestTransferHandler$UserJComponent));
}

$Color* TestTransferHandler$UserJComponent::USER_COLOR = nullptr;
$Color* TestTransferHandler$UserJComponent::TEST_COLOR = nullptr;

void TestTransferHandler$UserJComponent::init$() {
	$JComponent::init$();
	$set(this, color, TestTransferHandler$UserJComponent::USER_COLOR);
}

$Color* TestTransferHandler$UserJComponent::getUserColor() {
	return this->color;
}

void TestTransferHandler$UserJComponent::setUserColor($Color* color) {
	$set(this, color, color);
}

void clinit$TestTransferHandler$UserJComponent($Class* class$) {
	$assignStatic(TestTransferHandler$UserJComponent::USER_COLOR, $new($Color, 10, 20, 30));
	$assignStatic(TestTransferHandler$UserJComponent::TEST_COLOR, $new($Color, 15, 25, 35));
}

TestTransferHandler$UserJComponent::TestTransferHandler$UserJComponent() {
}

$Class* TestTransferHandler$UserJComponent::load$($String* name, bool initialize) {
	$loadClass(TestTransferHandler$UserJComponent, name, initialize, &_TestTransferHandler$UserJComponent_ClassInfo_, clinit$TestTransferHandler$UserJComponent, allocate$TestTransferHandler$UserJComponent);
	return class$;
}

$Class* TestTransferHandler$UserJComponent::class$ = nullptr;