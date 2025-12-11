#include <sun/lwawt/macosx/CPlatformWindow$14.h>

#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/peer/ComponentPeer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CPlatformWindow$14_MethodInfo_[] = {
	{"<init>", "([Lcom/apple/laf/ClientPropertyApplicator$Property;)V", nullptr, $TRANSIENT, $method(static_cast<void(CPlatformWindow$14::*)($ClientPropertyApplicator$PropertyArray*)>(&CPlatformWindow$14::init$))},
	{"convertJComponentToTarget", "(Ljavax/swing/JRootPane;)Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $PUBLIC},
	{"convertJComponentToTarget", "(Ljavax/swing/JComponent;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$14_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _CPlatformWindow$14_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$14", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPlatformWindow$14_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$14",
	"com.apple.laf.ClientPropertyApplicator",
	nullptr,
	nullptr,
	_CPlatformWindow$14_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/JRootPane;Lsun/lwawt/macosx/CPlatformWindow;>;",
	&_CPlatformWindow$14_EnclosingMethodInfo_,
	_CPlatformWindow$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$14($Class* clazz) {
	return $of($alloc(CPlatformWindow$14));
}

void CPlatformWindow$14::init$($ClientPropertyApplicator$PropertyArray* propertyList) {
	$ClientPropertyApplicator::init$(propertyList);
}

$CPlatformWindow* CPlatformWindow$14::convertJComponentToTarget($JRootPane* p) {
	$useLocalCurrentObjectStackCache();
	$var($Component, root, $SwingUtilities::getRoot(p));
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	if (root == nullptr || $nc(acc)->getPeer(root) == nullptr) {
		return nullptr;
	}
	return $cast($CPlatformWindow, $nc(($cast($LWWindowPeer, $($nc(acc)->getPeer(root)))))->getPlatformWindow());
}

$Object* CPlatformWindow$14::convertJComponentToTarget($JComponent* p) {
	return $of(this->convertJComponentToTarget($cast($JRootPane, p)));
}

CPlatformWindow$14::CPlatformWindow$14() {
}

$Class* CPlatformWindow$14::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$14, name, initialize, &_CPlatformWindow$14_ClassInfo_, allocate$CPlatformWindow$14);
	return class$;
}

$Class* CPlatformWindow$14::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun