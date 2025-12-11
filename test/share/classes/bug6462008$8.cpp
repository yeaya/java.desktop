#include <bug6462008$8.h>

#include <bug6462008.h>
#include <jcpp.h>

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug6462008$8_FieldInfo_[] = {
	{"val$sels", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$8, val$sels)},
	{"val$lead", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$8, val$lead)},
	{"val$anchor", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$8, val$anchor)},
	{}
};

$MethodInfo _bug6462008$8_MethodInfo_[] = {
	{"<init>", "(II[I)V", "()V", 0, $method(static_cast<void(bug6462008$8::*)(int32_t,int32_t,$ints*)>(&bug6462008$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6462008$8_EnclosingMethodInfo_ = {
	"bug6462008",
	"checkSelectionAL",
	"(II[I)V"
};

$InnerClassInfo _bug6462008$8_InnerClassesInfo_[] = {
	{"bug6462008$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008$8_ClassInfo_ = {
	$ACC_SUPER,
	"bug6462008$8",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6462008$8_FieldInfo_,
	_bug6462008$8_MethodInfo_,
	nullptr,
	&_bug6462008$8_EnclosingMethodInfo_,
	_bug6462008$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6462008"
};

$Object* allocate$bug6462008$8($Class* clazz) {
	return $of($alloc(bug6462008$8));
}

void bug6462008$8::init$(int32_t val$anchor, int32_t val$lead, $ints* val$sels) {
	this->val$anchor = val$anchor;
	this->val$lead = val$lead;
	$set(this, val$sels, val$sels);
}

void bug6462008$8::run() {
	$bug6462008::checkSelectionNonThreadSafe(this->val$anchor, this->val$lead, this->val$sels);
}

bug6462008$8::bug6462008$8() {
}

$Class* bug6462008$8::load$($String* name, bool initialize) {
	$loadClass(bug6462008$8, name, initialize, &_bug6462008$8_ClassInfo_, allocate$bug6462008$8);
	return class$;
}

$Class* bug6462008$8::class$ = nullptr;