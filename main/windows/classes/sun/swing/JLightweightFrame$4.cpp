#include <sun/swing/JLightweightFrame$4.h>

#include <java/awt/Component.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/JLightweightFrame.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;

namespace sun {
	namespace swing {

$FieldInfo _JLightweightFrame$4_FieldInfo_[] = {
	{"this$0", "Lsun/swing/JLightweightFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$4, this$0)},
	{}
};

$MethodInfo _JLightweightFrame$4_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/JLightweightFrame;)V", nullptr, 0, $method(static_cast<void(JLightweightFrame$4::*)($JLightweightFrame*)>(&JLightweightFrame$4::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JLightweightFrame$4_EnclosingMethodInfo_ = {
	"sun.swing.JLightweightFrame",
	"initInterior",
	"()V"
};

$InnerClassInfo _JLightweightFrame$4_InnerClassesInfo_[] = {
	{"sun.swing.JLightweightFrame$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLightweightFrame$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.JLightweightFrame$4",
	"java.lang.Object",
	"java.awt.event.ContainerListener",
	_JLightweightFrame$4_FieldInfo_,
	_JLightweightFrame$4_MethodInfo_,
	nullptr,
	&_JLightweightFrame$4_EnclosingMethodInfo_,
	_JLightweightFrame$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.JLightweightFrame"
};

$Object* allocate$JLightweightFrame$4($Class* clazz) {
	return $of($alloc(JLightweightFrame$4));
}

void JLightweightFrame$4::init$($JLightweightFrame* this$0) {
	$set(this, this$0, this$0);
}

void JLightweightFrame$4::componentAdded($ContainerEvent* e) {
	$var($Component, c, this->this$0->component);
	if ($nc(e)->getChild() == c) {
		$nc(c)->addPropertyChangeListener("preferredSize"_s, this->this$0->layoutSizeListener);
		c->addPropertyChangeListener("maximumSize"_s, this->this$0->layoutSizeListener);
		c->addPropertyChangeListener("minimumSize"_s, this->this$0->layoutSizeListener);
	}
}

void JLightweightFrame$4::componentRemoved($ContainerEvent* e) {
	$var($Component, c, this->this$0->component);
	if ($nc(e)->getChild() == c) {
		$nc(c)->removePropertyChangeListener(this->this$0->layoutSizeListener);
	}
}

JLightweightFrame$4::JLightweightFrame$4() {
}

$Class* JLightweightFrame$4::load$($String* name, bool initialize) {
	$loadClass(JLightweightFrame$4, name, initialize, &_JLightweightFrame$4_ClassInfo_, allocate$JLightweightFrame$4);
	return class$;
}

$Class* JLightweightFrame$4::class$ = nullptr;

	} // swing
} // sun