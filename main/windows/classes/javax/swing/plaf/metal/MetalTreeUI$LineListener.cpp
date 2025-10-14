#include <javax/swing/plaf/metal/MetalTreeUI$LineListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalTreeUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalTreeUI = ::javax::swing::plaf::metal::MetalTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTreeUI$LineListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTreeUI$LineListener, this$0)},
	{}
};

$MethodInfo _MetalTreeUI$LineListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalTreeUI;)V", nullptr, 0, $method(static_cast<void(MetalTreeUI$LineListener::*)($MetalTreeUI*)>(&MetalTreeUI$LineListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalTreeUI$LineListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTreeUI$LineListener", "javax.swing.plaf.metal.MetalTreeUI", "LineListener", 0},
	{}
};

$ClassInfo _MetalTreeUI$LineListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalTreeUI$LineListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_MetalTreeUI$LineListener_FieldInfo_,
	_MetalTreeUI$LineListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTreeUI$LineListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTreeUI"
};

$Object* allocate$MetalTreeUI$LineListener($Class* clazz) {
	return $of($alloc(MetalTreeUI$LineListener));
}

void MetalTreeUI$LineListener::init$($MetalTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalTreeUI$LineListener::propertyChange($PropertyChangeEvent* e) {
	$var($String, name, $nc(e)->getPropertyName());
	if ($nc(name)->equals("JTree.lineStyle"_s)) {
		this->this$0->decodeLineStyle($(e->getNewValue()));
	}
}

MetalTreeUI$LineListener::MetalTreeUI$LineListener() {
}

$Class* MetalTreeUI$LineListener::load$($String* name, bool initialize) {
	$loadClass(MetalTreeUI$LineListener, name, initialize, &_MetalTreeUI$LineListener_ClassInfo_, allocate$MetalTreeUI$LineListener);
	return class$;
}

$Class* MetalTreeUI$LineListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax