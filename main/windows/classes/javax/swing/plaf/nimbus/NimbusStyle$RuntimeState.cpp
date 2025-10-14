#include <javax/swing/plaf/nimbus/NimbusStyle$RuntimeState.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <javax/swing/Painter.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusStyle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $Painter = ::javax::swing::Painter;
using $UIDefaults = ::javax::swing::UIDefaults;
using $NimbusStyle = ::javax::swing::plaf::nimbus::NimbusStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusStyle$RuntimeState_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/nimbus/NimbusStyle;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusStyle$RuntimeState, this$0)},
	{"state", "I", nullptr, 0, $field(NimbusStyle$RuntimeState, state)},
	{"backgroundPainter", "Ljavax/swing/Painter;", "Ljavax/swing/Painter<Ljava/lang/Object;>;", 0, $field(NimbusStyle$RuntimeState, backgroundPainter)},
	{"foregroundPainter", "Ljavax/swing/Painter;", "Ljavax/swing/Painter<Ljava/lang/Object;>;", 0, $field(NimbusStyle$RuntimeState, foregroundPainter)},
	{"borderPainter", "Ljavax/swing/Painter;", "Ljavax/swing/Painter<Ljava/lang/Object;>;", 0, $field(NimbusStyle$RuntimeState, borderPainter)},
	{"stateName", "Ljava/lang/String;", nullptr, 0, $field(NimbusStyle$RuntimeState, stateName)},
	{"defaults", "Ljavax/swing/UIDefaults;", nullptr, 0, $field(NimbusStyle$RuntimeState, defaults)},
	{}
};

$MethodInfo _NimbusStyle$RuntimeState_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusStyle;ILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusStyle$RuntimeState::*)($NimbusStyle*,int32_t,$String*)>(&NimbusStyle$RuntimeState::init$))},
	{"clone", "()Ljavax/swing/plaf/nimbus/NimbusStyle$RuntimeState;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusStyle$RuntimeState_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusStyle$RuntimeState", "javax.swing.plaf.nimbus.NimbusStyle", "RuntimeState", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _NimbusStyle$RuntimeState_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusStyle$RuntimeState",
	"java.lang.Object",
	"java.lang.Cloneable",
	_NimbusStyle$RuntimeState_FieldInfo_,
	_NimbusStyle$RuntimeState_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusStyle$RuntimeState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusStyle"
};

$Object* allocate$NimbusStyle$RuntimeState($Class* clazz) {
	return $of($alloc(NimbusStyle$RuntimeState));
}

void NimbusStyle$RuntimeState::init$($NimbusStyle* this$0, int32_t state, $String* stateName) {
	$set(this, this$0, this$0);
	$set(this, defaults, $new($UIDefaults, 10, 0.7f));
	this->state = state;
	$set(this, stateName, stateName);
}

$String* NimbusStyle$RuntimeState::toString() {
	return this->stateName;
}

NimbusStyle$RuntimeState* NimbusStyle$RuntimeState::clone() {
	$var(NimbusStyle$RuntimeState, clone, $new(NimbusStyle$RuntimeState, this->this$0, this->state, this->stateName));
	$set(clone, backgroundPainter, this->backgroundPainter);
	$set(clone, foregroundPainter, this->foregroundPainter);
	$set(clone, borderPainter, this->borderPainter);
	$nc(clone->defaults)->putAll(this->defaults);
	return clone;
}

NimbusStyle$RuntimeState::NimbusStyle$RuntimeState() {
}

$Class* NimbusStyle$RuntimeState::load$($String* name, bool initialize) {
	$loadClass(NimbusStyle$RuntimeState, name, initialize, &_NimbusStyle$RuntimeState_ClassInfo_, allocate$NimbusStyle$RuntimeState);
	return class$;
}

$Class* NimbusStyle$RuntimeState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax