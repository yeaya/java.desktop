#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$LinkProperty.h>

#include <javax/swing/UIDefaults$ActiveValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusLookAndFeel$LinkProperty_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusLookAndFeel$LinkProperty, this$0)},
	{"dstPropName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusLookAndFeel$LinkProperty, dstPropName)},
	{}
};

$MethodInfo _NimbusLookAndFeel$LinkProperty_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusLookAndFeel$LinkProperty::*)($NimbusLookAndFeel*,$String*)>(&NimbusLookAndFeel$LinkProperty::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusLookAndFeel$LinkProperty_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$LinkProperty", "javax.swing.plaf.nimbus.NimbusLookAndFeel", "LinkProperty", $PRIVATE},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NimbusLookAndFeel$LinkProperty_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel$LinkProperty",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue,javax.swing.plaf.UIResource",
	_NimbusLookAndFeel$LinkProperty_FieldInfo_,
	_NimbusLookAndFeel$LinkProperty_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusLookAndFeel$LinkProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel"
};

$Object* allocate$NimbusLookAndFeel$LinkProperty($Class* clazz) {
	return $of($alloc(NimbusLookAndFeel$LinkProperty));
}

int32_t NimbusLookAndFeel$LinkProperty::hashCode() {
	 return this->$UIDefaults$ActiveValue::hashCode();
}

bool NimbusLookAndFeel$LinkProperty::equals(Object$* arg0) {
	 return this->$UIDefaults$ActiveValue::equals(arg0);
}

$Object* NimbusLookAndFeel$LinkProperty::clone() {
	 return this->$UIDefaults$ActiveValue::clone();
}

$String* NimbusLookAndFeel$LinkProperty::toString() {
	 return this->$UIDefaults$ActiveValue::toString();
}

void NimbusLookAndFeel$LinkProperty::finalize() {
	this->$UIDefaults$ActiveValue::finalize();
}

void NimbusLookAndFeel$LinkProperty::init$($NimbusLookAndFeel* this$0, $String* dstPropName) {
	$set(this, this$0, this$0);
	$set(this, dstPropName, dstPropName);
}

$Object* NimbusLookAndFeel$LinkProperty::createValue($UIDefaults* table) {
	return $of($UIManager::get(this->dstPropName));
}

NimbusLookAndFeel$LinkProperty::NimbusLookAndFeel$LinkProperty() {
}

$Class* NimbusLookAndFeel$LinkProperty::load$($String* name, bool initialize) {
	$loadClass(NimbusLookAndFeel$LinkProperty, name, initialize, &_NimbusLookAndFeel$LinkProperty_ClassInfo_, allocate$NimbusLookAndFeel$LinkProperty);
	return class$;
}

$Class* NimbusLookAndFeel$LinkProperty::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax