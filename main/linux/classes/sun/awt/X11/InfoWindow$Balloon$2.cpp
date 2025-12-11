#include <sun/awt/X11/InfoWindow$Balloon$2.h>

#include <java/awt/event/ActionEvent.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Balloon$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/InfoWindow$Balloon;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Balloon$2, this$0)},
	{}
};

$MethodInfo _InfoWindow$Balloon$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow$Balloon;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Balloon$2::*)($InfoWindow$Balloon*)>(&InfoWindow$Balloon$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoWindow$Balloon$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.InfoWindow$Balloon",
	"<init>",
	"(Ljava/awt/Frame;Ljava/lang/Object;Lsun/awt/X11/InfoWindow$Balloon$LiveArguments;)V"
};

$InnerClassInfo _InfoWindow$Balloon$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Balloon$2", nullptr, nullptr, 0},
	{"sun.awt.X11.InfoWindow$Balloon$LiveArguments", "sun.awt.X11.InfoWindow$Balloon", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InfoWindow$Balloon$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Balloon$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_InfoWindow$Balloon$2_FieldInfo_,
	_InfoWindow$Balloon$2_MethodInfo_,
	nullptr,
	&_InfoWindow$Balloon$2_EnclosingMethodInfo_,
	_InfoWindow$Balloon$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Balloon$2($Class* clazz) {
	return $of($alloc(InfoWindow$Balloon$2));
}

void InfoWindow$Balloon$2::init$($InfoWindow$Balloon* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Balloon$2::actionPerformed($ActionEvent* e) {
	this->this$0->hide();
}

InfoWindow$Balloon$2::InfoWindow$Balloon$2() {
}

$Class* InfoWindow$Balloon$2::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Balloon$2, name, initialize, &_InfoWindow$Balloon$2_ClassInfo_, allocate$InfoWindow$Balloon$2);
	return class$;
}

$Class* InfoWindow$Balloon$2::class$ = nullptr;

		} // X11
	} // awt
} // sun