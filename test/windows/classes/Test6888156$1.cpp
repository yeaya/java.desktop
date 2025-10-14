#include <Test6888156$1.h>

#include <Test6888156.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Test6888156 = ::Test6888156;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

$FieldInfo _Test6888156$1_FieldInfo_[] = {
	{"this$0", "LTest6888156;", nullptr, $FINAL | $SYNTHETIC, $field(Test6888156$1, this$0)},
	{}
};

$MethodInfo _Test6888156$1_MethodInfo_[] = {
	{"<init>", "(LTest6888156;)V", nullptr, 0, $method(static_cast<void(Test6888156$1::*)($Test6888156*)>(&Test6888156$1::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6888156$1_EnclosingMethodInfo_ = {
	"Test6888156",
	nullptr,
	nullptr
};

$InnerClassInfo _Test6888156$1_InnerClassesInfo_[] = {
	{"Test6888156$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6888156$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6888156$1",
	"java.lang.Object",
	"javax.swing.Icon",
	_Test6888156$1_FieldInfo_,
	_Test6888156$1_MethodInfo_,
	nullptr,
	&_Test6888156$1_EnclosingMethodInfo_,
	_Test6888156$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6888156"
};

$Object* allocate$Test6888156$1($Class* clazz) {
	return $of($alloc(Test6888156$1));
}

void Test6888156$1::init$($Test6888156* this$0) {
	$set(this, this$0, this$0);
}

int32_t Test6888156$1::getIconWidth() {
	return 24;
}

int32_t Test6888156$1::getIconHeight() {
	return 24;
}

void Test6888156$1::paintIcon($Component* c, $Graphics* g, int32_t w, int32_t h) {
}

Test6888156$1::Test6888156$1() {
}

$Class* Test6888156$1::load$($String* name, bool initialize) {
	$loadClass(Test6888156$1, name, initialize, &_Test6888156$1_ClassInfo_, allocate$Test6888156$1);
	return class$;
}

$Class* Test6888156$1::class$ = nullptr;