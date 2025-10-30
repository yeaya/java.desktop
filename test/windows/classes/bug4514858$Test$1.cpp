#include <bug4514858$Test$1.h>

#include <bug4514858$Test.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $bug4514858$Test = ::bug4514858$Test;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _bug4514858$Test$1_FieldInfo_[] = {
	{"this$0", "Lbug4514858$Test;", nullptr, $FINAL | $SYNTHETIC, $field(bug4514858$Test$1, this$0)},
	{}
};

$MethodInfo _bug4514858$Test$1_MethodInfo_[] = {
	{"<init>", "(Lbug4514858$Test;)V", nullptr, 0, $method(static_cast<void(bug4514858$Test$1::*)($bug4514858$Test*)>(&bug4514858$Test$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4514858$Test$1_EnclosingMethodInfo_ = {
	"bug4514858$Test",
	"createTestFrame",
	"(Ljava/lang/String;Ljava/awt/Component;Ljava/lang/String;I)Ljavax/swing/JFrame;"
};

$InnerClassInfo _bug4514858$Test$1_InnerClassesInfo_[] = {
	{"bug4514858$Test", "bug4514858", "Test", $STATIC},
	{"bug4514858$Test$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4514858$Test$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4514858$Test$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_bug4514858$Test$1_FieldInfo_,
	_bug4514858$Test$1_MethodInfo_,
	nullptr,
	&_bug4514858$Test$1_EnclosingMethodInfo_,
	_bug4514858$Test$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4514858"
};

$Object* allocate$bug4514858$Test$1($Class* clazz) {
	return $of($alloc(bug4514858$Test$1));
}

void bug4514858$Test$1::init$($bug4514858$Test* this$0) {
	$set(this, this$0, this$0);
}

void bug4514858$Test$1::actionPerformed($ActionEvent* event) {
	{
		$var($String, s6768$, $nc(event)->getActionCommand());
		int32_t tmp6768$ = -1;
		switch ($nc(s6768$)->hashCode()) {
		case 0x0025D831:
			{
				if (s6768$->equals("Pass"_s)) {
					tmp6768$ = 0;
				}
				break;
			}
		}
		switch (tmp6768$) {
		case 0:
			{
				this->this$0->pass();
				break;
			}
		default:
			{
				$throwNew($RuntimeException, "Test failed."_s);
			}
		}
	}
}

bug4514858$Test$1::bug4514858$Test$1() {
}

$Class* bug4514858$Test$1::load$($String* name, bool initialize) {
	$loadClass(bug4514858$Test$1, name, initialize, &_bug4514858$Test$1_ClassInfo_, allocate$bug4514858$Test$1);
	return class$;
}

$Class* bug4514858$Test$1::class$ = nullptr;