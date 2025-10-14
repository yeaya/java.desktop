#include <bug6823603$1.h>

#include <bug6823603.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractListModel.h>
#include <jcpp.h>

using $bug6823603 = ::bug6823603;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractListModel = ::javax::swing::AbstractListModel;

$MethodInfo _bug6823603$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6823603$1::*)()>(&bug6823603$1::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6823603$1_EnclosingMethodInfo_ = {
	"bug6823603",
	"testRawSignatures",
	"()V"
};

$InnerClassInfo _bug6823603$1_InnerClassesInfo_[] = {
	{"bug6823603$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6823603$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6823603$1",
	"javax.swing.AbstractListModel",
	nullptr,
	nullptr,
	_bug6823603$1_MethodInfo_,
	nullptr,
	&_bug6823603$1_EnclosingMethodInfo_,
	_bug6823603$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6823603"
};

$Object* allocate$bug6823603$1($Class* clazz) {
	return $of($alloc(bug6823603$1));
}

void bug6823603$1::init$() {
	$AbstractListModel::init$();
}

int32_t bug6823603$1::getSize() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* bug6823603$1::getElementAt(int32_t index) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bug6823603$1::bug6823603$1() {
}

$Class* bug6823603$1::load$($String* name, bool initialize) {
	$loadClass(bug6823603$1, name, initialize, &_bug6823603$1_ClassInfo_, allocate$bug6823603$1);
	return class$;
}

$Class* bug6823603$1::class$ = nullptr;