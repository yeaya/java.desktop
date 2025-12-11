#include <sun/lwawt/LWListPeer$ScrollableJList$1.h>

#include <javax/swing/DefaultListModel.h>
#include <sun/lwawt/LWListPeer$ScrollableJList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $LWListPeer$ScrollableJList = ::sun::lwawt::LWListPeer$ScrollableJList;

namespace sun {
	namespace lwawt {

$FieldInfo _LWListPeer$ScrollableJList$1_FieldInfo_[] = {
	{"this$1", "Lsun/lwawt/LWListPeer$ScrollableJList;", nullptr, $FINAL | $SYNTHETIC, $field(LWListPeer$ScrollableJList$1, this$1)},
	{}
};

$MethodInfo _LWListPeer$ScrollableJList$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWListPeer$ScrollableJList;)V", nullptr, 0, $method(static_cast<void(LWListPeer$ScrollableJList$1::*)($LWListPeer$ScrollableJList*)>(&LWListPeer$ScrollableJList$1::init$))},
	{"add", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _LWListPeer$ScrollableJList$1_EnclosingMethodInfo_ = {
	"sun.lwawt.LWListPeer$ScrollableJList",
	nullptr,
	nullptr
};

$InnerClassInfo _LWListPeer$ScrollableJList$1_InnerClassesInfo_[] = {
	{"sun.lwawt.LWListPeer$ScrollableJList", "sun.lwawt.LWListPeer", "ScrollableJList", $FINAL},
	{"sun.lwawt.LWListPeer$ScrollableJList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWListPeer$ScrollableJList$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.LWListPeer$ScrollableJList$1",
	"javax.swing.DefaultListModel",
	nullptr,
	_LWListPeer$ScrollableJList$1_FieldInfo_,
	_LWListPeer$ScrollableJList$1_MethodInfo_,
	"Ljavax/swing/DefaultListModel<Ljava/lang/String;>;",
	&_LWListPeer$ScrollableJList$1_EnclosingMethodInfo_,
	_LWListPeer$ScrollableJList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWListPeer"
};

$Object* allocate$LWListPeer$ScrollableJList$1($Class* clazz) {
	return $of($alloc(LWListPeer$ScrollableJList$1));
}

void LWListPeer$ScrollableJList$1::init$($LWListPeer$ScrollableJList* this$1) {
	$set(this, this$1, this$1);
	$DefaultListModel::init$();
}

void LWListPeer$ScrollableJList$1::add(int32_t index, $String* element) {
	if (index == -1) {
		addElement(element);
	} else {
		$DefaultListModel::add(index, element);
	}
}

void LWListPeer$ScrollableJList$1::add(int32_t index, Object$* element) {
	this->add(index, $cast($String, element));
}

LWListPeer$ScrollableJList$1::LWListPeer$ScrollableJList$1() {
}

$Class* LWListPeer$ScrollableJList$1::load$($String* name, bool initialize) {
	$loadClass(LWListPeer$ScrollableJList$1, name, initialize, &_LWListPeer$ScrollableJList$1_ClassInfo_, allocate$LWListPeer$ScrollableJList$1);
	return class$;
}

$Class* LWListPeer$ScrollableJList$1::class$ = nullptr;

	} // lwawt
} // sun