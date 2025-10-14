#include <bug5043626$2.h>

#include <bug5043626.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <jcpp.h>

using $bug5043626 = ::bug5043626;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;

$FieldInfo _bug5043626$2_FieldInfo_[] = {
	{"val$result", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug5043626$2, val$result)},
	{}
};

$MethodInfo _bug5043626$2_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(bug5043626$2::*)($StringArray*)>(&bug5043626$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug5043626$2_EnclosingMethodInfo_ = {
	"bug5043626",
	"getText",
	"()Ljava/lang/String;"
};

$InnerClassInfo _bug5043626$2_InnerClassesInfo_[] = {
	{"bug5043626$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug5043626$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug5043626$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug5043626$2_FieldInfo_,
	_bug5043626$2_MethodInfo_,
	nullptr,
	&_bug5043626$2_EnclosingMethodInfo_,
	_bug5043626$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug5043626"
};

$Object* allocate$bug5043626$2($Class* clazz) {
	return $of($alloc(bug5043626$2));
}

void bug5043626$2::init$($StringArray* val$result) {
	$set(this, val$result, val$result);
}

void bug5043626$2::run() {
	try {
		$init($bug5043626);
		$nc(this->val$result)->set(0, $($nc($($nc($bug5043626::doc)->getText(0, $nc($bug5043626::doc)->getLength())))->trim()));
	} catch ($BadLocationException&) {
		$var($BadLocationException, ex, $catch());
		ex->printStackTrace();
	}
}

bug5043626$2::bug5043626$2() {
}

$Class* bug5043626$2::load$($String* name, bool initialize) {
	$loadClass(bug5043626$2, name, initialize, &_bug5043626$2_ClassInfo_, allocate$bug5043626$2);
	return class$;
}

$Class* bug5043626$2::class$ = nullptr;