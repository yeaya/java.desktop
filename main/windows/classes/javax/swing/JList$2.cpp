#include <javax/swing/JList$2.h>

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

$FieldInfo _JList$2_FieldInfo_[] = {
	{"val$listData", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(JList$2, val$listData)},
	{}
};

$MethodInfo _JList$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Vector;)V", nullptr, 0, $method(static_cast<void(JList$2::*)($Vector*)>(&JList$2::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JList$2_EnclosingMethodInfo_ = {
	"javax.swing.JList",
	"<init>",
	"(Ljava/util/Vector;)V"
};

$InnerClassInfo _JList$2_InnerClassesInfo_[] = {
	{"javax.swing.JList$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JList$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JList$2",
	"javax.swing.AbstractListModel",
	nullptr,
	_JList$2_FieldInfo_,
	_JList$2_MethodInfo_,
	"Ljavax/swing/AbstractListModel<TE;>;",
	&_JList$2_EnclosingMethodInfo_,
	_JList$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$2($Class* clazz) {
	return $of($alloc(JList$2));
}

void JList$2::init$($Vector* val$listData) {
	$set(this, val$listData, val$listData);
	$AbstractListModel::init$();
}

int32_t JList$2::getSize() {
	return $nc(this->val$listData)->size();
}

$Object* JList$2::getElementAt(int32_t i) {
	return $of($nc(this->val$listData)->elementAt(i));
}

JList$2::JList$2() {
}

$Class* JList$2::load$($String* name, bool initialize) {
	$loadClass(JList$2, name, initialize, &_JList$2_ClassInfo_, allocate$JList$2);
	return class$;
}

$Class* JList$2::class$ = nullptr;

	} // swing
} // javax