#include <javax/swing/Popup$DefaultFrame.h>

#include <java/awt/Frame.h>
#include <javax/swing/Popup.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;

namespace javax {
	namespace swing {

$MethodInfo _Popup$DefaultFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Popup$DefaultFrame::*)()>(&Popup$DefaultFrame::init$))},
	{}
};

$InnerClassInfo _Popup$DefaultFrame_InnerClassesInfo_[] = {
	{"javax.swing.Popup$DefaultFrame", "javax.swing.Popup", "DefaultFrame", $STATIC},
	{}
};

$ClassInfo _Popup$DefaultFrame_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Popup$DefaultFrame",
	"java.awt.Frame",
	nullptr,
	nullptr,
	_Popup$DefaultFrame_MethodInfo_,
	nullptr,
	nullptr,
	_Popup$DefaultFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Popup"
};

$Object* allocate$Popup$DefaultFrame($Class* clazz) {
	return $of($alloc(Popup$DefaultFrame));
}

void Popup$DefaultFrame::init$() {
	$Frame::init$();
}

Popup$DefaultFrame::Popup$DefaultFrame() {
}

$Class* Popup$DefaultFrame::load$($String* name, bool initialize) {
	$loadClass(Popup$DefaultFrame, name, initialize, &_Popup$DefaultFrame_ClassInfo_, allocate$Popup$DefaultFrame);
	return class$;
}

$Class* Popup$DefaultFrame::class$ = nullptr;

	} // swing
} // javax