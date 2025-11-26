#include <bug6823603$2.h>

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

$MethodInfo _bug6823603$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6823603$2::*)()>(&bug6823603$2::init$))},
	{"getElementAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6823603$2_EnclosingMethodInfo_ = {
	"bug6823603",
	"testGenericSignatures",
	"()V"
};

$InnerClassInfo _bug6823603$2_InnerClassesInfo_[] = {
	{"bug6823603$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6823603$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6823603$2",
	"javax.swing.AbstractListModel",
	nullptr,
	nullptr,
	_bug6823603$2_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/lang/String;>;",
	&_bug6823603$2_EnclosingMethodInfo_,
	_bug6823603$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6823603"
};

$Object* allocate$bug6823603$2($Class* clazz) {
	return $of($alloc(bug6823603$2));
}

void bug6823603$2::init$() {
	$AbstractListModel::init$();
}

int32_t bug6823603$2::getSize() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* bug6823603$2::getElementAt(int32_t index) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bug6823603$2::bug6823603$2() {
}

$Class* bug6823603$2::load$($String* name, bool initialize) {
	$loadClass(bug6823603$2, name, initialize, &_bug6823603$2_ClassInfo_, allocate$bug6823603$2);
	return class$;
}

$Class* bug6823603$2::class$ = nullptr;