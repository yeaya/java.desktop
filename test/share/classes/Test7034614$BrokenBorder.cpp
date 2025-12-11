#include <Test7034614$BrokenBorder.h>

#include <Test7034614.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Test7034614$BrokenBorder_FieldInfo_[] = {
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(Test7034614$BrokenBorder, insets)},
	{}
};

$MethodInfo _Test7034614$BrokenBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Test7034614$BrokenBorder::*)()>(&Test7034614$BrokenBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljava/awt/Insets;)V", nullptr, $PRIVATE, $method(static_cast<void(Test7034614$BrokenBorder::*)($Insets*)>(&Test7034614$BrokenBorder::validate))},
	{}
};

$InnerClassInfo _Test7034614$BrokenBorder_InnerClassesInfo_[] = {
	{"Test7034614$BrokenBorder", "Test7034614", "BrokenBorder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Test7034614$BrokenBorder_ClassInfo_ = {
	$ACC_SUPER,
	"Test7034614$BrokenBorder",
	"java.awt.Component",
	"javax.swing.border.Border",
	_Test7034614$BrokenBorder_FieldInfo_,
	_Test7034614$BrokenBorder_MethodInfo_,
	nullptr,
	nullptr,
	_Test7034614$BrokenBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7034614"
};

$Object* allocate$Test7034614$BrokenBorder($Class* clazz) {
	return $of($alloc(Test7034614$BrokenBorder));
}

$String* Test7034614$BrokenBorder::toString() {
	 return this->$Component::toString();
}

int32_t Test7034614$BrokenBorder::hashCode() {
	 return this->$Component::hashCode();
}

bool Test7034614$BrokenBorder::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* Test7034614$BrokenBorder::clone() {
	 return this->$Component::clone();
}

void Test7034614$BrokenBorder::finalize() {
	this->$Component::finalize();
}

void Test7034614$BrokenBorder::init$() {
	$Component::init$();
	$set(this, insets, $new($Insets, 1, 2, 3, 4));
}

void Test7034614$BrokenBorder::validate($Insets* insets) {
	if (!$nc(this->insets)->equals(insets)) {
		$throwNew($Error, "unexpected change"_s);
	}
}

$Insets* Test7034614$BrokenBorder::getBorderInsets($Component* c) {
	return this->insets;
}

bool Test7034614$BrokenBorder::isBorderOpaque() {
	return false;
}

void Test7034614$BrokenBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

Test7034614$BrokenBorder::Test7034614$BrokenBorder() {
}

$Class* Test7034614$BrokenBorder::load$($String* name, bool initialize) {
	$loadClass(Test7034614$BrokenBorder, name, initialize, &_Test7034614$BrokenBorder_ClassInfo_, allocate$Test7034614$BrokenBorder);
	return class$;
}

$Class* Test7034614$BrokenBorder::class$ = nullptr;