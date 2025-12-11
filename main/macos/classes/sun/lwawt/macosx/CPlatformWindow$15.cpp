#include <sun/lwawt/macosx/CPlatformWindow$15.h>

#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef CLIENT_PROPERTY_APPLICATOR

using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPlatformWindow$15_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $FINAL | $SYNTHETIC, $field(CPlatformWindow$15, this$0)},
	{"val$rootpane", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(CPlatformWindow$15, val$rootpane)},
	{}
};

$MethodInfo _CPlatformWindow$15_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;Ljavax/swing/JRootPane;)V", "()V", 0, $method(static_cast<void(CPlatformWindow$15::*)($CPlatformWindow*,$JRootPane*)>(&CPlatformWindow$15::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$15_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	"initialize",
	"(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V"
};

$InnerClassInfo _CPlatformWindow$15_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$15", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPlatformWindow$15_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$15",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_CPlatformWindow$15_FieldInfo_,
	_CPlatformWindow$15_MethodInfo_,
	nullptr,
	&_CPlatformWindow$15_EnclosingMethodInfo_,
	_CPlatformWindow$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$15($Class* clazz) {
	return $of($alloc(CPlatformWindow$15));
}

void CPlatformWindow$15::init$($CPlatformWindow* this$0, $JRootPane* val$rootpane) {
	$set(this, this$0, this$0);
	$set(this, val$rootpane, val$rootpane);
}

void CPlatformWindow$15::propertyChange($PropertyChangeEvent* evt) {
	$init($CPlatformWindow);
	$nc($CPlatformWindow::CLIENT_PROPERTY_APPLICATOR)->attachAndApplyClientProperties(this->val$rootpane);
	$nc(this->val$rootpane)->removePropertyChangeListener("ancestor"_s, this);
}

CPlatformWindow$15::CPlatformWindow$15() {
}

$Class* CPlatformWindow$15::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$15, name, initialize, &_CPlatformWindow$15_ClassInfo_, allocate$CPlatformWindow$15);
	return class$;
}

$Class* CPlatformWindow$15::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun