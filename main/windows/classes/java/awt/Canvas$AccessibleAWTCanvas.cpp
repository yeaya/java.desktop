#include <java/awt/Canvas$AccessibleAWTCanvas.h>

#include <java/awt/Canvas.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef CANVAS

using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

$FieldInfo _Canvas$AccessibleAWTCanvas_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Canvas;", nullptr, $FINAL | $SYNTHETIC, $field(Canvas$AccessibleAWTCanvas, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Canvas$AccessibleAWTCanvas, serialVersionUID)},
	{}
};

$MethodInfo _Canvas$AccessibleAWTCanvas_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Canvas;)V", nullptr, $PROTECTED, $method(static_cast<void(Canvas$AccessibleAWTCanvas::*)($Canvas*)>(&Canvas$AccessibleAWTCanvas::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Canvas$AccessibleAWTCanvas_InnerClassesInfo_[] = {
	{"java.awt.Canvas$AccessibleAWTCanvas", "java.awt.Canvas", "AccessibleAWTCanvas", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _Canvas$AccessibleAWTCanvas_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Canvas$AccessibleAWTCanvas",
	"java.awt.Component$AccessibleAWTComponent",
	nullptr,
	_Canvas$AccessibleAWTCanvas_FieldInfo_,
	_Canvas$AccessibleAWTCanvas_MethodInfo_,
	nullptr,
	nullptr,
	_Canvas$AccessibleAWTCanvas_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Canvas"
};

$Object* allocate$Canvas$AccessibleAWTCanvas($Class* clazz) {
	return $of($alloc(Canvas$AccessibleAWTCanvas));
}

void Canvas$AccessibleAWTCanvas::init$($Canvas* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$AccessibleRole* Canvas$AccessibleAWTCanvas::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::CANVAS;
}

Canvas$AccessibleAWTCanvas::Canvas$AccessibleAWTCanvas() {
}

$Class* Canvas$AccessibleAWTCanvas::load$($String* name, bool initialize) {
	$loadClass(Canvas$AccessibleAWTCanvas, name, initialize, &_Canvas$AccessibleAWTCanvas_ClassInfo_, allocate$Canvas$AccessibleAWTCanvas);
	return class$;
}

$Class* Canvas$AccessibleAWTCanvas::class$ = nullptr;

	} // awt
} // java