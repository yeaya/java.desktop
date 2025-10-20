#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$NimbusProperty.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults$ActiveValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $UIResource = ::javax::swing::plaf::UIResource;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusLookAndFeel$NimbusProperty_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusLookAndFeel$NimbusProperty, this$0)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusLookAndFeel$NimbusProperty, prefix)},
	{"state", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusLookAndFeel$NimbusProperty, state)},
	{"suffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusLookAndFeel$NimbusProperty, suffix)},
	{"isFont", "Z", nullptr, $PRIVATE, $field(NimbusLookAndFeel$NimbusProperty, isFont)},
	{}
};

$MethodInfo _NimbusLookAndFeel$NimbusProperty_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusLookAndFeel$NimbusProperty::*)($NimbusLookAndFeel*,$String*,$String*)>(&NimbusLookAndFeel$NimbusProperty::init$))},
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusLookAndFeel$NimbusProperty::*)($NimbusLookAndFeel*,$String*,$String*,$String*)>(&NimbusLookAndFeel$NimbusProperty::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusLookAndFeel$NimbusProperty_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$NimbusProperty", "javax.swing.plaf.nimbus.NimbusLookAndFeel", "NimbusProperty", $PRIVATE},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NimbusLookAndFeel$NimbusProperty_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel$NimbusProperty",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue,javax.swing.plaf.UIResource",
	_NimbusLookAndFeel$NimbusProperty_FieldInfo_,
	_NimbusLookAndFeel$NimbusProperty_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusLookAndFeel$NimbusProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel"
};

$Object* allocate$NimbusLookAndFeel$NimbusProperty($Class* clazz) {
	return $of($alloc(NimbusLookAndFeel$NimbusProperty));
}

int32_t NimbusLookAndFeel$NimbusProperty::hashCode() {
	 return this->$UIDefaults$ActiveValue::hashCode();
}

bool NimbusLookAndFeel$NimbusProperty::equals(Object$* arg0) {
	 return this->$UIDefaults$ActiveValue::equals(arg0);
}

$Object* NimbusLookAndFeel$NimbusProperty::clone() {
	 return this->$UIDefaults$ActiveValue::clone();
}

$String* NimbusLookAndFeel$NimbusProperty::toString() {
	 return this->$UIDefaults$ActiveValue::toString();
}

void NimbusLookAndFeel$NimbusProperty::finalize() {
	this->$UIDefaults$ActiveValue::finalize();
}

void NimbusLookAndFeel$NimbusProperty::init$($NimbusLookAndFeel* this$0, $String* prefix, $String* suffix) {
	$set(this, this$0, this$0);
	$set(this, state, nullptr);
	$set(this, prefix, prefix);
	$set(this, suffix, suffix);
	this->isFont = "font"_s->equals(suffix);
}

void NimbusLookAndFeel$NimbusProperty::init$($NimbusLookAndFeel* this$0, $String* prefix, $String* state, $String* suffix) {
	NimbusLookAndFeel$NimbusProperty::init$(this$0, prefix, suffix);
	$set(this, state, state);
}

$Object* NimbusLookAndFeel$NimbusProperty::createValue($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, nullptr);
	if (this->state != nullptr) {
		$assign(obj, $nc(this->this$0->uiDefaults)->get($$str({this->prefix, "["_s, this->state, "]."_s, this->suffix})));
	}
	if (obj == nullptr) {
		$assign(obj, $nc(this->this$0->uiDefaults)->get($$str({this->prefix, "[Enabled]."_s, this->suffix})));
	}
	if (obj == nullptr) {
		if (this->isFont) {
			$assign(obj, $nc(this->this$0->uiDefaults)->get("defaultFont"_s));
		} else {
			$assign(obj, $nc(this->this$0->uiDefaults)->get(this->suffix));
		}
	}
	return $of(obj);
}

NimbusLookAndFeel$NimbusProperty::NimbusLookAndFeel$NimbusProperty() {
}

$Class* NimbusLookAndFeel$NimbusProperty::load$($String* name, bool initialize) {
	$loadClass(NimbusLookAndFeel$NimbusProperty, name, initialize, &_NimbusLookAndFeel$NimbusProperty_ClassInfo_, allocate$NimbusLookAndFeel$NimbusProperty);
	return class$;
}

$Class* NimbusLookAndFeel$NimbusProperty::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax