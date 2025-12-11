#include <sun/lwawt/LWButtonPeer$JButtonDelegate.h>

#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <javax/swing/JButton.h>
#include <sun/lwawt/LWButtonPeer.h>
#include <jcpp.h>

using $Button = ::java::awt::Button;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $LWButtonPeer = ::sun::lwawt::LWButtonPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWButtonPeer$JButtonDelegate_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWButtonPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWButtonPeer$JButtonDelegate, this$0)},
	{}
};

$MethodInfo _LWButtonPeer$JButtonDelegate_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWButtonPeer;)V", nullptr, $PRIVATE, $method(static_cast<void(LWButtonPeer$JButtonDelegate::*)($LWButtonPeer*)>(&LWButtonPeer$JButtonDelegate::init$))},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWButtonPeer$JButtonDelegate_InnerClassesInfo_[] = {
	{"sun.lwawt.LWButtonPeer$JButtonDelegate", "sun.lwawt.LWButtonPeer", "JButtonDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWButtonPeer$JButtonDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWButtonPeer$JButtonDelegate",
	"javax.swing.JButton",
	nullptr,
	_LWButtonPeer$JButtonDelegate_FieldInfo_,
	_LWButtonPeer$JButtonDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_LWButtonPeer$JButtonDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWButtonPeer"
};

$Object* allocate$LWButtonPeer$JButtonDelegate($Class* clazz) {
	return $of($alloc(LWButtonPeer$JButtonDelegate));
}

void LWButtonPeer$JButtonDelegate::init$($LWButtonPeer* this$0) {
	$set(this, this$0, this$0);
	$JButton::init$();
}

bool LWButtonPeer$JButtonDelegate::hasFocus() {
	return $nc(($cast($Button, $(this->this$0->getTarget()))))->hasFocus();
}

LWButtonPeer$JButtonDelegate::LWButtonPeer$JButtonDelegate() {
}

$Class* LWButtonPeer$JButtonDelegate::load$($String* name, bool initialize) {
	$loadClass(LWButtonPeer$JButtonDelegate, name, initialize, &_LWButtonPeer$JButtonDelegate_ClassInfo_, allocate$LWButtonPeer$JButtonDelegate);
	return class$;
}

$Class* LWButtonPeer$JButtonDelegate::class$ = nullptr;

	} // lwawt
} // sun