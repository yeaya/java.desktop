#include <sun/lwawt/macosx/CPlatformWindow$8.h>

#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/Window.h>
#include <javax/swing/RootPaneContainer.h>
#include <sun/lwawt/LWWindowPeer$PeerType.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef FRAME

using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $LWWindowPeer$PeerType = ::sun::lwawt::LWWindowPeer$PeerType;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CPlatformWindow$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CPlatformWindow$8::*)($String*)>(&CPlatformWindow$8::init$))},
	{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$8_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _CPlatformWindow$8_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$8", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CPlatformWindow$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$8",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	nullptr,
	_CPlatformWindow$8_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Lsun/lwawt/macosx/CPlatformWindow;>;",
	&_CPlatformWindow$8_EnclosingMethodInfo_,
	_CPlatformWindow$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$8($Class* clazz) {
	return $of($alloc(CPlatformWindow$8));
}

void CPlatformWindow$8::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$8::applyProperty($CPlatformWindow* c, Object$* value) {
	$useLocalCurrentObjectStackCache();
	bool fullscrenable = $Boolean::parseBoolean($($nc($of(value))->toString()));
	$init($LWWindowPeer$PeerType);
	if ($instanceOf($RootPaneContainer, $nc(c)->target) && $nc($(c->getPeer()))->getPeerType() == $LWWindowPeer$PeerType::FRAME) {
		if (c->isInFullScreen && !fullscrenable) {
			c->toggleFullScreen();
		}
	}
	$nc(c)->setStyleBits(0x00800000, fullscrenable);
}

void CPlatformWindow$8::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$8::CPlatformWindow$8() {
}

$Class* CPlatformWindow$8::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$8, name, initialize, &_CPlatformWindow$8_ClassInfo_, allocate$CPlatformWindow$8);
	return class$;
}

$Class* CPlatformWindow$8::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun