#include <com/apple/laf/AquaFocusHandler$1.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaFocusHandler$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaFocusHandler$1::*)()>(&AquaFocusHandler$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaFocusHandler$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFocusHandler",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaFocusHandler$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFocusHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFocusHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFocusHandler$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	_AquaFocusHandler$1_MethodInfo_,
	nullptr,
	&_AquaFocusHandler$1_EnclosingMethodInfo_,
	_AquaFocusHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFocusHandler"
};

$Object* allocate$AquaFocusHandler$1($Class* clazz) {
	return $of($alloc(AquaFocusHandler$1));
}

void AquaFocusHandler$1::init$() {
}

void AquaFocusHandler$1::propertyChange($PropertyChangeEvent* evt) {
	$var($Object, source, $nc(evt)->getSource());
	if ($instanceOf($JComponent, source)) {
		$nc(($cast($JComponent, source)))->repaint();
	}
}

AquaFocusHandler$1::AquaFocusHandler$1() {
}

$Class* AquaFocusHandler$1::load$($String* name, bool initialize) {
	$loadClass(AquaFocusHandler$1, name, initialize, &_AquaFocusHandler$1_ClassInfo_, allocate$AquaFocusHandler$1);
	return class$;
}

$Class* AquaFocusHandler$1::class$ = nullptr;

		} // laf
	} // apple
} // com