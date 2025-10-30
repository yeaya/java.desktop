#include <bug6462008$7.h>

#include <bug6462008.h>
#include <jcpp.h>

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _bug6462008$7_FieldInfo_[] = {
	{"val$anchorLeadValue", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$7, val$anchorLeadValue)},
	{}
};

$MethodInfo _bug6462008$7_MethodInfo_[] = {
	{"<init>", "(I)V", "()V", 0, $method(static_cast<void(bug6462008$7::*)(int32_t)>(&bug6462008$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6462008$7_EnclosingMethodInfo_ = {
	"bug6462008",
	"setAnchorLead",
	"(I)V"
};

$InnerClassInfo _bug6462008$7_InnerClassesInfo_[] = {
	{"bug6462008$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008$7_ClassInfo_ = {
	$ACC_SUPER,
	"bug6462008$7",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6462008$7_FieldInfo_,
	_bug6462008$7_MethodInfo_,
	nullptr,
	&_bug6462008$7_EnclosingMethodInfo_,
	_bug6462008$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6462008"
};

$Object* allocate$bug6462008$7($Class* clazz) {
	return $of($alloc(bug6462008$7));
}

void bug6462008$7::init$(int32_t val$anchorLeadValue) {
	this->val$anchorLeadValue = val$anchorLeadValue;
}

void bug6462008$7::run() {
	$init($bug6462008);
	$bug6462008::anchorLead = this->val$anchorLeadValue;
	$bug6462008::setAnchorLeadNonThreadSafe();
}

bug6462008$7::bug6462008$7() {
}

$Class* bug6462008$7::load$($String* name, bool initialize) {
	$loadClass(bug6462008$7, name, initialize, &_bug6462008$7_ClassInfo_, allocate$bug6462008$7);
	return class$;
}

$Class* bug6462008$7::class$ = nullptr;