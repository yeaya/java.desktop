#include <bug6542335$3.h>

#include <bug6542335$MyScrollBarUI.h>
#include <bug6542335.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $bug6542335 = ::bug6542335;
using $bug6542335$MyScrollBarUI = ::bug6542335$MyScrollBarUI;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _bug6542335$3_FieldInfo_[] = {
	{"val$thumbBounds", "[Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(bug6542335$3, val$thumbBounds)},
	{}
};

$MethodInfo _bug6542335$3_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Rectangle;)V", "()V", 0, $method(static_cast<void(bug6542335$3::*)($RectangleArray*)>(&bug6542335$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6542335$3_EnclosingMethodInfo_ = {
	"bug6542335",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6542335$3_InnerClassesInfo_[] = {
	{"bug6542335$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6542335$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6542335$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6542335$3_FieldInfo_,
	_bug6542335$3_MethodInfo_,
	nullptr,
	&_bug6542335$3_EnclosingMethodInfo_,
	_bug6542335$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6542335"
};

$Object* allocate$bug6542335$3($Class* clazz) {
	return $of($alloc(bug6542335$3));
}

void bug6542335$3::init$($RectangleArray* val$thumbBounds) {
	$set(this, val$thumbBounds, val$thumbBounds);
}

void bug6542335$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6542335);
	$var($Rectangle, newThumbBounds, $nc($bug6542335::ui)->getThumbBounds());
	if (!$nc($nc(this->val$thumbBounds)->get(0))->equals(newThumbBounds)) {
		$throwNew($RuntimeException, $$str({"Test failed.\nOld bounds: "_s, $nc(this->val$thumbBounds)->get(0), "\nNew bounds: "_s, newThumbBounds}));
	}
}

bug6542335$3::bug6542335$3() {
}

$Class* bug6542335$3::load$($String* name, bool initialize) {
	$loadClass(bug6542335$3, name, initialize, &_bug6542335$3_ClassInfo_, allocate$bug6542335$3);
	return class$;
}

$Class* bug6542335$3::class$ = nullptr;