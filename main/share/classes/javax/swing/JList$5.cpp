#include <javax/swing/JList$5.h>

#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {

$FieldInfo _JList$5_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JList;", nullptr, $FINAL | $SYNTHETIC, $field(JList$5, this$0)},
	{"val$listData", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(JList$5, val$listData)},
	{}
};

$MethodInfo _JList$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JList;Ljava/util/Vector;)V", nullptr, 0, $method(static_cast<void(JList$5::*)($JList*,$Vector*)>(&JList$5::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JList$5_EnclosingMethodInfo_ = {
	"javax.swing.JList",
	"setListData",
	"(Ljava/util/Vector;)V"
};

$InnerClassInfo _JList$5_InnerClassesInfo_[] = {
	{"javax.swing.JList$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JList$5_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JList$5",
	"javax.swing.AbstractListModel",
	nullptr,
	_JList$5_FieldInfo_,
	_JList$5_MethodInfo_,
	"Ljavax/swing/AbstractListModel<TE;>;",
	&_JList$5_EnclosingMethodInfo_,
	_JList$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$5($Class* clazz) {
	return $of($alloc(JList$5));
}

void JList$5::init$($JList* this$0, $Vector* val$listData) {
	$set(this, this$0, this$0);
	$set(this, val$listData, val$listData);
	$AbstractListModel::init$();
}

int32_t JList$5::getSize() {
	return $nc(this->val$listData)->size();
}

$Object* JList$5::getElementAt(int32_t i) {
	return $of($nc(this->val$listData)->elementAt(i));
}

JList$5::JList$5() {
}

$Class* JList$5::load$($String* name, bool initialize) {
	$loadClass(JList$5, name, initialize, &_JList$5_ClassInfo_, allocate$JList$5);
	return class$;
}

$Class* JList$5::class$ = nullptr;

	} // swing
} // javax