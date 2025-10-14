#include <Test4319113$1.h>

#include <Test4319113$1$1.h>
#include <Test4319113.h>
#include <java/awt/event/ItemEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test4319113 = ::Test4319113;
using $Test4319113$1$1 = ::Test4319113$1$1;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _Test4319113$1_FieldInfo_[] = {
	{"this$0", "LTest4319113;", nullptr, $FINAL | $SYNTHETIC, $field(Test4319113$1, this$0)},
	{}
};

$MethodInfo _Test4319113$1_MethodInfo_[] = {
	{"<init>", "(LTest4319113;)V", nullptr, 0, $method(static_cast<void(Test4319113$1::*)($Test4319113*)>(&Test4319113$1::init$))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test4319113$1_EnclosingMethodInfo_ = {
	"Test4319113",
	"show",
	"(Ljava/awt/Window;)V"
};

$InnerClassInfo _Test4319113$1_InnerClassesInfo_[] = {
	{"Test4319113$1", nullptr, nullptr, 0},
	{"Test4319113$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test4319113$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test4319113$1",
	"java.lang.Object",
	"java.awt.event.ItemListener",
	_Test4319113$1_FieldInfo_,
	_Test4319113$1_MethodInfo_,
	nullptr,
	&_Test4319113$1_EnclosingMethodInfo_,
	_Test4319113$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test4319113"
};

$Object* allocate$Test4319113$1($Class* clazz) {
	return $of($alloc(Test4319113$1));
}

void Test4319113$1::init$($Test4319113* this$0) {
	$set(this, this$0, this$0);
}

void Test4319113$1::itemStateChanged($ItemEvent* itemEvent) {
	if ($nc(itemEvent)->getStateChange() == 1) {
		$SwingUtilities::invokeLater($$new($Test4319113$1$1, this));
	}
}

Test4319113$1::Test4319113$1() {
}

$Class* Test4319113$1::load$($String* name, bool initialize) {
	$loadClass(Test4319113$1, name, initialize, &_Test4319113$1_ClassInfo_, allocate$Test4319113$1);
	return class$;
}

$Class* Test4319113$1::class$ = nullptr;