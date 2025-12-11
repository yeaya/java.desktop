#include <javax/swing/JList$1.h>

#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;

namespace javax {
	namespace swing {

$FieldInfo _JList$1_FieldInfo_[] = {
	{"val$listData", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(JList$1, val$listData)},
	{}
};

$MethodInfo _JList$1_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(JList$1::*)($ObjectArray*)>(&JList$1::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JList$1_EnclosingMethodInfo_ = {
	"javax.swing.JList",
	"<init>",
	"([Ljava/lang/Object;)V"
};

$InnerClassInfo _JList$1_InnerClassesInfo_[] = {
	{"javax.swing.JList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JList$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JList$1",
	"javax.swing.AbstractListModel",
	nullptr,
	_JList$1_FieldInfo_,
	_JList$1_MethodInfo_,
	"Ljavax/swing/AbstractListModel<TE;>;",
	&_JList$1_EnclosingMethodInfo_,
	_JList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$1($Class* clazz) {
	return $of($alloc(JList$1));
}

void JList$1::init$($ObjectArray* val$listData) {
	$set(this, val$listData, val$listData);
	$AbstractListModel::init$();
}

int32_t JList$1::getSize() {
	return $nc(this->val$listData)->length;
}

$Object* JList$1::getElementAt(int32_t i) {
	return $of($nc(this->val$listData)->get(i));
}

JList$1::JList$1() {
}

$Class* JList$1::load$($String* name, bool initialize) {
	$loadClass(JList$1, name, initialize, &_JList$1_ClassInfo_, allocate$JList$1);
	return class$;
}

$Class* JList$1::class$ = nullptr;

	} // swing
} // javax