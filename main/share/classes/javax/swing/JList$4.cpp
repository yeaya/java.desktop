#include <javax/swing/JList$4.h>

#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {

$FieldInfo _JList$4_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JList;", nullptr, $FINAL | $SYNTHETIC, $field(JList$4, this$0)},
	{"val$listData", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(JList$4, val$listData)},
	{}
};

$MethodInfo _JList$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JList;[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(JList$4::*)($JList*,$ObjectArray*)>(&JList$4::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JList$4_EnclosingMethodInfo_ = {
	"javax.swing.JList",
	"setListData",
	"([Ljava/lang/Object;)V"
};

$InnerClassInfo _JList$4_InnerClassesInfo_[] = {
	{"javax.swing.JList$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JList$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JList$4",
	"javax.swing.AbstractListModel",
	nullptr,
	_JList$4_FieldInfo_,
	_JList$4_MethodInfo_,
	"Ljavax/swing/AbstractListModel<TE;>;",
	&_JList$4_EnclosingMethodInfo_,
	_JList$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$4($Class* clazz) {
	return $of($alloc(JList$4));
}

void JList$4::init$($JList* this$0, $ObjectArray* val$listData) {
	$set(this, this$0, this$0);
	$set(this, val$listData, val$listData);
	$AbstractListModel::init$();
}

int32_t JList$4::getSize() {
	return $nc(this->val$listData)->length;
}

$Object* JList$4::getElementAt(int32_t i) {
	return $of($nc(this->val$listData)->get(i));
}

JList$4::JList$4() {
}

$Class* JList$4::load$($String* name, bool initialize) {
	$loadClass(JList$4, name, initialize, &_JList$4_ClassInfo_, allocate$JList$4);
	return class$;
}

$Class* JList$4::class$ = nullptr;

	} // swing
} // javax