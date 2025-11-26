#include <java/awt/Toolkit$DesktopPropertyChangeSupport$1.h>

#include <java/awt/Toolkit$DesktopPropertyChangeSupport.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeSupport.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef PROP_CHANGE_SUPPORT_KEY

using $Toolkit$DesktopPropertyChangeSupport = ::java::awt::Toolkit$DesktopPropertyChangeSupport;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

$FieldInfo _Toolkit$DesktopPropertyChangeSupport$1_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Toolkit$DesktopPropertyChangeSupport;", nullptr, $FINAL | $SYNTHETIC, $field(Toolkit$DesktopPropertyChangeSupport$1, this$0)},
	{"val$evt", "Ljava/beans/PropertyChangeEvent;", nullptr, $FINAL | $SYNTHETIC, $field(Toolkit$DesktopPropertyChangeSupport$1, val$evt)},
	{}
};

$MethodInfo _Toolkit$DesktopPropertyChangeSupport$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Toolkit$DesktopPropertyChangeSupport;Ljava/beans/PropertyChangeEvent;)V", "()V", 0, $method(static_cast<void(Toolkit$DesktopPropertyChangeSupport$1::*)($Toolkit$DesktopPropertyChangeSupport*,$PropertyChangeEvent*)>(&Toolkit$DesktopPropertyChangeSupport$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Toolkit$DesktopPropertyChangeSupport$1_EnclosingMethodInfo_ = {
	"java.awt.Toolkit$DesktopPropertyChangeSupport",
	"firePropertyChange",
	"(Ljava/beans/PropertyChangeEvent;)V"
};

$InnerClassInfo _Toolkit$DesktopPropertyChangeSupport$1_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$DesktopPropertyChangeSupport", "java.awt.Toolkit", "DesktopPropertyChangeSupport", $PRIVATE | $STATIC},
	{"java.awt.Toolkit$DesktopPropertyChangeSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Toolkit$DesktopPropertyChangeSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Toolkit$DesktopPropertyChangeSupport$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_Toolkit$DesktopPropertyChangeSupport$1_FieldInfo_,
	_Toolkit$DesktopPropertyChangeSupport$1_MethodInfo_,
	nullptr,
	&_Toolkit$DesktopPropertyChangeSupport$1_EnclosingMethodInfo_,
	_Toolkit$DesktopPropertyChangeSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Toolkit"
};

$Object* allocate$Toolkit$DesktopPropertyChangeSupport$1($Class* clazz) {
	return $of($alloc(Toolkit$DesktopPropertyChangeSupport$1));
}

void Toolkit$DesktopPropertyChangeSupport$1::init$($Toolkit$DesktopPropertyChangeSupport* this$0, $PropertyChangeEvent* val$evt) {
	$set(this, this$0, this$0);
	$set(this, val$evt, val$evt);
}

void Toolkit$DesktopPropertyChangeSupport$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($Toolkit$DesktopPropertyChangeSupport);
	$var($PropertyChangeSupport, pcs, $cast($PropertyChangeSupport, $nc($($AppContext::getAppContext()))->get($Toolkit$DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY)));
	if (nullptr != pcs) {
		pcs->firePropertyChange(this->val$evt);
	}
}

Toolkit$DesktopPropertyChangeSupport$1::Toolkit$DesktopPropertyChangeSupport$1() {
}

$Class* Toolkit$DesktopPropertyChangeSupport$1::load$($String* name, bool initialize) {
	$loadClass(Toolkit$DesktopPropertyChangeSupport$1, name, initialize, &_Toolkit$DesktopPropertyChangeSupport$1_ClassInfo_, allocate$Toolkit$DesktopPropertyChangeSupport$1);
	return class$;
}

$Class* Toolkit$DesktopPropertyChangeSupport$1::class$ = nullptr;

	} // awt
} // java