#include <javax/swing/JDesktopPane$ComponentPosition.h>

#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

$FieldInfo _JDesktopPane$ComponentPosition_FieldInfo_[] = {
	{"component", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $FINAL, $field(JDesktopPane$ComponentPosition, component)},
	{"layer", "I", nullptr, $PRIVATE | $FINAL, $field(JDesktopPane$ComponentPosition, layer)},
	{"zOrder", "I", nullptr, $PRIVATE | $FINAL, $field(JDesktopPane$ComponentPosition, zOrder)},
	{}
};

$MethodInfo _JDesktopPane$ComponentPosition_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;II)V", nullptr, 0, $method(static_cast<void(JDesktopPane$ComponentPosition::*)($JInternalFrame*,int32_t,int32_t)>(&JDesktopPane$ComponentPosition::init$))},
	{"compareTo", "(Ljavax/swing/JDesktopPane$ComponentPosition;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JDesktopPane$ComponentPosition_InnerClassesInfo_[] = {
	{"javax.swing.JDesktopPane$ComponentPosition", "javax.swing.JDesktopPane", "ComponentPosition", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JDesktopPane$ComponentPosition_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JDesktopPane$ComponentPosition",
	"java.lang.Object",
	"java.lang.Comparable",
	_JDesktopPane$ComponentPosition_FieldInfo_,
	_JDesktopPane$ComponentPosition_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljavax/swing/JDesktopPane$ComponentPosition;>;",
	nullptr,
	_JDesktopPane$ComponentPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JDesktopPane"
};

$Object* allocate$JDesktopPane$ComponentPosition($Class* clazz) {
	return $of($alloc(JDesktopPane$ComponentPosition));
}

void JDesktopPane$ComponentPosition::init$($JInternalFrame* component, int32_t layer, int32_t zOrder) {
	$set(this, component, component);
	this->layer = layer;
	this->zOrder = zOrder;
}

int32_t JDesktopPane$ComponentPosition::compareTo(JDesktopPane$ComponentPosition* o) {
	int32_t delta = $nc(o)->layer - this->layer;
	if (delta == 0) {
		return this->zOrder - o->zOrder;
	}
	return delta;
}

int32_t JDesktopPane$ComponentPosition::compareTo(Object$* o) {
	return this->compareTo($cast(JDesktopPane$ComponentPosition, o));
}

JDesktopPane$ComponentPosition::JDesktopPane$ComponentPosition() {
}

$Class* JDesktopPane$ComponentPosition::load$($String* name, bool initialize) {
	$loadClass(JDesktopPane$ComponentPosition, name, initialize, &_JDesktopPane$ComponentPosition_ClassInfo_, allocate$JDesktopPane$ComponentPosition);
	return class$;
}

$Class* JDesktopPane$ComponentPosition::class$ = nullptr;

	} // swing
} // javax