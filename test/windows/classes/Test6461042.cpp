#include <Test6461042.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;

$MethodInfo _Test6461042_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6461042::*)()>(&Test6461042::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6461042::main))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6461042_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6461042",
	"javax.swing.JComponent",
	"javax.swing.border.Border",
	nullptr,
	_Test6461042_MethodInfo_
};

$Object* allocate$Test6461042($Class* clazz) {
	return $of($alloc(Test6461042));
}

$String* Test6461042::toString() {
	 return this->$JComponent::toString();
}

int32_t Test6461042::hashCode() {
	 return this->$JComponent::hashCode();
}

bool Test6461042::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* Test6461042::clone() {
	 return this->$JComponent::clone();
}

void Test6461042::finalize() {
	this->$JComponent::finalize();
}

void Test6461042::main($StringArray* args) {
	$init(Test6461042);
	$$new(Test6461042)->toString();
}

void Test6461042::init$() {
	$JComponent::init$();
	setBorder(this);
}

void Test6461042::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
}

$Insets* Test6461042::getBorderInsets($Component* c) {
	return nullptr;
}

bool Test6461042::isBorderOpaque() {
	return false;
}

Test6461042::Test6461042() {
}

$Class* Test6461042::load$($String* name, bool initialize) {
	$loadClass(Test6461042, name, initialize, &_Test6461042_ClassInfo_, allocate$Test6461042);
	return class$;
}

$Class* Test6461042::class$ = nullptr;