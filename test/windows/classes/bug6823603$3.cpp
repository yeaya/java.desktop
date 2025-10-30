#include <bug6823603$3.h>

#include <bug6823603.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/swing/AbstractListModel.h>
#include <jcpp.h>

using $bug6823603 = ::bug6823603;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractListModel = ::javax::swing::AbstractListModel;

$MethodInfo _bug6823603$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6823603$3::*)()>(&bug6823603$3::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6823603$3_EnclosingMethodInfo_ = {
	"bug6823603",
	"testGenericSignatures",
	"()V"
};

$InnerClassInfo _bug6823603$3_InnerClassesInfo_[] = {
	{"bug6823603$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6823603$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6823603$3",
	"javax.swing.AbstractListModel",
	nullptr,
	nullptr,
	_bug6823603$3_MethodInfo_,
	"Ljavax/swing/AbstractListModel<TE;>;",
	&_bug6823603$3_EnclosingMethodInfo_,
	_bug6823603$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6823603"
};

$Object* allocate$bug6823603$3($Class* clazz) {
	return $of($alloc(bug6823603$3));
}

void bug6823603$3::init$() {
	$AbstractListModel::init$();
}

int32_t bug6823603$3::getSize() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* bug6823603$3::getElementAt(int32_t index) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bug6823603$3::bug6823603$3() {
}

$Class* bug6823603$3::load$($String* name, bool initialize) {
	$loadClass(bug6823603$3, name, initialize, &_bug6823603$3_ClassInfo_, allocate$bug6823603$3);
	return class$;
}

$Class* bug6823603$3::class$ = nullptr;