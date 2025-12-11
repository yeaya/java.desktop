#include <sun/swing/JLightweightFrame$2.h>

#include <java/awt/Dimension.h>
#include <java/beans/PropertyChangeEvent.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/LightweightContent.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;
using $LightweightContent = ::sun::swing::LightweightContent;

namespace sun {
	namespace swing {

$FieldInfo _JLightweightFrame$2_FieldInfo_[] = {
	{"this$0", "Lsun/swing/JLightweightFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$2, this$0)},
	{}
};

$MethodInfo _JLightweightFrame$2_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/JLightweightFrame;)V", nullptr, 0, $method(static_cast<void(JLightweightFrame$2::*)($JLightweightFrame*)>(&JLightweightFrame$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JLightweightFrame$2_EnclosingMethodInfo_ = {
	"sun.swing.JLightweightFrame",
	"<init>",
	"()V"
};

$InnerClassInfo _JLightweightFrame$2_InnerClassesInfo_[] = {
	{"sun.swing.JLightweightFrame$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLightweightFrame$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.JLightweightFrame$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_JLightweightFrame$2_FieldInfo_,
	_JLightweightFrame$2_MethodInfo_,
	nullptr,
	&_JLightweightFrame$2_EnclosingMethodInfo_,
	_JLightweightFrame$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.JLightweightFrame"
};

$Object* allocate$JLightweightFrame$2($Class* clazz) {
	return $of($alloc(JLightweightFrame$2));
}

void JLightweightFrame$2::init$($JLightweightFrame* this$0) {
	$set(this, this$0, this$0);
}

void JLightweightFrame$2::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $cast($Dimension, $nc(e)->getNewValue()));
	if ("preferredSize"_s->equals($(e->getPropertyName()))) {
		$nc(this->this$0->content)->preferredSizeChanged($nc(d)->width, d->height);
	} else if ("maximumSize"_s->equals($(e->getPropertyName()))) {
		$nc(this->this$0->content)->maximumSizeChanged($nc(d)->width, d->height);
	} else if ("minimumSize"_s->equals($(e->getPropertyName()))) {
		$nc(this->this$0->content)->minimumSizeChanged($nc(d)->width, d->height);
	}
}

JLightweightFrame$2::JLightweightFrame$2() {
}

$Class* JLightweightFrame$2::load$($String* name, bool initialize) {
	$loadClass(JLightweightFrame$2, name, initialize, &_JLightweightFrame$2_ClassInfo_, allocate$JLightweightFrame$2);
	return class$;
}

$Class* JLightweightFrame$2::class$ = nullptr;

	} // swing
} // sun