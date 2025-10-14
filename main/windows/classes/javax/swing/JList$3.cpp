#include <javax/swing/JList$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {

$MethodInfo _JList$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JList$3::*)()>(&JList$3::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JList$3_EnclosingMethodInfo_ = {
	"javax.swing.JList",
	"<init>",
	"()V"
};

$InnerClassInfo _JList$3_InnerClassesInfo_[] = {
	{"javax.swing.JList$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JList$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JList$3",
	"javax.swing.AbstractListModel",
	nullptr,
	nullptr,
	_JList$3_MethodInfo_,
	"Ljavax/swing/AbstractListModel<TE;>;",
	&_JList$3_EnclosingMethodInfo_,
	_JList$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$3($Class* clazz) {
	return $of($alloc(JList$3));
}

void JList$3::init$() {
	$AbstractListModel::init$();
}

int32_t JList$3::getSize() {
	return 0;
}

$Object* JList$3::getElementAt(int32_t i) {
	$throwNew($IndexOutOfBoundsException, "No Data Model"_s);
	$shouldNotReachHere();
}

JList$3::JList$3() {
}

$Class* JList$3::load$($String* name, bool initialize) {
	$loadClass(JList$3, name, initialize, &_JList$3_ClassInfo_, allocate$JList$3);
	return class$;
}

$Class* JList$3::class$ = nullptr;

	} // swing
} // javax