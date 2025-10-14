#include <javax/swing/plaf/metal/MetalTitlePane$WindowHandler.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTitlePane$WindowHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$WindowHandler, this$0)},
	{}
};

$MethodInfo _MetalTitlePane$WindowHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalTitlePane$WindowHandler::*)($MetalTitlePane*)>(&MetalTitlePane$WindowHandler::init$))},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalTitlePane$WindowHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTitlePane$WindowHandler", "javax.swing.plaf.metal.MetalTitlePane", "WindowHandler", $PRIVATE},
	{}
};

$ClassInfo _MetalTitlePane$WindowHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalTitlePane$WindowHandler",
	"java.awt.event.WindowAdapter",
	nullptr,
	_MetalTitlePane$WindowHandler_FieldInfo_,
	_MetalTitlePane$WindowHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTitlePane$WindowHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTitlePane"
};

$Object* allocate$MetalTitlePane$WindowHandler($Class* clazz) {
	return $of($alloc(MetalTitlePane$WindowHandler));
}

void MetalTitlePane$WindowHandler::init$($MetalTitlePane* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void MetalTitlePane$WindowHandler::windowActivated($WindowEvent* ev) {
	this->this$0->setActive(true);
}

void MetalTitlePane$WindowHandler::windowDeactivated($WindowEvent* ev) {
	this->this$0->setActive(false);
}

MetalTitlePane$WindowHandler::MetalTitlePane$WindowHandler() {
}

$Class* MetalTitlePane$WindowHandler::load$($String* name, bool initialize) {
	$loadClass(MetalTitlePane$WindowHandler, name, initialize, &_MetalTitlePane$WindowHandler_ClassInfo_, allocate$MetalTitlePane$WindowHandler);
	return class$;
}

$Class* MetalTitlePane$WindowHandler::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax