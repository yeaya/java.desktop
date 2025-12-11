#include <sun/lwawt/macosx/LWCToolkit$3.h>

#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _LWCToolkit$3_FieldInfo_[] = {
	{"val$b", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(LWCToolkit$3, val$b)},
	{"val$a", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(LWCToolkit$3, val$a)},
	{"val$ret", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(LWCToolkit$3, val$ret)},
	{}
};

$MethodInfo _LWCToolkit$3_MethodInfo_[] = {
	{"<init>", "([ZLjava/lang/Object;Ljava/lang/Object;)V", "()V", 0, $method(static_cast<void(LWCToolkit$3::*)($booleans*,Object$*,Object$*)>(&LWCToolkit$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWCToolkit$3_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.LWCToolkit",
	"doEquals",
	"(Ljava/lang/Object;Ljava/lang/Object;Ljava/awt/Component;)Z"
};

$InnerClassInfo _LWCToolkit$3_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.LWCToolkit$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCToolkit$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.LWCToolkit$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_LWCToolkit$3_FieldInfo_,
	_LWCToolkit$3_MethodInfo_,
	nullptr,
	&_LWCToolkit$3_EnclosingMethodInfo_,
	_LWCToolkit$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.LWCToolkit"
};

$Object* allocate$LWCToolkit$3($Class* clazz) {
	return $of($alloc(LWCToolkit$3));
}

void LWCToolkit$3::init$($booleans* val$ret, Object$* val$a, Object$* val$b) {
	$set(this, val$ret, val$ret);
	$set(this, val$a, val$a);
	$set(this, val$b, val$b);
}

void LWCToolkit$3::run() {
	$synchronized(this->val$ret) {
		$nc(this->val$ret)->set(0, $nc($of(this->val$a))->equals(this->val$b));
	}
}

LWCToolkit$3::LWCToolkit$3() {
}

$Class* LWCToolkit$3::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$3, name, initialize, &_LWCToolkit$3_ClassInfo_, allocate$LWCToolkit$3);
	return class$;
}

$Class* LWCToolkit$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun