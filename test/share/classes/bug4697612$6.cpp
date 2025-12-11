#include <bug4697612$6.h>

#include <bug4697612.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextArea = ::javax::swing::JTextArea;
using $BadLocationException = ::javax::swing::text::BadLocationException;

$FieldInfo _bug4697612$6_FieldInfo_[] = {
	{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$6, val$result)},
	{}
};

$MethodInfo _bug4697612$6_MethodInfo_[] = {
	{"<init>", "([I)V", "()V", 0, $method(static_cast<void(bug4697612$6::*)($ints*)>(&bug4697612$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4697612$6_EnclosingMethodInfo_ = {
	"bug4697612",
	"getTextCaretHeight",
	"()I"
};

$InnerClassInfo _bug4697612$6_InnerClassesInfo_[] = {
	{"bug4697612$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4697612$6_ClassInfo_ = {
	$ACC_SUPER,
	"bug4697612$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4697612$6_FieldInfo_,
	_bug4697612$6_MethodInfo_,
	nullptr,
	&_bug4697612$6_EnclosingMethodInfo_,
	_bug4697612$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4697612"
};

$Object* allocate$bug4697612$6($Class* clazz) {
	return $of($alloc(bug4697612$6));
}

void bug4697612$6::init$($ints* val$result) {
	$set(this, val$result, val$result);
}

void bug4697612$6::run() {
	try {
		$init($bug4697612);
		int32_t pos0 = $nc($bug4697612::text)->getCaretPosition();
		$var($Rectangle, dotBounds, $nc($bug4697612::text)->modelToView(pos0));
		$nc(this->val$result)->set(0, $nc(dotBounds)->height);
	} catch ($BadLocationException& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
}

bug4697612$6::bug4697612$6() {
}

$Class* bug4697612$6::load$($String* name, bool initialize) {
	$loadClass(bug4697612$6, name, initialize, &_bug4697612$6_ClassInfo_, allocate$bug4697612$6);
	return class$;
}

$Class* bug4697612$6::class$ = nullptr;